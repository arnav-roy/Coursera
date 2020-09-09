#include<bits/stdc++.h>
using namespace std ;
vector<int> v1 ; 
vector<int> v2 ; 

int solve(vector<int> &a , int wt)
{
int w[wt+1] ={0}; 
w[0] = 1 ;
	
	for(int i = 0 ; i < a.size() ; i++)
	{
		vector<int> v ; 
		for(int j = 0 ; j < wt ; j++)
		{
			if(w[j])
			{
				if(j + a[i] <= wt)
				v.push_back(j + a[i]) ; 
 			}
		}
		for(int it= 0 ; it < v.size() ;it++)
		{
			w[v[it]] = i+1 ;
		 } 
	 } 
	 if(w[wt])
	 {
	 
	 int tem[a.size()] = {0} ; 
	 vector<int> ans ; 
	 int sum = wt ; 
	 while(sum>0)
	 {
	 	//ans.push_back( a[w[sum]-1]) ; 
	 	tem[w[sum]-1] = 1 ; 
		sum -= a[w[sum] -1] ; 
 	 }
 	 for(int i = 0 ; i < a.size() ;i++) 
 	 {
 	 	//cout << tem[i] ; 
 	 	if(tem[i] ==0) 
 	 	v2.push_back(a[i]) ; 
	  }
	  return 1 ; 
	   }
	  else 
	  return 0 ; 
	  
	  // for(int i = 0 ; i < v2.size() ;i++) 
 	// {
 	// 	cout << v2[i] <<" "; 
	//  }

	 
	 
	 //for(int i = 0 ; i <= wt ; i++)
	 //cout << w[i] << " "; 
//	int dp[v.size()][201] ; 
//	int flag = 0 ; 
//	int ci , cj ; 
//	for(int i = 0 ; i < v.size() ;i++)
//	{
//		for(int j = 0 ; j < 201 ; j++)
//		{
//			dp[i][j] = 0 ; 
//		}
//	 } 
//	 
//	 	dp[0][v[0]] = 1 ;
//	 	
//	
//	
//		for(int i = 1 ; i < v.size() ;i++)
//	{
//		for(int j = 1 ; j < 201 ; j++)
//		{
//			dp[i][v[i]] =1 ; 
//			if(dp[i-1][j]) 
//			{
//				dp[i][j] = 1 ;
//				if(j + v[i] <=200)
//				dp[i][j+v[i]] = 1 ; 
//			}
//			if(dp[i][sum]) 
//			{
//				//return 1 ;
//				ci = i; j = 201 ; i = v.size(); flag = 1 ;  ;  
//			}
//			 
//		}
//	 }
//	 
////	 for(int i = 0 ; i < v.size() ;i++)
////	 {
////	 	for(int j = 0 ; j <= sum ;j++)
////		cout << dp[i][j] <<" "; 
////		cout << endl ; 
////	 }
//	 int tem[v.size()] = {0}; 
//	 tem[ci] = 1 ;
//	 sum -= v[ci] ; ci -- ;
//	 if(flag ==1) 
//	 {
//	 	while(ci >=0)
//	 	{
//	 		if(dp[ci-1][sum] !=0) 
//	 		{
//	 			tem[ci] = 1 ; sum-= v[ci] ;  
//			 }
//	 		ci-- ; 
//		 }
//		 for(int i = 0 ; i < v.size() ; i++)
//		  {
//		  	if(tem[i] == 0)
//		  	v2.push_back(v[ci]) ; 
//		  }
//		  
//		  for(int i = 0 ; i < v.size() ;i++)
//		  cout << tem[i] <<" "; 
//		 return 1 ;
//	 }
//	 else
//	 return 0 ;  

}

int main()
{
	int n ; cin >> n ;
	for(int i = 0 ;i < n ; i++)
	{
		int temp ; cin >> temp ; 
		v1.push_back(temp) ; 
	}
	int sum = accumulate(v1.begin(), v1.end(), 0);
	 sort(v1.begin() , v1.end())  ; 
	 if(sum % 3 != 0) cout << 0 ; 
	 else 
	 {
	 	int sumby3 = sum /3 ; 

	 	
	 	if(solve(v1, sumby3) ==1) 
		 { 
		 	if(solve(v2,sumby3) ==1) cout << 1 ; 
			else cout << 0 ; 
		}
		else cout << 0 ;  
		  
	 	} 

}
