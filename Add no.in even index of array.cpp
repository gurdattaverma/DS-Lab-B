//Program to add input number in the even index of array.

#include<iostream>

using namespace std;

void travarray(int[],int,int,int,int);

int main(){
	int ip[10],lb,ub,n;
	cout<<"Enter Elements of array";
	for(int i=0;i<=9;i++){
		cin>>ip[i];
	}
	cout<<"Enter the value of lower bound";cin>>lb;
	cout<<"Enter the value of upper bound";cin>>ub;
	cout<<"Enter the value of no.:-";cin>>n;
	//function call
	travarray(ip,lb,ub,n,10);
	return 0;
}

void travarray(int ip[],int lb,int ub,int n, int max){
	if(lb>ub){
		cout<<"error";
		return;
	}
	if(ub>max){
		cout<<"error";
		return;
	}
	for(int i=lb; i<=ub;i++){
		if(i%2==0)
		ip[i]=ip[i]+n;
		
		cout<<"\t"<<ip[i];
	}
}


