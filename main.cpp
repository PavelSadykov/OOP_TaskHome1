//
//  main.cpp
//  ДЗ1 ООП
//
//  Created by Павел on 21.12.2022.
//

#include <iostream>
#include "TelefonBook.hpp"
#include <string>
#include <cstdlib>
#include <fstream>

int main(int argc, const char * argv[]) {
  
    TelefonBook Page1("John","Brown","+3579929922","+3579933445","+3579935503",25,06,1990,"ALGAR OVERSEAS LTD","CEO");
    TelefonBook Page2("Bill","Allen","+357992876","+357993349","+357993556",20,03,1998,"West Oil Co LTD","Deputy Director");
    TelefonBook Page3("Victor","Ivanov","+3579945435","+357998658","+3579909856",11,01,1987,"IT Academy" ,"Proffesor");
    TelefonBook Page4("","","","","",0,0,0,"","");
    TelefonBook Page5("","","","","",0,0,0,"","");
    
    const int row=5;
    TelefonBook arr[]{Page1,Page2,Page3,Page4,Page5};
   
    
    std::cout << "TELEFONE BOOK "<<std::endl;
    std::string tmpName,tmpSurname, tmpNum1, tmpNum2,tmpNum3,tmpWork, tmpPos;
    int tmp1,tmp2,tmp3;
    
    std::string file = "info.txt";
    int x,y,j,i,k=0;
    
    do {
    std:: cout<<"\nВведите номер команды: \n1 - показать  всех абонентов;\n2 - найти  абонента в телефонной книге; \n3 - сохранить данные  в файл; \n4 - добавить нового абонента; \n5 - очистить данные; \n6 - ЗАВЕРШЕНИЕ РАБОТЫ  \n---> ";
    std::cin>>x;
    switch (x) {
        case 1:
        {
            for( i=0; i < row; i++){
            std::cout << "Person Name: " << arr[i].getName() << std::endl;
            std::cout << "Person Surname: " << arr[i].getSurname() << std::endl;
            std::cout << "Home Num: " << arr[i].getTelNum1() << std::endl;
            std::cout << "Work Num: " << arr[i].getTelNum2() << std::endl;
            std::cout << "Mob Num: " << arr[i].getTelNum3() << std::endl;
            std::cout << "Birthday: " << arr[i].getDate1() << std::endl;
            std::cout << "Month of birth: " << arr[i].getDate2() << std::endl;
            std::cout << "Year of birth: " << arr[i].getDate3() << std::endl;
            std::cout << "Place of work: " << arr[i].getWork()<< std::endl;
            std::cout << "Position : "<< arr[i].getPosition()<< std::endl;
            std::cout<<"=========="<<std::endl;
                std::cout<<std::endl;
                
            }
            std::cout<<std::endl;
            break;
        }
        case 2:
        {
            j=-1;
            std::cout<<"Введите имя  абонента --> "<<std::endl;
            std::cin>>tmpName;
            std::cout<<"Введите фамилию  абонента --> "<<std::endl;
            std::cin>>tmpSurname;
            for(i=0; i < row; i++){
               if(tmpName == arr[i].getName() and tmpSurname == arr[i].getSurname())
                   j=i;
            }
            if(j!=-1){
            std::cout << "Результат поиска  : "<<std::endl;
            std::cout << "Person Name: " << arr[j].getName() << std::endl;
            std::cout << "Person Surname: " << arr[j].getSurname() << std::endl;
            std::cout << "Home Num: " << arr[j].getTelNum1() << std::endl;
            std::cout << "Work Num: " << arr[j].getTelNum2() << std::endl;
            std::cout << "Mob Num: " << arr[j].getTelNum3() << std::endl;
            std::cout << "Birthday: " << arr[j].getDate1() << std::endl;
            std::cout << "Month of birth: " << arr[j].getDate2() << std::endl;
            std::cout << "Year of birth: " << arr[j].getDate3() << std::endl;
            std::cout << "Place of work: " << arr[j].getWork()<< std::endl;
            std::cout << "Position : "<< arr[j].getPosition()<< std::endl;
            std::cout<<"=========="<<std::endl;
            std::cout<<std::endl;
            }else
                std:: cout<<"Нет такого абонента \n";
            
            break;
        }
        case 3:
        {
            std::ofstream fs;
            fs.open(file, std::ios::out);
            if(!fs.is_open()){
                std::cout<<"Файл не удалось открыть";
            }else
            {
                std::cout<<"Файл info.txt открыт\n";
            }
            for(i=0; i < row; i++){
             fs << arr[i].getName() << std::endl;
             fs << arr[i].getSurname() << std::endl;
             fs << arr[i].getTelNum1() << std::endl;
             fs << arr[i].getTelNum2() << std::endl;
             fs << arr[i].getTelNum3() << std::endl;
             fs << arr[i].getDate1() << std::endl;
             fs << arr[i].getDate2() << std::endl;
             fs << arr[i].getDate3() << std::endl;
             fs << arr[i].getWork()<< std::endl;
             fs << arr[i].getPosition()<< std::endl;
             fs <<"  ";
            }
            fs.close();
            std::cout<<"Данные записаны в файл\n\n";
            break;
        }
        case 4:
        {
             j=-1;
            for(i=0; i < row; i++){
            if(arr[i].getName().empty() and arr[i].getSurname().empty())
            j=i;
            }
           if(j!=-1){
            k = j;
        std::cout<<"ВВедите информацию о новом абоненте \n";
        std::cout<<"ВВедите имя , фамилию --> \n";
            std::cin>>tmpName;
            std::cin>>tmpSurname;
            arr[k].setName(tmpName,tmpSurname);
        std::cout<<"ВВедите номера телефонов : дом, раб, моб --> \n";
            std::cin>>tmpNum1;
            std::cin>>tmpNum2;
            std::cin>>tmpNum3;
            arr[k].setTelNum(tmpNum1, tmpNum2, tmpNum3);
        std::cout<<"ВВедите день, месяц и год рождения --> \n";
            std::cin>>tmp1;
            std::cin>>tmp2;
            std::cin>>tmp3;
            arr[k].setDate(tmp1, tmp2, tmp3);
        std::cout<<"ВВедите место работы и должность --> \n";
            std::cin>>tmpWork;
            std::cin>>tmpPos;
            arr[k].setWork(tmpWork, tmpPos);
            }else
            
                std:: cout<<"Телефонная книга заполнена , новая запись не возможна";
            std::cout<<std::endl;

            break;
        }
        case 5:
        {
            for(k = 0; k < 5; k++){
            arr[k].setName("","");
            arr[k].setTelNum("", "", "");
            arr[k].setDate(0, 0, 0);
            arr[k].setWork("", "");
            }
            std::cout<<std::endl;
        
           break;
        }
        case 6:
        {
            std::cout<<"Работа завершена ";
            exit(0);
            break;
            
        }
            
        default:
            break;
    
    }}
    while(y!=5 );
    
        
        return 0;
    }
