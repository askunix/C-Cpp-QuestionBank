//思路一：排序

int MoreThanHalfNum(int *arr,int len)
{

     int count = 0;
     if(arr == NULL || len <= 0)
          return -1;
     sortArray(arr,len);
     //排序完成后，遍历一遍元素，
     //如果和数组中arr[len/2]相等的元素个数超过len/2，则返回arr[len/2]。
     for(int i = 0;i<len;++i)
     {
          if(arr[i] == arr[len/2])
               count ++;
     }
     if(count >= len/2)
          return arr[len/2];
     return -1;
}




//思路二：打擂法

int MoreThanHalfNum(int *arr,int len)
{
    int time = 0;
    int Data = 0;
    int i = 0;
    assert(arr);
    if(arr == NULL || len <= 0)
        return -1;

    Data = arr[0];
    for( ; i<len; ++i)
    {
        if(time == 0)
        {
            Data = arr[i];
            time = 1;
        }
        else if(arr[i] == Data)
            time ++;
        else
            time --;
    }
    return Data;
}




//思路三：哈希思想
#include<iostream>
#include<hash_map>
int MoreThanHalfNum(int *arr, int len)
{
    int table[100] = { 0 };
    int cur = 0;
    int data = 0;
    for (int i = 0; i < len; i++)
    {
        cur = arr[i] * 2;
        if (table[cur + 1] != 0)
            table[cur + 1] ++;
        else
        {
            table[cur] = arr[i];
            table[cur + 1] ++;
        }
    }
    //查找最大出现次数
    for (int i = 1; i < len; i+=2)
    {
        if (table[i]>table[i + 2])
            data = i;
        if (table[i]<table[i + 2])
            data = i + 2;
    }
    return table[data - 1];
}

int main()
{       //测试函数
    using namespace std;  
    int arr[6] = { 3, 5, 3, 3, 4, 3};
    int count = MoreThanHalfNum(arr, sizeof(arr) / sizeof(arr[0]));
    cout << count << endl;
    return 0;
}
