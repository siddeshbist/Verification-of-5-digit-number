//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q3

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    int x = 1; //initialize x at 1 to run the while loop

    while(x!=0) //when 0 is entered as an input, the while loop will be skipped
        {
        printf("Please input an integer (0 to end): ");
        scanf("%d", &x);

        if ((x>= 10000&& x<100000) || (x<=-10000 && x>-100000)) // logical expression for identifying 5 digit numbers
            {
            printf("Your input is a five-digit number: %d \n", x); //after this printf statement the while loop repeats and the user is asked again to input a number
            }
        }
    printf("Thank you for using my software. Bye!");
    return 0;
}

