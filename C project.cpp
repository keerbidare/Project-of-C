#include<stdio.h>
main()
{int num[10],sum,avg,rno=0;
char name[100]={'\0'};
printf("Enter your name:");
scanf("%s",&name);
printf("\n Enter your roll.no:");
scanf("%s",&rno);
printf("\nEnter your Maths marks(Out of 100):");
scanf("%d",&num[1]);
printf("\nEnter your English marks(Out of 100):");
scanf("%d",&num[2]);
printf("\nEnter your Physics marks(Out of 100):");
scanf("%d",&num[3]);
printf("\nEnter your Chemistry marks(Out of 100):");
scanf("%d",&num[4]);
printf("\nEnter your Computer science marks(Out of 100):");
scanf("%d",&num[5]);
sum=num[1]+num[2]+num[3]+num[4]+num[5];
avg=sum/5;
printf("*************************************************************************");
printf("\n\t\tREPORT CARD        ");
printf("\nNAME:%s",name);
printf("\nRoll No:%d",rno);
printf("\nSUBJECT   \t  MARKS\n");
printf("Maths     \t    %d \n",num[1]);
printf("Physics   \t    %d \n",num[2]);
printf("Chemistry \t    %d \n",num[3]);
printf("Computers \t    %d \n",num[4]);
printf("English   \t    %d \n",num[5]);
printf("Sum       \t    %d \n",sum);
if(avg>90)

	printf("\tGrade:""A""\nPASS");
     else if(avg>80)
     printf("\tGrade:""B""\nPASS");
     else if(avg>70)
     printf("\tGrade:""C""\nPASS");
     else if(avg>60)
     printf("\tGrade:""D""\nPASS");
     else if(avg>50)
     printf("\tGrade:""E""\nPASS");
     else
     printf("\tFAIL");
}
