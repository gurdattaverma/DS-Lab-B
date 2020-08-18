/*
  Name : Vishal Rathi
  Roll Number : 303302219121
  Date : 17-Aug-2020
  Purpose : Code for algorithm of inserting items in even indices of an array
  (From left to right - Assumed)
*/

#include <iostream>

void evenInsertion(int, int, int[], int);

int main()
{
  int n,lb,ub,max;

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

  //calling the evenInput Function
  evenInsertion(lb,ub,arr,max);

  // Triversing the array
  for(int i=lb;i<=ub;i++)
  {
    std::cout << arr[i] << "\t" ;
  }

  return 0;
}

void evenInsertion(int lb,int ub,int list[],int max)
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
    std::cout << "\nEnter element to insert at " << j << "index:";
    std::cin >> item;
    for(i=ub;;i--)
    {
      list[i]=list[i-1];
      if(i==j)
      {
        break;
      }
    }
    list[j] = item;
    j=j+2;
  }

}
