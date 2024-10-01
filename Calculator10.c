// Code for Calculator 10.0

// Update Log
// Current Version: 10.0 (Lines: 1166)

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void print_Intro()
{
    printf("\n");
    printf("Calculator 10.0\n");
    printf("\n");
        printf(
"_____________________\n"
"|  _________________  |\n"
"| |              0. | |  .----------------.  .----------------.  .----------------.  .----------------.\n"
"| |_________________| | | .--------------. || .--------------. || .--------------. || .--------------. |\n"
"|  ___ ___ ___   ___  | | |     ______   | || |      __      | || |   _____      | || |     ______   | |\n"
"| | 7 | 8 | 9 | | + | | | |   .' ___  |  | || |     /  \\     | || |  |_   _|     | || |   .' ___  |  | |\n"
"| |___|___|___| |___| | | |  / .'   \\_|  | || |    / /\\ \\    | || |    | |       | || |  / .'   \\_|  | |\n"
"| | 4 | 5 | 6 | | - | | | |  | |         | || |   / ____ \\   | || |    | |   _   | || |  | |         | |\n"
"| |___|___|___| |___| | | |  \\ `.___.'\\  | || | _/ /    \\ \\_ | || |   _| |__/ |  | || |  \\ `.___.'\\  | |\n"
"| | 1 | 2 | 3 | | x | | | |   `._____.'  | || ||____|  |____|| || |  |________|  | || |   `._____.'  | |\n"
"| |___|___|___| |___| | | |              | || |              | || |              | || |              | |\n"
"| | . | 0 | = | | / | | | '--------------' || '--------------' || '--------------' || '--------------' |\n"
"| |___|___|___| |___| |  '----------------'  '----------------'  '----------------'  '----------------'\n"
"|_____________________|\n"
);
    printf("Welcome!!\n");
    printf("\n");
    printf("Note: The Following Operations Are Available On Calculator 10.0...Many More To Come Soon In Future Updates!!\n");
    printf("\n");
    printf("OPERATIONS\n");
    printf("\n");
    printf("\t1. For Arithmetic Operations: Press '1'\n");
    printf("\t2. For Simple Trigonometric Operations: Press '2'\n");
    printf("\t3. For Inverse Simple Trigonometric Operations: Press '3'\n");
    printf("\t4. For Hyperbolic Trigonometric Operations: Press '4'\n");
    printf("\t5. For Inverse Hyperbolic Trigonometric Operations: Press '5'\n");
    printf("\t6. For Exponential and Logarithmic Operations: Press '6'\n");
    printf("\t7. For Rounding and Remainder Operations: Press '7'\n");
    printf("\t8. For Absolute and Sign Operations: Press '8'\n");
    printf("\t9. For 2-D Mensuration Operations: Press '9'\n");
    printf("\t10. For 3-D Mensuration Operations: Press '10'\n");
    printf("\t11. For Miscellaneous Operations: Press '11'\n"); 
    printf("\n");
    printf("What Operation Would You Like To Perform? ");

    return;
}

void print_ArithmeticIntro()
{
    printf("1. ARITHMETIC OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Addition: Press '+'\n");
    printf("\tb. For Subtraction: Press '-'\n");
    printf("\tc. For Multiplication: Press '*'\n");
    printf("\td. For Division: Press '/'\n");
    printf("\n");
    printf("What Arithmetic Operation Would You Like To Perform? ");

    return;
}

void print_STIntro()
{
    printf("2. SIMPLE TRIGONOMETRIC OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding Sine(sin) of a Number: Press '1'\n");
    printf("\tb. For Finding Cosine(cos) of a Number: Press '2'\n");
    printf("\tc. For Finding Tangent(tan )of a Number: Press '3'\n");
    printf("\td. For Finding Cosecant(cosec) of a Number: Press '4'\n");
    printf("\te. For Finding Secant(sec) of a Number: Press '5'\n");
    printf("\tf. For Finding Cotangent(cot) of a Number: Press '6'\n");
    printf("\tNOTE: Your Input For This Type of Operation Would be in Radians!!\n");
    printf("\n");
    printf("What Simple Trigonometric Operation Would You Like To Perform? ");
    return;
}

