#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;

    cout << x << endl ;
    cout << y << endl ;

    cout << "-----------------" << endl;

    int z ;
    z = x;
    x = y;
    y = z;

    cout << x << endl ;
    cout << y << endl ;

    cout << "-----------------";
}
