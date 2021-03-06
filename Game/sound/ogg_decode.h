#ifndef _OGG_DECODE_H
#define _OGG_DECODE_H

#include "sound_sys.h"

extern CodecFuncs ogg_funcs,pcm_funcs;

// Generated by mkproto
int oggInitDecoder(DecodeState *decode);
int oggDecode(DecodeState *decode);
void oggResetDecoder(DecodeState *decode);
void oggRewindDecoder(DecodeState *decode);
bool oggToPcm(SoundFileInfo *info);
int pcmInitDecoder(DecodeState *decode);
int pcmDecode(DecodeState *decode);
void pcmResetDecoder(DecodeState *decode);
void pcmRewindDecoder(DecodeState *decode);
int pcmValidDecoder(DecodeState *decode);
// End mkproto
#endif
