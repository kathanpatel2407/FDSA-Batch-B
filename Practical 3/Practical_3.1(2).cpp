#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of marks:";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks:\n";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=1;i<n;i++)
    {
        int temp=marks[i];
        int j=i-1;
        while(j>=0&&marks[j]>temp)
        {
            marks[j+1]=marks[j];
            j--;
        }
        marks[j+1]=temp;
    }
    cout<<"-------------"<<endl;
    cout<<"The Sorted Array:";
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<",";
    }
    cout<<"]"<<endl;
    return 0;
}

