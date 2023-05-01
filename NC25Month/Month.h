#ifndef MONTH_H
#define MONTH_H

#include <iostream>
using namespace std;

class Month {
    private:
        string name;
        unsigned int number;
    public:
        string nameofmonths[12] = 
        {"January","Feburary","March","April","May","June","July"
        ,"August","September","October","November","December"};
        Month();
        Month(string mon, unsigned int calendar);
        friend ostream& operator<<(ostream& out, const Month& t);
        string getName() const;
        int getNumber() const;
        void setName(string mon);
        void setNumber(int val);
        void operator++(int);
        void operator--(int);
        void operator=(const Month&);
        friend bool operator==(Month a, Month b);
        friend ostream& operator<<(ostream& out, const Month& t);

};


#endif