#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//recursion
typedef struct n{
	int val;
	n* next; 
}Node;
Node* start=new Node;
Node* ret=new Node;
stack<Node> s;
void reverseListByRecursion(Node* node){
	if(node==NULL) return;
	else if(node->val==-1){
		ret->next=NULL;
		ret->val=-1;
		reverseListByRecursion(node->next);
	}
	else{	
		Node* t=new Node;
		t->val=node->val;
		t->next=ret->next;
		ret->next=t;
		reverseListByRecursion(node->next);
	}
}
void reverseListByHeadInsert(Node* head){
	ret->next=NULL;
	Node* temp=head->next;
	while(temp!=NULL){
		Node* t=new Node;
		t->val=temp->val;
		t->next=ret->next;
		ret->next=t;
		temp=temp->next;
	}
}
void reverseListByStack(Node* head){
	Node* temp=head->next;
   	while(temp!=NULL){
		Node* t=new Node;
		t->val=temp->val;
		s.push(*t);
		temp=temp->next;
	}
	Node* tail=ret;
	while(!s.empty()){
		//Node t=s.top();
		// tail->next=&t; this is wrong;the memery id  of t is always same;
		tail->next=&s.top();
		
		tail=tail->next;
		s.pop();
	}
	tail->next=NULL;
}
void print(Node* head){
 	Node* t=head->next;
	while(t!=NULL){
		cout<<(t->val);
		t=t->next;
		if(t!=NULL) cout<<"->";
	}
	cout<<endl;
}
void initLink(Node* head){
	int n;
	cin>>n;
	Node* tail=head;
	head->val=-1;
//	t=new Node;
//	cout<<"test:"<<(t==head)<<"\n";
	while(n--){	
		Node* t=new Node;
		cin>>t->val;
		t->next=NULL;
		tail->next=t;
		tail=t;	
	}
//	cout<<"test:"<<head->next->val<<"\n";
}
int main (){
	initLink(start);
	print(start);
	// reverseListByRecursion(start);
	// reverseListByHeadInsert(start);
	reverseListByStack(start);
	print(ret);
	return 0;
}
