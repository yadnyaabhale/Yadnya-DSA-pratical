
#include <iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
int  first=0;
int last=n-1;
int mid;
while (first<=last) 
{
    mid=(first + last)/2;
    if ( a[mid]==x)
    {
      return mid ;
    }
  else if (a[mid]<x)
  {
    first=mid+1;
  }
  else 
  {
   last= mid-1;
  }

}
return(-1);

}
int main()
{
    int n,x;
    int a[20];
    cout<<"enter the sixe of array";
    cin>>n;
    cout <<"enter"<<n<<"sorted integer";
    for( int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter the target elememt";
    cin>>x;
    int position=binary_search(a,n,x);
    if(position !=-1)
    cout<<"element found at position:"<<position<<endl;
    else
    cout<<"element not found"<<endl;
    return 0;
}
\\PS C:\Users\Student> cd "d:\yadnya\" ; if ($?) { g++ binary.cpp -o binary } ; if ($?) { .\binary }
enter the sixe of array 3 
enter3sorted integer 1 2 3 
enter the target elememt2
element found at position:1
