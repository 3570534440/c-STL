
/*
* template<class T> T negate<T>ȡ���º���һԪ����
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>//�ڽ��������� һԪ����//������
using namespace std;

void test01()
{
	negate<int>n;
	cout << n(10) << endl;//��10����ȡ���������-10
}

//���мӷ�������
//lambad���ʽ{}()[]



//������   �ܿ���

//band2nd���Խ���������һ��
// ȡ����������
//1������not1��������һԪȡ��
//2��Ȼ��̳�public unary_function<int, bool>��������int������ֵ��bool
//3������const
// 
//��Ԫȡ����not2��Ȼ��̳�

//��������������
/*
1.����band2nd()���а�
2.�̳�public unary_function<��������,�������ͣ�����ֵ����>��
3.��const
*/
/*
����ָ��������
1.1......
1.2.......
*/