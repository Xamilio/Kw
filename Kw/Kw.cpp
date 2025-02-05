#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	//1
	//const int R = 5;
	//const int C = 5;
	//int arr[R][C];
	//int num;
	//cout << "Enter number: ";
	//cin >> num;
	//for (int i = 0; i < R; i++)
	//{
	//	for (int j = 0; j < C; j++)
	//	{
	//		arr[i][j] = num;
	//		num *= 2;
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	
	//}
	//2
	const int R = 5;
	const int C = 5;
	int arr[R][C];
	int num;
	cout << "Enter number: ";
	cin >> num;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = num;
			num += 1;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
