#include<iostream>
using namespace std;

template <typename T>
void sortarray(T arr[],int n){
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main ()
{
	int arr[] = {3, 2, 5, 1, 4};
	int n =  sizeof(arr) / sizeof(arr[0]);
	sortarray(arr, n);
	for (int i = 0; i < n; i++)
		cout <<  arr[i] << " ";
		
		return 0;
}