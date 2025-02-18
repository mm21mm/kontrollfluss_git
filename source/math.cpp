#include <iostream>
#include <cmath>
//Schreiben Sie eine Funktion welche die Summe zweier Ints berechnet
int sum(int a, int b){
return a+b;}
//
////Schreiben Sie eine Funktion, welche die Diffrenz von zwei Ints berechnet.
int difference(int a, int b){
return a - b;}
///
/////Schreiben Sie eine Funktion, welche das Produkt von zwei Ints berechnet.
int product(int a, int b){
return a*b;}
///
/////Schreiben Sie eine Funktion, welche die Potenz berechnet.
int power(int base, int exponent){
 return std::pow(base, exponent);}
///
/////Schreiben Sie eine Funktion, welche die Wurzel eines Ints bestimmt.
double square_root(int num){
return std::sqrt(num);}
///
/////Schreiben Sie eine Funktion, welche den Betrag eines Ints bestimmen.
int absolute(int num){
return std::abs(num);}
///
/////Schreiben Sie eine Funktion, welche die Faklutät eines Ints bestimmt.
long long factorial(int num){
if (num < 0) return -1;
long long result = 1;
for(int i =1; i<=num; i++){
result *= i;}
}
///
/////Schreiben Sie eine Funktion, welche alle Integer ausgibt bis zum Übergegenen. Was machen wir, wenn der Übergebene Int negativ ist?
void print_numbers(int n){
if(n < 0){
	std::cout << "Negative numbers are not supported.\n";
return;} 

for(int i = 0; i <= n; i++){
	std::cout << i << " ";}
std::cout << std::endl;
}
///
/////Schreiben Sie eine Funktion, die Bestimmt ob, die Zahl eine Primzahl ist.
bool is_prime(int num){
if (num < 2) return false;
for(int i=2; i*=i; i++){
if(num% i == 0)  return false;
}
return true;
}
///
/////Schreiben Sie eine Funktion, die Fibonacci Zahl bestimmt.
int fibonacci(int n){
if (n <= 0) return 0;
if (n == 1) return 1;
return fibonacci(n - 1) + fibonacci(n - 2); 
}
///
///


///        Die Aufgabe ist es einen Taschenrechner zu schreiben.
///            Dieser liest einen Number ein, welcher bestimmt welche Rechenoperation wir durchführen.
//                Danach lesen wir zwei weitere Integer ein, auf denen die Rechenoperation ausgeführt werden soll.
  //                  Dabei ist egal, wie viele Zahlen die Operation braucht. Wir lesen einfach immer 2 ein und ignorieren wenn die zweite.
//
 //                       Dieser Taschenrechner soll so lange aktiv bleiben, bis die Rechenoperation Null kommt.
                            void calculator() {
			   int operation, a, b;
			   do {
				   std::cout << "\n Waehlen Sie eine Operation: "
					    << "\n1: Addition"
					   << "\n2: Substraktion"
					    << "\n3: Multiplikation"
					     << "\n4: Potenz"
					      << "\n5: Quadratwurzel"
					       << "\n6: Betrag"
					        << "\n7: Fakultat"
						 << "\n8: Zahlen ausgeben bis N"
						  << "\n9: Primzahlprufung"
						   << "\n10: Fibonacci-Zahl"
						    << "\n0: Beenden"
						     << "\nEingabe: ";
						    std::cin >> operation;

				   if (operation == 0) break;

				   if (operation == 5|| operation == 6||operation == 7||operation == 8||operation == 9||operation == 10 ){
					   std::cout << "Geben Sie zwei Zahlen ein: ";
				           std::cin >> a;}
			  

			     else {
				   std::cout << "Geben Sie zwei Zahlen ein: ";
			           std::cin >> a >> b;
							           }

			           switch (operation) {
					                                  case 1: std::cout << "Ergebnis: " << sum(a, b) << std::endl; break;
							                   case 2: std::cout << "Ergebnis: " << difference(a, b) << std::endl; break;
									   case 3: std::cout << "Ergebnis: " << product(a, b) << std::endl; break;
						                          case 4: std::cout << "Ergebnis: " << power(a, b) << std::endl; break;
							                  case 5: std::cout << "Ergebnis: " << square_root(a) << std::endl; break;
							                case 6: std::cout << "Ergebnis: " << absolute(a) << std::endl; break;
							               case 7: std::cout << "Ergebnis: " << factorial(a) << std::endl; break;
						                   case 8: print_numbers(a); break;
   							             case 9: std::cout << (is_prime(a) ? "Primzahl" : "Keine Primzahl") << std::endl; break; 					                                                                                case 10: std::cout << "Ergebnis: " << fibonacci(a) << std::endl; break;
																														                default: std::cout << "Ungültige Eingabe!" << std::endl;  }
			
			   }	 while (operation != 0);
			    }
			    			    
			    


                                    int main() {
			        calculator();
                                return 0;
                                }


