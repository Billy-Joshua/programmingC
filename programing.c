#include <stdio.h>
int main (){
    int math,physics, english, programming, statistics;
    int sum ;
    float avg;
      // Input 5 subjects
    printf("enter scores for 5 subject:\n");
    printf("math :"); scanf("%d", &math);
   printf("Physics: "); scanf("%d", &physics);
    printf("English: "); scanf("%d", &english);
    printf("Programming: "); scanf("%d", &programming);
    printf("Statistics: "); scanf("%d", &statistics);

 // Calculate sum and average

     sum = math + physics + english + programming + statistics;
    avg = sum / 5.0;
     // Display values
      printf("\nScores:\n");
    printf("Math = %d\nPhysics = %d\nEnglish = %d\nProgramming = %d\nStatistics = %d\n",
           math, physics, english, programming, statistics);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0; 
}
