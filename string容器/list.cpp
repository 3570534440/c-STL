//list容器 ，是一个双向链表，优点：不会造成资源的浪费
//会熟练使用fron and back and push_buck and pop_back
//push_front pop_front
// 链表灵活，但是空间和时间的耗费较大，遍历费时间，
//list和vector是两个常使用的容器
// list是一个双向循环链表
//不支持随机访问
#include <iostream>
#include <list>
using namespace std;
void test01()
{
	list <int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(40);
	L1.push_front(40);
	L1.push_front(40);
	//l.remove(100)先遍历，删除100
//不支持随机访问的迭代器的容器，内部会提供对应点算法接口
//l.sort();//不用参数
int main()
{
	return 0;
}