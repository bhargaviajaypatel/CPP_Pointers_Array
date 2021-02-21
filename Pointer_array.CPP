#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int array[5];
   int i,sum=0;
   int *ptr;

   cout<<"\nEnter array elements (5 integer values):"<<endl;
   for(i=0;i<5;i++)
   cin>>array[i];

   ptr = array;

   for(i=0;i<5;i++)
   {
      sum = sum + *ptr;
      ptr++;
   }

   cout<<"\nThe sum is:"<<sum<<endl;

   getch();
}