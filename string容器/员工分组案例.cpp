#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

enum {CAIWU ,RENLI ,YANFA};
class Worker
{
public:
	/*void operator()(int)
	{

	}*/

	string m_Name;
	int m_Money;
};

void creatWorker(vector<Worker>&v)//���δ�&v
{
	string nameSeed = "ABCDE";
	//for (vector<Worker>::iterator it = v.begin(); it!= v.end() ;it++)
	for(int i = 0; i<5 ;i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Money = rand() % 10000 + 10000;//0-19999

		v.push_back(worker);
	}
}

void getGroup(vector<Worker>&v,multimap<int, Worker>&m)//������vector<Worker>�����vector<int>�Ļ����ᵼ�������޷���Workerת��int
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int Did = rand() % 5;         //��Ա������
		m.insert(make_pair(Did, *it));//���뵽m������
	}
}
void showWorker(multimap<int, Worker>& m)
{
	//��ʾ
	cout << "��������" << endl;
	//0 A 1 B 1 C 2 D 2 E
	multimap<int ,Worker>::iterator pos = m.find(CAIWU);//find�ǲ���CAIWU�ĸ���������ֵ�ǵ��������͵�ֵ
	int num = m.count(CAIWU);//�ҵ�0���ŵ�����
	int index = 0;
	for (; pos != m.end(),index<num; index++,pos++)
	{
		cout << pos->second.m_Name << pos->second.m_Money << endl;
	}
	cout << "��������" << endl;
	//0 A 1 B 1 C 2 D 2 E
	pos = m.find(RENLI);
	num = m.count(RENLI);//�ҵ�1���ŵ�����
	index = 0;
	for (; pos != m.end(), index < num; index++, pos++)
	{
		cout << pos->second.m_Name << pos->second.m_Money << endl;
	}
	cout << "�з�����" << endl;
	//0 A 1 B 1 C 2 D 2 E
	pos = m.find(YANFA);
	num = m.count(YANFA);//�ҵ�2���ŵ�����
	index = 0;
	for (; pos != m.end(), index < num; index++, pos++)
	{
		cout << pos->second.m_Name << pos->second.m_Money << endl;
	}
}
int main()
{
	vector<Worker>v;//��������

	creatWorker(v);//��������Ա��

	//Ա������
	multimap<int, Worker>m;
	getGroup(v, m);

	//�ֲ�����ʾԱ��
	showWorker(m);



	//printWorker(v);
/*  for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Money << it->m_Name << endl;
	}
*/
}

