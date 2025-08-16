#include <stdio.h>
    #include <string.h> // For memcpy
    int main() {
        char originalString[] = "Hello,World!";
        char slicedString[6]; // To store "World" + null terminator

        // Copy 5 characters starting from index 7 ("World")
        memcpy(slicedString, &originalString[7], 5);
        slicedString[5] = '\0'; // Null-terminate the new string
        printf("Sliced string: %s\n", slicedString);
    return 0;
}