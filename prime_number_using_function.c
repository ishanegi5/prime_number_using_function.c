#include<stdio.h>
int prime(int a)
{ int i,count=0;
   for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
        
    }
   
    if(count==1||a==2)
    {
        printf("prime number!");
    }
    else
    {
        printf("Not prime number!"); 
    }
    printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;

}
int main()
{  int n;
  printf("Enter n: ");
  scanf("%d",&n);
  prime(n);
    return 0;
}
