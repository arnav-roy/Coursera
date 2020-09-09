#include<bits/stdc++.h>

using namespace std;
typedef long long int intt ;

int main()
{
	intt n ; cin >> n ; 
	intt a[n] ; 

	for(intt i = 0 ; i < n ; i++)
	cin >> a[i] ; 
	sort (a , a+n) ; 
	int summ= 1 ;
	int maks = 1; 
	for(intt i = 1 ; i < n ; i++) 
	{
		if (a[i] == a[i-1]) 
		{
			summ++ ; 
			maks = max(summ , maks) ; 
		}
		else 
		{
			summ = 1 ;
		}
	}
	if(maks > (n/2)) cout << 1 ; else cout << 0 ; 
 }
