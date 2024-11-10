#include <stdio.h>
void operation(int a, int b, char op)
{
    int result;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
        }
        else
        {
            printf("Division with zero is not possible");
        }
        break;
    default:
        printf("Invalid operator");
        break;
    }
    printf("The answer is: %d", result);
}
int main()
{
    int a, b;
    char op;
    printf("Enter !st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter operator of your choice: ");
    scanf(" %c", &op);
    operation(a, b, op);
    return 0;
}