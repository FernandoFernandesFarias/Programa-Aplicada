#include <iostream>

using namespace std;

class Point {
  public:
    int x, y;
    Point(int a, int b);
    void getPoint();
    Point operator+ (Point p);
};

Point Point::operator+ (Point p) {
  x = x + p.x;
  y = y + p.y;

  return Point(x, y);
}

Point::Point(int a, int b) {
  x = a;
  y = b;
}

void Point::getPoint() {
  cout << x << "," <<  y << endl;
}

int main() {
  int x1, x2, y1, y2;

  cout << "Digite o x1: ";
  cin >> x1;
  cout << "Digite o y1: ";
  cin >> y1;

  cout << "Digite o x2: ";
  cin >> x2;
  cout << "Digite o y2: ";
  cin >> y2;


  Point p1(x1, y1), p2(x2, y2);
  Point p3 = p1 + p2;

  p3.getPoint();

  return 0;
}