void print_ISTIntro()
{
    printf("3. INVERSE SIMPLE TRIGONOMETRIC OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding Sine Inverse(sin^{-1}) of a Number: Press '1'\n");
    printf("\tb. For Finding Cosine Inverse(cos^{-1}) of a Number: Press '2'\n");
    printf("\tc. For Finding Tangent Inverse (tan^{-1})of a Number: Press '3'\n");
    printf("\td. For Finding Cosecant Inverse (cosec^{-1}) of a Number: Press '4'\n");
    printf("\te. For Finding Secant Inverse (sec^{-1}) of a Number: Press '5'\n");
    printf("\tf. For Finding Cotangent Inverse (cot^{-1}) of a Number: Press '6'\n");
    printf("\tNOTE: Your Input For This Type of Operation Would be in Radians!!\n");
    printf("\n");
    printf("What Inverse Simple Trigonometric Operation Would You Like To Perform? ");

    return;
}

void print_HTIntro()
{
    printf("4. HYPERBOLIC TRIGONOMETRIC OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding Inverse Hyperbolic Sine(sinh^{-1}) of a Number: Press '1'\n");
    printf("\tb. For Finding Inverse Hyperbolic Cosine(cosh^{-1}) of a Number: Press '2'\n");
    printf("\tc. For Finding Inverse Hyperbolic Tangent(tanh^{-1})of a Number: Press '3'\n");
    printf("\td. For Finding Inverse Hyperbolic Cosecant(cosech^{-1}) of a Number: Press '4'\n");
    printf("\te. For Finding Inverse Hyperbolic Secant(sech^{-1}) of a Number: Press '5'\n");
    printf("\tf. For Finding Inverse Hyperbolic Cotangent(coth^{-1}) of a Number: Press '6'\n");
    printf("NOTE: Your Input For This Type Of Operation Would Be In Radians!!\n");
    printf("\n");
    printf("What Inverse Hyperbolic Trigonometric Operation Would You Like To Perform? ");

    return;
}

void print_IHTIntro()
{
    printf("5. INVERSE HYPERBOLIC TRIGONOMETRIC OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding Hyperbolic Sine(sinh) of a Number: Press '1'\n");
    printf("\tb. For Finding Hyperbolic Cosine(cosh) of a Number: Press '2'\n");
    printf("\tc. For Finding Hyperbolic Tangent(tanh )of a Number: Press '3'\n");
    printf("\td. For Finding Hyperbolic Cosecant(cosech) of a Number: Press '4'\n");
    printf("\te. For Finding Hyperbolic Secant(sech) of a Number: Press '5'\n");
    printf("\tf. For Finding Hyperbolic Cotangent(coth) of a Number: Press '6'\n");
    printf("NOTE: Your Input For This Type Of Operation Would Be In Radians!!\n");
    printf("\n");
    printf("What Hyperbolic Trigonometric Operation Would You Like To Perform? ");

    return;
}

void print_ELIntro()
{
    printf("6. EXPONENTIAL AND LOGARITHMIC OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding Exponential (e^{x}) of a Number: Press '1'\n");
    printf("\tb. For Finding Natural Log (base e) of a Number: Press '2'\n");
    printf("\tc. For Finding Log (base 10) of a Number: Press '3'\n");
    printf("\tc. For Finding Square Root of a Number: Press '4'\n");
    printf("\tc. For Finding Cube Root of a Number: Press '5'\n");
    printf("\td. For Finding a Number raised to the Power of x: Press '6'\n");
    printf("\n");
    printf("What Exponential and Logarithmic Operation Would You Like To Perform? ");

    return;
}

void print_RRIntro()
{
    printf("7. ROUNDING AND REMAINDER OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Rounding Up a Number: Press '1'\n");
    printf("\tb. For Rounding Down a Number: Press '2'\n");
    printf("\tc. For Finding the Remainder of a Number when divided by x: Press '3'\n");
    printf("\td. For Finding the Integral and Fractional Part of a Number: Press '4'\n");
    printf("\n");
    printf("What Rounding and Remainder Operation Would You Like To Perform? ");

    return;
}

void print_ASIntro()
{
    printf("8. ABSOLUTE AND SIGN OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Absolute Value of an Integer Number: Press '1'\n");
    printf("\tb. For Absolute Value of a Decimal Number: Press '2'\n");
    printf("\n");
    printf("What Absolute and Sign Operation Would You Like To Perform? ");

    return;
}

