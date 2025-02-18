#include <iostream>

int main() {
    //Schreiben Sie Code, welcher die Multiplikationstabelle von 1 bis n ausgibt. Lesen Sie n ein.
int n;

std::cout << "Bitte geben Sie eine Zahl n ein: ";
std::cin >> n;
std::cout << "Multiplikationstabelle von 1 bis " << n << ":\n";
    for (int i = 1; i <= n; i++) {
				            for (int j = 1; j <= n; j++) { 
				                        std::cout << i * j << "\t";
				                                }
				                                        std::cout << std::endl; 
				                                            }
    
    return 0;
}
