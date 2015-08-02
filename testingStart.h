//testingStart.h
#ifndef __testing_start_H__// *if not defined _tset""
#define __testing_start_H__// *define _test"= (null or anything)?

#include "cocos2d.h"

class testingStart : public cocos2d::Layer
{
public:
	// there's no 'id' in cpp, so we recommend returning the class instance pointer
	static cocos2d::Scene* createScene();

	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender); //*??

	// implement the "static create()" method manually
	CREATE_FUNC(testingStart);
};

#endif 