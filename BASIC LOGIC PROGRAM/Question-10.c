//find the area of a rectangular prism formula : A=2(wl+hl+hw)


#include <stdio.h>

int main() {
    float width, length, height, area;

    
    printf("Enter the width of the rectangular prism: ");


    scanf("%f", &width);

    printf("Enter the length of the rectangular prism: ");

    scanf("%f", &length);

    printf("Enter the height of the rectangular prism: ");

    scanf("%f", &height);

    
    area = 2 * (width * length + height * length + height * width);

        printf("The surface area of the rectangular prism is: %.2f\n", area);

    return 0;
}
