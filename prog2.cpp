//Program for insertion on array

#include<iostream>

using namespace std;

void arrayinsertion(int,int,int[],int,int,int);
void travarray(int[],int,int,int);

int main(){
	int ip[10],lb,ub,pos,item;
	cout<<"Enter Elements of array";
	for(int i=0;i<10;i++){
		cin>>ip[i];
	}
	cout<<"Enter the value of lower bound";cin>>lb;
	cout<<"Enter the value of upper bound";cin>>ub;
	cout<<"Enter the pos";cin>>pos;
	cout<<"Enter the value of item";cin>>item;
	//function call
	arrayinsertion(lb,ub,ip,pos,item,9);
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

void arrayinsertion(int lb,int ub,int ip[],int pos, int item,int max){
	cout<<"Input Array :";
	travarray(ip,lb,ub,10);
	if(lb>ub){
		cout<<"error";
		return;
	}
	if(ub>max){
		cout<<"error";
		return;
	}
	for(int i=ub; ;){
		ip[i]=ip[i-1];
		i=i-1;
		if(i==pos+lb-1){
			break;
		}
	}
	ip[pos+lb-1]=item;
	cout<<"\n";
	cout<<"Output Array:";
    travarray(ip,lb,ub,10);
}

