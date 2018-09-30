#include<stdio.h>
int main(void)
{
	float quarts; //an amount of water in quarts
	float value; //the number of water molecules in the amount
	printf("please enter the amount of water in quarts\n");
	scanf("%f", &quarts);
	value = (950 *quarts)/ 3e-30;
	printf("the number of water molecules in the amount is %f\n",value);
	getchar();
	getchar();
}