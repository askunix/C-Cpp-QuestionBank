
#include<iostream>
using namespace std;



int SearchNum(int *arr, int K, int row, int col)
{
	int found = 0;

	if (arr != NULL && col > 0 && row > 0)
	{
		int rows = 0;
		int cols = col - 1;

		while (rows < row && cols >0)
		{
			if (arr[rows * col + cols] == K)
			{
				found = 1;
				break;
			}

			else if (arr[rows *col + cols] > K)
			{
				--cols;
			}

			else
			{
				++rows;
			}
		}
	}
	return found;
}


int main()
{
	int array[4][5] = {
		{ 1, 2, 8, 9 },
		{ 2, 4, 9, 12 },
		{ 4, 7, 10, 13 },
		{ 6, 8, 11, 15 },};
	int Pos = 7;
	int col = 5;
	int row = 4;
	int ret = SearchNum((int *)array, Pos, row, col);
	if (ret == -1)
		cout << "没有找到这个元素"<< Pos << endl;
	else
		cout << "找到了" << Pos << endl;
	return 0;
}
