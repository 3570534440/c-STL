//find返回值是一个迭代器
//vector<int>::iterator  = find(v.begin(), v.end, p2);//p2是指定的数据类型
//find    //查找元素
//find_if    //按条件查找元素
//adjacent_find    //查找相邻重复元素
//binary_search    //二分查找法
//count    //统计元素个数
//count_if    //按条件统计元素个数

//常用排序算法
/*

merge算法，容器元素合并，并存储到另一容器中
注意：两个容器必须是有序，且顺序一致

vector<int>v1;
vector<int>v2;
for(int i=0 ;i<10;i++)
{
v.push_back(i);
v.push_back(i+1);
}
vewctor<int>vTarget;//目标容器//要指定大小
vTarget.resize(v1.size+ v2.size());

merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
for_each()
*/


/*

sort算法//降序排序
sort(v.begin(),v.end(), greater<int>());指定头文件<functional>
for_each()



random_shuffle算法，指定范围内的元素随机调整次序
也是洗牌算法

reverse，反转指定范围内的元素
*/


/*
常用拷贝替换算法

replace(  ,  ,ole vel, new vel);替换
replace_if按条件替换

swap交换算法
*/

/*
常用算数生成算法
int num = accumulate（v.begin(),v.end(), 0）计算容器元素的总和
指定头文件
参数3代表累加起始值

fill()向容器中添加元素
*/
