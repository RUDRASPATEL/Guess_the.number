#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number , guess , nguesses=1;
	srand(time(0));
	number=rand()%100 + 1;// generate random number between 1 and 100
    //	printf("the number is %d\n", number);
	//keep running the loop until iy is get;
	do{
		printf(" guess a number betwee (1-100)\n");
		scanf("%d", &guess);
		if(guess>number){
			printf("lower number please\n");
		}
		else if(guess<number){
				printf("higher number please\n");
		}
		else{
				printf("you guesses it in %d attempts\n", nguesses);
		}
		nguesses++;
	}while(guess!=number);
	
	return 0;
}
