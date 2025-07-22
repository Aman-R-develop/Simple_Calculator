#include <stdio.h>

int main()
{
    puts("A Simple Calculator");
    char op;
    float num1, num2, res;
    int valid = 1;
    printf("Enter the operation: ");
    scanf(" %c", &op);
    printf("Enter the numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;

    case '-':
        res = num1 - num2;
        break;

    case '*':
        res = num1 * num2;
        break;

    case '/':
        if (num2 != 0)
        {
            res = num1 / num2;
            break;
        }
        else
        {
            printf("Divisiblity by 0 is not possible.\n");
            valid = 0;
            break;
        }

    default:
        printf("Error! Wrong Operator\n");
        valid = 0;;
    }

    if (valid)
    {
        printf("%.2f", res);
    }

    return 0;
}