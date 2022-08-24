///栈容器
//先进后出，出栈，入栈，判空，大小
#include<iostream>
using namespace std;
#include <stack>
#include <algorithm>
#include <queue>
#include <list>
void test01()
{
	stack<int>S;
	S.push(10);//入栈
	S.push(20);
	S.push(30);
	S.push(40);

	cout << S.size() << endl;

	while (!S.empty())
	{
		cout << S.top() << endl;
		S.pop();//出栈
	}
	cout << "size=" << S.size() << endl;
}
int main()
{
	test01();

	return 0;
}
//队列，先进先出
//不提供遍历功能
//queue<>Q;
//入队，出队，对头元素front，尾back
//


//list容器 ，是一个双向链表，优点：不会造成资源的浪费
//会熟练使用fron and back and push_buck and pop_back
//push_front pop_front
// 链表灵活，但是空间和时间的耗费较大，遍历费时间，
//list和vector是两个常使用的容器
// list是一个双向循环链表
//不支持随机访问