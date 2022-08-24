//string容器
//是一个char*的容器
#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>//标准算法头文件
#include <string>
//原生指针也是迭代器


/*


*/
void test02()
{
	std::string str;
	str = "hello wawrd";
	for (int i = 0; i < str.size(); i++)
	{
		std::cout << str[i] << std::endl;
	}
	/*for (int i = 0; i < str.size(); i++)
	{
	[]和at的区别[]访问越界，直接挂掉，at访问会抛出异常
		std::cout << str.at(i) << std::endl;
	}*/ 
	try 
	{
		//std::cout << str[100] << srd::endl;
		std::cout << str.at(100) << std::endl;
	}
	catch (...)
	{
		cout << "异常捕获" << std::endl;
	}
	str.find("内容")//查找，返回所要查找内容的位置，错误返回-1
}	//str.rfind("")从右往左找
	//str.replace()//替换
//str1.compare(str2)做比较
//str.substr(位置 ,长度 )截取字符串

//解析字符串
//string str = "asdasfWfeASdf";
//str.erase(1 ,3);删除指定位置字符串
//string s(str)
// const char*可以隐式转化为string反之不可以
//vector
//str.toupper(str[i])转大写
//str.tolower
//str.insert插入操作
int main()
{
	test02();

	return 0;
}

