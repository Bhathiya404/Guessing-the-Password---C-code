
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{

 //Declare Variables
  int  N,i;

  int middleCharacter;
  int mid;
  int midOne;

  char PasswordList[10][10];
  char Reverse[10][10];
  int  flag;

//get the number of possible passwords we are going to input
 printf("Please enter number of possible passwords you are going to input: ");
 scanf("%d", &N);

 //checked if the number of passwords are 1<=N <=100
if(1> N || N>100)
    {
        printf("\n_______________________________________\n");
        printf("\n****You need to enter number less than 100****\n\n");
        printf("Please enter number of possible passwords you are going to input: ");
        scanf("%d", &N);
    }


for(i=0; i<N; i++)

{
    printf("Enter password %d : ",i+1);
    scanf("%s", PasswordList[i]);



       int length = strlen(PasswordList[i]);
       int rem=length%2;  //get the reminder of length variable

        //check the length in between 2 and 14 and odd
       if(length>13 || length<2 ||rem==0)
       {
           printf("\npassword length should be in between 2 and 14 and odd\n");
           printf("Re enter the password:\n");
            i--;

       }else if(N==1)   //if user enter number of possible passwords are 1
       {

        printf("%d %s",length, PasswordList[i]);
        return 0;
       }

}


//getting Reverse of passwords
for(int k=0; k<N; k++)
{
  int y=0;
  int len = strlen(PasswordList[k]);

  for(int x=len-1; x>=0; x--,y++)  //reverse the password list array
  {
    Reverse[k][y]=PasswordList[k][x];
  }

}


int p;
int q;
for(p=0; p<N; p++)
{
    for(q=0;q<N;q++)
    {
        //compare if password list is equal to revers for the password strings
        if(strcmp(PasswordList[p],Reverse[q])==0)
        {
           flag=1;
           break;
        }
    }
    //if both are equal
    if(flag==1)
    {
        // getting mid value of the odd password(Mid index)
       mid= (strlen(PasswordList[p]))/2;

       //getting middle Character
       middleCharacter=Reverse[p][mid];


       break;
    }

}
//check if it is uppercase or lowercase
    if(middleCharacter<'a' || middleCharacter >'z') //if uppercase
     {
        printf("\n\n______________________________\n\n");
        printf("Please enter lowercase alphabets or palindromes \n");
        return 0;
     }
     else
       {
        printf("\n\n______________________________\n\n");
        printf("%ld", strlen(PasswordList[p]));
        printf("%c\n\n",Reverse[p][mid]);
        }

  return 0;

}
