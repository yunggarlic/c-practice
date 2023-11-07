#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void fahrToCelsius();
void celsiusToFahr();

int main()
{
  fahrToCelsius();
  celsiusToFahr();

  return 0;
}

void fahrToCelsius(){
  float fahr, celsius;
  printf("Fahrenheit          Celsius\n");

  for(fahr = LOWER; fahr < UPPER; fahr += STEP){
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%4.0f                %6.2f\n", fahr, celsius);
    
  }
}

void celsiusToFahr(){ /* 1.4 */
  float fahr, celsius;
  printf("Celsius          Fahrenheit\n");
  for(celsius = LOWER; celsius < UPPER; celsius+=STEP){
    fahr = (9.0 / 5.0) * (celsius + 32);
    printf("%4.0f               %6.2f\n", celsius, fahr);
  }
}
