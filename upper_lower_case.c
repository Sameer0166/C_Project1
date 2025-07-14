#include<stdio.h>
int main()
{
/* * This program checks if a character is in upper case or lower case.     
    * It prompts the user to enter a character and then checks if it is an upper case letter (A-Z) or a lower case letter (a-z).
    * If the character is in lower case, it prints a message indicating that.
    * If the character is in upper case, it prints a message indicating that.
    * If the character is neither, it prints a message indicating that the character is not an
    * alphabet.
    * This program is useful for understanding how to use if-else statements in C to handle character input and check conditions based on the ASCII values of characters.
    * */
    char ch;
    printf("enter the char ");
    scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
 printf("given character is the lower case\n");   
}
else if (ch>='A' && ch<='Z')
{
    printf("given character is the upper case ");
}
else{
    printf("given character is not an alphabet\n");
}
}