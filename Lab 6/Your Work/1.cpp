#include<bits/stdc++.h>
using namespace std;
void bs(int a[],int n){
    bool sw;
    for(int i=0;i<n-1;i++)
    {
        sw=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sw=true;
            }
        }
        if(!sw)
        break;
    }
}

void p(int a[],int size){
    for(int i=0;i<size;i++)
    cout<<a[i]<< " ";
    cout<<"\n";

}

int main()
{
    int a[]={64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted array: ";
    p(a,n);

    bs(a,n);
    cout<<"Sorted array (Bubble Sort): ";
    p(a,n);
    
}