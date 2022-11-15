#include <iostream>

using namespace std;

/*template <typename T, typename U>							Generalmente se realiza esto en el .h
U sum(const T a, const U b) {
	return a + b;
}

int main() {
	cout << sum<int,float>(1, 5.65) << endl;				Lo que hace Template es crear un tipo de dato que despues en el "main" será establecido. 
	cout << sum<double,float>(4.5, 6.7) << endl;
	//cout << sum<string>("hola ", "mundo") << endl;
	


	return 0;
}*/

template <typename T>
class Point {
	private:
		T x, y;
	public:
		Point(const T u, const T v): x(u), y(v){}
		T getX() { return x; }
		T getY() { return y; }

};

int main() {
	Point<float> fpoint(2.5, 3.5);
	cout << fpoint.getX() << ", " << fpoint.getY() << endl;
	return 0;

}
