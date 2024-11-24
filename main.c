#include <stdio.h>
#include <string.h>

int num1, num2;

int UserInput(void) {
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
}

int add(void) {
    UserInput();
    int result = num1 + num2;
    printf("%d\n", result);
}
int main(void) {
    char operation[1];
    printf("Calculator\n");
    printf("Accepted operands are: +, -, *, /\n");
    printf("Enter operation:");
    scanf("%s", operation);
if (strcmp(operation, "+") == 0) {
    add();
}

else if(strcmp(operation, "-") == 0) {
    UserInput();
    int result = num1 - num2;
    printf("%d\n", result);
}

else if(strcmp(operation, "*") == 0) {
    UserInput();
    int result = num1 * num2;
    printf("%d\n", result);
}

else if(strcmp(operation, "/") == 0) {
    UserInput();
    int result = num1 / num2;
    printf("%d\n", result);
}

else {
    printf("\nOperand not found.");
}
}