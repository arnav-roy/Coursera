#include<bits/stdc++.h>
using namespace std;
struct obj
{
	int value , weight; long double quality ; 	
}; 
bool my_func( obj i , obj j)
{
	return (i.quality > j.quality) ; 
}
int main()
{
	long long int n,max_weight;
	cin >> n >> max_weight ; 
	
	obj a[n]; 
	for (long long int i = 0 ; i < n ; i++)	
 	{
 		cin >> a[i].value >> a[i].weight ; 
 		a[i].quality = a[i].value/ a[i].weight ; 		 
	}
	
	sort(a , a+n , my_func) ;
	long double total_value = 0 , sum_weight = 0 ; 
	for(long long int i = 0 ; i < n ; i++)
	{
		if(sum_weight + a[i].weight <= max_weight)
		{
			total_value+= a[i].value ; 
			sum_weight += a[i].weight ; 
		}
		else
		{
			total_value = (max_weight - sum_weight) * (a[i].value) / (a[i].weight) ; 
			i = n ; 
 		}
	}
	cout << fixed << setprecision(4)<<total_value ; 
	
	
 
 
 }
