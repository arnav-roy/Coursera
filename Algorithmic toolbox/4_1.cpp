#include<bits/stdc++.h>

using namespace std;
typedef long long int intt ;
intt binary_src(intt a[] , intt b ,intt low, intt high)
{

while(high-low != 1)
{
intt mid = (high + low) /2 ; 
if(a[mid] > b) 
{
	high = mid ;
 } 
 else if(a[mid] < b)
 {
 	low = mid ;  
 }
 else 
 return mid ; 
}
if(a[low] == b) return low ; 
else if(a[high] == b) return high ; 
else return -1 ; 


}
int main()
{
	intt n ; cin >> n ; 
	intt a[n] ; 

	for(intt i = 0 ; i < n ; i++)
	cin >> a[i] ; 
	intt m ; cin >> m ;	intt b[m] ; 
	for(intt i = 0 ; i < m ; i++) 
	{ 
	cin >> b[i] ; 
	//cout << " hie " ; 
	cout << binary_src(a,b[i], 0 ,n-1) <<" "; 
	
	}
}
