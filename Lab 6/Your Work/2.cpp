#include<bits/stdc++.h>
using namespace std;
void is(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int k=a[i];
        int j=i-1;

        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}

void p(int a[],int size){
    for(int i=0;i<size;i++)
    cout<<a[i]<< " ";
    cout<<"\n";

}

int main()
{
    int a[]={12, 11, 13, 5, 6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted array: ";
    p(a,n);

    is(a,n);
    cout<<"Sorted array (Insertion Sort): ";
    p(a,n);
}