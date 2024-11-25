int excel(char *columnTitle)
{
int op,s=0;
while(*columnTitle!='\0')
{


 if(*columnTitle>='A' &&  *columnTitle<='Z')
{
op=(int)(*columnTitle-'A'+1);
s=s*26+op;
}
columnTitle++;
}


return s;
}
