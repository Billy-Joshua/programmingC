#include <stdio.h>
void demo1(){
    int myNum =15;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%d\n",myNum);
    printf("%f\n",myFloatNum);
    printf("%c\n",myLetter);
}
void demo2() {
  int myNum = 15;
  char myLetter = 'D';
  printf("My number is %d and my letter is %c", myNum, myLetter);

}
void demo3(){
    int x = 15;
    int y = 6;
    int sum = x+y;
    printf("%d",sum);
}
void demo4() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';
    char studentName[] = "John Doe"; 

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);
  printf("student name: %s\n", studentName);

}
int main() {
    demo1();
    demo2();
    demo3();
    demo4();
}