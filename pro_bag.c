#include <stdio.h> 
#include <stdlib.h>

#include "sur_charges.h" //header file contain charges and paid methods


// Structure to create a node with bag_id and the next pointer
struct node {
    int bag_id; //passenger bag detail
    int weight; //weight of luggage
    struct node * next; //next passenger bag detail
};

struct node * check_in1 = NULL; //check in counter1
struct node * check_in2 = NULL; //check in counter2
struct node * check_in3 = NULL; //check in counter3
struct node * check_in4 = NULL; //check in counter4
struct node * check_out1 = NULL; //check out counter1
struct node * check_out2 = NULL; //check out counter2
struct node * check_out3 = NULL; //check out counter3
struct node * check_out4 = NULL; //check out counter4




// Enqueue() operation on a queue
/**
	Here we can check in our luggage at 4 counters
**/
void enqueue(int id, int wt, int counter) 
{
    switch(counter)
	{
		case 1 : struct node * ptr1, * temp1;
		    ptr1 = (struct node * ) malloc(sizeof(struct node));
		    ptr1 -> bag_id = id;
		    ptr1 -> weight = wt;
		    charges(ptr1->weight);
		    ptr1 -> next = NULL;
		    if ((check_in1 == NULL) && (check_out1 == NULL)) {
		    	//printf("\nQueue is Empty\n");
			check_in1 = check_out1 = ptr1;
		    } 
		    else 
		    {
			check_out1 -> next = ptr1;
			check_out1 = ptr1;
		    }
		    printf("\nTrolly : \n");
		       	printf("=================================================================================================================================================== \n");
			temp1 = check_in1;
			printf("<-");
			while (temp1) 
			{
			    printf("__%d__", temp1->bag_id);
			    temp1 = temp1->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    
		    //printf("Bag checked Inn\n\n");
		    break;
		    
		case 2 : struct node * ptr2, *temp2;
		    ptr2 = (struct node * ) malloc(sizeof(struct node));
		    ptr2 -> bag_id = id;
		    ptr2 -> weight = wt;
		    charges(ptr2->weight);
		    ptr2 -> next = NULL;
		    if ((check_in2 == NULL) && (check_out2 == NULL)) {
			check_in2 = check_out2 = ptr2;
		    } 
		    else 
		    {
			check_out2 -> next = ptr2;
			check_out2 = ptr2;
			
		    }
		    printf("\nTrolly : \n");
		       printf("=================================================================================================================================================== \n");
			temp2 = check_in2;
			printf("<-");
			while (temp2) 
			{
			    printf("__%d__", temp2->bag_id);
			    temp2 = temp2->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    //printf("Bag checked Inn\n\n");
		    break;
		   
		case 3 : struct node * ptr3,* temp3;
		    ptr3 = (struct node * ) malloc(sizeof(struct node));
		    ptr3 -> bag_id = id;
		    ptr3 -> weight = wt;
		    charges(ptr3->weight);
		    ptr3 -> next = NULL;
		    if ((check_in3 == NULL) && (check_out3 == NULL)) {
			check_in3 = check_out3 = ptr3;
		    } 
		    else 
		    {
			check_out3 -> next = ptr3;
			check_out3 = ptr3;
		    }
		    printf("\nTrolly : \n");
		       printf("=================================================================================================================================================== \n");
			temp3 = check_in3;
			printf("<-");
			while (temp3) 
			{
			    printf("__%d__", temp3->bag_id);
			    temp3 = temp3->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		   // printf("Bag checked Inn\n\n");
		    break;
		    
		case 4 : struct node * ptr4, * temp4;
		    ptr4 = (struct node * ) malloc(sizeof(struct node));
		    ptr4 -> bag_id = id;
		    ptr4 -> weight = wt;
		    charges(ptr4->weight);
		    ptr4 -> next = NULL;
		    if ((check_in4 == NULL) && (check_out4 == NULL)) {
			check_in4 = check_out4 = ptr4;
		    } 
		    else 
		    {
			check_out4 -> next = ptr4;
			check_out4 = ptr4;
		    }
		    printf("\nTrolly : \n");
		       printf("=================================================================================================================================================== \n");
			temp4 = check_in4;
			printf("<-");
			while (temp4) 
			{
			    printf("__%d__", temp4->bag_id);
			    temp4 = temp4->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    //printf("Bag checked Inn\n\n");
		    break;
		default : 
			break;
	}
    
}

// Dequeue() operation on a queue
/**
	Here we can check out our luggage at 4 counters
	If Queue doesn't have any bags it will print underflow.
	Orelse it will print queue before dequeue and after dequeue
**/
int dequeue(int counter) 
{
	int input,d,e,f,g;
	switch(counter)
	{
		case 1 : 
			    if (check_in1 == NULL)
			    {
				printf("\nUnderflow\n");
				return -1;
			    } 
			    else 
			    {
				 struct node * temp1 = check_in1;
				 d = charges(check_in1 -> weight);
				printf("\nTrolly : \n");
			       	printf("=================================================================================================================================================== \n");

				printf("<-");
				while (temp1) 
				{
				    printf("__%d__", temp1->bag_id);
				    temp1 = temp1->next;
				}
				printf("<-\n");
				printf("=================================================================================================================================================== \n");
				int temp1_bag_id = check_in1 -> bag_id;
				int temp1_wt = check_in1 -> weight;
				printf("Enter charges you have to pay : ");
				scanf("%d",&input);
				paid( d , input);
				printf("\n");
				check_in1 = check_in1-> next;
				free(temp1);
				
				return temp1_bag_id;
			    }
			    
		    	break;
		    
		case 2 :
			if (check_in2 == NULL) 
		    {
			printf("\nUnderflow\n");
			return -1;
		    } 
		    else 
		    {
		    	struct node * temp2 = check_in2;
		    	e = charges(check_in2 -> weight);
			printf("\nTrolly : \n");
		       	printf("=================================================================================================================================================== \n");

			printf("<-");
			while (temp2) 
			{
			    printf("__%d__", temp2->bag_id);
			    temp2 = temp2->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
			
			int temp2_bag_id = check_in2 -> bag_id;
			int temp2_wt = check_in2 -> weight;
			printf("Enter charges you have to pay : ");
			scanf("%d",&input);
			paid(e , input);
			printf("\n");
			check_in2 = check_in2 -> next;
			free(temp2);
			return temp2_bag_id;
		    }
		    
		    break;
		   
		case 3 :
		    if (check_in3 == NULL) 
		    {
			printf("\nUnderflow\n");
			return -1;
		    } 
		    else 
		    {
		    	struct node * temp3 = check_in3;
		    	f = charges(check_in3 -> weight); 
			printf("\nTrolly : \n");
		       	printf("=================================================================================================================================================== \n");

			printf("<-");
			while (temp3) 
			{
			    printf("__%d__", temp3->bag_id);
			    temp3 = temp3->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
			
			int temp3_bag_id = check_in3 -> bag_id;
			int temp3_wt = check_in3 -> weight;
			printf("Enter charges you have to pay : ");
			scanf("%d",&input);
			paid(f , input);
			printf("\n");
			check_in3 = check_in3 -> next;
			free(temp3);
			return temp3_bag_id;
		    }
		    
		    break;
		    
		case 4 : 
		    if (check_in4 == NULL) 
		    {
			printf("\nUnderflow\n");
			return -1;
		    } 
		    else 
		    {
		    	struct node * temp4 = check_in4;
		    	g = charges(check_in4 -> weight);
		    	printf("\nTrolly : \n");
		       printf("=================================================================================================================================================== \n");
			temp4 = check_in4;
			printf("<-");
			while (temp4) 
			{
			    printf("__%d__", temp4->bag_id);
			    temp4 = temp4->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
			
			int temp4_bag_id = check_in4 -> bag_id;
			int temp4_wt = check_in4 -> weight;
			printf("Enter charges you have to pay : ");
			scanf("%d",&input);
			paid(g , input);
			printf("\n");
			check_in4 = check_in4 -> next;
			free(temp4);
			return temp4_bag_id;
		    }
		    
		    break;
		default : 
			break;
	}
}

// Display all elements of the queue
void display(int counter) 
{   
	
    switch(counter)
	{
		case 1 : struct node * temp1;
			
		    if ((check_in1 == NULL) && (check_out1 == NULL)) 
		    {
			printf("\nQueue is Empty\n");
		    }
		    else 
		    {
		    	
		       printf("\n");
		       	printf("=================================================================================================================================================== \n");
			temp1 = check_in1;
			printf("<-");
			while (temp1) 
			{
			    printf("__%d__", temp1->bag_id);
			    temp1 = temp1->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    }
		    break;
		    
		case 2 : struct node * temp2;
		    if ((check_in2 == NULL) && (check_out2 == NULL)) 
		    {
			printf("\nQueue is Empty\n");
		    } 
		    else 
		    {
		       printf("\n");
		       printf("=================================================================================================================================================== \n");
			temp2 = check_in2;
			printf("<-");
			while (temp2) 
			{
			    printf("__%d__", temp2->bag_id);
			    temp2 = temp2->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    }
		    break;
		   
		case 3 : struct node * temp3;
		    if ((check_in3 == NULL) && (check_out3 == NULL)) 
		    {
			printf("\nQueue is Empty\n");
		    } 
		    else 
		    {
		       printf("\n");
		       printf("=================================================================================================================================================== \n");
			temp3 = check_in3;
			printf("<-");
			while (temp3) 
			{
			    printf("__%d__", temp3->bag_id);
			    temp3 = temp3->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    }
		    break;
		    
		case 4 : struct node * temp4;
		    if ((check_in4 == NULL) && (check_out4 == NULL)) 
		    {
			printf("\nQueue is Empty\n");
		    } 
		    else 
		    {
		       printf("\n");
		       printf("=================================================================================================================================================== \n");
			temp4 = check_in4;
			printf("<-");
			while (temp4) 
			{
			    printf("__%d__", temp4->bag_id);
			    temp4 = temp4->next;
			}
			printf("<-\n");
			printf("=================================================================================================================================================== \n");
		    }
		    break;
		default : 
			break;
	}
    
}

int main() 
{
    int choice, bag_id,wgt;
    int No_of_Counter,input,fee;
    int p=1;
    int i=0,j=0,k=0,l=0;
	     while (p == 1) 
		    {
		    
		    	printf("1.Want to check In\n2.Want to check out\n");
			printf("\nEnter your choice : ");
			scanf("%d", & choice);
			No_of_Counter = 0;		
		    	switch (choice)  // 2 choices enqueue & dequeue
			{
			    case 1:
				printf("\n==== Insert Bags ==== \n");
				while (No_of_Counter!=5) //there are 4 counters so if you enter 5, the while loop will terminate. 
				    {
					printf("Counters :\n1.AirIndia\n2.Goa to Delhi\n3.Mumbai to Goa\n4.US\n5.Go_to_next_choice(Enter 5)\n\n");
					printf("Select Counter : ");
					scanf("%d",&No_of_Counter);
					//for particular counter , the switch statement will work.
					//For each case , user enter weight of luggage and 2 operations are performed and displays output.
					switch (No_of_Counter)
					{
						
					    case 1:
					    	printf("\n==== counter 1 ==== \n");
						//printf("\nEnter bag id : ");
						//scanf("%d", &bag_id);
						bag_id = i + 1;
						i++;
						printf("Enter weight of bag to insert : ");
						scanf("%d", &wgt);
						enqueue(bag_id, wgt, No_of_Counter);
						break;
					    case 2:printf("\n==== counter 2 ==== \n");
						//printf("\nEnter bag id : ");
						//scanf("%d", &bag_id);
						bag_id = j + 1;
						j++;
						printf("Enter weight of bag to insert : ");
						scanf("%d", &wgt);
						enqueue(bag_id,wgt, No_of_Counter);
						break;
					    case 3:printf("\n==== counter 3 ==== \n");
						//printf("\nEnter bag id : ");
						//scanf("%d", &bag_id);
						bag_id = k + 1;
						k++;
						printf("Enter weight of bag to insert : ");
						scanf("%d", &wgt);
						enqueue(bag_id, wgt, No_of_Counter);
						break;
					   case 4 : printf("\n==== counter 1 ==== \n");
					   	//printf("\nEnter bag id : ");
						//scanf("%d", &bag_id);
						bag_id = l + 1;
						l++;
						printf("Enter weight of bag to insert : ");
						scanf("%d", &wgt);
						enqueue(bag_id,wgt , No_of_Counter);
					   	break;
					    default:
						printf("\nWrong Choice\n\n");
						break;
					}
					
					
					
					
				  }
				break;
				
			    case 2:
				printf("\n==== Check out Bags ==== \n");
				while (No_of_Counter!=5) 
				    {
					printf("Counters :\n1.AirIndia\n2.Delhi\n3.Gao\n4.US\n5.Go_to_next_counter\n\n");
					printf("Select Counter : ");
					scanf("%d",&No_of_Counter);
					switch (No_of_Counter)
					{
						
					    case 1:
					    	printf("\n==== counter 1 ==== \n");
					    	/*int d = charges(wgt);
						
					    	printf("Enter charges you have to pay : ");
					    	scanf("%d",&input);
					    	paid(d , input);*/
					    	printf("Checked out bag is : %d\n", dequeue(No_of_Counter));
					    	display(No_of_Counter);
						break;
						
					    case 2:printf("\n==== counter 2 ==== \n");
					    	
					    	/*printf("Enter charges you have to pay : ");
						scanf("%d",&input);
					    	paid(e , input);*/
					    	printf("Checked out bag is : %d\n", dequeue(No_of_Counter));
					    	display(No_of_Counter);
						break;
						
					    case 3:printf("\n==== counter 3 ==== \n");
					    	/*int f = charges(wgt);
					    	
					    	printf("Enter charges you have to pay : ");
						scanf("%d",&input);
					    	paid(f , input);*/
					    	printf("Checked out bag is : %d\n", dequeue(No_of_Counter));
					    	display(No_of_Counter);
						break;
						
					   case 4 : printf("\n==== counter 4 ==== \n");
					   	/*int g = charges(wgt);
					    	
					   	printf("Enter charges you have to pay : ");
					   	scanf("%d",&input);
					    	paid(g , input);*/
					    	printf("Checked out bag is : %d\n", dequeue(No_of_Counter));
					    	display(No_of_Counter);
					   	break;
					   	
					    default:
						printf("\nWrong Choice\n\n");
						break;
					}
				  }
				  break;
				  
			    /*case 3:
			    	printf("\n==== Display Bags ==== \n");
				while (No_of_Counter!=5) 
				    {
					printf("Counters :\n1.AirIndia\n2.Delhi\n3.Gao\n4.US\n5.Go_to_next_counter\n");
					printf("Select Counter : ");
					scanf("%d",&No_of_Counter);
					switch (No_of_Counter)
					{
						
					    case 1:
					    	printf("\n==== counter 1 ==== \n");
						display(No_of_Counter);
						break;
					    case 2:printf("\n==== counter 2 ==== \n");
						display(No_of_Counter);
						break;
					    case 3:printf("\n==== counter 3 ==== \n");
						display(No_of_Counter);
						break;
					   case 4 : printf("\n==== counter 4 ==== \n");
					   	display(No_of_Counter);
					   	break;
					    default:
						printf("\nWrong Choice\n");
						break;
					}
				  }
				  break;*/
			    default:
				printf("\nNo such Choice\n\n");
				break;
			}
			
	   		printf("Want to try more?1/0 : ");
	    		scanf("%d",&p);
	    		printf("\n");
		  }

    return 0;
}
