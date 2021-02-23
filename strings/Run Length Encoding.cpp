
char *encode(char *src)
{     
  //Your code here 
  string s=src;
  string s1="";   //res
  
  for(int i=0;i<s.length();i++)
  {
      int cnt=1;                       // cnt individual freq
      s1+=s[i]; 
      
      while(i<s.length()-1 && s[i]==s[i+1])   // until diff ele is encountered
      { 
          cnt++;                                
          i++; 
      }
      
      s1+=cnt+'0';                           //char+cnt;  // int+'0' ->converts int to string;
      
  }
  char *cstr = new char[s1.length() + 1];   //initalize char array in char array last char is '\0'
  strcpy(cstr, s1.c_str());                 // cpy s1 to cstr
  return cstr;
  
}     
