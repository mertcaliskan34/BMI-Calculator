#include <stdio.h>

int main() 
{
    float weight, height, index;
    
    printf("                                 WELCOME TO THE BODY MASS INDEX CALCULATION PROGRAM\n");
    
    printf("Enter your weight: "); scanf("%f", &weight);
    
    printf("Enter your height in meters: "); scanf("%f", &height);
    
    index = weight / (height * height);
    
    printf("\nYour body mass index: %f", index);
    
    if (index < 18.5) 
        printf("\n\nEvaluation: You are underweight, you should eat better.");
        
    else if (index >= 18.5 && index < 25)
        printf("\n\nEvaluation: Your weight is quite normal, keep it up :)");
        
    else if (index >= 25 && index < 30) 
        printf("\n\nEvaluation: Your weight is above normal, pay attention to your diet.");
        
    else if (index >= 30 && index < 40) 
        printf("\n\nEvaluation: You are obese, it is recommended to diet.");
        
    else if (index >= 40) 
        printf("\n\nEvaluation: You are severely obese, definitely consult a dietitian.");
    return 0;
}
