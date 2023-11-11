#include <stdio.h>
#include <math.h>
int main()
{
    double lambda, theta, d;
    int m;
    printf("Enter the wavelength (in nanometers): ");
    scanf("%lf", &lambda);
    if (lambda >= 380 && lambda <= 750)
    {
        printf("Enter the angle (in degrees): ");
        scanf("%lf", &theta);
        printf("Enter the slit separation (in micrometers): ");
        scanf("%lf", &d);
        lambda /= 1000.0;
        theta = theta * M_PI / 180.0;
        m =(d*sin(theta))/lambda;
        if (m > 0)
        {
            printf("%d-th order maxima\n", m);
        }
        else
        {
            printf("No maxima for the given input.\n");
        }
    }
    else
    {
        printf("Out of range. Please enter a valid number within the violet color range.\n");
    }
    return 0;
}
