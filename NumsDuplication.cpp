#include <iostream>
#include <cstring>
using namespace std; 
void coutS(int* a,int len){
	for(int i=0;i<len;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void swap(int* nums, int i, int j) {
    int t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
    
}
void duplicate(int* nums,int length,int* duplication){
    if (length<=0)
        return;
    for (int i=0; i<length; i++){
        while(nums[i]!=i){
            if(nums[i]==nums[nums[i]]){
                duplication[nums[i]]++ ;
                break;
            }
            swap(nums, i, nums[i]);
        }
    }
}

void print(int* nums,int n){
	for(int i=0;i<n;i++) cout<<nums[i]<<" ";
	cout<<endl;
}

int main (){
	int n;
	cin>>n;
	int* dup=new int[n];
	memset(dup,0,sizeof(dup));
	int* in=new int[n];
	for(int i=0;i<n;i++){
		cin>>in[i];
	}
	print(dup,n);
//	cout<<"ÓÐÖØ¸´£º"<<duplicate(in,n,dup)<<endl;
	return 0;
}
