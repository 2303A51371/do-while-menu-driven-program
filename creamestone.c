// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int c,r,No_items;
    char ch,s;
    float amount;
    do
	{                                                                                             
	    printf("\n T.Thickshakes");
	    printf("\n I.Icecream");
	    printf("\n S.Specialshakes");
	    scanf("%c",&ch);
	    switch(ch)
	    {
	        case 'T':printf("\n 1.Belgium dark chocolate");
		         printf("\n 2.Ferrero delight");
				 printf("\n 3.Redvelvet shake");
				 printf("\n Enter your choice in Thickshakes");
				 scanf(" %c",&c);
				 switch(c)
				 {
				     case 'B':printf("Enter r & No_items");
				 			scanf("%d%d",&r,&No_items);
				 			amount=r*No_items;
				 			printf("amount=%f",amount);
				 			break;
				 	case 'F':printf("Enter r & No_items");
					 		scanf("%d%d",&r,&No_items);
							amount=r*No_items;
							printf("amount=%f",amount);
							break;
					case 'R':printf("Enter r & No_items");
							scanf("%d%d",&r,&No_items);
							amount=r*No_items;
							printf("amount=%f",amount);
							break;
				 }
				 break;
				 
			case 'I':printf("\n 1.Oreo cake");
		         printf("\n 2.Nutty almond cake");
				 printf("\n 3.Litichee");
				 printf("\n Enter your choice in Ice creams");
				 scanf(" %c",&c);
				 switch(c)
				 {
				     case 'O':printf("Enter r & No_items");
				 			scanf("%d%d",&r,&No_items);
				 			amount=r*No_items;
				 			printf("amount=%f",amount);
				 			break;
				 	case 'N':printf("Enter r & No_items");
					 		scanf("%d%d",&r,&No_items);
							amount=r*No_items;
							printf("amount=%f",amount);
							break;
					case 'L':printf("Enter r & No_items");
							scanf("%d%d",&r,&No_items);
                            amount=r*No_items;
							printf("amount=%f",amount);
							break;
				}
				break;
				
			case 'S':printf("\n 1.muskmelon");
                printf("\n 2. guava");
                printf("\n 3.vintage chocolate");
                printf("\n Enter your choice in specialshakes");
                scanf(" %c",&c);
                switch(c)
                {
                    case 'O':printf("Enter r & No_items");
				 			scanf("%d%d",&r,&No_items);
				 			amount=r*No_items;
				 			printf("amount=%f",amount);
				 			break;
				 	case 'G':printf("Enter r & No_items");
					 		scanf("%d%d",&r,&No_items);
							amount=r*No_items;
							printf("amount=%f",amount);
							break;
					case 'V':printf("Enter r & No_items");
							scanf("%d%d",&r,&No_items);
							amount=r*No_items;
							printf("amount=%f",amount);
							break;
                        }
                        break;
	    }
        printf("\n do you want to continue:%c");
        scanf(" %c",&s);
    }
    while(s=='y');
}
