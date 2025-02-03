#include <stdio.h>

int main() {
    int windSpeed;

    printf("Enter the wind speed: ");
    scanf("%d", &windSpeed);

    if (windSpeed < 74) {
        printf("Not a hurricane\n");
    }
    else if (windSpeed < 96) {
        printf("Category 1 Hurricane\n");
   
    } else if (windSpeed < 111) {
        printf("Category 2 Hurricane\n");
   
    } else if (windSpeed < 130) {
        printf("Category 3 Hurricane\n");
   
    } else if (windSpeed < 157) {
        printf("Category 4 Hurricane\n");
   
    
    } else {
        printf("Category 5 Hurricane\n");
    }

    return 0;
}
