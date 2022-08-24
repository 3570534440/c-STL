
/*
* template<class T> T negate<T>取反仿函数一元运算
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>//内建函数对象 一元运算//适配器
using namespace std;

void test01()
{
	negate<int>n;
	cout << n(10) << endl;//对10进行取反，结果是-10
}

//还有加法，大于
//lambad表达式{}()[]



//适配器   能看懂

//band2nd可以将参数绑在一起
// 取反适配器：
//1、利用not1（）进行一元取反
//2、然后继承public unary_function<int, bool>，参数是int，返回值是bool
//3、最后加const
// 
//二元取反用not2，然后继承

//函数对象适配器
/*
1.利用band2nd()进行绑定
2.继承public unary_function<参数类型,参数类型，返回值类型>，
3.加const
*/
/*
函数指针适配器
1.1......
1.2.......
*/