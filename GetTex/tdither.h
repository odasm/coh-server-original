#ifndef _TDITHER_H
#define _TDITHER_H


// Generated by mkproto
U16 quantARGB4444_trunc(unsigned long argb, int x, int y, int w);
U16 quantARGB4444_4x4 (unsigned long argb, int x, int y, int w);
U16 quantARGB4444_fs(unsigned long argb, int x, int y, int w);
U16 quantRGB565_trunc(unsigned long argb, int x, int y, int w);
U16 quantRGB565_4x4(U32 argb, int x, int y, int w);
U16 quantRGB565_fs(U32 argb, int x, int y, int w);
void quantTex(void *data,int w,int h);
// End mkproto
#endif
