
//Class Fan
/*#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class FAN
{
	static const int SLOW=1, MEDIUM=2, FAST=3;
private:
	int speed;
	bool on;
	double radius;
	string color;
public:
	FAN()
	{
		speed = SLOW;
		on = false;
		radius = 5;
		color = "blue";
	}

	FAN(int s, bool o, double r, string c)
	{
		speed = s;
		on = o;
		radius = r;
		color = c;
	}

	void setspeed(int s)
	{
		speed = s;
	}

	int getspeed(void)
	{
		return speed;
	}

	void seton(bool o)
	{
		on = o;
	}

	bool geton(void)
	{
		return on;
	}

	void setradius(double r)
	{
		radius = r;
	}

	double getradius(void)
	{
		return radius;
	}

	void setcolor(string c)
	{
		color = c;
	}

	string getcolor(void)
	{
		return color;
	}

	void ShowData()
	{
		if(on == true)
		{
			cout << "\n--------------------------------";
			cout << "\nFan is on\nSpeed of Fan is ";
			if(getspeed() == SLOW)
				cout << "SLOW";
			else if(getspeed() == MEDIUM)
				cout << "MEDIUM";
			else
				cout << "FAST";
			cout << "\ncolor is "<<getcolor() << "\nAnd radius is " << getradius() << endl;
			cout << "--------------------------------\n";
		}
		else
		{
			cout << "\n--------------------------------";
			cout << "\nFan is off\ncolor of Fan is " << getcolor() << "\nAnd radius is " << getradius() << endl;
			cout << "--------------------------------\n";
		}
	}
};

void main(void)
{
	FAN F1;
	F1.ShowData();

	FAN F2(2, true, 7.2, "Yellow");
	F2.ShowData();

	int s; bool o; double r; string c;

	FAN F3;
	cout << "\nWrite description for the fan:\n";
	cout << "Enter Status of Fan: (1/0)..  ";
	cin >> o;
	if(o == 1)
	{
		cout << "Enter Speed of a Fan: ";
		cin >> s;
	}
	cout << "Enter radius of Fan: ";
	cin >> r;
	cout << "Enter Color of Fan: ";
	cin >> c;
	F3.setspeed(s);
	F3.seton(o);
	F3.setradius(r);
	F3.setcolor(c);
	F3.ShowData();

	FAN F4;
	cout << "\nWrite description for the fan:\n";
	cout << "Enter Status of Fan: (1/0)..  ";
	cin >> o;
	if(o == 1)
	{
		cout << "Enter Speed of a Fan: ";
		cin >> s;
	}
	cout<<"Enter radius of Fan: ";
	cin >> r;
	cout << "Enter Color of Fan: ";
	cin >> c;
	F4.setspeed(s);
	F4.seton(o);
	F4.setradius(r);
	F4.setcolor(c);
	F4.ShowData();

	getch();
}*/