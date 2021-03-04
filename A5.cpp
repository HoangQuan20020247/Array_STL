#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
void initRandomArray(int *A, int n, int k) {
    srand(time(NULL));
    int randNum = 0;
    for (int i = 0; i < n; i++) {
        randNum = rand() % k;
        A[i] = randNum;
    }
}
int main (){
	 int *A, temp;
    int n = 30; 
    int k = 200; 

    A = new int[n]; 

    initRandomArray(A, n, k);
    for (int i = 0; i < n; i++) {
        cout << A[i] <<" ";
    }
    cout << endl;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i] > A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
    for (int i = 0; i < n; i++) {
        cout << A[i] <<" ";
    }
    cout << endl;

    delete[]A; 
    return 0;
}
	
