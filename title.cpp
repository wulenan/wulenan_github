#include "stdafx.h"
#include <iostream>
#include "title.h"
using std::cout;
using std::endl;
title::title(string str)
{
	m_str = str;
	cout<<str<<endl;
}
title::title()
{
	m_str = "无名标题";
	cout<<"这只是一个无名标题标题..."<<endl;
}
title::~title()
{
	cout<<"标题"<<m_str<<"要被销毁了"<<endl;
}