void print_2DMIntro()
{
    printf("9. 2-D MENSURATION OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding Perimeter and Area of a Square: Press '1'\n");
    printf("\tb. For Finding Perimeter and Area of a Rectangle: Press '2'\n");
    printf("\tc. For Finding Perimeter and Area of a Circle: Press '3'\n");
    printf("\td. For Finding Perimeter and Area of a Equilateral Triangle: Press '4'\n");
    printf("\te. For Finding Perimeter and Area of a Isosceles Triangle: Press '5'\n");
    printf("\tf. For Finding Perimeter and Area of a Scalene Triangle: Press '6'\n");
    printf("\tg. For Finding Perimeter and Area of a Right-Angled Triangle: Press '7'\n");
    printf("\th. For Finding Perimeter and Area of a Rhombus: Press '8'\n");
    printf("\ti. For Finding Perimeter and Area of a Parallelogram: Press '9'\n");
    printf("\tj. For Finding Perimeter and Area of a Trapezium: Press '10'\n");
    printf("\n");
    printf("What 2-D Mensuration Operation Would You Like To Perform? ");

    return;
}

void print_3DMIntro()
{
    printf("10. 3-D MENSURATION OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding LSA/CSA, TSA and Volume of a Cube: Press '1'\n");
    printf("\tb. For Finding LSA/CSA, TSA and Volume of a Cuboid: Press '2'\n");
    printf("\tc. For Finding LSA/CSA, TSA and Volume of a Sphere: Press '3'\n");
    printf("\td. For Finding LSA/CSA, TSA and Volume of a Hemisphere: Press '4'\n");
    printf("\te. For Finding LSA/CSA, TSA and Volume of a Cylinder: Press '5'\n");
    printf("\tf. For Finding LSA/CSA, TSA and Volume of a Cone: Press '6'\n");
    printf("\n");
    printf("What 3-D Mensuration Operation Would You Like To Perform? ");

    return;
}

void print_MIntro()
{
    printf("10. MISCELLANEOUS OPERATIONS:\n");
    printf("\n");
    printf("\ta. For Finding the Factorial of a Number: Press '1'\n");
    printf("\tb. For checking whether the number entered by you is even or odd: Press '2'\n");
    printf("\tc. For checking whether the number entered by you is prime or not: Press '3'\n");
    printf("\td. For Converting Radians to Degree: Press '4'\n");
    printf("\te. For Converting Degree to Radians: Press '5'\n");
    printf("\tf. For Converting Celsius to Fahrenheit: Press '6'\n");
    printf("\tg. For Converting Fahrenheit to Celsius: Press '7'\n");
    printf("\th. For Converting Celsius to Kelvin: Press '8'\n");
    printf("\ti. For Converting Kelvin to Celsius: Press '9'\n");
    printf("\tk. For Converting Fahrenheit to Kelvin: Press '10'\n");
    printf("\tj. For Converting Kelvin to Fahrenheit: Press '11'\n");
    printf("\n");
    printf("What Miscellaneous Would You Like To Perform? ");

    return;
}

unsigned long long int fact(double num)
{

    unsigned long long int a = 1;
    for(unsigned long long int i=2;i<=num;i++){
        a = a * i;
    }
    printf("The factorial of %lf = %llu", num, a);
    printf("\n");

    return a;
}

unsigned long long int even_odd(int num)
{

    num = num%2;
    if(num==0)
    {
        printf("The number is even!!\n");
    }
    else{
        printf("The number is odd!!\n");
    }

    return num;
}

unsigned long long int prime_not(double num)
{
    if (num < 2) {
        printf("The number is not prime.\n");
        return 0;
    }
    for (unsigned long long int i = 2; i <= sqrt(num); i++) {
        if ((unsigned long long int)num % i == 0) {
            printf("The number is not prime.\n");
            return 0;
        }
    }
    printf("The number is prime.\n");
    return num;
}

