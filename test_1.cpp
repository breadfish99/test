#include <iostream>
#include <cmath> 

class Vector {
private:
	double x, y;

public:
	Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

	Vector add(const Vector& v) const {
		return Vector(this->x + v.x, this->y + v.y);
	}

	void print() const {
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}


	void dir() const {
		double magnitude = std::sqrt(x * x + y * y); 
		std::cout << "Ä£³¤: " << magnitude << std::endl;
	}
};

int main() {

	Vector v1(3.0, 1.0);
	Vector v2(1.0, 2.0);

	std::cout << "v1: ";
	v1.print();
	std::cout << "v2: ";
	v2.print();

	Vector v3 = v1.add(v2);
	std::cout << "v1 + v2 = ";
	v3.print();

	v3.dir();

	return 0;
}
