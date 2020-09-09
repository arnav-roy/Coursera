#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n ; cin >> n ; 
	vector<int> g[n] ; 
	int s ; 
	for(int i = 0 ; i < n ; i++)
	{
		int temp ; cin >> temp ; 
		if(temp == -1) s = i ; 
		else
		g[temp].push_back(i) ; 
		 
	}

	queue<int> q ; 
	q.push(s) ; 
	int l[n] ;
	l[s] = 0 ;  
	while(!q.empty())
	{
		int top = q.front() ; 
		for(int i = 0 ; i < g[top].size() ; i++)
		{
			l[g[top][i]] = l[top] + 1 ;
			q.push(g[top][i]); 
		}
		q.pop() ; 
	}
	//for(int i = 0 ; i < n ; i++) cout << l[i] <<"  "; 	
	cout << *max_element(l,l+n)+ 1 ; 
}
