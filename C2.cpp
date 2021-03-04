#include<iostream>
#include<string.h>
using namespace std;
int main () {
	string a, a1="";
    getline(cin,a);
    for (int i=a.length()-1; i>=0; i--)
        a1=a1+a[i];
    if (a1==a)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}