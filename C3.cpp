#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void test(int a, int b){
	int r,sum=0,temp,count=0;
	cin >> a >> b;
	for(int num=a; num<=b;num++)
	{
	for(temp=num;num!=0;num=num/10){
         r=num%10;
         sum=sum*10+r;
    }
    if(temp==sum)
	cout << temp;
   	//count ++;
   	}
	
//cout << a << " " << b;
}
int main () {
	int n, a, b;
	cin >> n;
	if(n >= 0 && n <= 100)
	for(int i = 1;i<=n;i++)
	{
		test(a,b);
	}
	else
	return 0;
}