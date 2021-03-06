#ifndef WINE_H
#define WINE_H

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

class Wine
{
public: 
/**
 * the defualt constructor that set price to 0
 */
   Wine();
/**
 * the consturctor that set the name of the class to parameter name,
 * set the vintage of the class to parameter vintage,
 * set the score of the class to parameter score,
 * set the price of the class to parameter price,
 * set the type of the class to parameter type.
 * param: name, vintage, score, price, type
 */
   Wine(string n, int v, int s, double p, string t);
/**
 * the member function that set the name of the class to parameter name,
 * set the vintage of the class to parameter vintage,
 * set the score of the class to parameter score,
 * set the price of the class to parameter price,
 * set the type of the class to parameter type.
 * param: name, vintage, score, price, type
 */
   void setInfo(string n, int v, int s, double p, string t);
/**
 * the member function that set the price of this class to parameter price
 * param: price
 */
   void setPrice(double price); 
/**
 * the member function that return name
 * return: name
 */ 
   string getName() const;
/**
 * the member function that return price
 * return: price
 */
   int getPrice() const;
/**
 * the member function that cout name, price, score, year and vintage in correct format
 */
   void printInfo();   
   
private:
   string name;
   int vintage;
   int score;
   double price;
   string type;
};

#endif
