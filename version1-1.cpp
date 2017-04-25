#include <iostream>

using namespace std;

int main ()
{
    int a;
    int b=1;
    
    cout << endl;
    cout << "Gib eine Zahl ein: ";
    cin >> a;
        
    do
    {
        b=b*a;
        a=a-1;
    }
    while(a>0);
    
    cout << endl;
    cout << "Die Fakultät ist " << b << "." << endl;
    cout << endl;
    return 0;
}