#include<stdio.h>
#include<conio.h>

main()
{
	int choice,sel;

	printf("Press 1 for English...\n");

	printf("Press 2 for Hindi...\n");

	printf("Press 3 for Gujrati...\n\n");

	printf("Enter your choice:-");
	scanf("\n\n%d",&choice);


	switch (choice)

		{

		case 1:
			printf("\n\npress 1 for internet recharge...\n");

			printf("press 2 for top-up recharge...\n");

			printf("press 3 for speacial recharge...\n");

			printf("\nEnter your choice:-");
			scanf("%d",&sel);


			switch (sel)

			{
				case 1:
					printf("\n\nYOU have successfully done internet recharge...\n");
					break;
				case 2:
					printf("YOU have successfully done top-up recharg...\n");
					break;
				case 3:
					printf("YOU have successfully done speacial recharge...\n");
					break;
				default:
					printf("invalid choice..");

			}
		break;
		case 2:
			printf("\n\ninternet recharge ke liye 1 dabeye...\n");

			printf("top-up recharge ke liye 2 dabeye...\n");

			printf("speacial recharge ke liye 3 dabeye...\n");

			printf("enter your choice:-");
			scanf("%d",&sel);

			switch(sel)
			{
				case 1:
					printf("\n\nAapne safaltapurvak Internet Recharge kar liya he...\n");
					break;
				case 2:
					printf("Aapne safaltapurvak Top-up Recharge kar liya he...\n");
					break;
				case 3:
					printf("Aapne safaltapurvak Special Recharge kar liya he...\n");
					break;
				default:
					printf("invalid choice..");

			}
		break;

		case 3:
			printf("\n\ninternet recharge mate 1 dabavo...\n");

			printf("top-up recharge mate  2 dabavo...\n");

			printf("speacial recharge mate 3 dabavo...\n");

			printf("enter you choice:- ");
			scanf("%d",&sel);

			switch(sel)
			{
				case 1:
					printf("\n\nTame safaltapurvak Internet Recharge Karyu chhe...\n");
					break;
				case 2:
					printf("Tame safaltapurvak Top-up Karyu chhe...\n");
					break;
				case 3:
					printf("Tame safaltapurvak Special Recharge Karyu chhe...\n");
					break;
				default:
					printf("invalid choice..");

			}
		break;
	}
}
