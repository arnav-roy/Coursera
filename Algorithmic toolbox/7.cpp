#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m ; cin >>m >>n ; int a[n] ; a[0] = 1 ; a[1] = 1 ;
	if (n <= 1) cout << n ; 
	else 
	{
		
		for(int i = 2  ;i < n ; i++) 
		{
			a[i] = (a[i-1] + a[i-2]) %10 ; 
		  }  
	 } 
	 int sum = 0 ; 
	 
	 for(int i = m-1 ; i < n ; i++)
	 {
	 	sum = (a[i] + sum) %10 ; 
	 }
	 cout << sum ; 
}
