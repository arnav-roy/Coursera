#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m ,f; cin >> n >> m >> f ;
	int a[n] ; 
	for(long long int i = 0 ; i < f ; i++)
	cin >> a[i] ; 
	int dist = m  ; 
	long long int ans = 0 ; 
	int invalid = 0 ;
	for(int i = 0 ; i < f-1 ; i++)
	{
		if(a[i+1] > dist)
		{
			if(a[i] > dist) 
			{
				invalid = 1 ; 
				i = f ; 
			}
			else
			{
			ans++ ; 
			dist =a[i] + m ; 
		}
		}
	}
	cout << ans ; 
 }
