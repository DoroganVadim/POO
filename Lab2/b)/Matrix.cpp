#include "Matrix.h"
#include <iostream>

Matrix::Matrix() {
    cols = 0;
    rows = 0;
    arr = NULL;
    errorCode = 0;
}
Matrix::Matrix(int n) {
    this->rows = n;
    this->cols = n;
    arr = new char[this->rows * this->cols + 1];
    arr[this->rows * this->cols] = 0;
    errorCode = 0;
}

Matrix::Matrix(int rows, int cols) {

    this->rows = rows;
    this->cols = cols;
    arr = new char[this->rows * this->cols + 1];
    arr[this->rows * this->cols] = 0;
    errorCode = 0;
}

Matrix::Matrix(const Matrix& m) {
    rows = m.rows;
    cols = m.cols;
    arr = new char[rows * cols + 1];
    arr[rows * cols] = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            setElement(i, j, m.arr[i * rows + j]);
        }
    }
    errorCode = m.errorCode;
}

char Matrix::getElement(int i, int j) {
    if (i < 0 || i >= rows || j < 0 || j > cols) {
        errorCode = 1;
        printError();
    }
    return arr[i * rows + j];
}
void Matrix::setElement(int i, int j, char c) {
    if (i < 0 || i >= rows || j < 0 || j > cols) {
        errorCode = 1;
        printError();
    }
    this->arr[i * cols + j] = c;
}

Matrix Matrix::add(Matrix& m2) {
    if (this->cols > m2.cols || this->rows > m2.rows) {
        errorCode = 2;
        printError();
    }

    Matrix result = Matrix(this->rows, this->cols);
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            result.setElement(i, j, this->getElement(i, j) + m2.getElement(i, j));
        }
    }
    return result;
}

Matrix Matrix::substract(Matrix& m2) {
    if (this->cols > m2.cols || this->rows > m2.rows) {
        errorCode = 2;
        printError();

    }
    Matrix result = Matrix(this->rows, this->cols);
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            result.setElement(i, j, this->getElement(i, j) - m2.getElement(i, j));
        }
    }
    return result;
}

Matrix Matrix::multiply(Matrix& m2) {
    if (this->cols != m2.rows) {
        errorCode = 2;
        printError();

    }

    Matrix result = Matrix(this->rows, m2.cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < m2.cols; j++) {
            int sum = 0;
            for (int k = 0; k < cols; k++) {
                sum += getElement(i, k) * m2.getElement(k, j);
            }
            result.setElement(i, j, sum);
        }
    }
    return result;
}

Matrix Matrix::multiply(int num) {
    Matrix result = Matrix(this->rows, this->cols);
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++) {
            result.setElement(i, j, char(num * int(getElement(i, j))));
        }
    }
    return result;
}




void Matrix::printError() {
    std::cout << "Eroarea nr." << this->errorCode << "\n";
    switch (this->errorCode)
    {
    case 1: std::cout << "Index in afara limitelor."; break;
    case 2: std::cout << "Matrici diferite dupa marime."; break;
    }
    std::cout << "\n";
    if (errorCode != 0)exit(0);
}

void Matrix::printMatrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i * cols + j] << " ";
        }
        std::cout << "\n";
    }
}
Matrix::~Matrix() {
    if (arr != NULL) {
        delete[] arr;
    }
    arr = NULL;
}
