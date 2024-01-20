//Program to check the validity of Parenthesized Arithmetic Expression using Stack

#include<stdio.h>
int main()
{
    char expression[50];
    int x=0, i=0;
    printf("\nEnter an expression: ");
    scanf("%s", expression);

    while(expression[i]!= '\0')
    {

        if(expression[i]=='(')
        {
            x++;
        }

        else if(expression[i]==')')
        {
            x--;
            if(x<0)
            break;
        }
        i++;
    }

    if(x==0)
    {
        printf("Expression is balanced");
    }

    else
    {
        printf("Expression is unbalanced");
    }
    return 0;
}

// #include <stdio.h>
// #include<string.h>
// #define MAX_SIZE 100

// char stack[MAX_SIZE];
// int top = -1;

// void push(char data)
// {
//     if(top == MAX_SIZE-1)
//     {
//         printf("Stack Overflow!");
//         return;
//     }
//     top++;
//     stack[top] = data;
// }

// char pop()
// {
//     if(top == -1)
//     {
//         printf("Empty stack!");
//         return ' ';
//     }
//     char data = stack[top];
//     top--;
//     return data;
// }

// int is_matching_pair(char char1, char char2)
// {
//     if((char1 == '(') && (char2 == ')'))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int isBalanced(char* text)
// {
//     int i;
//     for(i=0; i<strlen(text); i++)
//     {
//         if(text[i] == '(')
//         {
//             push(text[i]);
//         }
//         else if(text[i] == ')')
//         {
//             if(top == -1)
//             {
//                 return 0;
//             }
//             else if(!is_matching_pair(pop(),text[i]))
//             {
//                 return 0;
//             }
//         }
//     }
//     if(top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// void main()
// {
//     char text[MAX_SIZE];
//     printf("Enter an expression in parenthesis: ");
//     scanf("%s", &text);
//     if(isBalanced(text))
//     {
//         printf("Expression is balanced!");
//     }
//     else
//     {
//         printf("Expression is not balanced!");
//     }
// }

