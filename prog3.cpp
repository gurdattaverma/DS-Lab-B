//Prog. for array deletion

#include<iostream>

using namespace std;

void arraytraverse(int,int,int[],int);
void arraydel(int,int,int[],int,int);

int main(){
	int list[5],lb,ub,pos;
	//Input array
	cout<<"Enter elements of array";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"Enter LB and UB";
	cin>>lb>>ub;
	cout<<"Enter POS to del";
	cin>>pos;
	
	//Function call
	cout<<"Before Array";
	arraytraverse(lb,ub,list,5);
	arraydel(lb,ub,list,1,5);
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

void arraydel(int lb,int ub, int list[], int pos, int max){
	if(lb>ub){
		cout<<"Bound error";
		return;
	}
	if(ub>max){
		cout<<"max error";
		return;
	}
	if(pos<lb){
		cout<<"error";
		return;
	}
	
	for(int i=pos-1;i<=ub;i++){
		list[i]=list[i+1];
	}
	cout<<"\n"<<"After";
	arraytraverse(lb,ub,list,5);
}


