#include<bits/stdc++.h>
using namespace std;

int isBalanced(char input[])
{
    char stack[100],lastChar;
    int  top=0,i,len;
    len=strlen(input);
    for(i=0;i<len;i++){
        if(input[i]=='('){
            stack[top]='(';
            top++;
        }
        else if(input[i]==')'){
            if(top==0)
               return 0;
            top--;
            lastChar=stack[top];
            if(lastChar!='(')
                return 0;
        }
    }
    if(top==0)
        return 1;
    else
        return 0;
}

int main()
{
    char input[100];
    scanf("%s",input);

    if(isBalanced(input))
        printf("%s is balanced\n",input);
    else
        printf("%s is not balanced\n", input);
    return 0;
}
