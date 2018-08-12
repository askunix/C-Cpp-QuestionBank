#include<iostream>
#include<cstdio>
#include<vector>
#include<time.h>
#include<string>
#include<stack>
using namespace std;



//int BinarySearch(int *arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//
//	while (left < right)
//	{
//		mid = ((right - left) >> 1) + left;
//		if (arr[mid] == k)
//			return 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	return -1;
//}



int BinarySearch(int *arr, int k, int low, int high)
{
	if (low < high)
		return -1;
	int mid = ((high - low) >> 1) + low;
	if (arr[mid] == k)
		return 1;
	else if (arr[mid] > k)
		return BinarySearch(arr, k, low, mid - 1);
	else
		return BinarySearch(arr, k, mid + 1, high);
}



int main()
{
	int arr[] = { 3, 4, 6, 7, 8, 9, 3, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int pos = 91;
	if (BinarySearch(arr , pos, 0, len-1) == 1)
		cout << "找到了" << endl;
	else
		cout << "没有找到" << endl;
	return 0;
}



// struct TreeNode 
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution
//{
//public:
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
//	{
//
//	}
//};












//struct ListNode 
//{
//    int val;
//    struct ListNode *next;
//   
//	ListNode(int x) :
//            val(x), next(NULL) 
//	{}
//};
//
//
//class Solution {
//public:
//
//	vector<int> printListFromTailToHead(ListNode* head)
//	{
//		stack<int> S;
//		vector<int> V;
//
//		struct ListNode *p = head;
//
//		if (head)
//		{
//			S.push(p->val);
//
//			while (p = p->next)
//			{
//				S.push(p->val);
//			}
//
//			while (!S.empty())
//			{
//				V.push_back(S.top());
//				S.pop();
//			}
//		}
//		return V;
//	}
//
//};










//class Solution {
//public:
//	
//	vector<int> printListFromTailToHead(ListNode* head)
//	{
//		vector<int> dev;
//		if (head)
//		{
//			if (head->next)
//			{
//				dev = printListFromTailToHead(head->next);
//			}
//			dev.push_back(head->val);
//		}
//		return dev;
//	}
//
//};









//void replaceSpace(char str[], int length)
//{
//	if (NULL == str || length <= 0)
//		return;
//	int BalanceCount = 0;
//	int AfterCount = 0;
//	int sz = 0;
//	/*for (int i = 0; i < length;i++)
//		cout << str[i] << endl;
//	cout << endl;*/
//
//	
//
//	int k = 0;
//	while (str[k] != '\0')
//	{
//		++sz;
//		if (str[k] == ' ')
//			BalanceCount += 1;
//		++k;
//	}
//
//
//
//
//
//
//	AfterCount = sz + BalanceCount * 2;
//	int index = sz;
//	int newIndex = AfterCount;
//	
//	//cout << "index:" << index <<str[index]<< endl;
//	//cout << endl << endl;
//
//	while (index >= 0 && newIndex > index)
//	{
//		//cout << "index:" << index << "  "<< str[index]  <<  endl;
//
//		if (str[index] == ' ')
//		{
//			//cout << "替换一波" << endl;
//			str[newIndex--] = '0';
//			str[newIndex--] = '2';
//			str[newIndex--] = '%';
//		}
//
//		else
//		{
//			str[newIndex--] = str[index];
//		}
//		--index;
//
//	}
//}
//
//
//
//int main()
//{
//	char str[] = "I am a boy!";
//	cout << str << endl;
//	int len = strlen(str);
//	replaceSpace(str, len);
//	cout << str << endl;
//	return 0;
//}








//class Solution {                     //二维数组中的查找
//public:
//	bool Find(int target, vector<vector<int> > array)
//	{
//		int pos = 0;
//		//找到右上角的数据对比，分行和列进行剔除。
//	}
//};
//
//int main()
//{
//	srand ((unsigned int)time(NULL));
//		vector<vector<int> >  arr(10);
//		for (int i = 0; i<10; i++)
//		{
//			for (int j = 0; j<5; j++)
//			{
//				arr[i].push_back(rand() % 10);
//			}
//		}
//		cout << "列"<<arr[0].size() << " "<<"行" << arr.size() << endl;
//
//
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				cout << arr[i][j]<<"  ";
//			}
//			cout << endl;
//		}
//
//
//		int tag = 9;
//		Solution s;
//		if (s.Find(tag, arr) == true)
//			cout << "找到了" << endl;
//		else
//			cout << "没有找到" << endl;
//
//	return 0;
//}









//int x = 65530;
//
//
//int func(int x)
//{
//	int countx = 0;
//	while (x)
//	{
//		countx++;
//		x = x&(x - 1);
//	}
//	return countx;
//}
//
//
//void main()
//{
//	func(x);
//}




//
//
//int main()
//{
//	int m;
//	int x;
//	int arr[10000] = { 0 };
//	int search[1024] = { 0 };
//	cin >> m;
//
//	for (int i = 0; i < m; i++)
//		cin >> arr[i];
//
//	cin >> x;
//	for (int i = 0; i < x; i++)
//		cin >> search[i];
//
//	cout << m;
//	for (int i = 0; i < m; i++)
//		cout << arr[i];
//
//	cout << x;
//	for (int i = 0; i < x; i++)
//		cout << search[i];
//
//	int left_count = 0;
//	int right_count = 0;
//
//	for (int i = 0; i < m; i++)
//	{
//		left_count = left_count + arr[i];
//		right_count = left_count + arr[i + 1];
//
//
//
//
//
//		for (int j = 0; j < x; j++)
//		{
//			if (search[j] > left_count && search[j] < right_count)
//				cout << i + 1;
//			else
//				j++;
//		}
//		i++;
//
//	}
//
//}

















//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int sum = 0;
//	cin >> m >> n;
//	int array[1024];
//	for (int i = 0; i < m; i++)
//		cin >> array[i];
//
//	for (int i = 0; i < m; i++)
//		sum = sum + array[i];
//	
//	int average = sum / m;
//	int count = 0;
//
//
//	for (int i = 0; i < m; i++)
//	{
//
//		if (array[i] < average)
//		{
//			for (int j = i + 1; j < m; j++)
//			{
//				if (array[j]>average)
//				{
//					if (count<=n)
//					{
//						cout << j + 1 << " " << i + 1 << endl;
//						array[i]++;
//						array[j]--;
//						count++;
//					}
//					
//				}
//			}
//		}
//
//		else
//		{
//			i++;
//		}
//
//
//
//	}
//
//
//	int min = array[0];
//	int max = array[0];
//	for (int i = 1; i < m; i++)
//	{
//		if (array[i] < min)
//			min = array[i];
//
//		if (array[i] > max)
//			max = array[i];
//	}
//
//	int ret = max - min;
//
//	cout << ret<<"  "<<count;
//
//	return 0;
//}









