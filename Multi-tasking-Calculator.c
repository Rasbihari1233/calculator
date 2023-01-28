#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
 {
    float cal,Area;
    int factorial;
    int Even;
    int Prime;
    int Pallindrome;
    int choice;
    int Largest;
    int Per;
    int Largest_of_two_no;
    float Distance;
    float Root;
    float Celsius;
    float Circumference;
    int Perimeter;
    
    
    
    float calculate();
    float area();
    int prime();
    int even();
    int pallindrome();
    int largest();
    int per();
    int largest_of_two_no();
    float distance();
    float root();
    float celsius();
    float circumference();
    int perimeter();
    void converter();

while(1)
{
    printf("\n\n\n\t\t  ______Multi-tasking_Calculator_________\n");
    printf("\n\t\t~~  press 0 for calculator:                                            ~~\n");
    printf("\t\t~~  press 1 for area:                                                  ~~\n");
    printf("\t\t~~  press 2 for prime:                                                 ~~\n");
    printf("\t\t~~  press 3 for even:                                                  ~~\n");
    printf("\t\t~~  press 4 for Pallindrome:                                           ~~\n");
    printf("\t\t~~  press 5 for largest:                                               ~~\n");
    printf("\t\t~~  press 6 for per of marks and grade:                                ~~\n");
    printf("\t\t~~  press 7 for find largest,Smallest and Equal to of two numbers:     ~~\n");
    printf("\t\t~~  press 8 for find the distance between two points:                  ~~\n");
    printf("\t\t~~  press 9 for Quadratic root:                                        ~~\n");
    printf("\t\t~~  press 10 for celsius to fahrenheit(0) and kalvin(1)                ~~\n");
    printf("\t\t~~  press 11 for Circumference of the circle:                          ~~\n");
    printf("\t\t~~  press 12 for Perimeter of the Rectangle:                           ~~\n");
    printf("\t\t~~  press 13 for Unit Converter                                        ~~\n");
     printf("\t\t  ====================================================================   \n");
    printf("\t\t  press 14 for exit:                                                 \n");
    
    
    printf("\n\t\t  enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:
        cal=calculate();
        break;
        
        case 1:
        Area=area();
        break;
        
        case 2:
        Prime=prime();
        break;
        
        case 3:
        Even=even();
        break;
        
        case 4:
        Pallindrome=pallindrome();
        break;
        
        case 5:
        Largest=largest();
        break;
        
        case 6:
        Per = per();
        break;
        
        case 7:
        Largest_of_two_no = largest_of_two_no();
        break;
        
        case 8:
        Distance = distance();
        break;
        
        case 9:
        Root = root();
        break;
        
        case 10:
        Celsius = celsius();
        break;
        
        case 11:
        Circumference = circumference();
        break;
        
        
        case 12:
        Perimeter = perimeter();
        break;

        case 13:
        converter();
        break;
        
        case 14:
        exit(0);
        // break;
        
        
        default :
        printf("\twrong choice");
        
    
    }
}
}
    

