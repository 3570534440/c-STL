//string����
//��һ��char*������
#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>//��׼�㷨ͷ�ļ�
#include <string>
//ԭ��ָ��Ҳ�ǵ�����


/*


*/
void test02()
{
	std::string str;
	str = "hello wawrd";
	for (int i = 0; i < str.size(); i++)
	{
		std::cout << str[i] << std::endl;
	}
	/*for (int i = 0; i < str.size(); i++)
	{
	[]��at������[]����Խ�磬ֱ�ӹҵ���at���ʻ��׳��쳣
		std::cout << str.at(i) << std::endl;
	}*/ 
	try 
	{
		//std::cout << str[100] << srd::endl;
		std::cout << str.at(100) << std::endl;
	}
	catch (...)
	{
		cout << "�쳣����" << std::endl;
	}
	str.find("����")//���ң�������Ҫ�������ݵ�λ�ã����󷵻�-1
}	//str.rfind("")����������
	//str.replace()//�滻
//str1.compare(str2)���Ƚ�
//str.substr(λ�� ,���� )��ȡ�ַ���

//�����ַ���
//string str = "asdasfWfeASdf";
//str.erase(1 ,3);ɾ��ָ��λ���ַ���
//string s(str)
// const char*������ʽת��Ϊstring��֮������
//vector
//str.toupper(str[i])ת��д
//str.tolower
//str.insert�������
int main()
{
	test02();

	return 0;
}

