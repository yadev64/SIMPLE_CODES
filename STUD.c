/* Program to display Student Details*/
#include<stdio.h>
#include<string.h>

struct stud
 {
  char name[50];
  int roll;
  int mks[3];
  int avg;
 }s[100];

 void getdata(int n)
 {
  int i,j,x=0;
  for(i=0;i<n;i++)
  {
   printf("Name     : ");
   scanf("%s",s[i].name);
   printf("Roll No. : ");
   scanf("%d",&s[i].roll);
   printf("Marks :- ");

   for(j=0;j<3;j++)
   {
    printf("\nSubject [%d] : ",j+1);
    scanf("%d",&s[i].mks[j]);
    x=x+s[j].mks[j];
   }
   
   s[i].avg=x/3;
  
  }
 }

  int disp(int n)
  {
   int x,i,j,k,f,av[100],z;
   printf(".....................STUDENT DETAILS.....................\n\n\n");
   printf("\n1.Single student\n2.All\n3.Exit\n\n  Make your selection(1-3) : ");
   scanf("%d",&x);
   
   if(x==1)
   {
    printf("\n\nEnter Student Roll No.  : ");
    scanf("%d",&j);
 
    for(i=0;i<n;i++)
    {
     if(j==s[i].roll)
     {
      printf("Found at Index : %d\n\n\n",i);
      printf("Name     : ");
      puts(s[i].name);
      printf("Roll No. : %d ",j);                            
      for(k=0;k<3;k++)
      {
       printf("\nSubject [%d] :%d \n",k+1,s[i].mks[k]);
    
      }
      printf("Avg     : %d",s[i].avg);
     }
   
    else
     {
      printf("Student Not Found\n\n");
      break;
     }
    }
   }

  else if(x==2)  
   {
    for(f=0;f<n;f++)
    
     

     {
    
     printf("Name     : ");
      puts(s[f].name);
      printf("Roll No. : %d ",s[f].roll);
      for(k=0;k<3;k++)
      {
       printf("\nSubject [%d] :%d \n",k+1,s[f].mks[k]);
    
      }
      printf("Avg     : %d",s[f].avg);
     }
    
    }
  else if(x==3)
  {
   printf("Exiting>>");
  }
 }

 void main()
 {
  
  int q=1,sl,n;
  while(q==1)
  {
   
   printf(".....................STUDENT DETAILS.....................\n\n\n");
   printf("\n1.Enter Data\n2.View Details\n3.Exit\n\n  Make your selection(1-3) : ");
   scanf("%d",&sl);
   
   if(sl==1)
   {
    printf("Enter No of Students : ");
    scanf("%d",&n);
    getdata(n);
    
   }

   else if(sl==2)
   {
    disp(n);
    
   }
 
   else if(sl==3)
   {
    q=0;
    break;
   }
   
  else
   {
    printf("Try Again :) ");
    
   }
  }
 }
