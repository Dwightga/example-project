#include<stdio.h>

int main(void)
{

    for(int x=1; x<=100; x++)
    {
        if(((x%3)||(x%5)) == 0)
            printf("number = %d FizzBuzz" , x);
        else if ((x%3) ==0)
            printf("number = %d Fizz", x);
        else if((x%5) == 0)
            printf("number = %d Buzz" ,x);
        else
            printf("number = %d" ,x);
        printf("\n");
    }

    return 0;
}
