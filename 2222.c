#include<stdio.h>
int main(){
	aakib:
	printf("enter 1 for english\n");
	printf("enter 2 for hindi\n");
	printf("enter 3 for gujarati\n");
	printf("enter 4 for exit\n");
	int choice,choice2;
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:
	printf("enter 1 for chota recharge\n");
	printf("enter 2 for medium recharge\n");
	printf("enter 3 for bada recharge\n");
	printf("enter your choice");
	scanf("%d",&choice2);
	switch(choice2){
		case 1:printf("you have done chota recharge successfully\n");
			goto aakib;
			case 2:printf("you have done medium recharge successfully\n");
			goto aakib;
			case 3:printf("you have done bada recharge successfully\n");
			goto aakib;
			
			default:printf("invalid choice\n");
			goto aakib;
		
	}
	
	
	
	
	
	case 2:
		printf("chote recharge ke liye 1 dabaye\n");
		printf("medium recharge ke liye 2 dabaye\n");
		printf("bade recharge ke liye 3 dabaye\n");
		printf("enter your choice");
		scanf("%d,",&choice2);
		switch(choice2){
				case 1:printf("you have done chota recharge successfully\n");
			goto aakib;
			case 2:printf("you have done medium recharge successfully\n");
			goto aakib;
			case 3:printf("you have done bada recharge successfully\n");
			goto aakib;
			
			default:printf("invalid choice\n");
		goto aakib;
		}
		case 3: 
			printf("chota rechage mate 1 dabavo\n");
		printf("medium recharge mate 2 dabavo\n");
		printf("bada recharge mate 3 dabavo\n");
		printf("enter your choice");
		scanf("%d,",&choice2);
		switch(choice2){
				case 1:printf("you have done chota recharge successfully\n");
			goto aakib;
			case 2:printf("you have done medium recharge successfully\n");
			goto aakib;
			case 3:printf("you have done bada recharge successfully\n");
			goto aakib;
			
			default:printf("invalid choice\n");
			goto aakib;
			
	
	}
	case 4:printf("exited successfully\n");
	break;
	default:;
}
}
