//Program for linear search


#include<iostream>

using namespace std;

void arraytraverse(int,int,int[],int);
int linearsearch(int,int,int[],int,int);

int main(){
	int list[5],lb,ub,item;
	//Input array
	cout<<"Enter elements of array";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"Enter LB and UB";
	cin>>lb>>ub;
	cout<<"Enter item to search";
	cin>>item;
	int oi=linearsearch(lb,ub,list,item,5);
	if(oi==-1){
		cout<<"not found";
	}
	else{
		cout<<"item found at:"<<oi;
	}
	 
}

int linearsearch(int lb,int ub,int list[],int item, int max){
		if(ub>max){
		cout<<"Error";
		return -1;
	}
	if(lb>ub){
		cout<<"Error";
		return -1;
	}
	for(int i=lb;i<=ub;i++){
		if(list[i]==item){
			return i;
		}
	}
	return -1;
}

void arraytraverse(int lb,int ub,int list[],int max){
	if(ub>max){
		cout<<"Error";
		return;
	}
	if(lb>ub){
		cout<<"Error";
		return;
	}
	for(int i=lb;i<=ub;i++){
		cout<<"\t"<<list[i];
	}
}

