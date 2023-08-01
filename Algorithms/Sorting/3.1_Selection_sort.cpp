#include<bits/stdc++.h>
using namespace std;

void selection_sort(int A[], int n)
{
    int i,j,min;

    // i for comparisons
    for(i=0;i<=n-1;i++)
    {
        min=i;
  
        // j iterate through remainging list
        for(j=i; j<n ; j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }

        }
        int temp;
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;

    }
}

int main()
{
    int A[]={2,5,10,6,4};

    selection_sort(A,5);

    for(auto i : A)
    {
        cout<<i<<" ";
    }

    return 0;
}
