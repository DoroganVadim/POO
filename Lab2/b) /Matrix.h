class Matrix {
private:
    char* arr;
    int rows;
    int cols;
    int errorCode;

public:
    Matrix();
    Matrix(int n);
    Matrix(int rows, int cols);
    Matrix(const Matrix& m);
    char getElement(int i, int j);
    void setElement(int i, int j, char c);
    Matrix add(Matrix& m2);
    Matrix substract(Matrix& m2);
    Matrix multiply(Matrix& m2);
    Matrix multiply(int num);
    void printError();
    void printMatrix();
    ~Matrix();
};
