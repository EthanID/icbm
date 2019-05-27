#pragma once

class vector {
    private:
	int x;
	int y;
    public:
	vector();
	vector(int x, int y);
	void setVector(int x, int y);
	int getX();
	int getY();
	vector operator+(const vector& addend);
	vector operator-(const vector& subtractend);
	vector operator*(const int factor);
	vector operator*(vector& factor);
	vector operator/(const int divisor);
	vector operator/(vector& divisor);
};
