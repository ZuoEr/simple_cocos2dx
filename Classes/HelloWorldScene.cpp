#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
	auto nodep = Node::create();
	this->addChild(nodep);
	nodep->setPosition(10,10);

	auto node1 = Node::create();
	nodep->addChild(node1);

	node1->setPosition(100,100);
	auto pos = node1->convertToWorldSpace(Point(0,0));

    //addChild(Test::create());
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
