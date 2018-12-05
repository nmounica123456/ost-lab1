#define size50
#include<ctype.h>
int s[10];
int top=-1;
push(int element)
{
s[++top]=element;
}
int pop()
{
return(s[top--]);
}
main()
{
char pofx[50],ch;
int i=0,op1,op2;
printf("\n\nread the postfix expression");
scanf("%s",pofx);
while(ch=pofx[i++]!='\0')
{
if(isdigit(ch))push(ch-'0');
{
op2=pop();
op1=pop();
switch(ch)
{
case'+':push(op1+op2);
	break;
case'-':push(op1-op2);
	break;
case'*':push(op1*op2);
	break;
case'/':push(op1/op2);
	break;
}
}
}
printf("\ngiven postfix expression:%s\n",pofx);
printf("\nresult after evolution:%d\n",s[top]);
}
