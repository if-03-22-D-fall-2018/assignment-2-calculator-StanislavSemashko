#include <stdio.h>
#include <stdbool.h>
void Add(double first_operand,double second_operand);
void Subtract(double first_operand,double second_operand);
void Multiply(double first_operand,double second_operand);
void Divide(double first_operand,double second_operand);

int main(int argc, char const *argv[]) {
  int choosen_methode;
  bool close = false;
do {
  printf("Choose one of the fallowing operations:\n");
  printf("Add (1)\n" );
  printf("Subtract (2)\n" );
  printf("Multiply (3)\n" );
  printf("Divide (4)\n" );
  printf("Stop program (-1)\n" );
  scanf("%d",&choosen_methode);

  if (choosen_methode == -1) {
      close = true;
  }
  else{
    double first_operand;
    double second_operand;

    switch (choosen_methode) {
      case 1:
      printf("Pleas enter the first operand \n" );
              scanf("%lf", &first_operand);
              printf("Pleas enter the second operand\n" );
              scanf("%lf",&second_operand );
              Add( first_operand, second_operand);
      break;
      case 2:
      printf("Pleas enter the first operand \n" );
              scanf("%lf", &first_operand);
              printf("Pleas enter the second operand\n" );
              scanf("%lf",&second_operand );
              Subtract(first_operand, second_operand);
      break;
      case 3:
      printf("Pleas enter the first operand \n" );
              scanf("%lf", &first_operand);
              printf("Pleas enter the second operand\n" );
              scanf("%lf",&second_operand );
              Multiply( first_operand, second_operand);
      break;
      case 4:
      printf("Pleas enter the first operand \n" );
              scanf("%lf", &first_operand);
              printf("Pleas enter the second operand\n" );
              scanf("%lf",&second_operand );
              Divide( first_operand, second_operand);
      break;
      default: printf("Input not allowed, please try again\n" );
  }

    }
} while(close == false);
  return 0;
}

void Add(double first_operand, double second_operand) {
     double result = first_operand + second_operand;
     printf("%lf\n",result );
}
void Subtract(double first_operand, double second_operand) {
   double result = first_operand - second_operand;
   printf("%lf\n",result );
}
void Multiply(double first_operand, double second_operand) {
   double result = first_operand * second_operand;
   printf("%lf\n",result );
}
void Divide(double first_operand, double second_operand) {
  if (second_operand == 0) {
    printf("Division by zero\n");
  }
  else{
     double result = first_operand / second_operand;
     printf("%lf\n",result );
  }
}
