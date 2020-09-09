#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m ; cin >> n >> m  ; 
	if (n <= 1) cout << n %m ; 
	else 
	{
		
		long long int a ,b  ; a = 1 ; b = 1 ;
		for(long long int i = 2  ;i < n ; i++) 
		{
			int temp = b ; 
			b = (b + a) %m ;
			a = temp ; 
		
		  }  
		  cout << b ; 
	 } 
	 
}
