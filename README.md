# C Project

## C Projects of Class 12 by Sabina Pakuwal

### WAP to print asterisk

> Code

```c
#include <stdio.h>
void main()
{
    int i, j;
    for (i = i; i <= 1; i++) // rows
    {
        for (j = 1; j <= i; j++) // column

        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

> Output

- Screenshot

### WAP to store record of 100 books

> Code

```c
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
```

> Output

### WAP to find whether a person is eligible to vote or not

> Code

```c
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
```

> Output

### WAP to record the employees name and salary in a data file and display them

> Code

```c
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
```

> Output
