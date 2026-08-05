#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"Enter size of an array:";
    cin>>n;
    cout<<"Enter numbers:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Duplicate numbers:";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}
