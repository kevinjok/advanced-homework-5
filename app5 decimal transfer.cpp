#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int convertBinaryToDecimal(long long b); 
int main() 
{
 char input; 
 int number; 
 for (;;)
 {
  printf ("�п�ܼҦ�(�Q�i��d,�G�i��b,�Q���i��h:");
  scanf ("%c",&input);
  if (input==100)  
  {
   printf ("�п�J�Q�i���"); 
   scanf ("%d",&number);  
   char s[10]; 
   itoa(number, s, 2);
   printf ("�Q�i�%d�ഫ���G�i��%s\n",number,s);
   printf ("�Q�i�%d�ഫ���Q�i��%o\n",number,number); 
   printf ("�Q�i�%d�ഫ���Q���i��%x\n",number,number);
   break;
  }
  else if (input==98)  
  {
   long long b;
   printf ("�п�J�G�i���"); 
   scanf ("%lld",&b); 
   printf ("�G�i�%d�ഫ���Q�i��%d\n",b,convertBinaryToDecimal(b));
   printf ("�G�i�%d�ഫ���K�i��%o\n",b,convertBinaryToDecimal(b));
   printf ("�G�i�%d�ഫ���Q���i��%x\n",b,convertBinaryToDecimal(b));
   break;
  }
  else if (input==104) 
  {
   printf ("�п�J�Q���i���");
   scanf ("%x",&number);
   char s[10];  
   itoa(number, s, 2);
   printf ("�Q���i�%d�ഫ���G�i��%s\n",number,s);
   printf ("�Q���i�%d�ഫ���K�i��%o\n",number,number);
   printf ("�Q���i�%d�ഫ���Q�i��%d\n",number,number);
   break;
  }
  else
  printf ("��J���~�A�Э��s��J");
 }
 
 system ("pause");
 return 0; 
}
int convertBinaryToDecimal(long long b)
{
    int decimalNumber = 0, i = 0, remainder;
    while (b!=0)
    {
        remainder = b%10;
        b /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
