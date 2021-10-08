#include<stdio.h>
#include<conio.h>
int main() {
	// vairiable
	int a , b, c, f, r;
	
	//numbers add
	printf("Enter 1st number:");
	scanf("%d",&a);
	
	printf("Enter 2nd on:");
	scanf("%d",&b);
	
	///menu
	printf("...........MENU............\n(1)For sum prees 1\n(2)For multification prees 2\n(3)For redutions prees 3\n(4)For divition prees 4\n..........Selectc number accroding action......\n");
	scanf("%d",&f);
	
	//conditions
	if(f==1)
	r=a+b;
   else	if(f==2)
	r=a*b;
else if(f==3)
	r=a-b;
else if(f==4)
	r=a/b;
	else
	printf("choose valid on\n");
		///output
	printf("Your equations is:%d",r);	
    return 0;			
	
	
	
	
	}
