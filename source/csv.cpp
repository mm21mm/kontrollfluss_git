#include <iostream>
#include <fstream>

// Функция для вычисления чисел Фибоначчи
 int fibonacci(int n) {
     if (n <= 0) return 0;
         if (n == 1) return 1;
             return fibonacci(n - 1) + fibonacci(n - 2);
             }

             // Функция для вычисления квадрата числа
             int quadratic(int n) {
                 return n * n;
                 }

                 int main() {
                     int n = 50; // Задаем предел
                         std::ofstream file("output.csv"); // Открываем CSV-файл для записи
                             
                                 if (!file.is_open()) {
                                         std::cerr << "Fehler beim Öffnen von Datei!" << std::endl;
                                                 return 1;
                                                     }
                                                         
                                                             // Записываем заголовки
                                                                 file << "n,Fibonacci,Quadrat" << std::endl;
                                                                     
                                                                         for (int i = 1; i <= n; ++i) {
                                                                                 file << i << "," << fibonacci(i) << "," << quadratic(i) << std::endl;
                                                                                     }
                                                                                        
                                                                                             file.close();
                                                                                                 std::cout << "Daten sind in output.csv" << std::endl;
                                                                                                     return 0;
                                                                                                     }
                                                                                                     
