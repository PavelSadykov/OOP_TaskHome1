//
//  TelefonBook.cpp
//  ДЗ1 ООП
//
//  Created by Павел on 21.12.2022.
//

#include "TelefonBook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

TelefonBook::TelefonBook (std::string  newName, std::string  newSurname, std::string  newHomeNum, std::string newWorkNum,std::string newMobNum,int new_day,int new_month,int new_year,std::string newPlaceOfWork,std::string newPosition): day(new_day), month (new_month), year(new_year),  Name(newName), Surname(newSurname), PlaceOfWork(newPlaceOfWork),Position(newPosition),HomeNum(newHomeNum),WorkNum(newWorkNum),MobNum(newMobNum) {}

const std::string TelefonBook:: getName()const {
    return Name;
}
const std::string TelefonBook:: getSurname()const {
    return Surname;
}


const int TelefonBook:: getDate1() const{
    return day;
}
const int TelefonBook:: getDate2() const{
    return month;
}
const int TelefonBook:: getDate3() const{
    return year;
}

 std::string TelefonBook::getWork(){
     return PlaceOfWork;
}
std::string  TelefonBook:: getPosition(){
    return Position;
}

std::string TelefonBook:: getTelNum1(){
    return HomeNum;
}
std::string TelefonBook:: getTelNum2(){
    return WorkNum;
}
std::string TelefonBook:: getTelNum3(){
    return MobNum;
}


void TelefonBook:: setDate(int  new_day, int  new_month, int  new_year){
    day = new_day;
    month = new_month;
    year = new_year;
}
void TelefonBook:: setName(std::string newName, std::string newSurname){
    Name = newName;
    Surname = newSurname;
}
void TelefonBook::setWork(std::string newPlaceOfWork, std::string newPosition){
    PlaceOfWork = newPlaceOfWork;
    Position = newPosition;
}
void TelefonBook:: setTelNum (std::string newHomeNum,std::string newWorkNum, std::string newMobNum){
    HomeNum = newHomeNum;
    WorkNum = newWorkNum;
    MobNum  =  newMobNum;
}


