#include <iostream>
#include <math.h>
using namespace std;

struct Point
{
	int x, y;             //creat struct Point
};

double length(Point A, Point B)    //function to calculate length
{
	return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

class Triagle
{
private:
	Point A, B, C;
public:
	void input()          //input 3 points
	{
		do
		{
			cout << "Input 3 points of triagle: ";
			cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
			if (((A.x < -1000) || (A.x > 1000)) || ((B.x < -1000) || (B.x > 1000)) || ((C.x < -1000) || (C.x > 1000))
				|| ((A.y < -1000) || (A.y > 1000)) || ((B.y < -1000) || (B.y > 1000)) || ((C.y < -1000) || (C.y > 1000)))
				cout << "Please input again!!" << endl;
		} while (((A.x < -1000) || (A.x > 1000)) || ((B.x < -1000) || (B.x > 1000)) || ((C.x < -1000) || (C.x > 1000))
			|| ((A.y < -1000) || (A.y > 1000)) || ((B.y < -1000) || (B.y > 1000)) || ((C.y < -1000) || (C.y > 1000)));
		
	}
	void typeOfTriagle()        //check the type of triagle
	{
		double AB = length(A, B);
		double AC = length(A, C);
		double BC = length(B, C);
		
		if ((AB + AC > BC) && (AB + BC > AC) && (BC + AC >= AB))
		{
			if ((AB == AC) && (AB == BC))
				cout << "Equilateral";
			else if ((int((AB * AB + AC * AC - BC * BC)) == 0) || (int((BC * BC + AC * AC - AB * AB)) == 0) || (int((AB * AB + BC * BC - AC * AC)) == 0))
				if (((AB == AC) || (AC == BC) || (AB == BC)))
					cout << "Right - Insosceles";
				else
					cout << "Right";
			else if ((AB == AC) || (AC == BC) || (AB == BC))
				cout << "Insosceles";
			else
				cout << "Normal";
		}
		else
			cout << "Not a triagle";	
	}
};

int main()
{
	Triagle Pic;
	Pic.input();
	Pic.typeOfTriagle();
	return 0;
}