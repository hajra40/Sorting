//INSERTION SORT

#include<iostream>
using namespace std;

//recursive method
void insertionSort(int A[],int n)
{
    if(n<=1)
        return;

    insertionSort(A,n-1);
    int last = A[n-1];
    int j= n-2;
    while(j>=0 && A[j]>last)
    {
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = last;
}


//iterative method
int main() {
   int n,i,j,key;
    cout<<"\nEnter size of the array:\n";
    cin>>n;
    int A[n];
    cout<<"\n Enter the elements of the array:\n";
    for(i=0;i<n;i++)
    {
          cin>>A[i];
    }

    insertionSort(A,n);
   // for(int i=1;i<n;i++)
    //{
      //key = A[i];
      //j = i-1;
      //while(j>=0 && A[j]>key)
      //{
        //  A[j+1] = A[j];
         // j = j - 1;
      //}
      //A[j + 1] = key;
    //}
    cout<<"\n Sorted array:\n";
    for(i=0;i<n;i++)
    {
          cout<<A[i]<<" ";
    }
}
