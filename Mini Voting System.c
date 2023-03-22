#include<stdio.h>

#define CANDIDATE1 "Aditya Kirti"
#define CANDIDATE2 "Rohan Kohade"
#define CANDIDATE3 "Isha Kondurkar"
#define CANDIDATE4 "Vivaan Kotian"

// gloabal variable declaration
int votesCount1 = 0, votesCount2 = 0, votesCount3 = 0, votesCount4 = 0, votesCountn = 0; 

// 1st function
void castVote(){
int voteChoice; // local variable declaration
   
printf("\n\n *** Please choose your Candidate ***\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. None Of The Above");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d", &voteChoice);

switch(voteChoice) {
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: votesCountn++; break;
    default: printf("\n Error: Wrong Choice! Please retry");
             // holds the screen
}
printf("\n Thanks for voting !!");
}

// 2nd function
void votesCount(){
printf("\n\n **** Voting Statistics ****");
printf("\n%s: %d ", CANDIDATE1, votesCount1);
printf("\n%s: %d ", CANDIDATE2, votesCount2);
printf("\n%s: %d ", CANDIDATE3, votesCount3);
printf("\n%s: %d ", CANDIDATE4, votesCount4);
printf("\nNone Of The Above: %d ", votesCountn); 
}

// 3rd function
void getLeadingCandidate(){
    printf("\n\n  **** Leading Candidate ****\n\n");
    
    if(votesCount1>votesCount2 && votesCount1 > votesCount3 && votesCount1 > votesCount4)
    printf("%s is winning! \a",CANDIDATE1);

    else if(votesCount2 > votesCount3 && votesCount2 > votesCount4 && votesCount2 > votesCount1)
    printf("%s is winning! \a",CANDIDATE2);

    else if(votesCount3 > votesCount4 && votesCount3 > votesCount2 && votesCount3 > votesCount1)
    printf("%s is winning! \a",CANDIDATE3);

    else if(votesCount4 > votesCount1 && votesCount4 > votesCount2 && votesCount4 > votesCount3)
    printf("%s is winning! \a",CANDIDATE4);

    else
    printf("----Nobody is winning till now!----");    
}

// main function
int main()
{
int actionChoice; //local variable declaration

do{
printf("\n\n ****** Welcome to Voting 2023 ******");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &actionChoice);

switch(actionChoice) {
case 0: break;
case 1: castVote(); // calling 1st function
		break;
case 2: votesCount(); // calling 2nd function
		break;
case 3: getLeadingCandidate(); // calling 3rd function
		break;
default: printf("\n Error: Invalid Choice");
		// holds the screen
}

} while(actionChoice!=0);

return 0;
}
