#include<iostream>
using namespace std;
int linear_search( int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return(1);
        }
    }
    return(-1);
     
}
int main()
{
int n=3;
int a[]={1,2,3,5};
cout<<"enter an array";
cin>>n;
cout<<"enter"<<n<<"element"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int x;
cout<<"enter the search"<<endl;
cin>>x;
int result=linear_search(a,n,x);
if(result !=-1)
{
    cout<<"element is not found at index"<<result;
}
else{
    cout<<"element is fount at index";
}
return (0);



}
