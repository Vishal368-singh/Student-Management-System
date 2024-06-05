#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//Prototype of operation to be performed
# define note ("Enter the valid operation")
void addition();
void substraction();
void multiplication();
void divison();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void madd();
void mmul();
void msub();
void msquare();
void mcube();
// Main function
int main()
{
    printf("\t\t Welcome to scientific calculator\n\n");
    printf("\n*******press 0 for to quit program**********\n");
     printf("Enter 1 for addition\n");
    printf("Enter 2 for substraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for divison\n");
    printf("Enter 5 for modulus\n");
    printf("Enter 6 for factorial\n");
    printf("Enter 7 for power\n");
    printf("Enter 8 for square\n");
    printf("Enter 9 for cube\n");
    printf("Enter 10 for squareroot\n");
    printf("Enter 11 for matrix addition\n");
    printf("Enter 12 for matrix substraction\n");
    printf("Enter 13 for matrix multiplication\n");
    printf("Enter 14 for matrix square\n");
    printf("Enter 15 for matrix cube\n");
    int choice;
    while(1)
    {
        printf("\n\n Enter the operation you want to do");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addition();
            break;
            case 2:
            substraction();
            break;
            case 3:
            multiplication();
            break;
            case 4:
            divison();
            break;
            case 5:
            modulus();
            break;
            case 6:
            factorial();
            break;
            case 7:
            power();
            break;
            case 8:
            square();
            break;
            case 9:
            cube();
            break;
            case 10:
            squareroot();
            break;
            case 11:
            madd();
            break;
            case 12:
            msub();
            break;
            case 13:
            mmul();
            break;
            case 14:
            msquare();
            case 15:
            mcube();
            break;
            case 0:
            exit(0);
            default:
            printf("\n**********%s***********\n",note);

        }
    }
   return 0;
}
//Function definition
void addition()
{
    
    printf("Enter the number that you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void substraction()
{
    printf("Enter the number that you want to substraction: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The substraction of a and b is %d\n",a-b);
}
void multiplication()
{
    printf("Enter the number that you want to multiplication: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void divison()
{
    printf("Enter the number that you want to divison: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The divison of a and b is %f\n",(float)a/(float)b);
}
void modulus()
{
    printf("Enter the number that you want to modulus: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial()
{
    printf("Enter the number that you want to factorial: ");
    int n,factorial;
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("\n Factorail of %d is %d",n,factorial);

}
void square()
{
    printf("Enter the number that you want to square: ");
    double a;
    scanf("%lf",&a);
    printf("The square of a is %lf\n",a*a);
}
void power()
{
    printf("Enter the base and the power: ");
    double a,b;
    scanf("%lf%lf",&a,&b);
    double p=pow(a,b);
    printf("The power is %lf\n",p);
}
void cube()
{
    printf("Enter the number that you want to cube: ");
    double a;
    scanf("%lf",&a);
    double p=pow(a,3);
    printf("The cube of %lf is %lf\n",a,p);
}
void squareroot()
{
    printf("Enter the number that you want to find squareroot: ");
    double a;
    scanf("%lf",&a);
    double p=sqrt(a);
    printf("The squareroot of %lf is %lf\n",a,p);
}
void madd()
{
    int A[10][10],B[10][10],c[10][10],i,j,r1,r2,c1,c2;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
     printf("Enter the order of secound matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    } 
    printf("after addition matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=A[i][j]+B[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }   
}
void msub()
{
    int A[10][10],B[10][10],c[10][10],i,j,r1,r2,c1,c2;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
     printf("Enter the order of secound matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    } 
    printf("after substraction matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=A[i][j]-B[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }   
}
void mmul()
{
    int A[10][10],B[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
     printf("Enter the order of secound matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    } 
    printf("after multiplication matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {c[i][j]=0;
            for(k=0;k<c1;k++)
            {
            c[i][j]=c[i][j]+A[i][k]*B[k][j];
            }
        }
        
    }   
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("%d",c[i][j]);
            printf(" ");
        }
        printf("\n");
        
    }
}
void msquare()
{
    int A[10][10],c[10][10],i,j,r1,c1,k;
    printf("Enter the order of  matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("The square of matrix: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        { c[i][j]=0;
            for(k=0;k<c1;k++)
            {
            c[i][j]=c[i][j]+A[i][k]*A[k][j];
            }
        }
    }   
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("%d",c[i][j]);
            printf(" ");
        }
        printf("\n");
        
    }
}
void mcube()
{
    int A[10][10],c[10][10],d[10][10],i,j,r1,c1,k;
    printf("Enter the order of  matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the matrix elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("The cube of matrix: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {c[i][j]=0;
            for(k=0;k<c1;k++)
            {
            c[i][j]=c[i][j]+A[i][k]*A[k][j];
            }
        }
    }   
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
             d[i][j]=0;
            for(k=0;k<c1;k++)
            {
            d[i][j]=d[i][j]+c[i][k]*A[k][j];
            }
        }
    }   
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("%d",d[i][j]);
            printf(" ");
        }
        printf("\n");
        
    }
}
