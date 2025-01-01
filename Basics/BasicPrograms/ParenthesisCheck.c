/*
In this topic, we will learn how to check the balanced parenthesis in C. First, we will see what are the parenthesis. The parenthesis is represented by the brackets shown below:

( )
Where,       (   →    Opening bracket
             )     →    Closing bracket
These parentheses are used to represent the mathematical representation. The balanced parenthesis means that when the opening parenthesis is equal to the closing parenthesis, then it is a balanced parenthesis.

Let's understand through examples.

Example 1: ( 2+5 ) * 4

In the above expression, there is one opening and one closing parenthesis means that both opening and closing brackets are equal; therefore, the above expression is a balanced parenthesis.
*/

#include <stdio.h>
void main()
{
    char expression[50];
    int x = 0, i = 0;

    printf("Enter the expression \n");
    scanf("%s", expression);
    while (expression[i] != '\0')
    {
        if (expression[i] == '(')
        {
            x++;
        } 
        
    }
}