#include <stdio.h>
main ()
{
	printf("Enter your choice");
	int c=0;
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Food item - Pizza \nPrice - Rs 239 \n");
			break;
        case 2:
			printf("Food item - Burger \nPrice - Rs 129 \n");
			break;
		case 3:
	    	printf("Food item - Pasta \nPrice - Rs 179 \n");
			break;
		case 4:
			printf("Food item - French Fries \nPrice - Rs 99 \n");
			break;
		case 5:
			printf("Food item - Sandwich \nPrice - Rs 149 \n");
			break;
		default:
			printf("Food item - Not available");
			break;
	}
}
