#include<iostream>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	int row = m, collum = n, k = 1, p = 0, i, j;
	while(k <= m*n){
		for(i = p; i < collum; i++) 
			a[p][i] = k++;
		for(i = p+1; i < row; i++) 
			a[i][collum-1] = k++;
		if ( p != row-1){
			for(i = collum-2; i >=p; i--) 
				a[row-1][i] = k++;
		}	
		if(p!=collum-1){
			for(i = row-2; i > p; i--) 
				a[i][p] = k++;
		}	
		p++;row --; collum --;
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	}
