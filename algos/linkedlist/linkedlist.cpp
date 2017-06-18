/*
Linked list using pass by value
*/
#include<stdio.h>
#include<conio.h> 

using namespace std;

// Each linked list node traits
struct Node {
	int data; // data of each node
	struct Node * next; //next points to the next Node of linked list.
};


Node*getNewNode(int data){
	Node*newNode  = new Node();//Dynamic allocation from heap pool
	(*newNode).data = data;//same as newNode->data = data
	(*newNode).next = NULL;
	return newNode;
}
/*
- Node**phead is a pointer to pointer i.e. it points to a pointer that stores the
- head of the linkedlist i.e head.
- *phead points to the first element of linked list i.e. head.
*/
void insert (Node**phead , int data){
	if(*phead == NULL){ // checking if out first ele head is NULL(Initially it will be.)  
		*phead = getNewNode(data);
//		return head; 
	} else
	{
		Node*temp = getNewNode(data);
		/* 
		-*phead stores head ptr address but its still phead
		-*(*phead).data gives us the data value stored at head , it is now head.
		*/
		(*(*phead)).next = temp; //just linking head to newly created node temp
//		return temp;
	}
}

int main(){
	//empty list
	struct Node*head  = NULL;
	struct Node*start = NULL; 
	insert(&head,1);
	insert(&head,2);
	while(head!=NULL){
	 printf("%d",head->data);
	 head = (*head).next;
	}
		
}


