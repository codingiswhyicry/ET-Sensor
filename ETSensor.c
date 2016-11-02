#include <kipr/botball.h>

int main()
{
  printf("I will now complete a square");  
  int i = 0;

  while(i < 5){
  
    while(analog(1) < 2200){
    
      mav(0,1425);
      mav(3,1500);
      msleep(250);
      
    }
    while(analog(1) > 2200){
    
      freeze(0);
      freeze(3);
      msleep(250);
      
    }
    
    int i = i+1;
  }

  return 0;
}