/*
* 使用时注意包含头文件<set>    std::set and std::multiset associative containers

s.begin()     　返回set容器的第一个元素

s.end() 　　　　 返回set容器的最后一个元素

s.clear()       删除set容器中的所有的元素

s.empty() 　　　 判断set容器是否为空

s.insert()      插入一个元素

s.erase()       删除一个元素

s.size() 　　　　返回当前set容器中的元素个数

不能直接修改容器内数据，所以只能删除某元素再插入要修改的数值。

s.find()   返回值是迭代器   查找一个元素，如果容器中不存在该元素，返回值等于s.end()

s.lower_bound() 返回第一个小于或等于给定关键值的元素

s.upper_bound() 返回第一个大于给定关键值的元素

s.equal_range() 返回一对定位器，分别表示 第一个大于或等于给定关键值的元素 和 第一个大于给定关键值
                的元素，这个返回值是一个pair类型，如果这一对定位器中哪个返回失败，就会等于
                s.end()
s.count()查找元素的个数，要么是0，要么是1
*/
#include <set>//关联式容器，可以默认排好序默认从小到大
#include <iostream>
#include <string>

using namespace std;
class myCompareInt
{

};

void test01()
{
    set<int>s;


    set<int, myCompareInt>s;//一个仿函数，可以从大到小



    s.insert(50);
    s.insert(20);
    s.insert(90);//默认排序
    s.insert(30);

    for (set<int>::iterator it = s.begin(); s.begin() != s.end; it++)
    {
        
    }
    if (s.empty())
    {
        
    }
    else()
    {
        
    }
    s.erase(30);//删除指定元素
}
void test02()
{
    set<int>::iterator pos=s.find(30)
        //定义迭代器
        //找到30元素

    pair <set<int>::iterator ,stt<int>::iterator> ret = s.equal_range(30)
        if(ret.fitst != s.end())
        { }
    if (ret.secnod != s.end())
    {
    }
}
void test03()
{
    //pair对组的创建
    pair<string, int> p("tom", 10);
    cout << "名字是"<<p.first <<"年龄是"<< p.second << endl;
}//pair<string, int> p = make_pair("tom", 10)//
//pare<iterator,bool>bool代表是否插成功
//multiset容器允许插入重复的值
int main()
{ 
    test01();

    return 0;
}
