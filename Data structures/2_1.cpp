#include<bits/stdc++.h>
using namespace std;
vector<int> v;  
int heapify(int a[] , int n , int i)
{
	
	int l = i*2 +1 ; 
	int r = i*2 +2 ; 
	if(r < n)
	{
	if(a[l] < a[i] && a[l] < a[r])
	{
		v.push_back(i) ; v.push_back(l) ; 
		//cout << i << " " << l << endl ; 
		swap(a[l] , a[i]) ;
		heapify(a , n , l);
	}
	else if(a[r] < a[i] && a[r] <= a[l])
	{
		v.push_back(i) ; v.push_back(r) ; 
		//cout << i << " " << r << endl ; 
		swap(a[r] , a[i]) ; 
		heapify(a , n , r) ; 
	}
	}
	else if(l < n)
	{
		if(a[l] < a[i])
	{
		v.push_back(i) ; v.push_back(l) ; 
		//cout << i << " " << l << endl ; 
		swap(a[l] , a[i]) ;
		heapify(a , n , l) ; 
	}
	}
}

int build_heap(int a[] ,int n)
{
	int si = (n / 2) - 1;
	
	for(int i = si ; i >= 0 ; i--)
	{
		heapify(a, n,i) ; 
	}
}
int main()
{
	int n ; cin >> n ;
	int a[n] ; 
	for (int i = 0 ; i < n ; i++)
	cin >> a[i] ; 
	build_heap(a, n) ; 
	
	cout << v.size() /2<<endl  ; 
	for(int i = 0 ; i < v.size() ; i+=2)
	{
		cout << v[i] << " " << v[i+1] <<endl ; 
	}
	
	//for(int i = 0 ; i < n ; i++)
	//cout << a[i] << " "; 
	 
}
