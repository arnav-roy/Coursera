#include<bits/stdc++.h>

using namespace std;


int main()
{
int n ; cin >> n ; 
int a[n];
for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
int m ; cin >> m ; 
int b[m];
for(int i = 0 ; i < m ; i++) cin >> b[i] ;
 
int dp[m][n] ; 
if(a[0] == b[0])
dp[0][0] = 1 ;
else dp[0][0] = 0 ; 
for(int i = 1 ; i < n ; i++) 
{
	if(a[i] == b[0]) 
	dp[0][i] = 1 ; 
	else if(dp[0][i-1] == 0 || dp[0][i-1] ==1)dp[0][i] = dp[0][i-1] ;
	else dp[0][i] = 0 ;  
}

for(int i = 1 ; i < m ; i++) 
{
	if(a[0] == b[i]) 
	dp[i][0] = 1 ; 
	else if( dp[i-1][0] == 1 ||dp[i-1][0] == 0 ) dp[i][0] = dp[i-1][0] ; 
	else dp[i][0] = 0 ; 
	
}

for(int i =1 ; i < m ; i++)
{
	for(int j = 1 ; j <n ;j++)
	{
		if(b[i] == a[j])
		{
			dp[i][j] = dp[i-1][j-1] +1 ;  
		}
		else 
		dp[i][j] = max(dp[i-1][j] , dp[i][j-1])  ;
	}
} 
cout << dp[m-1][n-1] ; 
//for(int i =0 ; i < m ; i++)
//{
//	for(int j = 0 ; j <n ;j++)
//	{
//		cout << dp[i][j] <<" ";  
//	}
//	cout << endl ; 
//} 

}
