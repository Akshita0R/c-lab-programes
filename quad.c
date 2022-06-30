//Quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
	//variable declaration
	float a,b,c,r1,r2,rpart,ipart,d;
	printf("Enter the coefficient:");
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0)
	{
		 d=(b*b)-(4*a*c);
		 if(d==0)
 		{
   			r1=(-b)/(2*a);
   			r2=r1;
   			printf("The roots are equal r1=%f and r2=%f",r1,r2);
 		}
   		else if(d>0)
   		{
   			r1=(-b+(sqrt(d)))/(2*a);
   			r2=(-b-(sqrt(d)))/(2*a);
   			printf("The roots are distinct r1=%f and r2=%f",r1,r2);
   		}
   		else
   		{
   			rpart=(-b)/(2*a);
   			ipart=(sqrt(d))/(2*a);
   			printf("Roots are imaginary:%f+i%f",rpart,ipart);
   			printf("Roots are imaginary:%f-i%f",rpart,ipart);
   		}	
   	}
   	else
   	    {
   	    	printf("Not quadratic equation");
   	    }
   	 }
 
