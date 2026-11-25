#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int motor1, motor2;
    int *p1, *p2;

    // Input speeds
    printf("Enter speed of Motor 1: ");
    scanf("%d", &motor1);
    printf("Enter speed of Motor 2: ");
    scanf("%d", &motor2);

    // Assign addresses to pointers
    p1 = &motor1;
    p2 = &motor2;

    // Display before swapping
    printf("\nBefore Swapping:\n");
    printf("Motor 1 Speed: %d RPM (Address: %p)\n", motor1, (void*)p1);
    printf("Motor 2 Speed: %d RPM (Address: %p)\n", motor2, (void*)p2);

    // Swap speeds using pointers
    swap(p1, p2);

    // Display after swapping
    printf("\nAfter Swapping (Control Transferred):\n");
    printf("Motor 1 Speed: %d RPM (Address: %p)\n", motor1, (void*)p1);
    printf("Motor 2 Speed: %d RPM (Address: %p)\n", motor2, (void*)p2);

    return 0;
}
