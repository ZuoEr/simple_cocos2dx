#include "test.h"

USING_NS_CC;

bool Test::init() {
	if (!Layer::init())
    {
		return false;
	}
    
	//auto str = xc::json_file_int("tips.json",9001,"id");
	//log("%d",str);
	////JsonFileManagement::getInstance()->erease("tips.json");
	//auto xx = xc::JsonFileManagement::getInstance()->getDocument("tips.json")[1]["id"].GetInt();
	//auto xxx = xc::json_file_document("tips.json")[1]["id"].GetInt();
	////tz::make_touch_sprite("HelloWorld",this);
	//auto x = Sprite::create("HelloWorld.png");
	//this->addChild(x,-100);
	
    return true;
}

void Test::draw() {
	Node::draw();
	static float i = 0;
	i += 0.1f;

	Point x[] = {Point(100+i,100),Point(100,200),Point(200,200),Point(200,100)};
	DrawPrimitives::drawSolidPoly(x,4,Color4F(0,0,255,0.5f));
}