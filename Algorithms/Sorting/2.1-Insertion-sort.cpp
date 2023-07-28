#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];

        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;

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
