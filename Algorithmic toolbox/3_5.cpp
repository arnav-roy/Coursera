#include<bits/stdc++.h>
typedef long long int intt ; 
using namespace std ; 
bool my_func(const pair<intt, intt>&i, const pair<intt, intt>&j)
{
    return i.second < j.second; 
}

int main()
{
	intt n ; cin >> n ; 
 	pair<intt,intt> a[n] ; 
 	for(intt i = 0 ; i < n ; i++)
 	{
 		cin >> a[i].first >> a[i].second ;  
	 }
	 sort(a,a+n, my_func) ; 
	 intt end_time = a[0].second ; 
	 vector<intt> v ; 
	 v.push_back(a[0].second) ; 
	 for(intt i = 1 ; i < n ; i++)
	 {
	 	if(a[i].first > end_time)
	 	{
	 		end_time = a[i].second ; 
	 		v.push_back(a[i].second)  ; 
		 }
	 }
	 cout << v.size() << endl ; 
	 for(intt i = 0 ; i < v.size() ; i++) cout << v[i] << " " ;  
}
