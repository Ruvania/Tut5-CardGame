#include<iosteam>

using namespace std;

class Card
{
private:

public:
	Card(int numb, string colr);
	string colour();
	int number();
	void print();
};

Card::Card(int numb, string colr) //Class card created
{
	if (numb <= 0 && numb >= 10) //Checks if number is between 0 and 10
	{
		number = numb;
	}
	else
	{
		cout << "Invalid number" << endl;
	}

	colour = colr;
};

string Card::colour() //returns the colour of the card
{
	return colour
};

int Card::number() //returns the number of the card
{

	return number;
};

void Card::print() //prints the colour and number of the card
{
	cout << colour <<" "<< number << endl;
};

int main()
{
	Card CardObject;

	CardObject.Card();
}