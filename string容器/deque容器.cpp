/*deque��һ��Ū��˫�򿪿ڵ��������пռ�
deque<T> deqT;     // Ĭ���޲ι�����ʽ
deque(beg, end);       // [beg, end)���俽�����죺ǰ�պ󿪣���ͷ����β��
deque(n, elem);         // n��Ԫ���ظ����죻
deque(const deque& deq);   // �������캯��
deque& operator= (const deque& deq); ���صȺŲ�������
assign(beg, end); // ��Ա����assign��ʽ������Ԫ�ؿ�����ֵ��[beg, end)���䣬����ҿ���
assign(n, elem);  // ��n��elem������ֵ������
deque.empty(); //�ж������Ƿ�Ϊ��

deque.size(); //����������Ԫ�صĸ���
deque.resize(num); //����ָ�������ĳ���Ϊnum
�������䳤������Ĭ��ֵ�����λ�á�
���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,
�������䳤������elemֵ�����λ�á�
���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

push_back(elem); //������β�����һ������
push_front(elem); //������ͷ������һ������
pop_back(); //ɾ���������һ������
pop_front(); //ɾ��������һ������
ָ��λ�ò�����
insert(pos,elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
clear(); //�����������������
erase(beg,end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�

at(int idx); //�������� idx ��ָ������
operator[]; //��������idx��ָ������
front(); //���������е�һ������Ԫ��
back(); //�������������һ������Ԫ��

*/

//sort��d.begin(),d.end��;����Ĭ�ϴ�С����
//sort(d.begin(),d.end ,�ص�����)
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm >
void test01()
{
	//iterator��ͨ������
	//reverse_iterator��ת������ 
	//count_iteratorֻ��������
	std::deque<int>d;

	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
}
int main()
{

}
