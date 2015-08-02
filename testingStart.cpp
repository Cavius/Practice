//testingStart.cpp
#include "testingStart.h"

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

	auto sprite = Sprite::create("HelloWorld.png");
	// if no defined, the picture will be in origin for his center

	// add the sprite as a child to this layer
	this->addChild(sprite, 0);

	return true;
}


