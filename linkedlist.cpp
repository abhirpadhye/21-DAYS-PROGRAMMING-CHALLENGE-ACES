// I learnt the basics and theory of linked list and reated the following program


// Program to create a simple linked list with 3 nodes

#include<iostream>
using namespace std;

struct Node{
	int value;
	Node *next;
};

void printlist(Node *n){
	while(n!=NULL){
		cout<< n->value;
	    n=n->next;
	}
	
}

int main(){
	Node *head =NULL;
	Node *second=NULL;
	Node *third=NULL;
	
	head = new Node;
	second = new Node;
	third = new Node;	
	
	head->value = 1; 
    head->next = second;
    
    second->value=2;
    second->next=third;
    
    third->value=3;
    third->next=NULL;
    
    printlist(second);
    return 0;
	
}
