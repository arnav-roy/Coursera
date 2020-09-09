#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int s , p ; cin >> s >> p ; 

	int segs[s] ; int segf[s] ; 
	
	for(int i = 0 ; i < s ; i ++)
	{ 
		cin >> segs[i] >> segf[i]; 
	 }
	 sort(segs , segs + s) ;
	 sort(segf, segf + s) ; 
	 
	 for(int i = 0 ; i < p ; i++)
	 {
	 	int temp ; cin >> temp ; 
	 	
		int u_b = (upper_bound(segs , segs + s , temp) -segs) ;
		int l_b =   (lower_bound(segf , segf + s ,temp) -segf) ;
		while(segf[l_b] == segf[l_b+1] && l_b != s-1 && segf[l_b] != temp)
		l_b +=1 ; 
		if(segf[l_b] == temp)
		l_b-- ; 
		 
		u_b = s - u_b ; 
	//	cout << u_b <<" " <<l_b<<  endl ; 
		cout << s -( u_b + l_b )  <<" "; 
	 }
	 
	 
	 
}
