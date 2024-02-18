#include<stdio.h>
 main()
  {
  	int mon,i;
  	float week[10],food[10],vehicle[10],veggies[10],savings[10];
  	float groceries[10],bill[10],other[10],sum=0,income,cashflow=0;
  	month:
  		{
		 printf("Enter the month number\n");
  	scanf("%d",&mon);
  	switch(mon)
  	{
  		case 1: printf("January\n");
  		        break;
  		case 2: printf("February\n");
		         break;
		case 3: printf("March\n");
		         break;
		case 4: printf("April\n");
		         break;
		case 5: printf("May\n");
		         break;	
		case 6 : printf("June\n");
		          break;
		case 7 : printf("July\n");
		          break;
		case 8 : printf("August\n");
				  break;
		case 9 : printf("September\n");
					break;
		case 10 :printf("October\n");
					break;
		case 11 : printf("November\n");
					break;
		case 12 : printf("December\n");
					break;											  			  		           
		default : printf("Invalid month\n");
	  }
 printf("Enter monthly income\n");
 scanf("%f",&income);
 printf("Enter the amount spent for\n");
  for(i=1;i<=4;i++)
  {
  	printf("1.Savings of week %d\n",i);
  	scanf("%f",&savings[i]);
  	printf("2.Food cost of week %d\n",i);
  	scanf("%f",&food[i]);
  	printf("3.Groceries of week %d\n",i);
  	scanf("%f",&groceries[i]);
  	printf("4.Vehicle expense of week %d\n",i);
  	scanf("%f",&vehicle[i]);
  	printf("5.Bill payments of week %d\n",i);
  	scanf("%f",&bill[i]);
  	printf("6.Vegetable expense of week %d\n",i);
    scanf("%f",&veggies[i]);
    printf("7.Other expense of week %d\n",i);
    scanf("%f",&other[i]);
   week[i]=savings[i]+groceries[i]+veggies[i]+food[i]+vehicle[i]+bill[i]+other[i];
   printf("\nExpense of week %d is %f\n\n\n",i,week[i]);
    }
    for(i=1;i<=4;i++)
    sum+=week[i];
	printf("\nTotal expense of month %d is %f\n",mon,sum);
	cashflow=(income-sum);
	printf("\nCashflow of month %d is %.4f\n",mon,cashflow); 
	 	
    int category;
    float foods=0,veggie=0,saving=0,vehic=0,grocer=0,bp=0,oth=0;
   categories:
   	 {
	printf("Press 1 for Savings \n\n Press 2 for food\n\n Press 3 for groceries\n\n" );
    printf("Press 4 for vehicle expense\n\n Press 5 for Bill payments\n\n");
    printf("Press 6 for vegetable expense\n\n Press 7 for other expense\n\n");
    printf("Enter your choice of category\n");
    scanf("%d",&category);
    switch(category)
     {
     	case 1 : saving=savings[1]+savings[2]+savings[3]+savings[4];
		   printf("\nYour monthly savings is %f\n",saving);
		    break; 
	    case 2 : foods= food[1]+food[2]+food[3]+food[4];
	    printf("\nYour monthly food expense is %f\n",foods);
		    break; 
		 case 3 : grocer=groceries[1]+groceries[2]+groceries[3]+groceries[4];
		 printf("\nYour monthly grocery expense is %f\n",grocer);
		    break;    
	    case 4 : vehic=vehicle[1]+vehicle[2]+vehicle[3]+vehicle[4];
	    printf("\nYour monthly vehicle expense is %f\n",vehic);
		    break; 
	    case 5: bp=bill[1]+bill[2]+bill[3]+bill[4];
	    printf("\nYour monthly Bill payment costs  %f\n",bp);
		    break; 
	    case 6: veggie=veggies[1]+veggies[2]+veggies[3]+veggies[4];
		printf("\nYour monthly Vegetable expense is %f\n",veggie);
		    break;  
	    case 7: oth=other[1]+other[2]+other[3]+other[4];
	     printf("\nYour Other expenses are %f\n",oth);
	     break; 
 default:printf("Please Enter a valid category\n");
  }
  }
}
  int a;
  printf("Do you wish to check expenses:\n 1.Same month\n 2.Different month\n");
   scanf("%d",&a);
    if(a==1)
     {
     	goto categories;
	 }
	 else if(a==2)
	  goto month;
	  else
	 printf("\nThank you\n");
  return(0);
  }
  
