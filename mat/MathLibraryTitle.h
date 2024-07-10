#pragma once

namespace countingMathExamples
{
    int sum(const int, const int);
    int takeAway(const int, const int);
    int multiply(const int, const int);
    int divide(const int, const int);
    int discriminant(const int, const int, const int);
    int factorial(int);
    int ABS(int);
    double pow(int, int);
    int fibonacci(int);
    bool primeNumber(int);
    void generatingPrimeNumbers(int);
    int averageValue(int arr[], const int SIZE);
    int Median(int arr[], const int SIZE);
}

namespace processingGeometricModels
{
    class Circle
    {
    private:
        double radius;
    public:
        Circle(double radius);
        double Circumference();
        double Square();
    };
}