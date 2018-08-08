#include<iostream>
using namespace std;

class node{
	public:
	int value;
	node *next;
};


node create_node(int n){
	node new_node;
	new_node.value = n;
	new_node.next = NULL;
	return new_node;
}

void insert(node* &n, int val){
	if(n == NULL){
		//this is first node
		node temp = create_node(val);
		n->value = temp.value;
		n->next = temp.next;
	}
	else{
		//this is not first node
		insert(n->next,val);
	}
}

void print(node* &n){
	while(n->next != NULL){
		cout<<n->value<<" -> ";
		n = n->next;
	}
}


int main(){

	node *n= NULL;
	print(n);
	cout<<endl;
	insert(n,21);
	insert(n,45);
	print(n);	

	return 0;
}
