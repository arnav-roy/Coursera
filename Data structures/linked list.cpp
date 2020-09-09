#include<bits/stdc++.h>
using namespace std ; 
class node
{
	public:
		int data ; 
		node *next; 
}; 
int main()
{
	node *head = NULL ; 
	node *first = NULL ; 
	node *second = NULL ; 
	
	head = new node() ;
	first = new node() ; 
	second = new node() ; 
	
	head->data = 2 ; 
	head->next = first ; 
	
	first->data = 3 ; 
	first->next = second; 
	
	second->data = 5 ; 
	
	node *temp = head; 
	
	while(temp->next != NULL)
	{
		cout << temp->data<<" " ; 
		temp = temp->next; 
	}
	cout << temp->data ; 
 
}

