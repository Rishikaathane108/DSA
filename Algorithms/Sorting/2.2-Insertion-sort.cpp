#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && A[j-1]>A[j])
        {
            swap(A[j-1],A[j]);
            j--;
        }
    }
}

int main()
{
    int A[]={2,5,10,6,4};
    
    insertion_sort(A,5);

    for(auto i : A)
    {
        cout<<i<<" ";
    }

    return 0;
}
