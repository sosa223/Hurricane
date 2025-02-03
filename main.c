#include <stdio.h>

int main() {
    int windSpeed;

    printf("Enter the wind speed: ");
    scanf("%d", &windSpeed);

    if (windSpeed < 74) {
        printf("Not a hurricane");
    }
    else if (windSpeed < 96) {
        printf("Category 1 Hurricane");
   
    } else if (windSpeed < 111) {
        printf("Category 2 Hurricane");
   
    } else if (windSpeed < 130) {
        printf("Category 3 Hurricane");
   
    } else if (windSpeed < 157) {
        printf("Category 4 Hurricane");
   
    
    } else {
        printf("Category 5 Hurricane");
    }

    return 0;
}
