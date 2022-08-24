/*

Map 的特性是，所有元素都会根据元素的键值自动排序(key值)。Map所有的元素都是pair,
同时拥有实值和键值，pair的第一元素被视为键值，第二元素被视为实值，map不允许两
个元素有相同的键值。 +
我们可以通过 map的迭代器改变map的键值吗﹖答案是不行, 因为map的键值关系
到map元素的排列规则，任意改变map键值将会严重破坏map 组织。如果想要修改元素
的实值，那么是可以的。
Map 和list拥有相同的某些性质，当对它的容器元素进行新增操作或者删除操作时，
操作之前的所有迭代器，在操作完成之后依然有效，当然被删除的那个元素的迭代器必然是
个例外。 +
Multimap和 map 的操作类似，唯一区别multimap键值可重复。 +
Map 和 multimap 都是以红黑树为底层实现机制。


*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


void test01()
{
	map<int, int>m;
	//三种插入方法
	m.insert(pair<int, int>(1, 10));

	m.insert(make_pair(2, 20));

	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

	for (map<int, int>::iterator it = m.begin();)
	{
		cout << it->first << endl;
	}
	m.erase(3)//删除，参数要传key值

	map<int,int>::iterator ret=	m.find(3);
	if (ret != m.end())
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
	int num = m.count(4);
	cout << "key为4的对组个数为" << num << endl;//0 and 1是两种可能的值
	
	map<int, int>::iterator pos = m.lower_bound(3);//pos是一个对组
	//返回第一个key>keyelem元素的迭代器
	if (pos != m.end())
	{
		cout << "找到了" <<pos->first<<pos->second<< endl;
	}
	else
	{
	}
}

int main()
{
	test01();

	return 0;
}