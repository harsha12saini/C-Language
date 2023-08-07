#include<stdio.h>

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote()
{
int choice;    
printf("\n\n ### Please choose your Candidate ###\n\n");
printf("\n 1. Rahul Soni");
printf("\n 2. Naveen Joshi");
printf("\n 3. Arun Kumar");
printf("\n 4. Amit Ahuja");
printf("\n 5. None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice)
{
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
            
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n #### Voting Statics ####");
printf("\n Rahul Soni - %d", votesCount1);
printf("\n Naveen Joshi - %d", votesCount2);
printf("\n Arun Kumar - %d", votesCount3);
printf("\n Amit Ahuja - %d", votesCount4);
printf("\n Spoiled votes - %d", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candidate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("Rahul Soni");
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("Naveen Joshi");
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("Arun Kumar");
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("Amit Ahuja");
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("\n\n ###### Welcome to Election/Voting 2023 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);


getchar();

return 0;
}
