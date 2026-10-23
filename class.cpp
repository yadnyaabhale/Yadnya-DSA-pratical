
#include <iostream>
using namespace std;
class rectangle 
{
    private:
    float   length ;
    float  breadth;
    public:
    rectangle ()
    {
        length =0.0;
        breadth=0.0;
    
    }
    rectangle (float l,float b){
    length=l;
    breadth=b;
    }
    rectangle (float size)
    {
        length=size;
        breadth=size;

    }
    float area()
    {
        return length*breadth;
    }


};
int main ()
{
    rectangle r1;
    rectangle r2(2.0,3.0);
    rectangle r3(70);
    cout<<"area of rect "<<r1.area()<<endl;
    cout<<"area of rect2: "<<r2.area()<<endl;
    cout<<"area of square "<<r3.area ()<<endl;
    return 0;


}