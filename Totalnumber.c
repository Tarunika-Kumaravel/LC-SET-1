int titleToNumber(char* columnTitle) {
  int res=0;
  int len=strlen(columnTitle);
  for(int i=0;i<len;i++)
  res=res*26+(columnTitle[i]-'A'+1);
  return res;   
}
