#pragma once

class vector {
    private:
	int x;
	int y;
    public:
	vector();
	void setVector(int x, int y);
	int getX();
	int getY();
	vector add(vector* addend);
	vector subtract(vector* subtractend);
	vector multiply(int factor);
	vector multiply(vector* factor);
};
