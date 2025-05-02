#include <unistd.h>
#include <stdio.h> //for printf
#include <stdlib.h> //for malloc

//c00

// '&c' = address of char c
// passing the address of c in to write function
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/* int  main()
{
    ft_putchar('a');
}
*/

// start from char 'a' 
//end at char 'z'
//increment one by one until it reaches char 'z'
void    ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}

/*
int main()
{
    ft_print_alphabet();
}
*/

//same thing as ft_print_alphabet
//but print alphabet backwards
void    ft_print_rev_alphabet(void)
{
    char c;

    c = 'z';
    while(c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}

/*int main()
    ft_print_rev_alphabet();
*/

//start at char '0'
//'0' is not interger
//increment until '9'
void ft_print_numbers(void)
{
    char n;

    n = '0';
    while (n <= 9)
    {
        write(1, &n, 1);
        n++;
    }
}

/*
    int main()
        ft_print_numbers();
*/

//if negative print N
//if positive or 0 print P
//reduced alot redundency compared to thge first one
void    ft_is_negative(int  n)
{
    if (n >= 0)
        write(1, "P", 1);
    write(1, "N", 1);
}
/*
int main()
{
    ft_is_negative(1);
    ft_is_negative(0);
    ft_is_negative(-1);
    ft_is_negative(-2);
    ft_is_negative(2);
}
    */

//end c00 until ex04

//c01

//int *nbr = an interger type nbr pointer
//the pointer of nbr is equal to 42
//therefore nbr can manipulate any other things that it declared
void    ft_ft(int*nbr)
{
    //printf("%d\n",*nbr); //before
    *nbr = 42;
    //printf("%d",*nbr); //after
}

/*
int main()
{  
    int num[] = {10};
    ft_ft(num);
}*/

// i will figure it out someday
void    ft_ultimate_ft(int  *********nbr)
{

    *********nbr = 42;
}

/*int main()
{
    int nbrr;
    int *nbr1;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;
    int *********nbr9;

    nbrr = 24;
    nbr1 = &nbrr;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr9 = &nbr8;

    printf("%d\n", nbrr);
    ft_ultimate_ft(nbr9);
    printf("%d",nbrr);
}*/

// put a into temp 
// copy b to a
// replace b with temp (a value)
void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    //printf("%d %d\n",*a, *b);
}

//swap by putting in address of a and b
/*int main(void)
{
    int a = 42;
    int b = 24;
    ft_swap(&a,&b);
}*/

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    printf("%d %d",*div,*mod);
}

int main()
{
    ft_div_mod(2,4,&div,&mod);
}