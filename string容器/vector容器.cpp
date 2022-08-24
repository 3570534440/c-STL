//vector容器是一个单端数组，自动扩展内存，找一个更大的空间
//将原来的数据全部拷贝，并且释放原来空间
//clear()删除容器中所有元素

#include<vector>
#include <iostream>
#include <algorithm>

void printVector(std::vector<int> &v)
{
	for (std::vector<int>::iterator it = v.begin(); v.begin() != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}
void test01()
{
	std::vector<int>v1;//容器v1
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);//尾插
	v1.push_back(40);
	//pop_back尾删除

	std::vector<int>v2(v1.begin(), v1.end());//吧数据copy给v2
	printVector(v2);
}//assign也可以实现
//swap互换元素
//vector<int>v4(10 ,100)10个一百
//resize（ , ）重新指定容器的长度，第二个参数
//reserve( )预留元素长度
//at,front(),back();
//empty()判断是否空
//vector<int>(v).swap(v)匿名了一个对象
//，然后交换了一下指针，释放之前的v的空间
//reserve可以预留空间 v.reserve(100000)预留十万的空间
//vector容器是支持随机访问的、
//list容器是不支持随机访问的
int main()
{

	test01();

	return 0;
}
