// Final Project Milestone 1
//
// Version 1.0
// Date: Thursday, May 24th, 2018
// Author: Alan Vuong
// Seneca E-mail: avuong19@myseneca.ca
// Student Number: 149004178
// Description
//
//
//
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
/////////////////////////////////////////////////////////////////
#ifndef AMA_DATE_H
#define AMA_DATE_H

#include <iostream>

#define NO_ERROR 0
#define CIN_FAILED 1
#define YEAR_ERROR 2
#define MON_ERROR 3
#define DAY_ERROR 4

using namespace std;

namespace AMA {
  const int min_year = 2000;
  const int max_year = 2030;

  class Date {
    int year;
    int month;
    int day;
    int cmp;
    int errState;

    int mdays(int, int)const;
    void errCode(int);
  public:
    Date();
    Date(int, int, int);
    bool operator==(const Date& rhs) const;
    bool operator!=(const Date& rhs) const;
    bool operator<(const Date& rhs) const;
    bool operator>(const Date& rhs) const;
    bool operator<=(const Date& rhs) const;
    bool operator>=(const Date& rhs) const;
    int errCode() const;
    bool bad() const;
    std::istream& read(std::istream& istr);
    std::ostream& write(std::ostream& ostr) const;
  };
  ostream& operator<<(ostream&, const Date);
  istream& operator>>(istream&, Date&);
}
#endif