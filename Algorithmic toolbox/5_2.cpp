#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n ; cin >> n ; 
	int dp[n+1][2] ; 
	for(int i = 0 ; i <= n ; i++) dp[i][0] = 1e9 ;  
	dp[1][0] = 0 ;  
	for(int i = 1 ; i <= n ; i++) 
	{
		if(i*2 <= n)
		//dp[i*2][0] = min((dp[i][0] + 1) , dp[i*2][0]);
		{
			if(dp[i][0] +1 < dp[i*2][0])
			{
				dp[i*2][1] = i ; 
				dp[i*2][0] = min((dp[i][0] + 1) , dp[i*2][0]);
			}
		}
		if(i*3 <= n) 
		//dp[i*3][0] = min((dp[i][0] + 1) , dp[i*3][0]); 
			{
			if(dp[i][0] +1 < dp[i*3][0])
			{
				dp[i*3][1] = i ; 
				dp[i*3][0] = min((dp[i][0] + 1) , dp[i*3][0]);
			}
		}
		
		if(i+1<=n)
		//dp[i+1][0] = min((dp[i][0] + 1) , dp[i+1][0]); 
			{
			if(dp[i][0] +1 < dp[i+1][0])
			{
				dp[i+1][1] = i ; 
				dp[i+1][0] = min((dp[i][0] + 1) , dp[i+1][0]);
			}
		}
	
	}
	cout << dp[n][0] <<endl; 
	//cout << 1 <<" " ; 
	vector<int> v ; 
	int j = n ; 
	while(j != 1)
	{
		v.push_back(dp[j][1]) ;
		j = dp[j][1] ; 
	}
	
	 for(int i = v.size() -1 ; i >=0 ; i--)
	 cout << v[i] <<" " ; 
	 cout << n ; 
}
