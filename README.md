# ET-Sensor
This file contains a break down of the code for the ETSensor program 



#include <kipr/botball.h>
//this includes the kipr/botball header file

int main()
//initalizes the main program
{
  printf("I will now complete a square");  
  //outputs the string "I will now complete a sqaure"
  
  int i = 0;
  //declares and initalizes the variable i

  while(i < 5){
  //starts a while statement that runs the program while the value of the integer i is less than 5
  
    while(analog(1) < 2200){
    //creates a while statement for the program to run if the analog(1)'s value is less than 2200
    
      mav(0,1425);
      mav(3,1500); //different speed to make up for the curvature of one tire
      msleep(250);
     //drives forward with both motors and then has a millisleep of 250 
     
    }
    
    while(analog(1) > 2200){
    //creates a while loop if analog(1)'s value is greater than 2200
      freeze(0);
      freeze(3);
      msleep(250);
      //freezes both motors with a millisecond sleep with a value of 250
      
      printf("stop!/n");
      //outputs "stop!" to the screen
      
      
    }
    
    //adds an increment of one to the value of variable i
    int i = i+1;
  } //end of the main while function
  
  //terminates the program
  return 0;
} //end of int main function


