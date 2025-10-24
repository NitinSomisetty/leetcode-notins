#include <stdbool.h>
#include <string.h>

bool isValid(char* s) 
{
    int len=strlen(s);
    char stack[len];
    int top=-1;
    for(int i=0;i<=len;i++)
    {
        if(s[i]=='[' ||s[i]== '{' ||s[i]== '(')
        {
            stack[++top]=s[i];
        }
        else if(s[i]==']' || s[i]=='}' || s[i]== ')')
        {
            if(top==-1)
            {
                return 0;
            }
            char pkd=stack[top];
            if((pkd=='[' && s[i]==']')||(pkd=='(' && s[i]==')')||(pkd=='{' && s[i]=='}')){
                top--;
            }

            else{
                return 0;
            }
        }
    }
    if (top == -1) {
    return 1; 
    } else {
    return 0; 
    }


}