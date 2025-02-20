#include <iostream>
#include <cmath>

/*
In dieser Aufgabe ist wollen wir Integrieren. 
Gegeben sind zwei Funktion. Eine einfachere mit welcher Sie überprüfen können ob Ihr Code so funktioniert wie soll
und eine schwere, die wir eigentlich integrieren wollen.
*/

// Einfache Funktion: f(x) = x^2
double simpleFunction(double x) {
    return x * x;
}

// Schwierige Funktion: f(x) = exp(-x^2) * cos(x)
double complicatedFunction(double x) {
    return std::exp(-x * x) * std::cos(x);
}

//Implementieren Sie das Trapezverfahren
double trapezoidalRule(double (*func)(double), double a, double b, int n){
double h = (b - a) / n;
double sum = 0.5 * (func(a) + func(b));

for (int i = 1; i < n; ++i){
sum += func(a + i * h);
}
return sum * h;

}


//Implementieren Sie die Simpson-Regel

double simpsonRule(double(*func)(double), double a, double b, int n){
	double h = (b - a)/n;
	double sum = func(a) + func(b);

	for(int i = 1; i < n; i += 2){
		sum += 4 * func(a + 1 * h);
	}
	for (int i = 2; i < n-1; i += 2){
       sum += 2* func(a + i * h);
	}
	return (h/3) * sum;
}

//Bonus Aufgabe:
//Implementieren Sie die Adaptive Simpson-Integration
//https://en.wikipedia.org/wiki/Adaptive_quadrature

double adaptiveSimpson(double (*func)(double), double a, double b, double eps, int depth = 10) {
	    double simpson = simpsonRule(func, a, b, 2);
	        double leftSimpson = simpsonRule(func, a, (a + b) / 2, 2);
		    double rightSimpson = simpsonRule(func, (a + b) / 2, b, 2);

		        if (std::fabs(leftSimpson + rightSimpson - simpson) < 15 * eps || depth <= 0) {
				        return leftSimpson + rightSimpson + (leftSimpson + rightSimpson - simpson) / 15.0;
					    }

			    return adaptiveSimpson(func, a, (a + b) / 2, eps / 2, depth - 1) +
				               adaptiveSimpson(func, (a + b) / 2, b, eps / 2, depth - 1);
}


int main() {
    // Integrationsgrenzen
    double a = 0.0;
    double b = 3.0;
    int n = 1000;
    double epsilon = 1e-6;
    std::cout << "Trapezoidal Rule (Simple Function): " << trapezoidalRule(simpleFunction, a, b, n) << std::endl;
        std::cout << "Simpson's Rule (Simple Function): " << simpsonRule(simpleFunction, a, b, n) << std::endl;
	    std::cout << "Adaptive Simpson's Rule (Simple Function): " << adaptiveSimpson(simpleFunction, a, b, epsilon) << std::endl;

	        // Интегрирование сложной функции
		     std::cout << "Trapezoidal Rule (Complicated Function): " << trapezoidalRule(complicatedFunction, a, b, n) << std::endl;
		         std::cout << "Simpson's Rule (Complicated Function): " << simpsonRule(complicatedFunction, a, b, n) << std::endl;
		             std::cout << "Adaptive Simpson's Rule (Complicated Function): " << adaptiveSimpson(complicatedFunction, a, b, epsilon) << std::endl;
		
		
    
    return 0;
}
