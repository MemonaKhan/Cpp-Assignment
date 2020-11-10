

//Airplane reservation system...
#include<windows.h>
#include<iostream>
#include<conio.h>
using namespace std;

const int r=12, c=7; int i, j;
int tempf=0, tempb=0, tempe=0;

double firstClass(int airplane[r][c], int seats, double price)
{
	if((seats+tempf) <= 14)
	{
		for(i=0; i<2; i++)
		{
			for(j=0; j<seats+tempf; j++)
			{
				if(i == 0)
				{
					airplane[i][j]=1;
				}
			}
		}

		cout << "Congratulaions! You have got your booking in First Class\n\n";
		tempf = tempf+seats;
		return (seats*price);
	}
	else
	{
		return (-1);
	}
}

double businessClass(int airplane[r][c], int seats, double price)
{
	if((seats+tempb) <= 35)
	{
		for(i=2; i<7; i++)
		{
			for(j=0; j<seats+tempb; j++)
			{
				if(i == 2)
				{
					airplane[i][j]=1;
				}
			}
		}

		cout << "Congratulaions! You have got your booking in Business Class\n\n";
		tempb = tempb+seats;
		return (seats*price);
	}
	else
	{
		return (-1);
	}
}

double economyClass(int airplane[r][c], int seats, double price)
{
	if((seats+tempe) <= 35)
	{
		for(i=7; i<12; i++)
		{
			for(j=0; j<seats+tempe; j++)
			{
				if(i == 7)
				{
					airplane[i][j]=1;
				}
			}
		}
		cout << "Congratulaions! You have got your booking in Economy Class\n\n";
		tempe = tempe+seats;
		return (seats*price);
	}
	else
	{
		return (-1);
	}
}

void displaySeats(int airplane[r][c])
{
	cout << "Airplane sating plane is given below\n";
	cout << "-----------------------------------------------------"<<endl;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout << airplane[i][j]<<"\t";
		}
		cout <<endl;
	}
	cout << "-----------------------------------------------------"<<endl;
}

void knowFare(double ff, double bf, double ef)
{
	cout << "\nFirst class seat price is "<<ff<<endl;
	cout << "Bussiness class seat price is "<<bf<<endl;
	cout << "Economy class seat price is "<<ef<<endl<<endl;
}

void resetSystem(int airplane[r][c])
{
	for(i=0; i<12; i++)
	{
		for(j=0; j<7; j++)
		{
			airplane[i][j]=0;
		}
	}
	
	tempf=0; tempb=0; tempe=0;
}

void main(void)
{
	int airplane[12][7]={0};
	int seats, choice;
	double priceff=105000, pricebf=68000, priceef=35000;
	system("color f0");

	cout << "-----------------------------------------------------"<<endl;
	cout << "Welcome To Air Plane Reservation System"<<endl;
	cout << "-----------------------------------------------------"<<endl<<endl;
	do
	{
			Sleep(5500);
		cout << "1. Book First Class Seats"<<endl;
		cout << "2. Book Business Class Seats"<<endl;
		cout << "3. Book Economy Class Seats"<<endl;
		cout << "4. View Air Plane Seating Assignment"<<endl;
		cout << "5. Know Fair"<<endl;
		cout << "6. System Reset"<<endl;
		cout << "7. Exit From The Booking System"<<endl<<endl;
		cout << "Enter Your Choice"<<endl;
		cin >> choice;
		cout << endl;
		switch (choice)
		{

		case 1:
			{
				cout << "Enter how many seats you want for Booking in First Class\n";
				cin >> seats;
				cout << endl;
				double price = firstClass(airplane, seats, priceff);
				if(price != -1)
				{
					cout << "Total fare of your booking is "<<price<<endl<<endl;
					displaySeats(airplane);
				}
				else
				{
					cout << "We don't have enough seats, left to process your request\n\n";
				}
				break;
			}

		case 2:
			{
				cout<< "Enter how many seats you want for Booking in Business Class?\n";
				cin >> seats;
				cout << endl;
				double price = businessClass(airplane, seats, pricebf);
				if(price != -1)
				{
					cout << "Total fare of your booking is "<<price<<endl<<endl;
					displaySeats(airplane);
				}
				else
				{
					cout << "We don't have enough seats, left to process your request\n\n";
				}
				break;
			}

		case 3:
			{
				cout<<"Enter how many seats you want for Booking in Economy Class\n";
				cin>>seats;
				cout<<endl;
				double price = economyClass(airplane, seats, priceef);
				if(price != -1)
				{
					cout << "Total fare of your booking is "<<price<<endl<<endl;
					displaySeats(airplane);
				}
				else
				{
					cout << "We don't have enough seats, left to process your request\n\n";
				}
				break;
			}

		case 4:
			{
				displaySeats(airplane);
				break;
			}

		case 5:
			{
				knowFare(priceff, pricebf, priceef);
				break;
			}

		case 6:
			{
				char ans;
				cout << "Do you really want to reset the system?\n";
				cout << "It will make all the seats available... (y/n)\n";
				cin >> ans;

				if(ans == 'y'||ans == 'Y')
				{
					resetSystem(airplane);
					displaySeats(airplane);
					break;
				}
				else
				{
					break;
				}
			}

		case 7:
			{
				exit(0);
			}

		default:
			{
				cout << "Sorry! Invalid Choice. Try Again...\n\n";
				break;
			}
		}
	}
	while(choice!=7);
	getch();
}