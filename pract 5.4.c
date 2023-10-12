#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
  int a,b,c,disc;//declaring variables
  float r1,r2,imag;
  //getting input
  printf("Enter a value of a :");
  scanf("%d,&a");
  printf("Enter a value of b :");
  scanf("%d,&b");
  printf("Enter a value of c :");
  scanf("%d,&c");
  disc=b^2-4*a*c;
  //using switch for discriminant>0
  switch(disc>0)
  {
    case 1:
    r1=(-b + sqrt(disc)) / (2*a);
    r2=(-b - sqrt(disc)) / (2*a);
    printf("root 1 is %.2f",r1);
    printf("\nroot 2 is %.2f",r2);
    break;
    case 0: //using switch for discriminant<0 in case 0
    switch(disc<0)
    {
     case 1:
        r1=-b/(2*a);
        r2=-b/(2*a);
        imag=sqrt(-disc)/(2*a);
        printf("root 1 is %.2f",r1);
        printf("\nroot 2 is %.2f",r2);
        printf("\nimaginary is %.2f",imag);
        break;
     case 0: //using case 0 for determinant=0
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("root 1 is %.2f",r1);
        printf("\nroot 2 is %.2f",r2);
        break;
    }
  }
  printf("\nDone by 23TCEMBF Prince Vagadiya");
  getch();
}
