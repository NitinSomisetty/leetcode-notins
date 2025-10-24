bool isValid(char* s) 
{
    char stack[strlen(s)];
    int top=-1;
    for(int i=0;i<=strlen(s);i++)
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