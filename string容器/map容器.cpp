/*

Map �������ǣ�����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����(keyֵ)��Map���е�Ԫ�ض���pair,
ͬʱӵ��ʵֵ�ͼ�ֵ��pair�ĵ�һԪ�ر���Ϊ��ֵ���ڶ�Ԫ�ر���Ϊʵֵ��map��������
��Ԫ������ͬ�ļ�ֵ�� +
���ǿ���ͨ�� map�ĵ������ı�map�ļ�ֵ��t���ǲ���, ��Ϊmap�ļ�ֵ��ϵ
��mapԪ�ص����й�������ı�map��ֵ���������ƻ�map ��֯�������Ҫ�޸�Ԫ��
��ʵֵ����ô�ǿ��Եġ�
Map ��listӵ����ͬ��ĳЩ���ʣ�������������Ԫ�ؽ���������������ɾ������ʱ��
����֮ǰ�����е��������ڲ������֮����Ȼ��Ч����Ȼ��ɾ�����Ǹ�Ԫ�صĵ�������Ȼ��
�����⡣ +
Multimap�� map �Ĳ������ƣ�Ψһ����multimap��ֵ���ظ��� +
Map �� multimap �����Ժ����Ϊ�ײ�ʵ�ֻ��ơ�


*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


void test01()
{
	map<int, int>m;
	//���ֲ��뷽��
	m.insert(pair<int, int>(1, 10));

	m.insert(make_pair(2, 20));

	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

	for (map<int, int>::iterator it = m.begin();)
	{
		cout << it->first << endl;
	}
	m.erase(3)//ɾ��������Ҫ��keyֵ

	map<int,int>::iterator ret=	m.find(3);
	if (ret != m.end())
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
	int num = m.count(4);
	cout << "keyΪ4�Ķ������Ϊ" << num << endl;//0 and 1�����ֿ��ܵ�ֵ
	
	map<int, int>::iterator pos = m.lower_bound(3);//pos��һ������
	//���ص�һ��key>keyelemԪ�صĵ�����
	if (pos != m.end())
	{
		cout << "�ҵ���" <<pos->first<<pos->second<< endl;
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