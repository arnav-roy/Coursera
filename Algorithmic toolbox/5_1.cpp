#include<bits/stdc++.h>

using namespace std;


int main()
{
int n ; cin >> n ; 
int dp[n+1] ; 

	if(n==1) cout << 1 ; 
	else if(n==2) cout << 2 ; 
	else if(n==3) cout << 2 ; 
else
{

dp[1] = 1  ; dp[2] = 1  ; dp[4] = 1  ;
dp[3] = 2 ;
for(int i = 5 ; i<=n ; i++)
{
	dp[i] = min(min(dp[i-2] , dp[i-4]) , dp[i-1]) + 1 ; 
  }  
cout <<dp[n] ; 
 
}
}
