#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Care e baza mare a trapezuluui?"<<endl;
    int B;
    cin>>B;
    cout<<"Care e baza mica a trapezului?"<<endl;
    int b;
    cin>>b;
    cout<<"Care e inaltimea trapezului?"<<endl;
    int h;
    cin>>h;
    float A=((B+b)*h)/2;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout<<"Aria trapezului e :"<<A<<endl;
    float L=sqrt((((B-b)/2.0)*((B-b)/2.0))+(h*h));
    cout<<"O latura a trapezului e :"<<L<<endl;
    float P=B+b+L+L;
    cout<<"Perimetrul trapezului e :"<<P<<endl;
    return 0;
}
