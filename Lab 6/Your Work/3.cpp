#include<bits/stdc++.h>
using namespace std;
void ss(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        if(min!=i)
            swap(a[min],a[i]);
    }
    
}

void p(int a[],int size){
    for(int i=0;i<size;i++)
    cout<<a[i]<< " ";
    cout<<"\n";

}
int main(){
    int a[]={64, 25, 12, 22, 11};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted array: ";
    p(a,n);

    ss(a,n);
    cout<<"Sorted array (Selection Sort): ";
    p(a,n);
}