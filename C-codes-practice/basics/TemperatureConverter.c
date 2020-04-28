/** Temperature converter
 * F+>C
 * C=> (F-32)*5/9
 * K= F-32*5/9+273.15
 **/
#include<stdio.h>

int main(void){
    float fahrenhiet, celsius,kelvin; 
    printf("Enter the Temperature in Fahrenhiet:  ");
    scanf("%f",&fahrenhiet);
    celsius= (fahrenhiet-32)*5/9;
    kelvin=(fahrenhiet-32)*5/9+273.15;
    printf("Celsius: %.2f\nKelvin: %.2f",celsius,kelvin);
    
<<<<<<< HEAD
}
=======
}
>>>>>>> 176b6d8e585fd6e4a820a65ea4aaa20fc3d2f93b
