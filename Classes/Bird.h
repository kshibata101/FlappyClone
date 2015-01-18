#ifndef __BIRD_H__
#define __BIRD_H__

#include "cocos2d.h"

class Bird : public cocos2d::Layer
{
public:
    Bird(cocos2d::Layer *layer);
    
private:
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
    
    cocos2d::Sprite *flappyBird;
};

#endif // __Bird_H__
