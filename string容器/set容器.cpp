/*
* ʹ��ʱע�����ͷ�ļ�<set>    std::set and std::multiset associative containers

s.begin()     ������set�����ĵ�һ��Ԫ��

s.end() �������� ����set���������һ��Ԫ��

s.clear()       ɾ��set�����е����е�Ԫ��

s.empty() ������ �ж�set�����Ƿ�Ϊ��

s.insert()      ����һ��Ԫ��

s.erase()       ɾ��һ��Ԫ��

s.size() �����������ص�ǰset�����е�Ԫ�ظ���

����ֱ���޸����������ݣ�����ֻ��ɾ��ĳԪ���ٲ���Ҫ�޸ĵ���ֵ��

s.find()   ����ֵ�ǵ�����   ����һ��Ԫ�أ���������в����ڸ�Ԫ�أ�����ֵ����s.end()

s.lower_bound() ���ص�һ��С�ڻ���ڸ����ؼ�ֵ��Ԫ��

s.upper_bound() ���ص�һ�����ڸ����ؼ�ֵ��Ԫ��

s.equal_range() ����һ�Զ�λ�����ֱ��ʾ ��һ�����ڻ���ڸ����ؼ�ֵ��Ԫ�� �� ��һ�����ڸ����ؼ�ֵ
                ��Ԫ�أ��������ֵ��һ��pair���ͣ������һ�Զ�λ�����ĸ�����ʧ�ܣ��ͻ����
                s.end()
s.count()����Ԫ�صĸ�����Ҫô��0��Ҫô��1
*/
#include <set>//����ʽ����������Ĭ���ź���Ĭ�ϴ�С����
#include <iostream>
#include <string>

using namespace std;
class myCompareInt
{

};

void test01()
{
    set<int>s;


    set<int, myCompareInt>s;//һ���º��������ԴӴ�С



    s.insert(50);
    s.insert(20);
    s.insert(90);//Ĭ������
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
    s.erase(30);//ɾ��ָ��Ԫ��
}
void test02()
{
    set<int>::iterator pos=s.find(30)
        //���������
        //�ҵ�30Ԫ��

    pair <set<int>::iterator ,stt<int>::iterator> ret = s.equal_range(30)
        if(ret.fitst != s.end())
        { }
    if (ret.secnod != s.end())
    {
    }
}
void test03()
{
    //pair����Ĵ���
    pair<string, int> p("tom", 10);
    cout << "������"<<p.first <<"������"<< p.second << endl;
}//pair<string, int> p = make_pair("tom", 10)//
//pare<iterator,bool>bool�����Ƿ��ɹ�
//multiset������������ظ���ֵ
int main()
{ 
    test01();

    return 0;
}
