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

![op1](output/op1.png)

### WAP to store record of 2 books

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
    for (i = 0; i < 2; i++)
        ;
    {
        printf("\n Enter name:");
        scanf("%s", b[i].name);
        printf("\n Enter price:");
        scanf("%f", &temp);
        b[i].price = temp;
        printf("\n Enter pages:");
    }
    for (i = 0; i < 2; i++)
    {
        printf("\nName:%s \t pice:%f \t  pages:%d", b[i].name, b[i].price, b[i].pages);
    }
    getch();
}
```

> Output

![op13](output/op13.png)

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

![op3](output/op3.png)

> Code

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    while (a <= 50)
    {
        printf("%d\n", a);
        a++;
    }
    getch();
}
```

> Output

![op4](output/op4.png)

### WAP to write 'n' person name, address and tel no in a data file and display them reading successive data from the file in proper format

> Code

```c
#include <stdio.h>
#include <conio.h>
void main()
{
    char name[25];
    char address[25];
    char telno[25];
    FILE *fp;
    int i, n;
    fp = fopen("rec.data", "a");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the name");
        scanf("%s", name);
        printf("\n Enter the address");
        scanf("%s", address);
        printf("\n Enter the telno");
        scanf("%s", telno);
        fprintf(fp, "\n%s\t%s\t%s", name, address, telno);
    }
    fclose(fp);
    fp = fopen("rec.data", "r");
    printf("name\t address \t telno\n");
    while (fscanf(fp, "%s%s%s", name, address, telno) != EOF)
    {
        printf("\n%s \t%s \t%s", name, address, telno);
    }
    fclose(fp);
    getch();
}
```

> Output

![op18](output/op18.png)

### Create a sample function

> Code

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    printmyname();
    getch();
}
void printmyname()
{
    printf("My name is Saina Pakuwal");
}
```

> Output

![op14](output/op14.png)

### Print a number by increasing

> Code

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 8;
    a++;
    printf("The value of a is %d", a);
}
```

> Output

![op15](output/op15.png)

### WAP to show mod

> Code

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    int b = 4;
    int c = a % b;
    printf("the mode of c is %d", c);
    return 0;
}
```

> Output

![op11](output/op11.png)

### WAP to print a name and subject

> Code

```c
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Sabina Pakuwal\n");
    printf("computer science");
    getch();
}
```

> Output

![op16](output/op16.png)

### WAP for simple interest

> Code

```c
#include <stdio.h>
#include <conio.h>
void si(int,int,int);
void main()
{
    int p,t,r;
    printf("Enter principle,time,rate");
    scanf("%d%d%d",&p,&t,&r);
    si(p,t,r);
    getch();
}
void si(int p,int t,int r)
{
    int s;
    s=(p*t*r)/100;
    printf("simple interest is %d",s);

}
```

> Output

![op6](output/op6.png)

### Greatest of two number

> Code

```c
#include <stdio.h>
#include <conio.h>
void G(int,int);
void main()
{
    int a, b;
    printf("Enter any two number");
    scanf("%d%d", &a, &b);
    void G(a,b);
    getch();
}
    void G(int a, int b);
    if (a > b)
    {
print("Greatest is %d", &a);
    }
else{
            printf("Greatest is %d", b);
}
```

> Output

![op21](output/op21.png)

### Program to input and find its factorial using recursion function

> Code

```c
#include <stdio.h>
#include <conio.h>
int factorial(int);
void main()
{
    int n, fact;
    printf("input anumber");
scanf(%d",&n);
fact=factorial(n);
printf("The factorial  of %d is %d,n,fact);
getch();
}
intfactorial(intn)
if (n==0//==1)
return1;
else,
return(n*factorial(n_1));
}
```

> Output

![op23](output/op23.png)

### program toinput employee,name,age and theirbasic salary of n employee and displsy the record in proper format

> Code

```c
#include <stdio.h>
#include<conio.h>
void main()
struct employee;
{
    char name[50];
    int salary;
    int age;
};
struct employee e[100];
int i, n;
printf("how much records");
scanf(% d "&n);
          for (i = 0; i < n; i++);
      {
          fflush(stdin);
printf(;/n enter name of employee");
gets(e[i],name);
printf("/n enter salary of employee");
scanf("%d",&e[i]salary);
printf("/nemployee\t\t salary");
printf("\n.............");
printf("enter the age:");
scanf("%d",&e[i]age);
for(i=0;i<n;i++);
{
        printf("%s\t%d\t%d\t%d\t",e[i].name,e[i].salary,e[i].age);
}
printf(")\n.........);
getch();
      }
```

> Output

![op22](output/op22.png)
### Program to display the address and value of variable using pointer

> Code

```c
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 3, *j;
    j = &i;
    clrscr();
    printf("address of i= %u", j);
    printf("value of i=%d", *j);
    getch();
}
```

> Output

![op25](output/op25.png)

### Area of Square

> Code

```c
#include <stdio.h>
#include <conio.h>
void main()
{
    int l, area;
    printf("Enter length");
    scanf("%d", &l);
    area = l * l;
    {
        printf("area of square is %d" area);
    }
    getch();
}
```

> Output

![op26](output/op26.png)
### WAP to print the sum of two numbers

> Code

```c
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, sum;
    printf("Enter any  two numbers");
    scanf("%d %d", &a, &b);
    sum = a + b;
    {
        printf("sum is %d", sum);
    }
    getch();
}
```

> Output

![op8](output/op8.png)

### Sum

> Code

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int first = 1;
    int second = 40;
    int sum = first + second;
    printf("sum of two no is %d", sum);
    return 0;
}
```

> Output

![op10](output/op10.png)

### Wap to print a day of a week using switch case

> Code

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter the no\n");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("The day is Sunday:\n");
        break;
    case 2:
        printf("The day is Monday:\n");
        break;
    case 3:
        printf("The day is Tuesday:\n");
        break;
    case 4:
        printf("The day is Wednesday:\n");
        break;
    case 5:
        printf("The day  is Thursday:\n");
    case 6:
        printf("The day is Friday:\n");
        break;
    Default:
        printf("Invalid option given");
    }
    return 0;
}
```

> Output

![op9](output/op9.png)

### Adding two numbers using function

> Code

```c
#include<stdio.h>
#include<conio.h>
void (sum);
int main()
{

    sum;
    getch();

}
void main();
{
int a,b,c;
printf("Enter any two numbers");
scanf("%d%d",&a,&b);
c=a+b;
{
printf("Addition is %d",c);
}

    }
```

> Output

![op24](output/op24.png)
