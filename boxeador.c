#include <stdio.h>

int main() {

double weightBoxer; 
double weightBoxerX;
int x; 
double relativeGravity; 

printf("Por favor ingrese su peso en la tierra: ");
scanf("%lf", &weightBoxer);

printf("\nI Estos son los planetas que puedes pelear:\n\n");
printf("\t1. Mecury\t2. Venus\t3. Mars\t4. Jupiter\n");
printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

printf("Que planeta seleccionas ");
scanf("%d", &x);

//Gravedad relativa en planetas 
switch (x) {
  case 1 : 
  relativeGravity = 0.38;
  break;
  case 2 : 
  relativeGravity = 0.91;
  break;
   case 3 : 
  relativeGravity = 0.38;
  break;
   case 4 : 
  relativeGravity = 2.34;
  break;
   case 5 : 
  relativeGravity = 1.06;
  break;
   case 6 : 
  relativeGravity = 0.92;
  break;
   case 7 : 
  relativeGravity = 0.92;
  break;
  }

// formula de calcula de peso en planeta seleccionado
weightBoxerX = weightBoxer * relativeGravity;

 printf("\nYour weight: %lf\n", weightBoxerX);

}