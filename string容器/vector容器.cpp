//vector������һ���������飬�Զ���չ�ڴ棬��һ������Ŀռ�
//��ԭ��������ȫ�������������ͷ�ԭ���ռ�
//clear()ɾ������������Ԫ��

#include<vector>
#include <iostream>
#include <algorithm>

void printVector(std::vector<int> &v)
{
	for (std::vector<int>::iterator it = v.begin(); v.begin() != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}
void test01()
{
	std::vector<int>v1;//����v1
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);//β��
	v1.push_back(40);
	//pop_backβɾ��

	std::vector<int>v2(v1.begin(), v1.end());//������copy��v2
	printVector(v2);
}//assignҲ����ʵ��
//swap����Ԫ��
//vector<int>v4(10 ,100)10��һ��
//resize�� , ������ָ�������ĳ��ȣ��ڶ�������
//reserve( )Ԥ��Ԫ�س���
//at,front(),back();
//empty()�ж��Ƿ��
//vector<int>(v).swap(v)������һ������
//��Ȼ�󽻻���һ��ָ�룬�ͷ�֮ǰ��v�Ŀռ�
//reserve����Ԥ���ռ� v.reserve(100000)Ԥ��ʮ��Ŀռ�
//vector������֧��������ʵġ�
//list�����ǲ�֧��������ʵ�
int main()
{

	test01();

	return 0;
}
