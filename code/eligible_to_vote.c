// WAP to find whether a person is eligible to vote or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
    return 0;
}
