#pragma once

#include "cocos2d.h"

#define NS_BEGIN namespace s {
#define NS_END }

//#define CREATE_FUNC_ADD(__TYPE__) \
//	CREATE_FUNC(__TYPE__); \
//	static __TYPE__* createAdd(Node* node) \
//{ \
//	__TYPE__ *pRet = new __TYPE__(); \
//	if (pRet && pRet->init()) \
//{ \
//	pRet->autorelease(); \
//	node->addChild(pRet); \
//	return pRet; \
//} \
//	else \
//{ \
//	delete pRet; \
//	pRet = NULL; \
//	return NULL; \
//} \
//}