#include <iostream>
using namespace std;
void display(int marks[],int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<marks[i];
        if(i<n-1)
            cout<<",";
    }
    cout<<"]"<<endl;
}
void insertionSort(int marks[],int n)
{
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
}
void selectionSort(int marks[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mi=i;

        for(int j=i+1;j<n;j++)
        {
            if(marks[j]<marks[mi])
            {
                mi=j;
            }
        }
        int temp=marks[i];
        marks[i]=marks[mi];
        marks[mi]=temp;
    }
}
void bubbleSort(int marks[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-j-1;i++)
        {
            if(marks[i]>marks[i+1])
            {
                int temp=marks[i];
                marks[i]=marks[i+1];
                marks[i+1]=temp;
            }
        }
    }
}
int main()
{
    int n,choice;

    cout<<"Enter the No. of Marks: ";
    cin>>n;
    int marks[n];
    cout<<"Enter the values of Marks:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    cout<<"\n----- SORTING MENU -----"<< endl;
    cout<<"1. Insertion Sort"<<endl;
    cout<<"2. Selection Sort"<<endl;
    cout<<"3. Bubble Sort"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
            insertionSort(marks,n);
            cout<<"\nSorting using Insertion Sort"<<endl;
            break;

        case 2:
            selectionSort(marks,n);
            cout<<"\nSorting using Selection Sort"<<endl;
            break;

        case 3:
            bubbleSort(marks,n);
            cout<<"\nSorting using Bubble Sort"<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            return 0;
    }
    cout<<"-------------"<<endl;
    cout<<"The Sorted Marks:";
    display(marks,n);
    return 0;
}
