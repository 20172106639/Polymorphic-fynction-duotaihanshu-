// 多态函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int inches;
	int feet;
public:

	CFeet();
	void setinches(int i);
	void setfeet(int f);
	virtual void display();
	int getfeet();
	int getinches();
};

CFeet::CFeet()
{
	inches = 0;
	feet = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int i)
{
	inches = i % 12;
	feet = feet + i / 12;
}
void CFeet::display()
{
	cout << "基类" << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyFeet :public CFeet
{
public:
	void display();
};
void CMyFeet::display()
{
	cout << "派生类" << feet << "英尺" << inches << "英寸" << endl;
}
int main()
{
	CFeet *p;
	p = new CMyFeet;// //CMyFeet Afeet;p=&Afeet;
	p->setfeet(3);
	p->setinches(8);
	p->display();
	p->CFeet::display();
	return 0;
}
