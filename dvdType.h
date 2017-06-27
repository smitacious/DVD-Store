#ifndef H_dvdType
#define H_dvdType

#include <iostream>
#include <string>

using namespace std;

class dvdType
{
	friend ostream& operator<< (ostream&, const dvdType&);

public:
	void setDVDInfo(string title, string star1,
		string star2, string producer,
		string director, string productionCo,
		int setInStock);

	int getNoOfCopiesInStock() const;

	void checkOut();

	void checkIn();

	void printTitle() const;

	void printInfo() const;

	bool checkTitle(string title);

	void updateInStock(int num);

	void setCopiesInStock(int num);

	string getTitle() const;

	dvdType(string title = "", string star1 = "",
		string star2 = "", string producer = "",
		string director = "", string productionCo = "",
		int setInStock = 0);

	//overload the relational operators.
	bool operator==(const dvdType&) const;
	bool operator!=(const dvdType&) const;

private:
	string dvdTitle; //variable to store the name of the movie

	string movieStar1; //variable to store the name of the star

	string movieStar2; //variable to store the name of the star

	string movieProducer; //variable to store the name of the producer

	string movieDirector; //variable to store the name of the director

	string movieProductionCo; //variable to store the name of the production company

	int copiesInStock; //variable to store the number of copies in stock
};

#endif