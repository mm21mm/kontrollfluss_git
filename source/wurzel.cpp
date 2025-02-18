#include <iostream>
using std::cout;
using std::endl;
/*
Aufgabe 4:
Implementieren Sie als Uebung das Heron-Verfahren zur Berechnung der Quadratwurzel einer Zahl.
Das Heron-Verfahren basiert auf der folgenden Formel:
    x_{i+1} = (1/2) * (x_i + S / x_i)
wobei S die Zahl ist, deren Quadratwurzel berechnet werden soll, und x_i der aktuelle Naeherungswert.
*/

int main() {
    double s;
    cout << "Bitte geben Sie eine ganze Zahl ein: ";
    std::cin >> s;
     if(s < 0){
	     cout << "Die Quadratwurzel einer negativen Zahl ist nicht definiert." << endl;
     return 1;}
     
     double x = s;
     double epsilon = 1e-6;

     while(std::abs(x*x - s) > epsilon){
     x = 0.5 * (x + s/ x);
     }
     cout << "Die Quadratwutzel von " << s << "ist ungefaehr " << x << endl;

    return 0;
}
