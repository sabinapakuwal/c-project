// WAP to store record of 100 books
#include <stdio.h>
#include <conio.h>
struct book
{
    char name[50];
    float price;
    int pages;
};
void main()
{
    struct book b[100]; /*array of students */
    float temp;
    int i;
    for (i = 0; i < 100; i++)
        ;
    {
        printf("\n Enter name:");
        scanf("%s", b[i].name);
        printf("\n Enter price:");
        scanf("%f", &temp);
        b[i].price = temp;
        printf("\n Enter pages:");
    }
    for (i = 0; i < 100; i++)
    {
        printf("\nName:%s \t pice:%f \t  pages:%d", b[i].name, b[i].price, b[i].pages);
    }
    getch();
}
