//list���� ����һ��˫�������ŵ㣺���������Դ���˷�
//������ʹ��fron and back and push_buck and pop_back
//push_front pop_front
// ���������ǿռ��ʱ��ĺķѽϴ󣬱�����ʱ�䣬
//list��vector��������ʹ�õ�����
// list��һ��˫��ѭ������
//��֧���������
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
	//l.remove(100)�ȱ�����ɾ��100
//��֧��������ʵĵ��������������ڲ����ṩ��Ӧ���㷨�ӿ�
//l.sort();//���ò���
int main()
{
	return 0;
}