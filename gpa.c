#include <stdio.h>
int main()
{
   // here i have decleared my 5 subjects you can declear your own subjects //
   float dld, eca, pf, ps, cal, percentage;
   printf("                           **COMSATS CGPA CALCULATOR**      \n ");
   
   printf(" Note: Total Marks are Available on Hybird Portal, in Summary Portion      \n ");
   printf(" Note: Lab Subjects Total Marks are not available you can calculate them through LAB Program    \n ");
   printf(" \n ");
   
   printf("Enter dld total percentage ");
   scanf("%f", &dld);
   printf("Enter eca total percentage ");
   scanf("%f", &eca);
   printf("Enter pf total percentage  ");
   scanf("%f", &pf);
   printf("Enter ps total percentage  ");
   scanf("%f", &ps);
   printf("Enter cal total percentage ");
   scanf("%f", &cal);
   
   // here i have multiplied my subjects with 4 & 3 because some of my subjects are of 4 credit hours and 3 credit hours,  //
   percentage=dld*4+eca*4+pf*4+ps*3+cal*3;
   percentage=percentage/18;
   
   printf("Your total percentage is %f", percentage);
   if(percentage>=90 && percentage<=100)
      
      // down there is if condition according to comsats marks criteria //
  {
     printf("\nGPA=4.0");
     printf("\nA");
  }
  else if(percentage>=85 && percentage<=89.9)
  {
      printf("\nGPA=3.7");
      printf("\nA-");
  }
  else if(percentage>=80 && percentage<=84.9)
  {
      printf("\nGPA=3.3");
      printf("\nB+");
  }
  else if(percentage>=75 && percentage<=79.9)
  {
      printf("\nGPA=3");
      printf("\nB");
  }
  else if(percentage>=70 && percentage<=74.9)
  {
      printf("\nGPA=2.7");
      printf("\nB-");
  }
  else if(percentage>=65 && percentage<=69.9)
  {
      printf("\nGPA=2.3");
      printf("\nC+");
  }
  else if(percentage>=60 && percentage<=64.9)
  {
      printf("\nGPA=2.0");
      printf("\nC");
  }
  else if(percentage>=55 && percentage<=59.9)
  {
      printf("\nGPA=1.7");
      printf("\nC-");
  }
  else if(percentage>=50 && percentage<=54.9)
  {
      printf("\nGPA=1.3");
      printf("\nD");
  }
  else if(percentage>=0 && percentage<50.9)
  {
      printf("\nGPA=0.0");
      printf("\nFAIL");
  }
  


}
