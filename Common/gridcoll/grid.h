#ifndef _GRID_H
#define _GRID_H

#include "stdtypes.h"
#include "memorypool.h"


#define NUMCELLS 2
#define NUMCELLBITS 1  // log2(NUMCELLS)
#define CELLSHRINK (1.f / (float)NUMCELLS)
#define NUMCELLS_SQUARE (NUMCELLS * NUMCELLS)
#define NUMCELLS_CUBE (NUMCELLS * NUMCELLS * NUMCELLS)
#define SETGRIDSIZE(g,s) (g->size = s, g->inv_size = 1.f/s, g->num_bits = log2(s))
#define BIGGEST_BRICK 32768

typedef struct GridEnts
{
	U32		entries[7];
	struct GridEnts	*next;
} GridEnts;

typedef struct GridIdxList
{
	U32		*entries[7];
	struct GridIdxList	*next;
} GridIdxList;

#define ENTS_PER_BLOCK	4096

typedef struct GridCell
{
	struct GridCell **children;
	GridEnts	*entries;
	U8			filled;
//	int		objCount;
} GridCell;

typedef struct Grid
{
	GridCell	*cell;
	Vec3		pos;
	F32			size;
	F32			inv_size;
	int			tag;
	int			num_bits;
	U32			valid_id;
	int			mempool_size;
	MemoryPool	entries_mempool;
	MemoryPool	childptrs_mempool;
	MemoryPool	cells_mempool;
	MemoryPool	idxlist_mempool;
} Grid;

// Generated by mkproto
Grid *createGrid(int mempool_size);
void destroyGrid(Grid *grid);
GridIdxList *gridAllocIdxList(Grid *grid);
void gridClearAndFreeIdxList(Grid *grid,GridIdxList **grids_used);
int gridGrow(Grid *grid,Vec3 min,Vec3 max,Vec3 size);
int gridAdd(Grid *grid,void *node,Vec3 min,Vec3 max,int nodetype,GridIdxList **grids_used);
void gridAddSphere(Grid *grid,void *node,Vec3 point,F32 radius,GridIdxList **grids_used);
void gridFreeCell(Grid *grid,GridCell *cell);
void gridFreeAll(Grid *grid);
// End mkproto
#endif
