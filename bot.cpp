#include<stdio.h>
#include<string.h>
using namespace std;
struct grammer{
    char p[20];
    char prod[20];
}g[10];
 
int main()
{
    int i,stpos,j,k,l,m,o,p,f,r;
    int np,tspos,cr;
 
    printf("\nEnter Number of productions:");
    scanf("%d",&np);
 
    char sc,ts[10];
 
    printf("\nEnter productions:\n");
    for(i=0;i<np;i++)
    {
        scanf("%s",&ts);
        strncpy(g[i].p,ts,1);
        strcpy(g[i].prod,&ts[3]);
    }
 
    char ip[10];
 
    printf("\nEnter Input:");
    scanf("%s",&ip);
 
    int lip=strlen(ip);
 
    char stack[10];
     
    stpos=0;
    i=0;
     
    //moving input
    sc=ip[i];
    stack[stpos]=sc;
    i++;stpos++;
 
    printf("\n\nStack\tInput\tAction");
    do
    {
        r=1;
        while(r!=0)
        {
            printf("\n");
            for(p=0;p<stpos;p++)
            {
                printf("%s",&stack[p]);SLR ParSLR Parser or not*/

#include
#include
void main(){


char table[20][20][20],ter[20],stack[20],ip[20],st1[20],pro[20][20],num;
int i,j,t,k,top=0,st,col,row,pop,np,no,len;
clrscr();
for(i=0;i<20;i++){
ter[i]=NULL;
stack[i]=NULL;
ip[i]=NULL;
st1[i]=NULL;
for(j=0;j<20;j++){
pro[i][j]=NULL;
for(k=0;k<20;k++)
{
table[i][j][k]=NULL;
}
}
}
printf(“Enter the no of productions:”);
scanf(“%d”,&np);
printf(“Enter the productions:”);
for(i=0;i<np;i++)
{
scanf(“%s”,pro[i]);
}
printf(“Enter the no.of states:”);
scanf(“%d”,&st);
printf(“Enter the states:”);
scanf(“%s”,st1);
printf(“Enter the no of terminals:”);
scanf(“%d”,&t);
printf(“Enter the terminals:”);
scanf(“%s”,ter);
for(i=0;i<st;i++)
{
for(j=0;j<t;j++)
{
printf(“\nEnter the value for %c %c:”,st1[i],ter[j]);
scanf(“%s”,table[i][j]);
}
}
printf(“\nSLR TABLE:\n”);
for(i=0;i<t;i++)
{
printf(“\t%c”,ter[i]);
}
for(i=0;i<st;i++)
{
printf(“\n\n%c”,st1[i]);
for(j=0;j<t;j++)
{
printf(“\t%s”,table[i][j]);
}
}

stack[top]=’a’;
printf(“\nEnter the input string:”);
scanf(“%s”,ip);
i=0;
printf(“\n\nSTACK\t\tINPUT STRING\t\tACTION\n”);
printf(“\n%s\t\t%s\t\t”,stack,ip);
while(i<=strlen(ip) )
{
for(j=0;j<st;j++)
{
if(stack[top]==st1[j])
col=j;
}
for(j=0;j<t;j++)
{
if(ip[i]==ter[j])
{
row=j;
}
}
if((stack[top]==’b’)&&(ip[i]==’$’)){printf(“\nString accepted”);break;}
else if(table[col][row][0]==’s’)
{
top++;
stack[top]=ter[row];
top++;
stack[top]=table[col][row][1];
i++;
printf(“Shift %c %d\n”,ter[row],table[col][row][1]);
}
else if(table[col][row][0]==’r’)
{
no=(int)table[col][row][1];
no=no-48;
len=strlen(pro[no]);
len=len-3;
pop=2*len;
printf(“POP %d”,pop);
for(j=0;j<pop;j++)
{
top=top-1;
}
top++;
stack[top]=pro[no][0];
k=top;
k=k-1;
printf(” Push [%c,”,pro[no][0]);
for(j=0;j<st;j++)
{
if(stack[k]==st1[j])
{
col=j;
}
}
k++;
for(j=0;j<t;j++)
{
if(stack[k]==ter[j])
{
row=j;
}
}
top++;
stack[top]=table[col][row][0];
printf(“%c]\n”,table[col][row][0]);
}
else{printf(“\nError\nThe string not accepted.”);break;
}
printf(“\n”);
for(j=0;j<=top;j++)
{
printf(“%c”,stack[j]);
}
printf(“\t\t”);
for(j=i;j<strlen(ip);j++)
{
printf(“%c”,ip[j]);
}
printf(“\t\t”);
}
getch();
}SLR Parser or not*/

#include
#include
void main(){


char table[20][20][20],ter[20],stack[20],ip[20],st1[20],pro[20][20],num;
int i,j,t,k,top=0,st,col,row,pop,np,no,len;
clrscr();
for(i=0;i<20;i++){
ter[i]=NULL;
stack[i]=NULL;
ip[i]=NULL;
st1[i]=NULL;
for(j=0;j<20;j++){
pro[i][j]=NULL;
for(k=0;k<20;k++)
{
table[i][j][k]=NULL;
}
}
}
printf(“Enter the no of productions:”);
scanf(“%d”,&np);
printf(“Enter the productions:”);
for(i=0;i<np;i++)
{
scanf(“%s”,pro[i]);
}
printf(“Enter the no.of states:”);
scanf(“%d”,&st);
printf(“Enter the states:”);
scanf(“%s”,st1);
printf(“Enter the no of terminals:”);
scanf(“%d”,&t);
printf(“Enter the terminals:”);
scanf(“%s”,ter);
for(i=0;i<st;i++)
{
for(j=0;j<t;j++)
{
printf(“\nEnter the value for %c %c:”,st1[i],ter[j]);
scanf(“%s”,table[i][j]);
}
}
printf(“\nSLR TABLE:\n”);
for(i=0;i<t;i++)
{
printf(“\t%c”,ter[i]);
}
for(i=0;i<st;i++)
{
printf(“\n\n%c”,st1[i]);
for(j=0;j<t;j++)
{
printf(“\t%s”,table[i][j]);
}
}

stack[top]=’a’;
printf(“\nEnter the input string:”);
scanf(“%s”,ip);
i=0;
printf(“\n\nSTACK\t\tINPUT STRING\t\tACTION\n”);
printf(“\n%s\t\t%s\t\t”,stack,ip);
while(i<=strlen(ip) )
{
for(j=0;j<st;j++)
{
if(stack[top]==st1[j])
col=j;
}
for(j=0;j<t;j++)
{
if(ip[i]==ter[j])
{
row=j;
}
}
if((stack[top]==’b’)&&(ip[i]==’$’)){printf(“\nString accepted”);break;}
else if(table[col][row][0]==’s’)
{
top++;
stack[top]=ter[row];
top++;
stack[top]=table[col][row][1];
i++;
printf(“Shift %c %d\n”,ter[row],table[col][row][1]);
}
else if(table[col][row][0]==’r’)
{
no=(int)table[col][row][1];
no=no-48;
len=strlen(pro[no]);
len=len-3;
pop=2*len;
printf(“POP %d”,pop);
for(j=0;j<pop;j++)
{
top=top-1;
}
top++;
stack[top]=pro[no][0];
k=top;
k=k-1;
printf(” Push [%c,”,pro[no][0]);
for(j=0;j<st;j++)
{
if(stack[k]==st1[j])
{
col=j;
}
}
k++;
for(j=0;j<t;j++)
{
if(stack[k]==ter[j])
{
row=j;
}
}
top++;
stack[top]=table[col][row][0];
printf(“%c]\n”,table[col][row][0]);
}
else{printf(“\nError\nThe string not accepted.”);break;
}
printf(“\n”);
for(j=0;j<=top;j++)
{
printf(“%c”,stack[j]);
}
printf(“\t\t”);
for(j=i;j<strlen(ip);j++)
{
printf(“%c”,ip[j]);
}
printf(“\t\t”);
}
getch();
}ser or not*/

#include
#include
void main(){


char table[20][20][20],ter[20],stack[20],ip[20],st1[20],pro[20][20],num;
int i,j,t,k,top=0,st,col,row,pop,np,no,len;
clrscr();
for(i=0;i<20;i++){
ter[i]=NULL;
stack[i]=NULL;
ip[i]=NULL;
st1[i]=NULL;
for(j=0;j<20;j++){
pro[i][j]=NULL;
for(k=0;k<20;k++)
{
table[i][j][k]=NULL;
}
}
}
printf(“Enter the no of productions:”);
scanf(“%d”,&np);
printf(“Enter the productions:”);
for(i=0;i<np;i++)
{
scanf(“%s”,pro[i]);
}
printf(“Enter the no.of states:”);
scanf(“%d”,&st);
printf(“Enter the states:”);
scanf(“%s”,st1);
printf(“Enter the no of terminals:”);
scanf(“%d”,&t);
printf(“Enter the terminals:”);
scanf(“%s”,ter);
for(i=0;i<st;i++)
{
for(j=0;j<t;j++)
{
printf(“\nEnter the value for %c %c:”,st1[i],ter[j]);
scanf(“%s”,table[i][j]);
}
}
printf(“\nSLR TABLE:\n”);
for(i=0;i<t;i++)
{
printf(“\t%c”,ter[i]);
}
for(i=0;i<st;i++)
{
printf(“\n\n%c”,st1[i]);
for(j=0;j<t;j++)
{
printf(“\t%s”,table[i][j]);
}
}

stack[top]=’a’;
printf(“\nEnter the input string:”);
scanf(“%s”,ip);
i=0;
printf(“\n\nSTACK\t\tINPUT STRING\t\tACTION\n”);
printf(“\n%s\t\t%s\t\t”,stack,ip);
while(i<=strlen(ip) )
{
for(j=0;j<st;j++)
{
if(stack[top]==st1[j])
col=j;
}
for(j=0;j<t;j++)
{
if(ip[i]==ter[j])
{
row=j;
}
}
if((stack[top]==’b’)&&(ip[i]==’$’)){printf(“\nString accepted”);break;}
else if(table[col][row][0]==’s’)
{
top++;
stack[top]=ter[row];
top++;
stack[top]=table[col][row][1];
i++;
printf(“Shift %c %d\n”,ter[row],table[col][row][1]);
}
else if(table[col][row][0]==’r’)
{
no=(int)table[col][row][1];
no=no-48;
len=strlen(pro[no]);
len=len-3;
pop=2*len;
printf(“POP %d”,pop);
for(j=0;j<pop;j++)
{
top=top-1;
}
top++;
stack[top]=pro[no][0];
k=top;
k=k-1;
printf(” Push [%c,”,pro[no][0]);
for(j=0;j<st;j++)
{
if(stack[k]==st1[j])
{
col=j;
}
}
k++;
for(j=0;j<t;j++)
{
if(stack[k]==ter[j])
{
row=j;
}
}
top++;
stack[top]=table[col][row][0];
printf(“%c]\n”,table[col][row][0]);
}
else{printf(“\nError\nThe string not accepted.”);break;
}
printf(“\n”);
for(j=0;j<=top;j++)
{
printf(“%c”,stack[j]);
}
printf(“\t\t”);
for(j=i;j<strlen(ip);j++)
{
printf(“%c”,ip[j]);
}
printf(“\t\t”);
}
getch();
}
            }
            printf("\t");
            for(p=i;p<lip;p++)
            {
                printf("%s",&ip[p]);
            }
 
            if(r==2)
            {
                printf("\tReduced");
            }
            else
            {
                printf("\tShifted");
            }
            r=0;
             
            //try reducing
            for(k=0;k<stpos;k++)
            {
                f=0;
 
                for(l=0;l<10;l++)
                {
                    ts[l]='\0';
                }
 
                tspos=0;
                for(l=k;l<stpos;l++) //removing first caharcter
                {
                    ts[tspos]=stack[l];
                    tspos++;
                }
 
                //now compare each possibility with production
                for(m=0;m<np;m++)
                {
                    cr = strcmp(ts,g[m].prod);
 
                    //if cr is zero then match is found
                    if(cr==0)
                    {
                        for(l=k;l<10;l++) //removing matched part from stack
                        {
                            stack[l]='\0';
                            stpos--;
                        }
 
                        stpos=k;
         
                        //concatinate the string
                        strcat(stack,g[m].p);
                        stpos++;
                        r=2;
                    }
                }
            }
        }
         
        //moving input
        sc=ip[i];
        stack[stpos]=sc;
        i++;stpos++;
 
    }while(strlen(stack)!=1 && stpos!=lip);
 
    if(strlen(stack)==1)
    {
        printf("\n String Accepted");
    }
return 0;
}
