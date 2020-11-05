//SELECTION SORT

#include<iostream>
using namespace std;


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
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
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
