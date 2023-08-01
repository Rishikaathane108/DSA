#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int A[],int n)
{
    for(int i=n-1 ; i>=1; i--)
    {
        int didSwap=0;
        for(int j=0 ; j<= i-1 ; j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0)
        {
            break;
        }

    }

}

int main()
{
    int A[]={7,2,8,4};
    bubble_sort(A,4);

    for(auto i: A)
    {
        cout<<i<<" ";
    }
    return 0;
}