float calculate()
{
        char choice;
        float a,b,c;
    
        printf("\tenter first number: ");
        scanf("%f",&a);
        printf("\tenter second number: ");
        scanf("%f",&b); 
        printf("\n\tenter + for addition:");
        printf("\n\tenter - for substraction:");
        printf("\n\tenter * for multiplication:");
        printf("\n\tenter / for division:");
        fflush(stdin);
        printf("\n\tenter your choice:");
        scanf(" %c",&choice);
    
        switch(choice)
        {   
            case '+':
            { 
             c=a+b;
             printf("\taddition is %.2f",c);
             break;
            }
            case '-':
            { 
                 c=a-b;
                 printf("\tsubstraction is %.2f",c);
                 break;
            }
            case '*':
            { 
                  c=a*b;
                  printf("\tmultiplication is %.2f",c);
                  break;
            } 
            case '/':
            { 
                  c=a/b;
                  printf("\tdivision is %.2f",c);
                  break;
            }
            default:
            {
                ("\tyour choice is wrong ");
            }
        }
     return(c);
}
    
    
float area() 
{
    int choice;
    float l,b,s,h,r,area;
    char grade;
    printf("\tenter 1 for area of rectangle:\n");
    printf("\tenter 2 for area of square:\n");
    printf("\tenter 3 for area of triangle:\n");
    printf("\tenter 4 for area of circle:\n");
    printf("\tenter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        { 
             printf("\tenter the length and breadth of rectangle :");
             scanf("%f%f",&l,&b);
             area=l*b;
             printf("\tArea of rectangle is %.2f",area);
             break;
        }
        case 2:
        { 
             printf("\tenter the side of square: ");
             scanf("%f",&s);
             area=s*s;
             printf("\tArea of square is %.2f",area);
             break;
        }
        case 3:
        { 
             printf("\tenter the base and height of triangle: ");
             scanf("%f%f",&b,&h);
             area=0.5*b*h;
             printf("\tArea of triangle is %.2f",area);
             break;
        }
        case 4:
        { 
             printf("\tenter the radius of circle: ");
             scanf("%f",&r);
             area=3.14*r*r;
             printf("\tArea of circle is %.2f",area);
             break;
        }
        default:
        printf("\tyour choice is wrong");
    } 
 }
   
   int prime()
{
    
    int n,i,flag=0;
    printf("\tenter a number: ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("\tNot Prime");
        exit(0);
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
            if(flag==0)
            {
                printf("\tPrime Number");
            }
            else
            {
                printf("\tNot Prime");
            }
    }
    
}

  int even()
{  
        int n;
        printf("\tenter a number:");
        scanf("%d",&n);
         if(n%2==0)
         {
               printf("\teven number" );
         }
         else
         {
               printf("\tOdd number ");
         }
    

}


