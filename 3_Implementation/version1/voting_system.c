
#include "stdio.h"
int bjp=0, congress=0, aap=0, bsp=0;
void electionResult()
{
    int wonByVote;
    if (bjp > congress && bjp > aap && bjp > bsp)
    {
        printf("\nBharatiya Janata Party(BJP) have maximux score in election\n\n");
        printf("Total vote of Bharatiya Janata Party(BJP): %d\n",bjp);
        wonByVote=bjp-congress;
        printf("Bharatiya Janata Party(BJP) won by %d votes to Congress\n",wonByVote);
        wonByVote=bjp-aap;
        printf("Bharatiya Janata Party(BJP) won by %d votes to AAP\n",wonByVote);
        wonByVote=bjp-bsp;
        printf("Bharatiya Janata Party(BJP) won by %d votes to BSP\n",wonByVote);
    }
    else if (congress > aap && congress > bsp)
    {
        printf("\nCongress party have maximum score in election\n\n");
        printf("Total vote of Congress : %d\n",congress);
        wonByVote=congress-bjp;
        printf("Congress won by %d votes to Bharatiya Janata Party(BJP)\n",wonByVote);
        wonByVote=congress-aap;
        printf("Congress won by %d votes to AAP\n",wonByVote);
        wonByVote=congress-bsp;
        printf("Congress won by %d votes to BSP\n",wonByVote);
    }
    else if (aap > bsp)
    {
        printf("\nAam Aadmi Party(AAP)  have maximum score in election\n\n");
        printf("Total vote of AAP : %d\n",aap);
        wonByVote=aap-congress;
        printf("Aam Aadmi Party(AAP)  won by %d votes to Congress\n",wonByVote);
        wonByVote=aap-bjp;
        printf("Aam Aadmi Party(AAP)  won by %d votes to BJP\n",wonByVote);
        wonByVote=aap-bsp;
        printf("Aam Aadmi Party(AAP)  won by %d votes to BSP\n",wonByVote);
    }
     else if(bjp == congress || bjp == aap || bjp == bsp || bsp == congress || congress == aap || bsp == aap)
    {
        printf("\n some parties having same illection score\n\n");
        printf("            Bharatiya Janata Party(BJP)---Congress---Aaam Aadmi Party---Bahujan Samaj Party (BSP)\n");
        printf("Total Vote   %d       %d        %d     %d\n",bjp,congress,aap,bsp);
    }
    else if(bjp == congress && bjp == aap && bjp == bsp && bsp == congress)
    {
        printf("\nAll parties have same election score\n\n");
        printf("            Bharatiya Janata Party(BJP)---Congress---Aaam Aadmi Party---Bahujan Samaj Party (BSP)\n");
        printf("Total Vote   %d       %d        %d     %d\n",bjp,congress,aap,bsp);
    }
    else
    {
        printf("\nBahujan Samaj Party (BSP) have maximum score in election\n\n");
        printf("Total vote of BSP : %d\n",bsp);
        wonByVote=bsp-congress;
        printf("Bahujan Samaj Party (BSP)won by %d votes to Congress\n",wonByVote);
        wonByVote=bsp-aap;
        printf("Bahujan Samaj Party (BSP) won by %d votes to AAP\n",wonByVote);
        wonByVote=bsp-bjp;
        printf("Bahujan Samaj Party (BSP) won by %d votes to BJP\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        bjp+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        aap+=1;
        break;
    case 4:
        bsp+=1;
        break;
    }
}
/* Here i am putting values for votes to check and run program for unit test 
   i have complete my actual program in single file instead of multifile because it is working same and even more efficientiely
    
    and to check program  to ignore human needs   put values in this program*/
void runUnitTest(int arr[], int n) {
    for(int i = 0; i< n; i++){
        if(arr[i]>=6 || arr[i]<=0){
            printf("Invalid input");
        }
        else if(arr[i]==5){
            electionResult();
        }
        else{
            calculateVote(arr[i]);
        }
    }
}
 
 
int main()
{
    int inputSize = 12;
    int inputArr[] = {1, 1, 2, 3, 4, 1, 2, 2, 4, 3, 2, 5}; //different inputs for testing the program working and errors
    int expectedBjp = 3;
    int expectedCongress = 4;
    int expectedAap = 2;
    int expectedBsp = 2;
   
   
   
        printf("\n               Welcome to the voting system, Please select one  party to vote\n\n");
        printf("              Madhya pradesh election                        \n\n");
        printf("                       1.Bharatiya Janata Party(BJP)   \n");
        printf("                       2.Congress Party \n");
        printf("                       3.Aam Aadmi Party(AAP)  \n");
        printf("                       4.Bahujan Samaj Party (BSP)\n");
       
        printf("Press 1 to vote Bharatiya Janata Party(BJP)\n");
        printf("Press 2 to vote Congress\n");
        printf("Press 3 to vote APP\n");
        printf("Press 4 to vote BSP\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
   runUnitTest(inputArr, inputSize);
   if(bsp == expectedBsp && bjp == expectedBjp && aap == expectedAap && congress == expectedCongress)
   printf("The unit test passed\n");
   else
   printf("The unit test failed");
   
    return 0;
}

