// Example program
#include <iostream>
#include <string>

int main()
{
  int len=0;
  int i;
  int flag=0;
  std::string str[25],r_str[25];
  std::cout << "enter the string:  ";
  std::cin>>str[25];
  
  
  for(i=0;;i++)
  {
      if(str[i] != "\0")
      len++;
  }
    
  for(i=0;i<=len-1;i++)
    r_str[i]=str[len-1-i];

  for(i=0;i<=len-1;i++)
  {
    if(str[i]==r_str[i])
        flag++;
    else
        flag=0;
  }
  
    if(flag)
        std::cout<<"string you entered - "<<str<<" - is palindrome";
    else
        std::cout<<"string you entered - "<<str<<" - is not palindrome";
  
  return 0;
}
