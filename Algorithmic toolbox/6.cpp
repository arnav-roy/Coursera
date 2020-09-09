#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n ; cin >> n ; int a[n] ; a[0] = 1 ; a[1] = 1 ;
	if (n <= 1) cout << n ; 
	else 
	{
		
		for(long long int i = 2  ;i < n ; i++) 
		{
			a[i] = (a[i-1] + a[i-2]) %10 ; 
		  }  
	 } 
	 int sum = 0 ; 
	 
	 for(int long long i = 0 ; i < n ; i++)
	 {
	 	sum = ((a[i]*a[i])%10  + sum) %10 ; 
	 }
	 cout << sum ; 
}
