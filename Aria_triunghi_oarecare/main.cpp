#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Care e lungimea primei laturi a triunghiului?"<<endl;
    int A;
    cin>>A;
    cout<<"Care e lungimea celei de-a doua laturi a triunghiului?"<< endl;
    int B;
    cin>>B;
    cout<<"Care e lungimea celei de-a treia laturi a triunghiului?"<<endl;
    int C;
    cin>>C;
    cout<<"Semiperimetrul triunghiului e:";
    float p=(A+B+C)/2.0;
    cout<<p<<endl;
    cout<<"Aria triunghiului e:"<<endl;
    float a=sqrt(p*(p-A)*(p-B)*(p-C));
    cout<<a<<endl;
    return 0;
}
