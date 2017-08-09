//ques 3.)string manipulation 
//length , palindrome , substring , copy and compare
//vighnesh tiwari 4252 , AIT PUNE

#include<stdio.h>
#include<conio.h>
#include<string.h>

void length(char x[1000],char y[1000]);
void copy(char x[1000],char y[1000]);
void palindrome(char x[1000],char y[1000]);
void compare(char x[1000],char y[1000]);
void substring(char x[1000],char y[1000]);

int main()
{
	int a,b,c,i,j,k,m,n;
	char x[1000];
	char y[1000];
	printf("ENTER YOUR FIRST STRING\n");
	gets(x);
	printf("ENTER YOUR SECOND STRING\n");
	gets(y);

	
	do
	{
		printf("PRESS 1 : LENGTH OF STRINGS\nPRESS 2 : COPY THE STRING\nPRESS 3 : PALINDROME\nPRESS 4 : COMPARE\nPRESS 5 : SUBSTRING\nPRESS 6 : EXIT\n");
		scanf("%d",&m);
		
		switch(m)
		{
			case 1 : length(x,y);break;
			case 2 : copy(x,y);break;
			case 3 : palindrome(x,y);break;
			case 4 : compare(x,y);break;
			case 5 : substring(x,y);break;
			case 6 : ;break;
		}
	}
	while(m != 6);
	
	
} 

void length(char *x,char *y) // 
{
	int len1 = 0,len2 = 0;
	int i,j,count;
	printf("LENGTH OF STRING 1\t\n");
	for(i = 0 ; x[i] != '\0' ; i++)
	{
		len1++; 	
	}	
	printf("%d\n",len1);

	printf("LENGTH OF STRING 2\t\n");
	for(i = 0 ; y[i] != '\0' ; i++)
	{
		len2++; 	
	}	
	printf("%d\n",len2);
	
}

void copy(char (*x),char (*y))
{
	int i,j,k;
	
	printf("STRING 2 COPIED TO STRING 1\n");
	for(i = 0 ; x[i] != '\0' ; i++)
	{
		x[i] = y[i] ;
		printf("%c",x[i]);
	}
	printf("\n");

}

void palindrome(char (*x),char (*y))
{
	int len1 = 0,len2 = 0;
	int i,j,count= 0, flag= 0;
	//printf("LENGTH OF STRING 1\t\n");
	for(i = 0 ; x[i] != '\0' ; i++)
	{
		len1++; 	
	}	
	//printf("%d\n",len1);

	//printf("LENGTH OF STRING 2\t\n");
	for(i = 0 ; y[i] != '\0' ; i++)
	{
		len2++; 	
	}	
	//printf("%d\n",len2);
	for(i = 0 ; i < len1 ; i++)
	{
		if(x[i] == x[len1-1-i])
		{
			flag++;
		}
		
		
	}
	if(flag == len1)
	printf("YES IT IS  A PALINDROME\n");
	else
	printf("NOT A PALINDROME\n");
}

void compare(char (*x),char (*y))
{
	int i,j,k,flag = 0,len1 = 0;
	for(i = 0 ; x[i] != '\0' ; i++)
	{
		len1++; 	
	}
	for(i = 0 , j = 0 ; x[i] != '\0'&& y[i] != '\0' ; i++ , j++)
	{
		if(x[i] == y [i])
		{
			flag++;
		}
	}
	if(flag == len1 )
	{
		printf("SAME STRING\n");
	}
	else 
	printf("NOT SAME\n");
}

void substring(char (*x),char (*y))
{
	int len1 = 0,len2 = 0;
	int i,j,count= 0, flag= 0,z;
	//printf("LENGTH OF STRING 1\t\n");
	for(i = 0 ; x[i] != '\0' ; i++)
	{
		len1++; 	
	}	
	//printf("%d\n",len1);

	//printf("LENGTH OF STRING 2\t\n");
	printf("ENTER THE VALUE TO CREATE A SUB STRING\n");
	scanf("%d",&z);
	for(i = z ; x[i] != '\0' ; i++)
	{
		printf("%c",x[i]);
	}
}
