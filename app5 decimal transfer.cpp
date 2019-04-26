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
  printf ("請選擇模式(十進制d,二進制b,十六進制h:");
  scanf ("%c",&input);
  if (input==100)  
  {
   printf ("請輸入十進位數"); 
   scanf ("%d",&number);  
   char s[10]; 
   itoa(number, s, 2);
   printf ("十進制為%d轉換成二進制%s\n",number,s);
   printf ("十進制為%d轉換成十進制%o\n",number,number); 
   printf ("十進制為%d轉換成十六進制%x\n",number,number);
   break;
  }
  else if (input==98)  
  {
   long long b;
   printf ("請輸入二進位數"); 
   scanf ("%lld",&b); 
   printf ("二進制為%d轉換成十進制%d\n",b,convertBinaryToDecimal(b));
   printf ("二進制為%d轉換成八進制%o\n",b,convertBinaryToDecimal(b));
   printf ("二進制為%d轉換成十六進制%x\n",b,convertBinaryToDecimal(b));
   break;
  }
  else if (input==104) 
  {
   printf ("請輸入十六進位數");
   scanf ("%x",&number);
   char s[10];  
   itoa(number, s, 2);
   printf ("十六進制為%d轉換成二進制%s\n",number,s);
   printf ("十六進制為%d轉換成八進制%o\n",number,number);
   printf ("十六進制為%d轉換成十進制%d\n",number,number);
   break;
  }
  else
  printf ("輸入錯誤，請重新輸入");
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
