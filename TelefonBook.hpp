//
//  TelefonBook.hpp
//  ДЗ1 ООП
//
//  Created by Павел on 21.12.2022.
//

#ifndef TelefonBook_hpp
#define TelefonBook_hpp

#include <stdio.h>
#include <string>
#include <iostream>



class TelefonBook{


public:
    
    TelefonBook (std::string  newName, std::string  newSurname, std::string  newHomeNum, std::string newWorkNum,std::string newMobNum,int new_day,int new_month,int new_year,std::string newPlaceOfWork,std::string newPosition);
   
    const std::string getName()const;
    const std::string getSurname()const;
    const int  getDate()const;
    const int  getDate1() const;
    const int  getDate2() const;
    const int  getDate3() const;
    std::string getWork();
    std::string getPosition();
    std::string getTelNum1();
    std::string getTelNum2();
    std::string getTelNum3();
    void setDate(int  new_day, int  new_month, int  new_year);
    void setName(std::string newName, std::string newSurname);
    void setWork(std::string newPlaseOfWork, std::string newPosition);
    void setTelNum (std::string newHomeNum,std::string newWorkNum, std::string newMobNum);
    
    
private:
   
    std::string Name;
    std::string Surname;
    std::string HomeNum;
    std::string WorkNum;
    std::string MobNum;
    int day;
    int month;
    int year;
    std::string PlaceOfWork;
    std::string Position;
};




#endif /* TelefonBook_hpp */
