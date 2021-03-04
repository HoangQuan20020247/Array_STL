#include<iostream>
#include<string.h>
using namespace std;
int main () {
	int a, b;
	cin >> a;
	int arr[a];
	for(int i=1;i<=a;i++)
	{
		cin >> arr[i];
		if(arr[i] >=1 && arr[i] <=a)
		continue;
	}
	for(int i=1;i<=a-1;i++)
	{
		for(int j=i+1;j<=a;j++)
		{
			if(arr[i] == arr[j])
			{
					b=1;
			}
		}
	}
	
	if(b==1) cout << "Yes";
	else cout << "No";
	return 0;
}