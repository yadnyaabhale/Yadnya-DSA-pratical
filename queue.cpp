
#include <iostream>
using namespace std;
# define MAX 5
class queue
{
    private:
    int a[MAX];
    int front;
    int rear;


public:
queue ()
{
front=-1;
rear=-1;
}
int empty()
{
    if (front==-1&&rear==-1)
    {
        return(1);
    }
    else
    {
        return (0);
    }

}
int full()
{
    if (rear==MAX-1)
    {
    return 1;

    }
    else
    {
        return 0;
    }

}
void enqueue(int x)
{
    if (front==-1&&rear==-1)
    {
        front++;
        rear++;
    }
    else{
        rear++;
    }
    a[rear]=x;
}
int dequeue(void)
{
    int x=a[front];
    if (front==rear)
    {
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
    return (x);
}
void display()
{
    for(int i=front;i<rear;i++)
    {
        cout<< "\t"<<a[i];


    }
    cout<<endl;

}
};
int main ()
{
    
    queue q;
    int x;
    q.enqueue(10);
       q.enqueue(30);
         q.enqueue(20); 
       q.enqueue(40);
       q.enqueue(50);

    
     q.display();
     cout<<endl;

    q.dequeue();
    q.display();
    return 0;


}
/*Running] cd "c:\Users\abhal\OneDrive\Desktop\Visual Stdio\yadnya c++\" && g++ queue.cpp -o queue && "c:\Users\abhal\OneDrive\Desktop\Visual Stdio\yadnya c++\"queue
	10	30	20	40

	30	20	40

[Done] exited with code=0 in 3.543 seconds

*/
