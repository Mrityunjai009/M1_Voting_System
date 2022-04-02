 #include"stdio.h"
 int voting_system(int choose){

 
 void voting_system(int arr[], int n) 
 {
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
 }
int main()
{
    int inputSize = 12;
    int inputArr[] = {1, 1, 2, 3, 4, 1, 2, 2, 4, 3, 2, 5};
    int expectedBjp = 3;
    int expectedCongress = 4;
    int expectedAap = 2;
    int expectedBsp = 2;
   
   
   
      
  voting_system(inputArr, inputSize);
   if(bsp == expectedBsp && bjp == expectedBjp && aap == expectedAap && congress == expectedCongress)
   printf("The unit test passed\n");
   else
   printf("The unit test failed");
   
    return 0;
}