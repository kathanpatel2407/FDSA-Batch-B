#include<iostream>
using namespace std;
int main()
{
    int a[50];
    int n,r;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter array of element:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter no of left rotation:";
    cin>>r;
    r=r%n;
    for(int j=0;j<r;j++)
    {
        int f=a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=f;
    }
    cout<<"Array after left rotation:";
    for(int i=0;i<n;i++)
    {
            cout<<a[i]<<" ";
    }
    return 0;
}

