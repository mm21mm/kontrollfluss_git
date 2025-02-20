#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

int sum(int a, int b) { return a + b; }
int difference(int a, int b) { return a - b; }
int product(int a, int b) { return a * b; }
double power(int a, int b) { return std::pow(a, b); }
double squareRoot(int a) { return std::sqrt(a); }
int absolute(int a) { return std::abs(a); }

int factorial(int a) {
	    if (a < 0) return -1;
	        int result = 1;
		    for (int i = 2; i <= a; ++i) result *= i;
		        return result;
}

void printNumbersUpTo(int a) {
	    if (a < 0) return;
	        for (int i = 0; i <= a; ++i) std::cout << i << " ";
		    std::cout << std::endl;
}

bool isPrime(int a) {
	    if (a < 2) return false;
	        for (int i = 2; i * i <= a; ++i)
			        if (a % i == 0) return false;
		    return true;
}

int fibonacci(int n) {
	    if (n <= 0) return 0;
	        if (n == 1) return 1;
		    return fibonacci(n - 1) + fibonacci(n - 2);
}

void processOperationsFromFile(const std::string& math.txt") {
	    std::ifstream file(math.txt");
	        if (!file) {
			        std::cerr << "Fehler beim Öffnen der Datei." << std::endl;
				        return;
					    }

		    std::string operation;
		        int a, b;
			    while (file >> operation >> a >> b) {
				            if (operation == "sum") std::cout << sum(a, b) << std::endl;
					            else if (operation == "difference") std::cout << difference(a, b) << std::endl;
						            else if (operation == "product") std::cout << product(a, b) << std::endl;
							            else if (operation == "power") std::cout << power(a, b) << std::endl;
								            else std::cerr << "Unbekannte Operation: " << operation << std::endl;
									        }
			        file.close();
}

int main() {
	    processOperationsFromFile("input/math.txt");
	        return 0;
}

