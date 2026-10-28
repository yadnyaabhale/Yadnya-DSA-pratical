#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};
class stack
{
private:
node*top;
public:
stack()
{
top=NULL;    
}    
int empty()
{
if (top==NULL)
{
    return(1);
}
else
{
return(0);
}
}
void push(int x)
{
node*p=new node(x);    
p->next=top;
top=p;
}
int pop()
{
int x=top->data;
node*p=top;
top=top->next;
delete p;
return(x);    
}
void display()
{
node*q=top;
while(q!=NULL)
{
cout<<endl<<q->data;
q=q->next;    
}    
}
int peek()
{
    return(top->data);
}

};
int main()
 {
    int x;
    stack s;

    s.push(99);
    s.push(88);
    s.push(77);
    s.push(55);
    s.push(33);
    s.push(10);
    
    s.display();

    if (!s.empty()) {
        x = s.pop();
        cout << endl << "Removed" << x;
    }
    
    s.display();

    x = s.peek();
    cout << endl << "Top Element is:" << x;

    return 0;
}

/*Removed10
33
55
77
88
99
Top Element is:33
PS D:\shruti badhe> */
