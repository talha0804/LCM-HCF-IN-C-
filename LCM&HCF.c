#include <stdio.h>
int calculateHCF(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int calculateLCM(int a, int b)
{
    int hcf = calculateHCF(a, b);
    int lcm = (a * b) / hcf;
    return lcm;
}

int main()
{
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("HCF of %d and %d is: %d\n", n1, n2, calculateHCF(n1, n2));
    printf("LCM of %d and %d is: %d\n", n1, n2, calculateLCM(n1, n2));

    return 0;
}
