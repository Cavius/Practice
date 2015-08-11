//CGameManager.cpp
#include "CGameManager.h"
#include "Constants.h"
#include "cocos2d.h"

USING_NS_CC;

CGameManager *CGameManager::_pInstance = NULL;

CGameManager *CGameManager::Instance() {
	if (!_pInstance) {
		_pInstance = new CGameManager;
	}
	return _pInstance;
}

float CGameManager::GetScaleX() {
	return _scaleX;
}

float CGameManager::GetScaleY() {
	return _scaleY;
}

float CGameManager::GetScaleFactor() {
	return _scaleFactor;
}

void CGameManager::SetUpScaleFactors() {
	Size visibleSize = Director::getInstance()->getVisibleSize();

	_extension = (char*)kEXTHD;
	_scaleFactor = 1.0;

	if (visibleSize.width * visibleSize.height > 960 * 640) {
		_scaleFactor = 2.0;
		_extension = (char*)kEXTUHD;
	}
	else if (visibleSize.width * visibleSize.height <= 480 * 320) {
		_scaleFactor = 0.5;
		_extension = (char*)kEXTND;
	}

	_scaleX = visibleSize.width / (960 * _scaleFactor);
	_scaleY = visibleSize.height / (640 * _scaleFactor);

	CCLOG("_scaleFactor:%.2f _scaleX:%.2f _scaleY:%.2f",
		_scaleFactor, _scaleX, _scaleY);
}

void CGameManager::GetFileName(char *array, const int len, const char *name, const char *fileExt) {
	memset(array, 0, sizeof(char) * len);
	sprintf(array, "%s%s%s", name, _extension, fileExt);
}