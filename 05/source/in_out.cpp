#include <iostream>
#include <fstream>
#include <vector>

// Schreiben Sie eine Funktion, welche die Fibonacci Zahlen bestimmt
int fibonacci(int n) {
	if(n <= 0 ) return 0;
	if (n == 1) return 1;
	return fibonacci(n-1) + fibonacci(n-2);


}

//Schreiben Sie eine Funktion, welche Rekursiv die Potenz bestimmt
//Wir betrachten nur nicht negative exponenten
int potenz(int n, int exponent) {
if (potenz == 0) return 1;
return n * potenz(n, exponent - 1);
}
/*
Lesen Sie die Datei "input.txt" ein.
Bestimmen für jede Zahl in dieser Datei die Fibonacci Zahl und die vierte Potenz.
Schreiben Sie diese Zahl, die Fibonacci Zahl und die Potenz in eine csv-Datei.
Halten Sie sich an die Konvention der csv-Dateien.
*/
int main() {
	std::ifstream inputFile("input.txt");
	std::ofstream outputFile("output.csv");
        if (!inputFile){
		std::cerr << "Fehler: Datei input.txt konnte nicht geöffnet werden.\n";
		        return 1;
	}

	if (!outputFile){
		                std::cerr << "Fehler: Datei output.txt konnte nicht geöffnet werden.\n";
				                        return 1;
							        }

	outputFile << "Zahl,Fibonacci,Potenz(4)\n";

	    int number;
	        while (inputFile >> number) { 
		
					               int fib = fibonacci(number);
					                       int power = potenz(number, 4);
					                               outputFile << number << "," << fib << "," << power << "\n"; // Записываем в CSV
					                                   }
					      
					                                       // Закрытие файлов
					                                           inputFile.close();
					                                              outputFile.close();
					      
					                                                   std::cout << "Berechnungen abgeschlossen. Ergebnisse in 'output.csv'.\n";

    return 0;
}
