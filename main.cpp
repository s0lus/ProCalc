#include <iostream>
#include <iomanip>
#include <cmath>

int Menu();

int main() {
    int fQuit = false;

    while (!fQuit) {
        int choice = Menu();

        if (choice < 1 || choice > 7) {
            std::cout << "Invalid choice, please try again";
            std::cout << std::endl << std::endl;
            continue;
        }

        switch (choice) {
            case 1: {
                float x;
                float a, b, c;

                std::cout << "Enter the coefficients:  " << std::endl;
                std::cout << "Coefficients a: ";
                std::cin >> a;
                if (a == 0) {
                    std::cout << "Error, please try again" << std::endl << std::endl;
                    continue;
                }
                std::cout << "Coefficients b: ";
                std::cin >> b;
                std::cout << "Coefficients c: ";
                std::cin >> c;

                x = ((-b + c) / a);
                std::cout << "The equation has one root is: " << std::setprecision(5) << x << std::endl;
                std::cout << std::endl;
            }
                break;

            case 2: {
                double x, x1, x2;
                float discriminant;
                float a, b, c;

                std::cout << "Enter the coefficients:  " << std::endl;
                std::cout << "Coefficients a (a<>0) : ";
                std::cin >> a;
                if (a == 0) {
                    std::cout << "Error, please try again" << std::endl << std::endl;
                    continue;
                }
                std::cout << "Coefficients b: ";
                std::cin >> b;
                std::cout << "Coefficients c: ";
                std::cin >> c;

                discriminant = (b * b) - (4 * a * c);

                if (discriminant < 0) {
                    std::cout << "Sorry, no roots!" << std::endl;
                    std::cout << std::endl;
                } else if (discriminant == 0) {
                    x = -b / (2 * a);
                    std::cout << "The equation has one root is:  " << x << std::endl;
                    std::cout << std::endl;
                } else {
                    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
                    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
                    std::cout << "The equation has two roots" << std::endl;
                    std::cout << "First root:  " << std::setprecision(5) << x1 << std::endl;
                    std::cout << "Second root:  " << std::setprecision(5) << x2 << std::endl;
                    std::cout << std::endl;
                }
            }
                break;

            case 3: {
                float x;
                std::cout << "Enter number: ";
                std::cin >> x;
                x = x * x;
                std::cout << "Result:  " << std::setprecision(5) << x << std::endl;
            }
                break;

            case 4: {
                float x;
                std::cout << "Enter number: ";
                std::cin >> x;
                x = x * x * x;
                std::cout << "Result:  " << std::setprecision(5) << x << std::endl;
            }
                break;

            case 5: {
                unsigned long int number;
                unsigned long int degree;
                double result = 1.;

                std::cout << "Enter the number and degree" << std::endl;
                std::cout << "Number: ";
                std::cin >> number;
                std::cout << "Degree: ";
                std::cin >> degree;

                result = pow(number, degree);

                std::cout << "The number " << number << " of degrees " << degree << " =  "
                          << std::setprecision(5) << result << std::endl;
            }
                break;

            case 6: {
                unsigned int fact = 1;
                unsigned int number;

                std::cout << "Enter number ( <= 12 ) :  ";
                std::cin >> number;

                if ((number < 0) || (number > 12)) {
                    std::cout << "Error, please try again" << std::endl;
                } else {
                    for (int i = 2; i <= number; ++i) {
                        fact = fact * i;
                    }
                    std::cout << "Factorial of " << number << "! = " << fact << std::endl;
                }
            }
                break;

            case 7: {
                fQuit = true;
                std::cout << "Bye" << std::endl << std::endl;
                break;
            }

            default:
                std::cout << "Error in choice!" << std::endl;
                fQuit = true;
                break;
        }
    }

    return 0;
}

int Menu() {
    int choice;

    std::cout << "                              ProCalc  v. 1.0.0 " << std::endl << std::endl;
    std::cout << "                               **** Menu ****" << std::endl << std::endl;
    std::cout << "(1) Solve the linear equation (ax + b = c)" << std::endl;
    std::cout << "(2) Solve the quadratic equation (ax^2 + bx + c = 0)" << std::endl;
    std::cout << "(3) Squaring (x^2)" << std::endl;
    std::cout << "(4) Cubed (x^3) " << std::endl;
    std::cout << "(5) (x^y) [y - only integer!]" << std::endl;
    std::cout << "(6) Factorial (n!)" << std::endl;
    std::cout << "(7) Exit" << std::endl;
    std::cout << std::endl;
    std::cout << "-> ";

    std::cin >> choice;

    return choice;
}