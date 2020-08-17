//Program for traverse array

#include<iostream>

using namespace std;

void travarray(int[],int,int,int);

int main(){
	int ip[10],lb,ub;
	cout<<"Enter Elements of array";
	for(int i=0;i<=9;i++){
		cin>>ip[i];
	}
	cout<<"Enter the value of lower bound";cin>>lb;
	cout<<"Enter the value of upper bound";cin>>ub;
	
	//function call
	travarray(ip,lb,ub,10);
	return 0;
}

void travarray(int ip[],int lb,int ub, int max){
	if(lb>ub){
		cout<<"error";
		return;
	}
	if(ub>max){
		cout<<"error";
		return;
	}
	for(int i=lb; i<=ub;i++){
		cout<<"\t"<<ip[i];
	}
}

