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
	m_str = "��������";
	cout<<"��ֻ��һ�������������..."<<endl;
}
title::~title()
{
	cout<<"����"<<m_str<<"Ҫ��������"<<endl;
}
