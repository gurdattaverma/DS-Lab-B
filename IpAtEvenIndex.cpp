/*
  Name : Vishal Rathi
  Roll Number : 303302219121
  Date : 17-Aug-2020
  Purpose : Code for algorithm of inserting items in even indices of an array
  (From left to right - Assumed)
*/

#include <iostream>

void evenInsertion(int, int, int[], int, int);

int main()
{
  int n,lb,ub,max,num;

  std::cout << "Enter number of elements in array:" ;
  std::cin >> n;

  int arr[n];
  max = n-1;

  std::cout << "enter elements of array:\n" ;
  for(int i=0;i<n;i++)
  {
    std::cin >> arr[i];
  }

  std::cout << "\nEnter the value of lower bound: " ;
  std::cin >> lb;

  std::cout << "\nEnter the value of upper bound: " ;
  std::cin >> ub;

  std::cout << "\nEnter the value to be added in every even indices: " ;
  std::cin >> num;
  //calling the evenInput Function
  evenInsertion(lb,ub,arr,max,num);

  // Triversing the array
  for(int i=lb;i<=ub;i++)
  {
    std::cout << arr[i] << "\t" ;
  }

  return 0;
}

void evenInsertion(int lb,int ub,int list[],int num,int max)
{
  int i,j,item;
  if(lb>ub)
  {
    std::cout << "\n Error" ;
    return;
  }

  if(ub>max)
  {
    std::cout << "\n Overflow Condition";
    return;
  }

  if(lb%2==0)
    j = lb;
  else
    j = lb + 1;
  while(j<=ub)
  {
      list[j] = list[j] + num;
      j = j+2;
  }

}
