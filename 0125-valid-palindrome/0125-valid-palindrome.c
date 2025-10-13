#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    char clean[100005];
    int j = 0;

    for (int i = 0; s[i]; i++)
        if (isalnum(s[i]))
            clean[j++] = tolower(s[i]);
    clean[j] = '\0';

    for (int l = 0, r = j - 1; l < r; l++, r--) 
    {
    if (clean[l] != clean[r]) 
    {return false;}
    }
    return true;
}
