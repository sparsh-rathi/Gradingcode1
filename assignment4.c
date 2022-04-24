#include <stdio.h>
int main()
{
    int n;
    printf("Enter your marks: ");
    scanf("%d",&n);
    switch (n)
    {
    case 85 ... 100:
        printf("Grade A\n");
        break;
    case 70 ... 84:
        printf("Grade B\n");
        break;
    case  55 ... 69:
        printf("Grade C\n");
        break;
    case  40 ... 54:
        printf("Grade D\n");
        break;
    case 0 ... 39:
        printf("Grade F");
        break;
    default:
        printf("Invalid marks");
        break;
    }
    return 0 ;
}
