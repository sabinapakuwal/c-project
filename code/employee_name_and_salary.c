// WAP to record the employees name and salary in a data file and display them
#include <stdio.h>
#include <conio.h>
void main()
{
    int sal;
    char name[25], ch;
    FILE *fp;
    fp = fopen("abc.txt", "w");
    do
    {
        prinf("Enter employee name,salary");
        scanf("%s%d", name, &sal);
        fprinf(fp, "%s%d", name, sal);
        prinf("Do you want to add more records");
        scnaf("%c", &ch);
    } while (ch == "y");
    fclose(fp);
}
fp = fopen("abc.txt", "r");
while (fscanf(fp, "%s%d", name, &sal) !EOF)
{
    printf("\n name=%s \t salary=%d", name, sal);
    fclsoe(fp);
    getch();
}
