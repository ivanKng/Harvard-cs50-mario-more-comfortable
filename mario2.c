#include<cs50.h>
#include<stdio.h>

/*determine how to prompt user for valid input for height of pyramid
    a do while loop will ask user for valid input at least once
        the input must be a positive integer
        if the input is not a positive integer loop must reprompt user for valid positive integer input
        if the condition is met break loop

    create a loop that will iterate over height of pyramid however tall the pyramid is within the parameters of 0 and 23
        for every row
            print spaces;
            print hashes;

            print new-line;

            complete right side of pyramid; */

int height; //variable declaration for user input for height
int row;    //variable declaration for rows/height of pyramid
int spaces; //variable declaration for spaces/each row
int main(void)
{

    do  //do while loop prompts the user at least once for input.
    {
        height = get_int("enter height of the pyramid: "); //prompting user for valid height input
    }
    while(height < 0 || height > 23);   //the condition of the loop if height < 0 || > 23 the input is valid and loop is broken

    /*creating for loop to iterate:
        for every row;
            print spaces;
            print hashes;

            print new-line;

            complete right-side of pyrmaid; */

    for (row = 0; row < height; row++)  //this is the first outer for loop
    {
        for (spaces = 0; spaces < height-1-row; spaces++)   //(the inner for loops are executed first. debug50 for closer look)
        {
            printf(" ");    //print for spaces;
        }
        for (spaces = 0; spaces < row+1; spaces++)  //sibling for loop will be executed after 1st inner for loop and before outer for loop
        {
            printf("#");    //print for hashes;
        }
        printf("  ");   //print for the crevice
        for (spaces = 0; spaces < row+1; spaces++)
        {
            printf("#");    //print for hashes;
        }
        printf("\n");   //execute next row on new-line
    }
    printf("\n");
    return 0;   //return 0 means the program returned true (return 1  means the program returned false)
}