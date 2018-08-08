#include<iostream>
using namespace std;

class stack{
	double *A;
	int n;
	static int top;
	public:
	stack();
	stack(double*, int, int);
	stack(int);
	static void resetTop(){top = 0;}
	bool push(double);
	bool pop();
	void print();
	double topVal();
	int size();
	bool isEmpty();
};

int stack::top = 0;


stack::stack():n(0){
	A = NULL;
}
stack::stack(double *arr, int nArr,int no_of_elem):n(no_of_elem){
	A = new double[no_of_elem];
	for(int i=0; i<nArr; i++){
		A[i] = arr[i];
		top++;
	}
}
stack::stack(int no_of_elem){
	this->n = no_of_elem;
	A = new double[this->n];
}
bool stack::push(double value){
	if(top == n){
		//stack is full
		cout<<"Stack is full"<<endl;
		cout<<"Want to encrease stack size Yes:y, No:n : ";
		char choice;
		int new_size;
		cin>>choice;
		if(choice == 'y'){
			cout<<"Enter the new size: ";
			cin>>new_size;
			if(new_size <= this->n){
				cout<<"New size shulde be greater than previaus one.";
			}
			else{
				double *new_A = new double[new_size];
				for(int i=0; i<top; i++) new_A[i] = A[i];
				//update every thing
				this->A = new_A;
				this->n = new_size;
				A[top] = value;
				top++;
				return true;
			}
		}
		else if(choice == 'n'){
			return false;
		}
	}
	else{
		A[top] = value;
		top++;
		return true;
	}
}
bool stack::pop(){
	if(top == 0){
		//stack is empty
		cout<<"Stack is empty, nothing to pop"<<endl;
		return false;
	}
	else{
		top--;
		A[top] = 0;
	}
}

void stack::print(){
	if(top == 0){
		cout<<"Stack is empty, nothing to print."<<endl;
	}
	else{
		for(int i=0; i<top; i++) cout<<A[i]<<endl;
	}
}

double stack::topVal(){
	if(top == 0){
		cout<<"Stack is empty, there is no top element."<<endl;
		return -1;
	}
	else{
		return A[top-1];
	}
}

int stack::size(){
	return top;
}

bool stack::isEmpty(){
	if(top == 0) return true;
	else return false;
}

class queue{
	double *A;
	int n; //size of the queue
	static int front, rear;
	static void resetRear(){ rear = 0;}
        static void resetFront(){front = 0;}
	public:
	queue();
	queue(int);
	queue(double*, int, int);
	bool isEmpty();
	bool isFull();
	bool enqueue(double);
	bool dequeue();
	void print();
};

int queue::front = 0;
int queue::rear = 0;

queue::queue():n(0){
	A = NULL;
}

queue::queue(int no_of_elem):n(no_of_elem){
	A = new double[this->n];
}

queue::queue(double *arr, int nArr, int no_of_elem):n(no_of_elem){
	A = new double[this->n];
	for(int i=0; i<nArr; i++){
		A[i] = arr[i];
		rear++;
	}
}

bool queue::isEmpty(){
	if(front == rear) return true;
	else return false;
}

bool queue::isFull(){
	if(front == rear+1) return true;
	else return false;
}

bool queue::enqueue(double value){
	if(this->isFull()){
		cout<<"Queue is full"<<endl;
		return false;
	}
	else{
		A[rear] = value;
		if(rear == n){
			resetRear();
		}
		else rear++;
		return true;
	}
}

bool queue::dequeue(){
	if(this->isEmpty()){
		cout<<"Queue is empty"<<endl;
		return false;
	}
	else{
		A[front] = 0;
		if(front == n-1){
			resetFront();
		}
		else front++;
		return true;
	}
}

void queue::print(){
	for(int i=0; i<n; i++){
		cout<<A[i]<<endl;
	}
}

int main(){

	stack s(5);	
	/*
	s.print();
	s.push(23);
	s.push(34.5);
	s.push(36);
	s.print();
	cout<<endl<<s.size()<<" "<<s.topVal()<<endl<<endl;
	s.push(21);
	s.push(34);
	s.push(45);
	s.push(90);
	cout<<s.size()<<" "<<s.topVal()<<endl<<endl;
	s.print();*/

	//queue operation

	queue q(5);

	q.enqueue(23);
	q.enqueue(43.8);
	q.enqueue(80);
	q.enqueue(98);
	q.enqueue(566);
	q.print();
	cout<<endl;
	q.dequeue();
	q.dequeue();
	q.enqueue(678.98);
	q.print();

	// queue is not complete
	//deque 10.1-5

	return 0;
}
