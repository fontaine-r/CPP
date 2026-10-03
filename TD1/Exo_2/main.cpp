#include "Complex2D.h"
#include <iostream>
using namespace std;

int main(){
    Complex2D z0;

    cout << "\nz0 = 0\nPartie réelle : ";
    cout << z0.getA();
    cout << "\nPartie imaginaire : ";
    cout << z0.getB();
    cout << "\n\n";

    Complex2D z1(1,2.5);

    cout << "z1 = 1 + 2,5i\nPartie réelle : ";
    cout << z1.getA();
    cout << "\nPartie imaginaire : ";
    cout << z1.getB();
    cout << "\n\n";

    z1.setA(3.14);
    cout << "On change la partie réelle de z1 en 3,14\nPartie réelle : ";
    cout << z1.getA();
    cout << "\nPartie imaginaire : ";
    cout << z1.getB();
    cout << "\n\n";

    Complex2D z2(5);

    cout << "z2 = 5 + 5i\nPartie réelle : ";
    cout << z2.getA();
    cout << "\nPartie imaginaire : ";
    cout << z2.getB();
    cout << "\n\n";

    cout << "Module de z2 : ";
    cout << z2.module();
    cout << "\n\n";

    Complex2D z3(z1);

    cout << "z3 = z1\nPartie réelle : ";
    cout << z3.getA();
    cout << "\nPartie imaginaire : ";
    cout << z3.getB();
    cout << "\n\n";

    Complex2D z4=z2+z3;

    cout << "z4 = z2 + z3\nPartie réelle : ";
    cout << z4.getA();
    cout << "\nPartie imaginaire : ";
    cout << z4.getB();
    cout << "\n\n";

    Complex2D z5=z2-z1;

    cout << "z5 = z2 - z1\nPartie réelle : ";
    cout << z5.getA();
    cout << "\nPartie imaginaire : ";
    cout << z5.getB();
    cout << "\n\n";

    Complex2D z6=z1/z4;

    cout << "z6 = z1 / z4\nPartie réelle : ";
    cout << z6.getA();
    cout << "\nPartie imaginaire : ";
    cout << z6.getB();
    cout << "\n\n";

    cout << "z4 > z5 ? ";
    cout << (z4>z5);
    cout << "\n";
    cout << "z4 < z5 ? ";
    cout << (z4<z5);
    cout << "\n\n";

    return 0;
}