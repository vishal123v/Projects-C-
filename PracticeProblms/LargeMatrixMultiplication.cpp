#include <iostream>
#include <stdlib.h> 
#include <vector> 
#define N 4096
typedef std::vector<std::vector<double>> MATRIX;
MATRIX intiMatrix(MATRIX &);
void Display(MATRIX);
MATRIX multiplication(MATRIX &, MATRIX &);
int main()
{

	int num_rows = N, num_cols = N;

	MATRIX Matrix1(num_rows, std::vector<double>(num_cols));
	MATRIX Matrix2(num_rows, std::vector<double>(num_cols));
	MATRIX Result(num_rows, std::vector<double>(num_cols));
	intiMatrix(Matrix1);
	intiMatrix(Matrix2);
	Display(Matrix1);
	Display(Matrix2);
	Result = multiplication(Matrix1, Matrix2);
	Display(Result);

}

MATRIX intiMatrix(MATRIX &Matrix)
{
	for (auto it_row = Matrix.begin(); it_row != Matrix.end(); it_row++)
	{
		// Getting each (i,j) element and assigning random value to it
		for (auto it_col = it_row->begin(); it_col != it_row->end(); it_col++)
		{
			*it_col = rand() % 100;
		}
	}
	return Matrix;
}
void Display(MATRIX Matrix)
{
	// let's print the Matrix
	for (auto it_row = Matrix.begin(); it_row != Matrix.end(); it_row++)
	{
		for (auto it_col = it_row->begin(); it_col != it_row->end(); it_col++)
		{
			std::cout << *it_col << " ";
		}

		std::cout << std::endl;
	}
}

MATRIX multiplication(MATRIX &Matrix1, MATRIX &Matrix2)
{
	MATRIX Result(N, std::vector<double>(N));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				Result[i][j] += Matrix1[i][k] * Matrix2[k][j];
			}
		}
	}

	return Result;
}