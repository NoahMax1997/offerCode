#include <iostream>
#include <vector>
using namespace std;
//ตÝน้
typedef struct n{
	int val;
	n* next; 
}Node;
Node* start=new Node;
Node* ret=new Node;
void reverseLink(Node* head){
	if(head==NULL) ret=NULL;
	else{
		reverseLink(head->next);
		ret->val=head->val;
		ret=ret->next;
		ret=new Node;
	}
}
void print(Node* head){
	Node* t=head;
	while(t!=NULL){
		cout<<(t->val)<<"->";
		t=t->next;
	}
	cout<<endl;
}
void initLink(Node* head){
	int n;
	cin>>n;
	Node* tail=head;
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
	reverseLink(start);
	print(ret);
	return 0;
}
