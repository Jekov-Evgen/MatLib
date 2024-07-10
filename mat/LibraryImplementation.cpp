#include "MathLibraryTitle.h";
#include <cmath>
#include <iostream>

const double PI = 3.14159265358979323846;

namespace countingMathExamples
{
	int sum(const int foldedOne, const int foldedTwo) {
		return foldedOne + foldedTwo;
	}

	int takeAway(const int minuend, const int subtrahend) {
		return minuend - subtrahend;
	}

	int multiply(const int multiplicand, const int factor) {
		return multiplicand * factor;
	}

	int divide(const int dividend, const int divider) {
		return dividend / divider;
	}

	std::pair<double, double> discriminant(const int B, const int A, const int C, bool& hasRealRoots) {
		int D = (B * B) - 4 * A * C;

		if (D > 0) {
			double firstRoot = ((-B) + sqrt(D)) / (2 * A);
			double secondRoot = ((-B) - sqrt(D)) / (2 * A);
			hasRealRoots = true;
			return std::make_pair(firstRoot, secondRoot);
		}
		else if (D == 0) {
			double root = (-B) / (2 * A);
			hasRealRoots = true;
			return std::make_pair(root, root);
		}
		else {
			hasRealRoots = false;
			return std::make_pair(0.0, 0.0);
		}
	}

	int factorial(int factorialOfNumber)
	{
		int result = 1;

		for (int i = 1; i <= factorialOfNumber; i++)
		{
			result *= i;
		}

		return result;
	}

	int ABS(int numberWithoutModulus)
	{
		if (numberWithoutModulus >= 0) 
		{
			return numberWithoutModulus; 
		}
		if (numberWithoutModulus < 0) 
		{
			return numberWithoutModulus * -1; 
		}
	}

	double pow(int base, int degree)
	{
		double result = 1;

		if (base == 0)
		{
			return result - 1;
		}
		else if (degree == 0)
		{
			return result;
		}
		else if (degree < 0)
		{
			for (int i = 0; i < -degree; i++)
			{
				result *= base;
			}

			return (1 / result);
		}

		for (int i = 0; i < degree; i++)
		{
			result *= base;
		}

		return result;
	}

	int fibonacci(int numberFib)
	{
		if (numberFib == 0)
		{
			return 0;
		}
		else if (numberFib == 1)
		{
			return 1;
		}

		return (fibonacci(numberFib - 1) + fibonacci(numberFib - 2));
	}

	bool primeNumber(int numberPrime)
	{
		if (numberPrime <= 2) { return false; }

		for (int i = 2; i < numberPrime; i++)
		{
			if (numberPrime % i == 0) 
			{ 
				return false; 
			}
		}

		return true;
	}

	void generatingPrimeNumbers(int border)
	{
		try
		{
			if (border <= 1)
			{
				throw std::exception("Error. Prime numbers cannot be equal to one or less");
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
			return;
		}

		for (int i = 2; i <= border; i++)
		{
			if (primeNumber(i))
			{
				std::cout << i << std::endl;
			}
		}
	}

	int averageValue(int ListOfCosts[], const int SIZE)
	{
		int result = 0;

		for (int i = 0; i < SIZE; i++)
		{
			result += ListOfCosts[i];
		}

		return (result / SIZE);
	}

	void bubbleSort(int unsortedArray[], const int SIZE)
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = i + 1; j < SIZE; j++)
			{
				if (unsortedArray[i] > unsortedArray[j])
				{
					int keepingTheOldValue = unsortedArray[i];
					unsortedArray[i] = unsortedArray[j];
					unsortedArray[j] = keepingTheOldValue;
				}
			}
		}
	}

	int Median(int numbersCollection[], const int SIZE)
	{
		bubbleSort(numbersCollection, SIZE);

		if (SIZE % 2 != 0)
		{
			int medianOddCollection = numbersCollection[SIZE / 2];
			return medianOddCollection;
		}
		else if (SIZE % 2 == 0)
		{
			int firstNumberEvenCollection = numbersCollection[SIZE / 2 - 1];
			int secondNumberEvenCollection = numbersCollection[SIZE / 2];
			int median = (firstNumberEvenCollection + secondNumberEvenCollection) / 2;
			return median;
		}

		return -1;
	}
}

namespace processingGeometricModels
{
	Circle::Circle(double radius) { this->radius = radius; }

	double Circle::Circumference() {
		double diameter = 2 * radius;
		return PI * diameter;
	}

	double Circle::Square() { return PI * (radius * radius); }
}