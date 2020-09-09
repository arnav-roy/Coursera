#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n ; cin >> n ; 
	if (n <= 1) cout << n ; 
	else 
	{
		int a[n] ; a[0] = 1 ; a[1] = 1 ;
		for(int i = 2  ;i < n ; i++) 
		{
			a[i] = a[i-1] + a[i-2] ; 
		  }  
		  cout << a[n-1] ; 
	 } 
	 
}
