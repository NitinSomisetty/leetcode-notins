#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    char clean[100005];
    int j = 0;

    for (int i = 0; s[i]; i++)
        if (isalnum(s[i]))
            clean[j++] = tolower(s[i]);
    clean[j] = '\0'; //only to find the end wrt j

    for(int left=0,right=j-1;left<right;left++,right--)
    {
        if (clean[left] != clean[right]) //cmpare the same array
        {
            return false;
        }

    }
    return true;
}
