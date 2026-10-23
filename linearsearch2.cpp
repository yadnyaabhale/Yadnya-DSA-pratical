
#include <iostream>
using namespace std;
int linear_search (int a[],int n , int x)
{
    for (int i=0 ;i<n;i++)
    {
        if (a[i]==x)
        {
            return i;
        
        }
    }
        return (-1);
    
}
int main()
{
    int n;
    int a[20];
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter"<<n<<"element"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter thr search number ";
    cin>>x;
    int result=linear_search(a,n,x);
    if (result==-1)
    {
        cout<<"element"<<x<<"found  not at index"; 
  

    }
    else{
        cout<<"element"<<x<< "found  at index:"<<result;

    }
    return (0);

}
\\ > cd "d:\yadnya\" ; if ($?) { g++ linear.cpp -o linear } ; if ($?) { .\linear }
enter the size of the array 5
enter5element
1 2 3 4 5 
enter thr search number 3
element3found  at index:2