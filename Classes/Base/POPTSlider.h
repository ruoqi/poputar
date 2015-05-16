//
//  Slider.h
//  poputar
//
//  Created by allen on 15-4-6.
//
//

#ifndef __poputar__Slider__
#define __poputar__Slider__
#include "extensions/GUI/CCControlExtension/CCControlSlider.h"
#include <stdio.h>
#include "RunLayer.h"
USING_NS_CC;
class POPTSliderDelegate{
public:
    virtual void sliderTouchEndCallback(Ref* ref)=0;
};

using namespace cocos2d::extension;
class POPTSlider:public ControlSlider{
private:
    POPTSliderDelegate* _delegate;

    bool moving;
    float moveTime=1.0f;
protected:
    virtual void onTouchEnded(Touch *pTouch, Event *pEvent);
public:
    int musicalIndex;
    static POPTSlider* create(const char* bgFile, const char* progressFile, const char* thumbFile);
    void setDelegate(POPTSliderDelegate* delegate);
   
};

#endif /* defined(__poputar__Slider__) */