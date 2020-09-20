

#include "main.h"


int main(void){
   
   volatile int counter = 0;
   
   // Configuro el SCU como gpio:
   ADDRESS(SCU_BASE,SCU_LED0_R_OFFSET) = (0x4) | (0x0 << 3); // LED0_R como FUNC0 y PULL_UP
   
   // Configuro el GPIO:
   ADDRESS(GPIO_BASE,GPIO_LED0_R_OFFSET) |= 1 << 0; // LED0_R
   
   // Prendo el LED
   ADDRESS(GPIO_BASE,GPIO_LED0_R_WRITE_OFFSET) |= 1 << 0;
   
   while(1){
      ;
   }
   
   return 0;   
}