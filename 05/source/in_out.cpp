#include <iostream>
#include <fstream>
#include <vector>

// Schreiben Sie eine Funktion, welche die Fibonacci Zahlen bestimmt
 int fibonacci(int n) {
  if (n <= 0) return 0;
   if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);

    }

    //Schreiben Sie eine Funktion, welche Rekursiv die Potenz bestimmt
    //Wir betrachten nur nicht negative exponenten
    int potenz(int n, int exponent) {
     int loesung = n;
      if (exponent == 0){
        return 1;
         }
          return n*potenz(n, exponent-1);
          }
//          /*
//          Lesen Sie die Datei "input.txt" ein.
//          Bestimmen für jede Zahl in dieser Datei die Fibonacci Zahl und die vierte Potenz.
//          Schreiben Sie diese Zahl, die Fibonacci Zahl und die Potenz in eine csv-Datei.
//          Halten Sie sich an die Konvention der csv-Dateien.
//          
          int main() {
           int data{0};
            std::string mytext;

             std::ifstream readfile("/home/mishals/physics441-sose25-c-vorkurs/exercises/03_kontrollfluss_git/05/input/input.txt");
              if(!readfile.is_open()){
                std::cerr << "Fehler beim Oeffnen readfile \n" << std::endl;
                 }

                  std::ofstream file("outputday5.csv");
                                     if(!file){
                     std::cerr << "Fehler beim Oeffnen file \n" << std::endl;
                      }
                       
                        file << "n,Fibonacci,vierte Potenz\n";
                          while (readfile >> data){  
                             file << data << ", " << fibonacci(data) << ", " << potenz(data, 4) << "\n";
                               }
                                file.close();
                                 std::cout << "gespeichert\n" << std::endl;
                                  readfile.close();


                                      return 0;
                                      }
