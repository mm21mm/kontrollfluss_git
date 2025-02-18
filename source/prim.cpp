#include <iostream>

int main() {
    //Aufgabe 3: Schreiben einen Code, welcher ueberprueft ob die Zahl eine Primzahl ist.
    //Auch hier wieder die Zahl n einlesen über das Terminal.
    int n;
    std::cout << "Bitte geben Sie eine Zahl n ein: ";
    std::cin >> n;

    if (n<2){
	    std::cout << n << " ist keine Primzhalz." << std::endl}
    return 0;
}
bool istPrim = true;
for (int i = 2; i * i <= n; i++){
if(n%i == 0){istPrim = false;
	break;
}}
if (istPrim) {
	        std::cout << n << " ist eine Primzahl." << std::endl;
		    } else {
			            std::cout << n << " ist keine Primzahl." << std::endl;
				        }

    return 0;
    }

