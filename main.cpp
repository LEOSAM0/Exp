#include <iostream>

class A {
public:
	A() = default;
	A(int a, float b, std::string c) {
		z = a;
		x = b;
		y = c;
	}
	A(int a, float b) {
		z = a;
		x = b;
	}
	A(float b, std::string c) {
		x = b;
		y = c;
	}

	~A() {};

	void Print() {
		std::cout << getAz() << std::endl;
	}

	int getAz() const {
		return z;
	}
	void setAz(int value) {
		z = value;
	}

	float getAx() const {
		return x;
	}

	void setAx(float value) {
		x = value;
	}

	std::string getAy() const {
		return y;
	}

	void setAy(std::string c) {
		y = c;
	}


	class B {
	public:
		B() {};
		~B() {}
		B(double a) {
			u = a;
		}
		double getU() const {
			return u;
		}
		void abc() {

		}
		void setU(double value) {
			u = value;
		}
	private:
		double u;
	};

protected:
	int z;
	float x;
	std::string y;
};

class C : public A {
public:
	C() {};
	int getC() const{
		return z;
	}
	void setC(int value) {
		z = value;
	}
	void Print() {
		std::cout << z << std::endl;
	}
	~C() {};
private:
};

void manufactured(int a, int b) {
	std::cout << a + b << std::endl;
}

void manufactured (double a, int b) {
	std::cout << a * b << std::endl;
}

void manufactured(std::string a, std::string b) {
	std::cout << a + b << std::endl;
}

int main(){
	A bb (3, 3.1, "asd");
	bb.setAz(10);
	bb.Print();
	std::cout << bb.getAx() << std::endl;
	
	A cc(78.51, "ROBOT");
	std::cout << cc.getAy() << std::endl;
	cc.setAy("version #4");
	std::cout << cc.getAy() << std::endl;

	A::B qq(125.489);
	std::cout << qq.getU() << std::endl;
	qq.setU(93.12);
	std::cout << qq.getU() << std::endl;
	std::cout << std::endl;

	manufactured(2, 4);
	manufactured(4.2, 4);
	manufactured("Hello ", "World!");

	A* dark = new A;
	dark->setAz(4);
	dark->Print();

	A::B* white = new A::B;

	C qwe;
	qwe.setC(111);
	qwe.Print();
}
