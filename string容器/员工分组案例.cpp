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

void creatWorker(vector<Worker>&v)//传参传&v
{
	string nameSeed = "ABCDE";
	//for (vector<Worker>::iterator it = v.begin(); it!= v.end() ;it++)
	for(int i = 0; i<5 ;i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Money = rand() % 10000 + 10000;//0-19999

		v.push_back(worker);
	}
}

void getGroup(vector<Worker>&v,multimap<int, Worker>&m)//必须是vector<Worker>如果是vector<int>的话，会导致类型无法从Worker转到int
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int Did = rand() % 5;         //给员工分组
		m.insert(make_pair(Did, *it));//插入到m容器中
	}
}
void showWorker(multimap<int, Worker>& m)
{
	//显示
	cout << "财务如下" << endl;
	//0 A 1 B 1 C 2 D 2 E
	multimap<int ,Worker>::iterator pos = m.find(CAIWU);//find是查找CAIWU的个数，返回值是迭代器类型的值
	int num = m.count(CAIWU);//找到0部门的人数
	int index = 0;
	for (; pos != m.end(),index<num; index++,pos++)
	{
		cout << pos->second.m_Name << pos->second.m_Money << endl;
	}
	cout << "人力如下" << endl;
	//0 A 1 B 1 C 2 D 2 E
	pos = m.find(RENLI);
	num = m.count(RENLI);//找到1部门的人数
	index = 0;
	for (; pos != m.end(), index < num; index++, pos++)
	{
		cout << pos->second.m_Name << pos->second.m_Money << endl;
	}
	cout << "研发如下" << endl;
	//0 A 1 B 1 C 2 D 2 E
	pos = m.find(YANFA);
	num = m.count(YANFA);//找到2部门的人数
	index = 0;
	for (; pos != m.end(), index < num; index++, pos++)
	{
		cout << pos->second.m_Name << pos->second.m_Money << endl;
	}
}
int main()
{
	vector<Worker>v;//创建容器

	creatWorker(v);//创建五名员工

	//员工分组
	multimap<int, Worker>m;
	getGroup(v, m);

	//分部门显示员工
	showWorker(m);



	//printWorker(v);
/*  for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Money << it->m_Name << endl;
	}
*/
}

