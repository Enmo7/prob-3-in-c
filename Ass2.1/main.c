#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*char op, ope;
  double number_1, number_2, num_1,num_2;

  printf("Enter Numbers 1: ");
  num_1 = scanf("%lf %lf", &number_1);

  printf("Enter an operator (+, -, *, /): ");
  ope = scanf("%c", &op);

  printf("Enter Number 2 : ");
  num_2 = scanf("%lf %lf", &number_2);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num_1, num_2, num_1 + num_2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num_1, num_2, num_1 - num_2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num_1, num_2, num_1 * num_2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", num_1, num_2, num_1 / num_2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
  /*char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;*/
     // declare local variables
    char opt;
    int n1, n2;
    float res;

    printf (" Choose an operator(+, -, *, /)  \n ");
    scanf ("%c", &opt); // take an operator

   /* if (opt == '/' )
    {
        printf (" You have selected: Division");
    }
    else if (opt == '*')
    {
        printf (" You have selected: Multiplication");
     }

    else if (opt == '-')
    {
        printf (" You have selected: Subtraction");
     }
        else if (opt == '+')
    {
        printf (" You have selected: Addition");
     }*/

    printf (" \n Enter the first number: ");
    scanf(" %d", &n1); // take fist number

    printf (" Enter the second number: ");
    scanf (" %d", &n2); // take second number

    switch(opt)
    {
        case '+':
            res = n1 + n2; // add two numbers
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);
            break;

        case '-':
            res = n1 - n2; // subtract two numbers
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);
            break;

        case '*':
            res = n1 * n2; // multiply two numbers
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);
            break;

        case '/':
            if (n2 == 0)   // if n2 == 0, take another number
            {
                printf (" \n Divisor cannot be zero. Please enter another value ");
                scanf ("%d", &n2);
                }
            res = n1 / n2; // divide two numbers
            printf (" Division of %d and %d is: %.2f", n1, n2, res);
            break;
        default:  /* use default to print default message if any condition is not satisfied */
            printf (" Something is wrong!! Please check the options ");
    }
    return 0;

}
