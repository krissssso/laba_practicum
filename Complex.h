#pragma once
class Complex
{
private:
    double real;   // �������������� �����
    double imag;   // ������ �����
public:
    // ����������� ��� �������� ������������ �����
    Complex(double r, double i) : real(r), imag(i) {}

    // ����� ��� ��������� ��������
    void setValues(double r, double i);

    // ����� ��� ������ ������������ �����
    void print();

    // ����� ����� 
    void symm(Complex num1, Complex num2);

    //
    void minys(Complex num1, Complex num2);

    //
    void multiplication(Complex num1, Complex num2);

    //
    void division(Complex num1, Complex num2);

    //
    void exponentiation(Complex& num1, double n);

    //
    void root_extraction(Complex num, double n);

};

