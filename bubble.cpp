//*********************************************************
//                 Bubble sort
//*********************************************************


//include the required libraries
#include<iostream>
using namespace std;


//Recursive Method
//void bubbleSort(int A[],int n)
//{
    //int temp;

    //Base Case
    //if(n==1)
        //return;

    //for(int i=0;i<n-1;i++)
      //  if(A[i]>A[j+1])
        //{
          //  temp = A[i];
            //A[i] = A[i+1];
            //A[i+1] = temp;
        //}

   // bubbleSort(A,n-1);
//}




int main() {
    int n,temp;
    cout<<"\nEnter the size of Array:";
    cin>>n;
    int A[n];

    //user input
    cout<<"\nEnter elements of Array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    //sort
    //iterative method
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    //display
    cout<<"\nSorted Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
