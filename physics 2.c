#include <stdio.h>
#include <math.h>

int main() {
    // Given values
    double theta = 45.0;  // angle in degrees
    double m = 1.0;       // order of the minimum
    double lambda;        // wavelength
    double a_over_lambda; // ratio of slit width to wavelength

    // Get user input for wavelength
    printf("Enter the wavelength (lambda): ");
    scanf("%lf", &lambda);

    // Calculate the ratio a/lambda using the rearranged formula: a/lambda = m/sin(theta)
    a_over_lambda = m / sin(theta * M_PI / 180.0);

    // Display the result
    printf("The ratio of slit width to wavelength (a/lambda) for the first minimum at theta = %f degrees is: %f\n", theta, a_over_lambda);

    return 0;
}
