
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int Count(vector<int> vec, int begin, int end, int sz)
//{
//	int count = 0;
//	for (int i = 0; i<sz; i++)
//	{
//		if (vec[i] >= begin && vec[i] <= end)
//			++count;
//	}
//	return count;
//}
//
//int GetNum(vector<int> vec)
//{
//	int sz = vec.size();
//	if (vec.size() == 0)
//		return -1;
//
//	for (int i = 0; i<sz; i++)
//	{
//		if (vec[i] < 1 || vec[i] > sz - 1)
//			return -1;
//	}
//
//	int begin = 1;
//	int end = sz - 1;
//
//	while (begin < end)
//	{
//		int mid = ((end - begin) >> 1) + begin;
//
//		int count = Count(vec, begin, mid, sz);
//
//		if (end > begin)
//		{
//			//更新数字范围
//			if (count > (mid - begin + 1)
//				end = mid;
//			else
//				begin = mid + 1;
//		}
//
//		else
//		{
//			if ((count > 1)
//				return begin;
//			else
//				break;
//		}
//	}return -1;
//}
//
//int main()
//{
//	//vector<int> arr;
//	vector<int> arr = { 2, 2, 3, 3, 4, 5, 6 };
//	int num = GetNum(arr);
//	cout << "结果：" << num << endl;
//	return 0;
//}