int main(){

    Loop:
    print_Intro();
    
    int operation_type;
    scanf("%d", &operation_type);
    printf("\n");
    double num1;
    double num2;
    double num;
    double x;
    long int y;
    float z;
    double result;

    if (operation_type==1)
    {
        Loop1:
        print_ArithmeticIntro();
        char arithmetic_operator;
        scanf("\n%c", &arithmetic_operator);
        printf("\n");
        switch (arithmetic_operator)
        {
        case '+':
            printf("Enter 1st Number:");
            scanf("%lf", &num1);
            printf("Enter 2nd Number:");
            scanf("%lf", &num2);
            result = num1+num2;
            printf("The sum is=");
            printf("%lf",result);
            printf("\n");
            break;
    
        case '-':
            printf("Enter 1st Number:");    
            scanf("%lf", &num1);
            printf("Enter 2nd Number:");
            scanf("%lf", &num2);
            result = num1-num2;
            printf("The difference is=");
            printf("%lf",result);
            printf("\n");
            break;

        case '*':
            printf("Enter 1st Number:");
            scanf("%lf", &num1);
            printf("Enter 2nd Number:");
            scanf("%lf", &num2);
            result = num1*num2;
            printf("The product is=");
            printf("%lf",result);
            printf("\n");
            break;

        case '/':
            printf("Enter 1st Number:");
            scanf("%lf", &num1);
            printf("Enter 2nd Number:");
            scanf("%lf", &num2);
            result = num1/num2;
            printf("The quotient is=");
            printf("%lf",result);
            printf("\n");
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop1;
            break;
        }
    }
    else if (operation_type==2)
    {
        Loop2:
        print_STIntro();
        int Strigonometric_operator;
        scanf("\n%d", &Strigonometric_operator);
        printf("\n");
        switch (Strigonometric_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = sin(num);
            printf("sin(%lf)=%lf", num, result);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = cos(num);
            printf("cos(%lf)=%lf", num, result);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = tan(num);
            printf("tan(%lf)=%lf", num, result);
            break;

        case 4:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(sin(num));
            printf("cosec(%lf)=%lf", num, result);
            break;

        case 5:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(cos(num));
            printf("sec(%lf)=%lf", num, result);
            break;

        case 6:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(tan(num));
            printf("cot(%lf)=%lf", num, result);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop2;
            break;
        }
    }
    else if (operation_type==3)
    {
        Loop3:
        print_ISTIntro();
        int Itrigonometric_operator;
        scanf("\n%d", &Itrigonometric_operator);
        printf("\n");
        switch (Itrigonometric_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = asin(num);
            printf("sin^{-1}(%lf)=%lf", num, result);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = acos(num);
            printf("cos^{-1}(%lf)=%lf", num, result);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = atan(num);
            printf("tan^{-1}(%lf)=%lf", num, result);
            break;

        case 4:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(asin(num));
            printf("cosine^{-1}(%lf)=%lf", num, result);
            break;

        case 5:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(acos(num));
            printf("sec^{-1}(%lf)=%lf", num, result);
            break;

        case 6:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(atan(num));
            printf("cot^{-1}(%lf)=%lf", num, result);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop3;
            break;
        }
    }
    else if (operation_type==4)
    {
        Loop4:
        print_HTIntro();
        int Htrigonometric_operator;
        scanf("\n%d", &Htrigonometric_operator);
        printf("\n");
        switch (Htrigonometric_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = sinh(num);
            printf("sinh(%lf)=%lf", num, result);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = cosh(num);
            printf("cosh(%lf)=%lf", num, result);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = tan(num);
            printf("tanh(%lf)=%lf", num, result);
            break;

        case 4:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(sinh(num));
            printf("cosech(%lf)=%lf", num, result);
            break;

        case 5:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(cosh(num));
            printf("sech(%lf)=%lf", num, result);
            break;

        case 6:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(tanh(num));
            printf("coth(%lf)=%lf", num, result);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop4;
            break;
        }
    }
    else if (operation_type==5)
    {
        Loop5:
        print_IHTIntro();
        int IHtrigonometric_operator;
        scanf("\n%d", &IHtrigonometric_operator);
        printf("\n");
        switch (IHtrigonometric_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = asinh(num);
            printf("sinh^{-1}(%lf)=%lf", num, result);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = acosh(num);
            printf("cosh^{-1}(%lf)=%lf", num, result);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = atan(num);
            printf("tanh^{-1}(%lf)=%lf", num, result);
            break;

        case 4:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(asinh(num));
            printf("cosech^{-1}(%lf)=%lf", num, result);
            break;

        case 5:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(acosh(num));
            printf("sech^{-1}(%lf)=%lf", num, result);
            break;

        case 6:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = 1/(atanh(num));
            printf("coth^{-1}(%lf)=%lf", num, result);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop5;
            break;
        }
    }
    else if (operation_type==6)
    {
        Loop6:
        print_ELIntro();
        int EL_operator;
        scanf("\n%d", &EL_operator);
        printf("\n");
        switch (EL_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = exp(num);
            printf("Exponential of %lf (e^{%lf})= %lf", num, num, result);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = log(num);
            printf("loge(%lf) = %lf", num, result);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = log10(num);
            printf("log10(%lf) = %lf", num, result);
            break;

        case 4:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = sqrt(num);
            printf("Square Root of %lf = %lf", num, result);
            break;

        case 5:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = cbrt(num);
            printf("Cube Root of %lf = %lf", num, result);
            break;

        case 6:
            printf("Enter a Number:");
            scanf("%lf", &num);
            printf("Enter the Power:");
            scanf("%lf", &x);
            result = pow(num, x);
            printf("%lf^{%lf}= %lf",num ,x ,result);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop6;
            break;
        }
    }
    else if (operation_type==7)
    {
        Loop7:
        print_RRIntro();
        int RR_operator;
        scanf("\n%d", &RR_operator);
        printf("\n");
        switch (RR_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = ceil(num);
            printf("Rounding Up %lf= %lf", num, result);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            result = floor(num);
            printf("Rounding Down %lf= %lf", num, result);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            printf("Enter x:");
            scanf("%lf", &x);
            result = fmod(num, x);
            printf("Remainder of %lf/%lf= %lf", num, x, result);
            break;

        case 4:
            printf("Enter a Number:");
            scanf("%lf", &num);
            double integral_part;
            double fractional_part = modf(num, &integral_part);
            printf("Integral Part of %lf = %lf and Fractional Part of %lf = %lf", num, integral_part, num, fractional_part);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop7;
            break;
        }
    }
    else if (operation_type==8)
    {
        Loop8:
        print_ASIntro();
        int AS_operator;
        scanf("\n%d", &AS_operator);
        printf("\n");
        switch (AS_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%ld", &y);
            result = labs(y);
            printf("Absolute Value of %ld = %lf" ,y ,result);
            break;
            
        case 2:
            printf("Enter a Number:");
            scanf("%f", &z);
            result = fabs(z);
            printf("Absolute Value of %f = %lf", z, result);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop8;
            break;
        }
    }
    else if (operation_type==9)
    {
        Loop9:
        print_2DMIntro();
        int M2D_operator;
        scanf("\n%d", &M2D_operator);
        printf("\n");
        double Perimeter;
        double Area;
        switch (M2D_operator)
        {
        case 1:
            printf("Enter the Side-Length of Square: ");
            double SL;
            scanf("%lf", &SL);
            Perimeter = 4*SL;
            Area = SL*SL;
            printf("The Perimeter of Square = %lf and The Area of Square = %lf", Perimeter, Area);
            break;

        case 2:
            printf("Enter the Length of Rectangle: ");
            double RL;
            scanf("%lf", &RL);
            printf("Enter the Breadth of Rectangle: ");
            double RB;
            scanf("%lf", &RB);
            Perimeter = 2*(RL+RB);
            Area = RL*RB;
            printf("The Perimeter of Rectangle = %lf and The Area of Rectangle = %lf", Perimeter, Area);
            break;

        case 3:
            printf("Enter the Radius of Circle: ");
            double CR;
            scanf("%lf", &CR);
            Perimeter = 2*3.14*CR;
            Area = 3.14*CR*CR;
            printf("The Perimeter of Circle = %lf and The Area of Circle = %lf", Perimeter, Area);
            break;

        case 4:
            printf("Enter the Length of Equilateral Triangle: ");
            double ETL;
            scanf("%lf", &ETL);
            Perimeter = 4*ETL;
            Area = (1.732/4)*ETL*ETL;
            printf("The Perimeter of Equilateral Triangle = %lf and The Area of Equilateral Triangle = %lf", Perimeter, Area);
            break;

        case 5:
            printf("Enter the Length(Equal One) of Isosceles Triangle: ");
            double ITEL;
            scanf("%lf", &ITEL);
            printf("Enter the Length(Different One) of Isosceles Triangle: ");
            double ITDL;
            scanf("%lf", &ITDL);
            printf("Note: Enter the Height whose base is the Side-length which is different!!");
            printf("Enter the Height of Isosceles Triangle: ");
            double ITH;
            scanf("%lf", &ITH);
            Perimeter = 2*ITEL+ITDL;
            Area = 0.5*ITH*ITDL;
            printf("The Perimeter of Isosceles Triangle = %lf and The Area of Isosceles Triangle = %lf", Perimeter, Area);
            break;

        case 6:
            printf("Enter the Length1 of Scalene Triangle: ");
            double STL1;
            scanf("%lf", &STL1);
            printf("Enter the Length2 of Scalene Triangle: ");
            double STL2;
            scanf("%lf", &STL2);
            printf("Enter the Length3 of Scalene Triangle: ");
            double STL3;
            scanf("%lf", &STL3);
            Perimeter = STL1+STL2+STL3;
            double s;
            s = Perimeter/2;
            Area = sqrt(s*(s-STL1)*(s-STL2)*(s-STL3));
            printf("The Perimeter of Scalene Triangle = %lf and The Area of Scalene Triangle = %lf", Perimeter, Area);
            break;

        case 7:
            printf("Enter the Length1 of Right-Angled Triangle: ");
            double RTL1;
            scanf("%lf", &RTL1);
            printf("Enter the Length2 of Right-Angled Triangle: ");
            double RTL2;
            scanf("%lf", &RTL2);
            printf("Enter the Hypotenuse of Right-Angled Triangle: ");
            double RTH;
            scanf("%lf", &RTH);
            Perimeter = RTL1+RTL2+RTH;
            Area = 0.5*RTL1*RTL2;
            printf("The Perimeter of Right-Angled Triangle = %lf and The Area of Right-Angled Triangle = %lf", Perimeter, Area);
            break;

        case 8:
            printf("Enter the Side-Length of Rhombus: ");
            double RhL;
            scanf("%lf", &RhL);
            Perimeter = 4*RhL;
            printf("Enter the Length of Diagonal1 of Rhombus: ");
            double RD1;
            scanf("%lf", &RD1);
            printf("Enter the Length of Diagonal2 of Rhombus: ");
            double RD2;
            scanf("%lf", &RD2);
            Area = 0.5*RD1*RD2;
            printf("The Perimeter of Rhombus = %lf and The Area of Rhombus = %lf", Perimeter, Area);
            break;

        case 9:
            printf("Enter the Length of Parallelogram: ");
            double PL;
            scanf("%lf", &PL);
            printf("Enter the Breadth of Parallelogram: ");
            double PB;
            scanf("%lf", &PB);
            Perimeter = 2*(PL+PB);
            printf("Enter the Height of Parallelogram: ");
            double PH;
            scanf("%lf", &PH);
            Area = PB*PH;
            printf("The Perimeter of Parallelogram = %lf and The Area of Parallelogram = %lf", Perimeter, Area);
            break;

        case 10:
            printf("Enter the Horizontal Length1(Smaller One) of Trapezium: ");
            double THL1;
            scanf("%lf", &THL1);
            printf("Enter the Horizontal Length1(Bigger One) of Trapezium: ");
            double THL2;
            scanf("%lf", &THL2);
            printf("Enter the Side Length1 of Trapezium: ");
            double TSL1;
            scanf("%lf", &TSL1);
            printf("Enter the Side Length2 of Trapezium: ");
            double TSL2;
            scanf("%lf", &TSL2);
            Perimeter = THL1+THL2+TSL1+TSL2;
            printf("Enter Height of Trapezium: ");
            double TH;
            scanf("%lf", &TH);
            Area = 0.5*TH*(THL1+THL2);
            printf("The Perimeter of Trapezium = %lf and The Area of Trapezium = %lf", Perimeter, Area);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop9;
            break;
        }
    }
    else if (operation_type==10)
    {
        Loop10:
        print_3DMIntro();
        int M3D_operator;
        scanf("\n%d", &M3D_operator);
        printf("\n");
        double LSA_CSA;
        double TSA;
        double Volume;
        switch (M3D_operator)
        {
        case 1:
            printf("Enter Side-Length of Cube: ");
            double CL;
            scanf("%lf", &CL);
            LSA_CSA = 4*pow(CL,2);
            TSA = 6*pow(CL,2);
            Volume = pow(CL,3);
            printf("LSA/CSA of Cube = %lf and TSA of Cube = %lf and Volume of Cube = %lf",LSA_CSA ,TSA ,Volume);
            break;

        case 2:
            printf("Enter Length of Cuboid: ");
            double CuL;
            scanf("%lf", &CuL);
            printf("Enter Breadth of Cuboid: ");
            double CuB;
            scanf("%lf", &CuB);
            printf("Enter Height of Cuboid: ");
            double CuH;
            scanf("%lf", &CuH);
            LSA_CSA = 2*CuH*(CuL+CuB);
            TSA = 2*(CuL+CuB+CuH);
            Volume = CuL*CuB*CuH;
            printf("LSA/CSA of Cuboid = %lf and TSA of Cuboid = %lf and Volume of Cuboid = %lf",LSA_CSA ,TSA ,Volume);
            break;

        case 3:
            printf("Enter Radius of Sphere: ");
            double SR;
            scanf("%lf", &SR);
            LSA_CSA = 4*3.14*pow(SR,2);
            TSA = 4*3.14*pow(SR,2);
            Volume = (4/3)*3.14*pow(SR,3);
            printf("LSA/CSA of Sphere = %lf and TSA of Sphere = %lf and Volume of Sphere = %lf",LSA_CSA ,TSA ,Volume);
            break;

        case 4:
            printf("Enter Radius of Hemisphere: ");
            double HR;
            scanf("%lf", &HR);
            LSA_CSA = 2*3.14*pow(HR,2);
            TSA = 3*3.14*pow(HR,2);
            Volume = (2/3)*3.14*pow(HR,3);
            printf("LSA/CSA of Hemisphere = %lf and TSA of Hemisphere = %lf and Volume of Hemisphere = %lf",LSA_CSA ,TSA ,Volume);
            break;

        case 5:
            printf("Enter Radius of Cylinder: ");
            double CyR;
            scanf("%lf", &CyR);
            printf("Enter Height of Cylinder: ");
            double CyH;
            scanf("%lf", &CyH);
            LSA_CSA = 2*3.14*CyR*CyH;
            TSA = 2*3.14*CyR*CyH + 2*3.14*pow(CyR,2);
            Volume = 3.14*pow(CyR,2)*CyH;
            printf("LSA/CSA of Cylinder = %lf and TSA of Cylinder = %lf and Volume of Cylinder = %lf",LSA_CSA ,TSA ,Volume);
            break;

        case 6:
            printf("Enter Radius of Cone: ");
            double CoR;
            scanf("%lf", &CoR);
            printf("Enter Height of Cone: ");
            double CoH;
            scanf("%lf", &CoH);
            printf("Enter Lateral Height of Cone: ");
            double CoL;
            scanf("%lf", &CoL);
            LSA_CSA = 3.14*CoR*CoL;
            TSA = 3.14*CoR*CoL +3.14*pow(CoR,2);
            Volume = (1/3)*3.14*pow(CoR,2)*CoH;
            printf("LSA/CSA of Cone = %lf and TSA of Cone = %lf and Volume of Cone = %lf",LSA_CSA ,TSA ,Volume);
            break;
        
        default:
            printf("You have entered a wrong operator!\n");
            printf("Please check and try again!\n");
            goto Loop10;
            break;
        }
    }
    else if (operation_type==11)
    {
        Loop11:
        print_MIntro();
        int M_operator;
        scanf("\n%d", &M_operator);
        printf("\n");
        switch (M_operator)
        {
        case 1:
            printf("Enter a Number:");
            scanf("%lf", &num);
            fact(num);
            break;

        case 2:
            printf("Enter a Number:");
            scanf("%lf", &num);
            even_odd(num);
            break;

        case 3:
            printf("Enter a Number:");
            scanf("%lf", &num);
            prime_not(num);
            break;

        case 4:
            printf("Enter Value in Radians: ");
            scanf("%lf", &num);
            result = 57.29578*num;
            printf("Value in Degrees = %lf", result);
            break;

        case 5:
            printf("Enter Value in Degree: ");
            scanf("%lf", &num);
            result = 0.01745329*num;
            printf("Value in Degrees = %lf", result);
            break;

        case 6:
            printf("Enter Value in Celsius: ");
            scanf("%lf", &num);
            result = (1.8*num)+32;
            printf("Value in Fahrenheit = %lf", result);
            break;

        case 7:
            printf("Enter Value in Fahrenheit: ");
            scanf("%lf", &num);
            result = (num-32)/1.8;
            printf("Value in Celsius = %lf", result);
            break;

        case 8:
            printf("Enter Value in Celsius: ");
            scanf("%lf", &num);
            result = num+273.15;
            printf("Value in Kelvin = %lf", result);
            break;

        case 9:
            printf("Enter Value in Kelvin: ");
            scanf("%lf", &num);
            result = num-273.15;
            printf("Value in Celsius = %lf", result);
            break;

        case 10:
            printf("Enter Value in Fahrenheit: ");
            scanf("%lf", &num);
            result = (num-32)/1.8+273.15;
            printf("Value in Kelvin = %lf", result);
            break;

        case 11:
            printf("Enter Value in Kelvin: ");
            scanf("%lf", &num);
            result = 1.8*(num-273.15)+32;
            printf("Value in Fahrenheit = %lf", result);
            break;

        default:
            printf("You Have Entered A Wrong Input!!\n");
            printf("Please Try Again!!\n");
            goto Loop11;
            break;
        }
    }
    else
    {
        printf("You Have Entered A Wrong Input!!\n");
        printf("Please Try Again!!\n");
        goto Loop;
    }

    Loop14:
    printf("\n");
    char CE_Loop;
    printf("Do You Want To Continue/Exit ? (C/E)");
    scanf("\n%c", &CE_Loop);
    printf("\n");
    switch (CE_Loop)
    {
    case 'C':
        printf("\n");
        printf("Continuing...\n");
        printf("\n");
        goto Loop;
        break;

    case 'E':
        printf("\n");
        printf("Exiting...\n");
        printf("\n");
        printf("Thank You For Using Calculator 4.0!!\n");
        Loop13:
        printf("\n");
        char Rating;
        printf("Giving Us A Rating, Helps Us To Improve!! (It Takes Less Than A Minute To Rate Us)\n");
        printf("Do You Want to Rate Calculator 4.0? (Y/N) ");
        scanf("\n%c", &Rating);
        printf("\n");
        switch (Rating)
        {
        case 'Y':
            Loop12:
            printf("Rating Range: 1 Star - 5 Star\n");
            printf("1 Star Being The Lowest and 5 Star Being The Highest\n");
            printf("\n");
            int Rating_Star;
            printf("Rating = ");
            scanf("%d", &Rating_Star);
            printf("\n");
            printf("Processing Rating...\n");
            printf("\n");
            if (Rating_Star==5)
            {
                printf("Rating Has Been Successfully Processed!!\n");
                printf("You Have Rated Us 5 Stars!!\n");
                printf("Thank You For Rating Us!!\n");
            }
            else if (Rating_Star==4)
            {
                printf("Rating Has Been Successfully Processed!!\n");
                printf("You Have Rated Us 4 Stars!!\n");
                printf("Thank You For Rating Us!!\n");
            }
            else if (Rating_Star==3)
            {
                printf("Rating Has Been Successfully Processed!!\n");
                printf("You Have Rated Us 3 Stars!!\n");
                printf("Thank You For Rating Us!!\n");
                printf("We Will Try To Improve!!");
            }
            else if (Rating_Star==2)
            {
                printf("Rating Has Been Successfully Processed!!\n");
                printf("You Have Rated Us 2 Stars!!\n");
                printf("Thank You For Rating Us!!\n");
                printf("We Will Try To Improve!!");
            }
            else if (Rating_Star==1)
            {
                printf("Rating Has Been Successfully Processed!!\n");
                printf("You Have Rated Us 1 Stars!!\n");
                printf("Thank You For Rating Us!!\n");
                printf("We Will Try To Improve!!");
            }
            else
            {
                printf("You Have Entered A Wrong Input!!\n");
                printf("Please Try Again!!\n");
                goto Loop12;
            }
            printf("\n");
            printf("Thank You So Much For Your Time!!\n");
            break;

        case 'N':
            printf("No Problem!!\n");
            printf("Thank You So Much For Your Time!!\n");
            break;
        
        default:
            printf("You Have Entered A Wrong Input!!\n");
            printf("Please Try Again!!\n");
            goto Loop13;
            break;
        }
        break;
    
    default:
        printf("You Have Entered A Wrong Input!!\n");
        printf("Please Try Again!!\n");
        goto Loop14;
        break;
    }

    return 0;
}