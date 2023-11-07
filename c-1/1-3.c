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
  fahr = LOWER;
  printf("Fahrenheit          Celsius\n");

  for(int i = LOWER; i < UPPER; i = i + STEP){
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%4.0f                %6.2f\n", fahr, celsius);
    
    fahr = i + STEP;
  }
}

void celsiusToFahr(){ /* 1.4 */
  float fahr, celsius;

  celsius = LOWER;
  printf("Celsius          Fahrenheit\n");
  for(int i = LOWER; i < UPPER; i = i + STEP){
    fahr = (9.0 / 5.0) * (celsius + 32);

    printf("%4.0f               %6.2f\n", celsius, fahr);

    celsius = celsius + STEP;
  }
}
