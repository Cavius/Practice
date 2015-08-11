//testingStart.cpp
#include "testingStart.h"
#include "CGameManager.h"
#include "Constants.h"
USING_NS_CC;

Scene* testingStart::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = testingStart::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool testingStart::init()
{
	//////////////////////////////
	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}
	char FileName[32];
	CGameManager::Instance()->SetUpScaleFactors();
	Size visibleSize = Director::getInstance()->getVisibleSize();

	GETFILENAME(FileName, 32, "Start", ".png");
	auto bgSprite = Sprite::create(FileName);
	SCALENODE_XY(bgSprite);
	bgSprite->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2));
	bgSprite->setAnchorPoint(Vec2(0.5, 0.5));
	this->addChild(bgSprite, kZindexBG);
	CCLOG("filename: %s", FileName);

	return true;
}


