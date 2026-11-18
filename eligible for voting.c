#include <conio.h>
#include <stdio.h>

int main()
{
    int age;
    clrscr();

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible for voting.");
    }
    else
    {
        printf("You are not eligible for voting.");
    }
    getch();
    return 0;

}
