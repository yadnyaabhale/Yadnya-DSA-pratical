#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int temp;
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++) 
        {
            if (a[j]>a[j+1]) 
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            } 
        }
    }
}
int main()
{
    int n;
    int a[10]; 
    cout<<"enter the element to be sort";
cin>>n;
cout<<"enter"<<n<<"unsorted element";
for (int i=0;i<n;i++)
{
    cin>>a[i];
}
bubblesort(a,n);
cout<<"sorted list is :"<<endl;
for (int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
}
/* D:\yadnya> cd "d:\yadnya\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
enter the element to be sort 6 5 8 6 7 9 4 3 0 
enter6unsorted elementsorted list is :
4
5
6
7
8
9
PS D:\yadnya> */
