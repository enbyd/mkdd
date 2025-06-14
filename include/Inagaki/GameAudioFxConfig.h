#ifndef GAMEAUDIOFXCONFIG_H
#define GAMEAUDIOFXCONFIG_H

#include "types.h"
#include <JSystem/JKernel/JKRHeap.h>
#include <JSystem/JAudio/System/JASDsp.h>

// maybe merge with GameAudioMain?

namespace GameAudio {
extern JASDsp::FxlineConfig_ Non[4];
extern JASDsp::FxlineConfig_ Hall[4];
extern JASDsp::FxlineConfig_ Room[4];
extern JASDsp::FxlineConfig_ Canyon[4];

class FxLineConfig 
{
public:
    FxLineConfig(JKRHeap *heap);
    void set(u8 lineNum);

private:
    u8 mNum;
    JASDsp::FxlineConfig_ *mConfig[4];
    s16 *mBuf[4];
};
}

#endif
