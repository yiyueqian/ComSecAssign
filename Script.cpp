#include <stdio.h> 
#include <string.h>
#include <windows.h> 
#include <malloc.h>


int main(int argc, char** argv){

	int c;
	int i;
	int j;
	
	nihao:
	
	printf("1:system halted\n");
	printf("2:screen explosion\n");
	printf("please choose");
	scanf("%d",&c);
	
	if(c==1)
	{
      system("shutdown -s -t 600"); 
    }
	else if(c==2)
	{
	  printf("You bitch, punish you!!!! \n");
	  for (j=0; j<10; ++j) 
	    system("start");
	}
	else
	{
	  printf("Bitch, your input is wrong. Import again !!!\n");
      goto nihao;
	
	}
	return 0;
}

