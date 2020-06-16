#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Introdu lungimea primei catete: " << endl;
    int A;
    cin>>A;
    cout << "Introdu lungimea celei de-a doua cateta:" << endl;
    int B;
    cin>>B;
    float C=sqrt (A*A+B*B);
    cout<< "Lungimea ipotenuzei este : "<<C << endl;
    return 0;
}
