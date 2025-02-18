#include <stdio.h>
/*
Aufgabe 5: Taschenrechner
Schreiben Sie einen Taschenrechner, welcher eine Operation einliest und zwei Zahlen.
Die Operationen sind:
1: Addition
2: Subtracktion
3: Multiplikation
4: Division
5: Taschenrechner beenden

Der Taschenrechner soll so lange laufen, bis der Taschenrechner beendet wird.
*/


int main(){
int operation;
double num1, num2, result;

while(1){
 printf("\nTaschenrechner - Wählen Sie eine Operation:\n");
        printf("1: Addition\n");
        printf("2: Subtraktion\n");
        printf("3: Multiplikation\n");
        printf("4: Division\n");
        printf("5: Beenden\n");
        printf("Eingabe: ");
        scanf("%d", &operation);

        if (operation == 5){
	printf("Taschenrechner wird beendet...\n");
	break;
	}
     printf("Geben Sie zwei Zahlen ein: ");
             scanf("%lf %lf", &num1, &num2);

	             
		              switch (operation) {
		                          case 1:
		                            result = num1 + num2;
		                                                          printf("Ergebnis: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
		                                                                          break;
					 case 2:
	                                                                       result = num1 - num2;
		                                                               printf("Ergebnis: %.2lf - %.2lf = %.2lf\n", num1, num2, result);                                                                                                    break;
		                                                                                                                                          
			       case 3:
		                                                                                                                                                                  result = num1 * num2;
		                                                                                                                                                                                  printf("Ergebnis: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
		                                                                                                                                                                                                  break;
		                                                                                                                                                                                                              case 4:
		                                                                                                                                                                                                                              if (num2 == 0) {
		                                                                                                                                                                                                                                                  printf("Fehler: Division durch Null ist nicht erlaubt!\n");
		                                                                                                                                                                                                                                                                  } else {
		                                                                                                                                                                                                                                                                                      result = num1 / num2;
		                                                                                                                                                                                                                                                                                                          printf("Ergebnis: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
		                                                                                                                                                                                                                                                                                                                          }
		                                                                                                                                                                                                                                                                                                                                          break;
		                                                                                                                                                                                                                                                                                                                                                      default:
		                                                                                                                                                                                                                                                                                                                                                                      printf("Ungültige Eingabe! Bitte wählen Sie eine Zahl zwischen 1 und 5.\n");
		                                                                                                                                                                                                                                                                                                                                                                              }
		                                                                                                                                                                                                                                                                                                                                                                                  }


    return 0;
}
