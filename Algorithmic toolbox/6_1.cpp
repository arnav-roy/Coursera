#include<bits/stdc++.h>
using namespace std; 
int main()
{
	long long int max_weight , n ; cin >> max_weight >> n ;  
	long long int a[n] ;
	for(long long int i = 0 ; i < n ; i++) cin >> a[i] ; 
	//long long int dp[max_weight+1][n] ; 
	vector< vector< long long int> >  dp(n+1 ,vector<long long int>(max_weight + 2));

	for(long long int i = 0 ; i < n ; i++)
	{
		for(long long int j = 0 ; j <= max_weight ; j++)
		{
			dp[j][i] = 0 ; 
		}
	}
	dp[a[0]][0] = 1 ; 
	for(long long int i = 1 ; i < n ; i++)
	{
		dp[a[i]][i] =1 ;
		for(long long int j = 0 ; j <= max_weight ; j++)
		{
			if( dp[j][i-1] !=0)
			{
				dp[j][i] =1 ; 
				if(j+a[i] <= max_weight) 
				dp[j+a[i]][i] =1 ; 
			}
			
		}
	}
	
//		for(int i = 0 ; i < n ; i++)
//	{
//		for(int j = 0 ; j <= max_weight ; j++)
//		{
//			cout << dp[j][i] <<" " ; 
//		}
//		cout <<endl ; 
//	}
	long long int ans= 0 ;
	for(long long int i = 0 ; i <= max_weight;i++)
	{
		if(dp[i][n-1] == 1)
		ans = i ; 
	}
	cout << ans ; 
}
