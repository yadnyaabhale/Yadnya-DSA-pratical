#include <iostream>
using namespace std;
# define max 5
class stack
{
   private:
   int a[5];
   int top;
   public:
   stack ()
   {
    top=-1;
   }
   int empty()
   {
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
   }
   int full()
   {
    if (top==max-1)
    {
        return 1;
    }
    else{
        return 0;
    }

   }
   void push(int x)
   {
    top++;
    a[top]=x;
   }
   int pop()
   {
    int x=a[top];
    top--;
    return (x);
   }
   void display ()
   {
    for(int i=top;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
   }
   



};
int main()
{
    stack s;
    if(!s.full())s.push(10);
    if (!s.full())s.push(20);
    if (!s.full())s.push(30);
     s.display();
     if(!s.empty())
     cout<<"popped out" <<endl<<s.pop();
     
     s.display();
     return 0;


}
/*Running] cd "c:\Users\abhal\OneDrive\Desktop\Visual Stdio\yadnya c++\" && g++ stack.cpp -o stack && "c:\Users\abhal\OneDrive\Desktop\Visual Stdio\yadnya c++\"stack
30
20
10
popped out
3020
10*/