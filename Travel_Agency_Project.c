#include <stdio.h>
#include <string.h>
struct Driver
{
    char name[18];
    char dlno[45];
    char route[20];
    int kms;
};
int main()
{
   struct Driver d1,d2,d3;
   printf("Enter the details of the Driver 1: \n");
   printf("Enter the name of the first driver: \n");
   scanf("%s",&d1.name);
   printf("Enter the dlno of the first driver: \n");
   scanf("%s",&d1.dlno);
   printf("Enter the route of the first driver: \n");
   scanf("%s",&d1.route);
   printf("Enter the kms of the first driver: \n");
   scanf("%d",&d1.kms);
   
   printf("Enter the details of the Driver 2: \n");
   printf("Enter the name of the second driver: \n");
   scanf("%s",&d2.name);
   printf("Enter the dlno of the second driver: \n");
   scanf("%s",&d2.dlno);
   printf("Enter the route of the second driver: \n");
   scanf("%s",&d2.route);
   printf("Enter the kms of the second driver: \n");
   scanf("%d",&d2.kms);
   
   printf("Enter the details of the Driver 3: \n");
   printf("Enter the name of the third driver: \n");
   scanf("%s",&d3.name);
   printf("Enter the dlno of the third driver: \n");
   scanf("%s",&d3.dlno);
   printf("Enter the route of the third driver: \n");
   scanf("%s",&d3.route);
   printf("Enter the kms of the third driver: \n");
   scanf("%d",&d3.kms);

   printf("*****Printing Info of first driver:*****");
   

    return 0;
}