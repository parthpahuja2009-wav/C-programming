#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Linux/Mac ke liye sleep(). Windows me <windows.h> aur Sleep(1000) use karein

void draw_bulb(int state) {
    system("clear"); // Windows par: system("cls");

    if (state == 1) {
        printf("   \\  |  /   \n");
        printf("    .-'-.    \n");
        printf("  (  ON   )  \n");
        printf("    '-.-'    \n");
        printf("     | |     \n");
        printf("    =====\n");
        printf("\n [ Light is ON ]\n");
    } else {
        printf("             \n");
        printf("    .-'-.    \n");
        printf("  (  OFF  )  \n");
        printf("    '-.-'    \n");
        printf("     | |     \n");
        printf("    =====\n");
        printf("\n [ Light is OFF ]\n");
    }
}

int main() {
    int state = 0;
    
    // Bulb ko 5 baar ON/OFF blinking karane ka loop
    for (int i = 0; i < 6; i++) {
        state = !state; // Toggle logic (0 -> 1 -> 0)
        draw_bulb(state);
        sleep(1); // 1 second ka delay
    }

    return 0;
}