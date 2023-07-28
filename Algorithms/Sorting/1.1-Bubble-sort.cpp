#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    int flag;  // TO make adaptive
    for(int i=0; i<n-1; i++)
    {
        flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
         break;
    }
}

int main()
{
    int a[]={4,3,1,5,2};
    int n=5;
    
   bubble_sort(a,n);
   
   //printing sorted array using range based loop
    for(auto i : a)
    {
        cout<<i<<" ";
    }

    return 0;
}
