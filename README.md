# Scientific_Calculator
Personal Project
# Calculator 10.0

## Overview

**Calculator 10.0** is a multifunctional console-based program that allows users to perform a wide variety of calculations. It supports arithmetic operations, trigonometric operations, area, and perimeter calculations for 2D shapes, and surface area and volume calculations for 3D shapes. Additionally, it includes a temperature converter and several utility functions such as checking for even/odd numbers, prime numbers, and calculating factorials.

## Features

### 1. Arithmetic Operations:
- Addition, Subtraction, Multiplication, and Division of two numbers.
  
### 2. Trignometric Operations:
- Computes trigonometric, inverse trigonometric, hyperbolic, and inverse hyperbolic functions.

### 3. Exponential and Logarithmic Operations: 
- Computes square roots, cube roots, powers, logarithms, and exponents.

### 4. Rounding and Remainder Operations:
- Rounds up or down a number, computes remainders, integral parts, and fractional parts

### 5. Absolute Value
- Computes absolute values of integers and rational numbers.

### 6. 2D Shape Calculations:
- **Square**: Calculates area and perimeter.
- **Rectangle**: Calculates area and perimeter.
- **Circle**: Calculates area and perimeter.
- **Equilateral Triangle**: Calculates perimeter and area.
- **Isosceles Triangle**: Calculates perimeter and area.
- **Scalene Triangle**: Calculates perimeter and area.
- **Right-Angled Triangle**: Calculates perimeter and area.
- **Rhombus**: Calculates perimeter and area.
- **Parallelogram**: Calculates perimeter and area.
- **Trapezium**: Calculates perimeter and area.

### 7. 3D Shape Calculations:
- **Cube**: Calculates LSA/CSA, TSA, and Volume.
- **Cuboid**: Calculates LSA/CSA, TSA, and Volume.
- **Sphere**: Calculates LSA/CSA, TSA, and Volume.
- **Hemisphere**: Calculates LSA/CSA, TSA, and Volume.
- **Cylinder**: Calculates LSA/CSA, TSA, and Volume.
- **Cone**: Calculates LSA/CSA, TSA, and Volume.

### 8. Mathematical Utility Functions:
- Factorial calculation.
- Even or odd number checker.
- Prime number checker.
- Conversion between radians and degrees.
  
### 6. Temperature Conversion:
- Celsius to Fahrenheit.
- Fahrenheit to Celsius.
- Celsius to Kelvin.
- Kelvin to Celsius.
- Fahrenheit to Kelvin.
- Kelvin to Fahrenheit.

## Usage

1. **Run the Program**:
   - After compiling the source code, execute the program in the terminal.
   - Follow the prompts to select the type of operation you wish to perform.

2. **Main Menu**:
   - Select the type of operation (arithmetic, matrix, 2D shape, 3D shape, etc.).
   
3. **Submenu**:
   - Depending on your choice, enter the required parameters (e.g., lengths, radii, etc.), and the program will output the results.
  
4. **View Results**:
   - The result of the operation (area, perimeter, volume, etc.) will be displayed.

5. **Continue or Exit**:
   - At the end of each operation, the program prompts the user to either continue with another operation or exit the program.

## Operation Menu

Upon launching, the program offers different operation modes:
- **Basic Arithmetic**
- **Simple Trigonometric Functions**
- **Inverse Trigonometric Functions**
- **Hyperbolic Trigonometric Functions**
- **Inverse Hyperbolic Trigonometric Functions**
- **Exponential and Logarithmic Operations**
- **Rounding and Remainder Operations**
- **Absolute and Sign Operations**
- **2D Shape Calculations**
- **3D Shape Calculations**
- **Miscellaneous Functions**

## Examples of Operations

- **Calculate the Area and Perimeter of a Square**:
  - Input the side length of the square.
  - The program will calculate and display both the area and the perimeter.
  
- **Calculate the Volume of a Sphere**:
  - Input the radius of the sphere.
  - The program will compute the total surface area (TSA) and the volume.
  
- **Convert Celsius to Fahrenheit**:
  - Input the temperature in Celsius.
  - The program will output the equivalent temperature in Fahrenheit.

## Program Structure

- **Main Function**: It drives the flow of the program and repeatedly prompts users to select operations.
- **Helper Functions**:
  - **Arithmetic Functions**: Handle addition, subtraction, multiplication, division.
  - **Geometric Functions**: Compute areas, perimeters, volumes, and surface areas for both 2D and 3D shapes.
  - **Conversion Functions**: Convert temperature between different scales, radians to degrees, and vice versa.
  - **Miscellaneous Functions**: Handle factorial, even/odd check, and prime number detection.

## Compiling and Running

1. **Compile the Program**:
   ```bash
   gcc -o scientific_calculator calculator.c -lm
2. **Run the Program**:
   ```bash
   ./scientific_calculator

## Post-Execution Feedback

- At the end of each session, the program asks users to rate the experience. This helps gather feedback for future improvements. I am still working on creating a function, that would put all the feedback in a .csv file.

## Conclusion

- Calculator 10.0 is a comprehensive and user-friendly program designed for a wide range of mathematical and geometric operations. It is a valuable tool for students, educators, and professionals seeking quick and accurate calculations.

## License

- This project is licensed under the MIT License - see the LICENSE file for details.

## Contributions

- Feel free to submit issues or pull requests for any improvements or bug fixes.

## Author

- Lavneet Hora
- Sophomore @ Texas Tech University
- Computer Science
