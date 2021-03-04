#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int f[n];
	for (int i = 0;i < n;i++) cin >> f[i];
	if (k < f[0] || k > f[n - 1]) 
	{
		cout << "Fail";
		return 1;
	}
	else 
	{
		int a = 0,b = n - 1;
		int pos = -1;
		while (true)
		{
			
			if (pos == (a + b)/2) break;
			pos = (a + b)/2;
			if (k == f[pos]) break;
			else if (k < f[pos]) b = pos;
			else if (k > f[pos]) a = pos;
		}
		if (k == f[pos]) 
		{
			a = pos;
			b = pos;
			while (f[a - 1] == k) a--;
			while (f[b + 1] == k) b++;
			for (int i = a;i <= b;i++) cout << i << " ";
				
		}
		else cout << "Not found";
	}
	return 0;
}
