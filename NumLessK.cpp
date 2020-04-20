#include <iostream>
using namespace std;
int partition(int* a ,int low,int high){
	int temp=a[low];
	while(low<high){
		while(low<high&&a[high]>=temp) high--;
		a[low]=a[high];
		while(low<high&&a[low]<=temp) low++;
		a[high]=a[low];
	}
	a[low]=temp;
	return low;
}
int getTopK(int* input ,int length,int K){
	int low=0,high=length-1;
	int index=partition(input,low,high);
	while(index!=K-1){
		if(index<K-1){
			low= index+1;
			index=partition(input,low,high);
		}else if(index>K-1){
			high=index-1;
			index=partition(input,low,high);
		}
	}
	return input[index];
}
int main (){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<getTopK(a,10,6);
	return 0;
} 
