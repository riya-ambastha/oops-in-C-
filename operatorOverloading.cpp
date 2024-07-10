class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex operator + (const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;
    result = c1 + c2;
}
