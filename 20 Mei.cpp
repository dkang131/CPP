/*simple calculator

1. Add
2. Subtract
3. Multiply
4. Divide

*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c;


    cout << "Menentukan akar dari persamaan kuadrat \n";
    cout << "Konstanta a: ";
    cin >> a;
    cout << "Konstanta b: ";
    cin >> b;
    cout << "Konstanta c: ";
    cin >> c;

    float d = ((b*b)-(4*a*c));

    if (d == 0){
        cout << d <<"Akarnya sama";
    }
    else if (d > 0){
        cout << d <<"Akarnya beda";
    }
    else if (d < 0) {
        cout << d <<"Akar tidak nyata";
    }

    return 0;

}
