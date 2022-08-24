/*deque是一种弄个双向开口的连续现行空间
deque<T> deqT;     // 默认无参构造形式
deque(beg, end);       // [beg, end)区间拷贝构造：前闭后开，包头不包尾。
deque(n, elem);         // n个元素重复构造；
deque(const deque& deq);   // 拷贝构造函数
deque& operator= (const deque& deq); 重载等号操作符。
assign(beg, end); // 成员函数assign方式。区间元素拷贝赋值。[beg, end)区间，左闭右开。
assign(n, elem);  // 将n个elem拷贝赋值给本身。
deque.empty(); //判断容器是否为空

deque.size(); //返回容器中元素的个数
deque.resize(num); //重新指定容器的长度为num
若容器变长，则以默认值填充新位置。
如果容器变短，则末尾超出容器长度的元素被删除。
deque.resize(num, elem); //重新指定容器的长度为num,
若容器变长，则以elem值填充新位置。
如果容器变短，则末尾超出容器长度的元素被删除。

push_back(elem); //在容器尾部添加一个数据
push_front(elem); //在容器头部插入一个数据
pop_back(); //删除容器最后一个数据
pop_front(); //删除容器第一个数据
指定位置操作：
insert(pos,elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem); //在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。
clear(); //清空容器的所有数据
erase(beg,end); //删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos); //删除pos位置的数据，返回下一个数据的位置。

at(int idx); //返回索引 idx 所指的数据
operator[]; //返回索引idx所指的数据
front(); //返回容器中第一个数据元素
back(); //返回容器中最后一个数据元素

*/

//sort（d.begin(),d.end）;排序，默认从小到大
//sort(d.begin(),d.end ,回调函数)
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm >
void test01()
{
	//iterator普通迭代器
	//reverse_iterator反转迭代器 
	//count_iterator只读迭代器
	std::deque<int>d;

	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
}
int main()
{

}
