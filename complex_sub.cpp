
#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {
    real=r;
    imag=i;
    }
    ~complex()
    {

    }
    void display (void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator- (complex c)
    {
        float r=real-c.real;
        float i=imag-c.imag;
        return complex(r,i);
    }
    
};
int main()
{
    complex c1(20,30);
    cout<<" 1 complex no is "<<endl;
    c1.display();
    complex c2(50,20);
    cout<<" 2 complex no  c2 is"<<endl;
    c2.display();
    complex c3(30,50);
    cout<<" 3 complex of c3 is"<<endl;
    c3.display();
    complex c4(90,10);
    cout<<"4 complex of c4 is"<<endl;
    c4.display();
    complex diff=c1-c2;
    cout<<"diffrence of complex no. is"<<endl;
    diff.display();
    return(0);
}
\\
      > cd "d:\yadnya\" ; if ($?) { g++ complex_sub.cpp -o complex_sub } ; if ($?) { .\complex_sub }
 1 complex no is 
20+30i
 2 complex no  c2 is
50+20i
 3 complex of c3 is
30+50i
4 complex of c4 is
90+10i
diffrence of complex no. is
-30+10i