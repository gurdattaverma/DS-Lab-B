#include<iostream>  
  
using namespace std; 
  
int arraytrav(int[],int,int,int);
int main() 
{       
	int a[10];
	for(int i=0;i<=9;i++){
		cin>>a[i];
	}
	int ans=arraytrav(a,0,3,10);
    return 0; 
} 

int arraytrav(int a[],int lb,int ub, int max){
	if(ub>max){
		return 0;		
	}
	for(int i=lb;i<=ub;i++){
		cout<<"\t"<<a[i];	
	}
}

