#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int wt, n ; cin >> wt >> n ;
	int a[n] ; 
	
	for(int i = 0 ; i < n ; i++)
	cin >> a[i] ; 
	
	int w[wt+1] ={0} ; 
	w[0] = 1 ;
	
	for(int i = 0 ; i < n ; i++)
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
			w[v[it]] = 1 ;
		 } 
	 }
	 
	 //for(int i = 0 ; i <= wt; i++) cout << w[i] <<" " ; 
	 for(int i = wt ; i >= 0 ; i--) 
	 {
	 	if(w[i] ==1)
	 	{
	 		cout<< i ; break ; 
		 }
	 }
	 
}
