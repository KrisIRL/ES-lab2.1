#include "mbed.h"

Serial pc(USBTX, USBRX);

int main()
{
    int term;
    pc.printf("Enter the number of terms you want to print: ");
    pc.scanf("%d", &term);
    
    int first = 0, second = 1;
    
    pc.printf("Fibonacci Series: ");
    
    for (int i = 0; i < term; i++)
    {
        pc.printf("%d ", first);
        int temp = first + second;
        first = second;
        second = temp;
    }
    
    return 0;
}
