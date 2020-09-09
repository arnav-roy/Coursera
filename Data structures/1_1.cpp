#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	string s ; cin >> s ; 
	stack<int> a ; 
	int out ; 
	int flag ;
	int flag2 =1 ;  
	for(int i = 0 ; i < s.size() ; i ++)
	{
		if(s[i] == '(')
		{
		
		if(a.empty())
		flag = i ; 
		a.push(1) ;
		}
		else if(s[i] == '{')
		{
		
		if(a.empty())
		flag = i ; 
		a.push(2) ;
		}
		else if(s[i] == '[')
		{
		
		if(a.empty())
		flag = i ; 
		a.push(3) ;
		}
		else if((s[i] == ')' || s[i] == ']' || s[i] == '}') && a.empty())
		{
			cout << i + 1 ; flag2 = 0 ; break ; 
		}
		else if(s[i] == ')' && a.top() == 1)
		a.pop() ; 
		else if(s[i] == ')' && a.top() != 1)
		{
			cout << i+1 ; flag2 =0 ;break ; 
			
			}	
			
			
		else if(s[i] == '}' && a.top() == 2)
		a.pop() ; 
		else if(s[i] == '}' && a.top() != 2 )
		{
			cout << i+1 ; flag2 =0; break ; 
			}
			
		else if(s[i] == ']' && a.top() == 3)
		a.pop() ; 
		else if(s[i] == ']' && a.top() != 3)
		{
			cout << i+1 ; flag2 =0; break ; 
		}
		}
		if(a.empty()==0 && flag2)
		cout << flag+1 ; 
		else if(flag2) cout << "Success" ; 
}
