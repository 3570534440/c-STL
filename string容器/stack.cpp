///ջ����
//�Ƚ��������ջ����ջ���пգ���С
#include<iostream>
using namespace std;
#include <stack>
#include <algorithm>
#include <queue>
#include <list>
void test01()
{
	stack<int>S;
	S.push(10);//��ջ
	S.push(20);
	S.push(30);
	S.push(40);

	cout << S.size() << endl;

	while (!S.empty())
	{
		cout << S.top() << endl;
		S.pop();//��ջ
	}
	cout << "size=" << S.size() << endl;
}
int main()
{
	test01();

	return 0;
}
//���У��Ƚ��ȳ�
//���ṩ��������
//queue<>Q;
//��ӣ����ӣ���ͷԪ��front��βback
//


//list���� ����һ��˫�������ŵ㣺���������Դ���˷�
//������ʹ��fron and back and push_buck and pop_back
//push_front pop_front
// ���������ǿռ��ʱ��ĺķѽϴ󣬱�����ʱ�䣬
//list��vector��������ʹ�õ�����
// list��һ��˫��ѭ������
//��֧���������