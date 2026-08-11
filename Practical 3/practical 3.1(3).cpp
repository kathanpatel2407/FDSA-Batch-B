#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the No. of Marks:";
    cin>>n;
    int marks[n];
    cout<<"Enter the values of Marks:\n"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(i=0;i<n;i++)
    {
        int mi=i;
        for(int j=i+1;j<n;j++)
        {
            if(marks[j]<marks[mi])
            {
                mi=j;
            }
            int temp=marks[i];
            marks[i]=marks[mi];
            marks[mi]=temp;
        }
    }
    cout<<"-------------"<<endl;
    cout<<"The Sorted Marks:";
    cout<<"[";
    for(i=0;i<n;i++)
    {
        cout<<marks[i]<<",";
    }
    cout<<"]"<<endl;
    return 0;
}
