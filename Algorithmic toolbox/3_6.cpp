#include<bits/stdc++.h>
typedef long long int intt ; 
using namespace std ; 


int main()
{
	intt n ; cin >> n ; 
	vector<intt> v ; 
	for(intt i = 1; i <= n ; i++)
	{
		n = n - i ; 
		if(n <= i) v.push_back(n+i) ;  
		else
		v.push_back(i) ; 
				
	 } 
	 
	 cout << v.size() << endl ; 
	 for(intt i = 0 ; i < v.size() ; i++)
	 cout << v[i] << " " ; 

}