int pallindrome()
{
    
    int n,r,rev=0,t;
    printf("\tenter a number: ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
        printf("\tReverse number is %d",rev);
    if(t==rev)
    {
        printf("\n\tPallindrome");
    }
    else
    {
        printf("\n\tNot Pallindrome");
    }
}


int largest()
    {

printf("\n\tProgram to accept three integers and print the largest among them.\n");



        int a,b,c;
        printf("\n\tenter first number:  ");
        scanf("%d",&a);
        printf("\tenter second number: ");
        scanf("%d",&b);
        printf("\tenter third number: ");
        scanf("%d",&c);
        
    if((a==b)&&(b==c)&&(c==a))
        printf("\n\tEqual number");
    else
    {
        if(a>b)
        {
            if(a>c)
                printf("\n\t%d is largest",a);
                
            else
	            printf("\n\t%d is largest",c);
        }
        else
        {   
            if(b>c)
 	              printf("\n\t%d is largest",b);
            else
	              printf("\n\t%d is largest",c);
        }

    }
}


int per()
{	
    float P,C,M,H,E,A,per;
    printf("\n\tenter the marks obtained by student in five subjects: ");
    scanf("%f%f%f%f%f",&P,&C,&M,&H,&E);
    per=(P+C+M+H+E)/5;
    printf("\tYour percentage is %.2f\n",per);
   if(per>=60)
    printf("\tFirst Division");
    else if((per>=60)&&(per<60))
    printf("\tSecond Division");
    else if((per>=40)&&(per<50))
    printf("\tThird Division");
    else if(per<40)
    printf("\tFAIL");
}


int largest_of_two_no()
{
    int x,y;
    printf("\n\tenter first number: ");
    scanf("%d",&x);
    printf("\tenter second number: ");
    scanf("%d",&y);
    if(x>y)
    printf("\t%d is largest",x);
    else if(x<y)
    printf("\t%d is largest",y);
    else
    printf("\tBoth number are equal");
}

// WAP to find the distance between two point A(x1,y1)and B(x2,y2) using distance formula.

float distance()
{
    float x1,y1,x2,y2,d;
    printf("\n\tenter the coordinate of first point: ");
    scanf("%f%f",&x1,&y1);
    printf("\tenter the coordinate of second point: ");
    scanf("%f%f",&x2,&y2);
    d=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
    printf("\tDistance is %.4f",d);
}

float root()
{
    float x1,x2,a,b,c ;
    printf("\n\tenter the value of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("\tRoots are  %.2f , %.2f",x1,x2);
}



float celsius()
{
    float c,fah,k,f;
    int choice;
    printf("\n\tenter the temperature in celsius: ");
    scanf("%f",&c);
    printf("\tenter fah for fahrenheit(0) and k for kelvin(1): ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 0:
            fah=(((9*c)/5.0)+32);
            printf("\tTemperature in fahrenheit is %0.2f ",fah);
            break;
        case 1:
            k=c+273;
            printf("\tTemperature in celsius is %0.2f ",k);
            break;
        default :
             printf("\tPlease! Choose the right Choice");
             break;
    }
    
}


float circumference()
{
    float r,cir;
    printf("\n\tenter the radius of the circle: ");
    scanf("%f",&r);
    cir=2*3.14*r;
    printf("\tThe circumference of the circle is %.2f",cir);
}


int perimeter()
{ 
    int l,b,p;
    printf("\n\tenter the length of the Rectangle: ");
    scanf("%d",&l);
    printf("\tenter the breadth of the Rectangle: ");
    scanf("%d",&b);
    p = 2*(l+b);
    printf("\tPerimeter of the Rectangle is %d ",p);

}


void converter()

{ 

        int choice;
        float result,num;

        printf("\n\t\t========================================================");
        printf("\n\t\t**    Press 1 for convert kilometre to metre          **\n"); 
        printf("\t\t**    Press 2 for convert Feet to inch                **\n"); 
        printf("\t\t**    Press 3 for convert Metre to centimetre         **\n"); 
        printf("\t\t**    Press 4 for convert kilogram to pounds          **\n");
        printf("\t\t**    Press 5 for convert kilogram to gram            **\n");
        printf("\t\t**    Press 6 for convert hours to minutes            **\n");
        printf("\t\t**    Press 7 for convert celsius to Kelvin           **\n");
        printf("\t\t**    press 8 for convert kilowatt to watt            **\n");
        printf("\t\t**    press 9 for convert centimetre to milimetre     **\n");
        printf("\t\t**    press 10 for convert hours to second            **\n");
        printf("\t\t**    press 11 for convert metre to kilometre         **\n");
        printf("\t\t**    press 12 for convert inch to feet               **\n");
        printf("\t\t**    press 13 for convert centimetre to metre        **\n");
        printf("\t\t**    press 14 for convert gram to kilogram           **\n");
        printf("\t\t**    press 15 for convert minutes to hours           **\n");
        printf("\t\t**    press 16 for convert kelvin to celsius          **\n");
        printf("\t\t**    press 17 for convert watt to kilowatt           **\n");
        printf("\t\t**    press 18 for convert milimetre to centi         **\n");
        printf("\t\t**    press 19 for convert second to hours            **\n");
        printf("\t\t========================================================\n");
        printf("\t\tEnter your choice:"); 
        
        scanf("%d",&choice); 

        switch (choice) { 

                case 1: 
                {
                        printf("\t\tEnter  length in Kilometre : "); 
                        scanf("%f",&num); 
                        result = num*1000;
                        printf("\t\tLength in metre is %.2f",result);
                        break;
                }
                case 2:  
                {
                        printf("\t\tEnter length in Feets :"); 
                        scanf("%f",&num);
                        result = num*12; 
                        printf("\t\tThe length in feet is %.2f",result);
                        break; 
                }
                case 3: 
                {
                        printf("\t\tEnter length in Centimetre :"); 
                        scanf("%f",&num); 
                        result = num*100;
                        printf("\t\tThe length in centimetre is %.2f",result); 
                        break;
                }
                case 4:
                {
                        printf("\t\tEnter weight in kilogram:");
                        scanf("%f",&num);
                        result = num*2.205;
                        printf ("\t\tThe weight in pound is %.2f",result);
                        break;
                }
                case 5:
                {
                        printf("\t\tEnter weight in Kilogram:"); 
                        scanf("%f",&num); 
                        result = num*1000;
                        printf("\t\tThe weight in gram is %.2f",result); 
                        break;  
                }
                case 6:
                {
                        printf("\t\tEnter time in hours:"); 
                        scanf("%f",&num); 
                        result = num*60;
                        printf("\t\tThe time in minute is %.2f",result); 
                        break; 
                }
                case 7:
                {
                        printf("\t\tEnter temperature in celsius:"); 
                        scanf("%f",&num);
                        result = num+273.15;
                        printf("\t\tTemperature in kelvin is %.2f",result); 
                        break; 
                }
                case 8:
                {
                        printf("\t\tEnter energy in kilowatt:");
                        scanf("%f",&num);
                        result = num*1000;
                        printf("\t\tThe energy in watt is  %.2f",result);
                        break;
                }
                case 9:
                {
                        printf("\t\tEnter lenth in centimetre:");
                        scanf("%f",&num);
                        result= num*10;
                        printf("\t\tThe length in milimetre is %.2f",result);
                        break;
                }
                case 10:
                {
                        printf("\t\tEnter time in hours:");
                        scanf("%f",&num);
                        result=num*3600;
                        printf("\t\tTime in second is %.2f",result);
                        break;
                }
                case 11:
                {
                        printf(" \t\tEnter length in  metre:");
                        scanf("%f",&num);
                        result=num/1000;
                        printf("\t\tLength in kilometre is %.2f",result);
                        break;
                }
                case 12:
                {
                        printf(" \t\tEnter length in inches:");
                        scanf("%F",&num);
                        result=num/12;
                        printf("\t\tLength in feet is %.2f",result);
                        break;
                }
                case 13:
                {
                        printf(" \t\tEnter length in centimetre:");
                        scanf("%f",&num);
                        result=num/100;
                        printf(" \t\tlength in metre is %.2f",result);
                        break;
                }
                case 14:
                {
                        printf(" \t\tEnter weight in grams:");
                        scanf("%f",&num);
                        result=num/1000;
                        printf("\t\tThe weight in kilogram is %.2f",result);
                        break;
                }
                case 15:
                {
                    printf(" \t\tEnter time in minutes:");
                    scanf("%f",&num);
                    result=num/60;
                    printf("\t\tTime in hour is %.2f",result);
                    break;
                }
                case 16:
                {
                    printf("\t\tEnter temperature in kelvin:");
                    scanf("%f",&num);
                    result=num-273;
                    printf(" \t\tTemperature in celcius is %.2f",result);
                    break;
                }
                case 17:
                {
                    printf("\t\tEnter energy in watt:");
                    scanf("%f",&num);
                    result=num/1000;
                    printf("\t\tThe energy in kilowatt is %.2f ",result);
                    break;
                }
                case 18:
                {
                    printf("\t\tenter length in milimetre:");
                    scanf("%f",&num);
                    result=num/10;
                    printf("\t\tThe length in centimetre is %.2f",result);
                    break;
                }
                case 19:
                {
                    printf("\t\tEnter time in seconds:");
                    scanf("%f",&num);
                    result=num/3600;
                    printf("\t\tThe time in hour is %.2f",result);
                    break;
                }
                case 20:
                {
                default: 
                {
                    printf("\t\tINVALID INPUT"); 
                    break;
                }
            }
    }
}
