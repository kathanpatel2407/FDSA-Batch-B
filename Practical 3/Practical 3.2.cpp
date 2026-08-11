#include <iostream>
using namespace std;
int sortcolors(int a[],int n)
{
    int i;
    int in=0;
    int c0=0;
    int c1=0;
    int c2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            c0++;
        else if(a[i]==1)
            c1++;
        else
            c2++;
    }
    for(i=0;i<c0;i++)
    {
        a[in]=0;
        in++;
    }
    for(i=0;i<c1;i++)
    {
        a[in]=1;
        in++;
    }
    for(i=0;i<c2;i++)
    {
        a[in]=2;
        in++;
    }
}
int main()
{
    int n;
    cout<<"Enter number of buckets:";
    cin>>n;
    int a[n];
    cout<<"Enter colour codes(0,1,2):"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sortcolors(a,n);
    cout<<"Sorted colour codes: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
