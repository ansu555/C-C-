#include <iostream>
using namespace std;

// horner

int horner(int poly[], int n, int x)
{
    int result = poly[0];

    for (int i = 1; i < n; i++)
        result = result * x + poly[i];

    return result;
}

int main()
{
    int degree;
    cout << "degree of the polynomial: ";
    cin >> degree;

    // Allocate memory
    int *poly = new int[degree + 1];

    cout << " coefficients of the polynomial : ";
    for (int i = 0; i <= degree; i++)
    {
        cin >> poly[i];
    }

    int x;
    cout << " the value of x: ";
    cin >> x;

    cout << "Value of polynomial is " << horner(poly, degree + 1, x);

    // dynamically allocated memory
    delete[] poly;

    return 0;
}

//method 2

// #include <iostream>
// #include <vector>
// #include <cmath>


// double evaluatePolynomial(const std::vector<double>& coefficients, double x) {
//     double result = 0.0;
//     int degree = coefficients.size() - 1; 


//     for (int i = 0; i <= degree; ++i) {
//         // Multiply the coefficient with the corresponding power of x and add to result
//         result += coefficients[i] * std::pow(x, degree - i);
//     }
//     return result;
// }

// int main() {
//     // Example: Evaluate polynomial 2x^3 + 3x^2 - 4x + 5 for x = 2
//     std::vector<double> coefficients = {2, 3, -4, 5};
//     double x = 2;
//     double result = evaluatePolynomial(coefficients, x);

//     std::cout << "Result of polynomial evaluation: " << result << std::endl;

//     return 0;
// }




