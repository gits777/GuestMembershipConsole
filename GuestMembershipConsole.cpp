// GuestMembershipConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <istream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

std::string agencies[9] = {"BALD HEAD ISLAND SERVICES","BARBARA ADAMS/HOMES ON BHI","BHI RENTALS/ROD HYSON","BHI VACATIONS","EDIE SURRATT","INTRACOASTAL VACATION RENTALS","ITRIP NC BEACHES","VRBO & OTHERS","Wendy Wilmot Properties (WWP)"};

enum upperMenu
{
    importing = 0,
    process = 1,
    exporting = 2,
    properties = 3,
    quit = 19
};
enum status
{
    pending = 0,
    wait = 1,
    approved = 2,
    emailPending = 3,
    awaitingPayment = 4,
    complete = 5,
    active = 6,
    inactive = 7,
    canceled = 8
};
class member
{
private:
    int memberNumber;
    int familyNumber;
    int price;
    int bedrooms;
    int propertyID;
    int memberStatus;
    std::string name;
    std::string phone;
    std::string email;
    int dateFrom;
    int dateTo;
    std::string agency;
    std::string property;
    std::vector<std::string> familyNames;

public:
    int getMemberNumber();
    int getFamilyNumber();
    int getPrice();
    int getBedrooms();
    int getFamilyNameSize();
    int getpropertyID();
    int getStatus();
    std::string getName();
    std::string getPhone();
    std::string getEmail();
    int getDatefrom();
    int getDateTo();
    std::string getAgency();
    std::string getProperty();
    std::string getFamilyName(int a);
    void setName(std::string a);
    void setPhone(std::string a);
    void setEmail(std::string a);
    void setDateFrom(int a);
    void setDateTo(int a);
    void setAgency(std::string a);
    void setProperty(std::string a);
    void addFamilyName(std::string a);
    void setMemberNumber(int a);
    void setFamilyNumber(int a);
    void setPrice(int a);
    void setBedrooms(int a);
    void setStatus(int a);
    void setPropertyID(int a);
};

int member::getMemberNumber()
{
    return memberNumber;
}

int member::getFamilyNumber()
{
    return familyNumber;
}

int member::getPrice()
{
    return price;
}

int member::getBedrooms()
{
    return bedrooms;
}

int member::getFamilyNameSize()
{
    return familyNames.size();
}

int member::getpropertyID()
{
    return propertyID;
}

int member::getStatus()
{
    return memberStatus;
}

std::string member::getName()
{
    return name;
}

std::string member::getPhone()
{
    return phone;
}

std::string member::getEmail()
{
    return email;
}

int member::getDatefrom()
{
    return dateFrom;
}

int member::getDateTo()
{
    return dateTo;
}

std::string member::getAgency()
{
    return agency;
}

std::string member::getProperty()
{
    return property;
}

std::string member::getFamilyName(int a)
{
    return familyNames[a];
}

void member::setName(std::string a)
{
    name = a;
}

void member::setPhone(std::string a)
{
    phone = a;
}

void member::setEmail(std::string a)
{
    email = a;
}

void member::setDateFrom(int a)
{
    dateFrom = a;
}

void member::setDateTo(int a)
{
    dateTo = a;
}

void member::setAgency(std::string a)
{
    agency = a;
}

void member::setProperty(std::string a)
{
    property = a;
}

void member::addFamilyName(std::string a)
{
    familyNames.push_back(a);
}

void member::setMemberNumber(int a)
{
    memberNumber = a;
}

void member::setFamilyNumber(int a)
{
    familyNumber = a;
}

void member::setPrice(int a)
{
    price = a;
}

void member::setBedrooms(int a)
{
    bedrooms = a;
}

void member::setStatus(int a)
{
    memberStatus = a;
}

void member::setPropertyID(int a)
{
    propertyID = a;
}

class property
{
private:
    std::string memberNumber = "";
    int timesRented = 0;
    int bedrooms = 0;
    int guests = 0;
    int id = 0;
    int price = 0;
    int paid = 0;
    bool hasPaid = false;
    bool rentalProgram = false;
    bool isUnlimited = false;
    std::string propertyName = "";
    int agency = 0;
    std::string address = "";
public:
    std::string getMemberNumber();
    int getTimesRented();
    int getBedrooms();
    int getID();
    int getPrice();
    int getPaid();
    int getOwed();
    int getGuests();
    bool getHasPaid();
    bool getRentalProgram();
    bool getIsUnlimited();
    std::string getPropertyName();
    int getAgency();
    std::string getAddress();
    void setMemberNumber(std::string a);
    void setTimesRented(int a);
    void addTimesRented();
    void setBedrooms(int a);
    void setID(int a);
    void setPrice(int a);
    void setPaid(int a);
    void addPaid(int a);
    void setGuests(int a);
    void setHasPaid(bool a);
    void setRentalProgram(bool a);
    void setIsUnlimited(bool a);
    void setPropertyName(std::string a);
    void setAgency(int a);
    void setAddress(std::string a);
};

std::string property::getMemberNumber()
{
    return memberNumber;
}

int property::getTimesRented()
{
    return timesRented;
}

int property::getBedrooms()
{
    return bedrooms;
}

int property::getID()
{
    return id;
}

int property::getPrice()
{
    return price;
}

int property::getPaid()
{
    return paid;
}

int property::getOwed()
{
    return (price - paid);
}
bool property::getHasPaid()
{
    return hasPaid;
}

bool property::getRentalProgram()
{
    return rentalProgram;
}

bool property::getIsUnlimited()
{
    return isUnlimited;
}

std::string property::getPropertyName()
{
    return propertyName;
}

int property::getAgency()
{
    return agency;
}

std::string property::getAddress()
{
    return address;
}

void property::setMemberNumber(std::string a)
{
    memberNumber = a;
}

void property::setTimesRented(int a)
{
    timesRented = a;
}

void property::addTimesRented()
{
    timesRented++;
}

void property::setBedrooms(int a)
{
    bedrooms = a;
}

void property::setID(int a)
{
    id = a;
}

void property::setPrice(int a)
{
    price = a;
}

void property::setPaid(int a)
{
    paid = a;
}

void property::addPaid(int a)
{
    paid += a;
}

void property::setHasPaid(bool a)
{
    hasPaid = a;
}

void property::setRentalProgram(bool a)
{
    rentalProgram = a;
}

void property::setIsUnlimited(bool a)
{
    isUnlimited = a;
}

void property::setPropertyName(std::string a)
{
    propertyName = a;
}

void property::setAgency(int a)
{
    agency = a;
}

void property::setAddress(std::string a)
{
    address = a;
}

int property::getGuests()
{
    return guests;
}

void property::setGuests(int a)
{
    guests = a;
}

void import()
{
    std::cout << "Import Menu\n";
   
}

void process()
{
    //cout 
    std::cout << "process";
    //read database 
}

void vexport()
{
    std::cout << "export";
}

void serialToDMY(int nSerialDate, int& nDay, int& nMonth, int& nYear)
{
    // Modified Julian to DMY calculation with an addition of 2415019
    int l = nSerialDate + 68569 + 2415019;
    int n = int((4 * l) / 146097);
    l = l - int((146097 * n + 3) / 4);
    int i = int((4000 * (l + 1)) / 1461001);
    l = l - int((1461 * i) / 4) + 31;
    int j = int((80 * l) / 2447);
    nDay = l - int((2447 * j) / 80);
    l = int(j / 11);
    nMonth = j + 2 - (12 * l);
    nYear = 100 * (n - 49) + i + l;
}

int DMYToSerial(std::string line)
{
    std::vector<std::string> row;
    std::string word = "";
    std::stringstream ss(line);
    while (std::getline(ss, word, '/'))
    {
            row.push_back(word);
    }
    int nMonth = stoi(row[0]);
    int nDay = stoi(row[1]);
    int nYear = stoi(row[2]);

    // DMY to Modified Julian calculated with an extra subtraction of 2415019.
    return int((1461 * (nYear + 4800 + int((nMonth - 14) / 12))) / 4) +
        int((367 * (nMonth - 2 - 12 * ((nMonth - 14) / 12))) / 12) -
        int((3 * (int((nYear + 4900 + int((nMonth - 14) / 12)) / 100))) / 4) +
        nDay - 2415019 - 32075;
}

std::string dayOfWeek(int month, int _day, int year) 
{
    //returns day of the week from mmddyyyy
    std::vector<int> days = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    std::vector<std::string> dates = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    int d = _day;
    for (int i = 0; i < month - 1; i++) d += days[i];
    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2) d++;
    for (int i = 1971; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) d += 366;
        else d += 365;
    }

    std::string result = dates[(d % 7 + 3) % 7];
    return result;
}

std::string getUserInput()
{
    std::cout << "\nPLEASE TYPE YOUR SELECTION: ";
    std::string input = "";
    std::cin >> input;
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

std::string getCaps()
{
    std::string input = "";
    std::cin >> input;
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

std::string printPropertiesMenu()
{
    std::cout << "\n\nPROPERTIES MENU";
    std::cout << "\n  ADD";
    std::cout << "\n  UPDATE";
    std::cout << "\n  VIEW";
    std::cout << "\n  BACK";
    std::cout << "\nPlease type your selection: ";
    std::string input;
    std::cin >> input;
    return input;

}

void invalidSelection()
{
    std::cout << "\n\n!! INVALID SELECTION !!\n";
}
bool validAgency(std::string a)
{
    
}

int getCap(int day)
{
    int good = 0;
    int capNum = 7777;
    std::fstream daycheck;
    std::stringstream xx;
    xx << day << ".cap";
    std::string dayName = xx.str();
    daycheck.open(dayName.c_str());
    if (daycheck.fail())
    {

    }
    else
    {
        std::string capCount = "";
        std::getline(daycheck, capCount);
        capNum = std::stoi(capCount);
    }
    daycheck.close();
    return capNum;
}

void updateCap(int day, int cap)
{
    std::fstream file3;
    std::stringstream xx;
    xx << day << ".cap";
    std::string filename = xx.str();
    file3.open(filename.c_str(), std::ios::in | std::ios::trunc);
    file3 << cap << std::endl;
    file3.flush();
    file3.close();
}

void importNewMembers()
{
    int guestNum = 0;
    int tempNum = 0;
    std::string buffer = "";
    //member import file 1
    std::fstream file;
    //used for getting last member number
    std::fstream file2;
    std::vector<member> importStack;
    member newMember;
    std::string line = "";
    std::string word = "";
    std::vector<std::string> row;
    //get last member number
    file2.open("membernums.num");
    std::getline(file2, buffer);
    tempNum = std::stoi(buffer);
    //close file for member Number
    file2.close();
    //dont forget to update and close after operation
    file.open("import.csv");
    //remove the header line.
    std::getline(file, line);
    while (std::getline(file, line))
    {
        tempNum++;
        row.clear();
        std::stringstream ss(line);
        while (std::getline(ss, word, ','))
        {
            //remove quotes
            word.erase(remove(word.begin(), word.end(), '"'), word.end());
            if (word == "" || word == "Title")
            {

            }
            else
            {
                row.push_back(word);
            }
        }
        //data order
        //first name, last name, phone, email, date from, date to, agency, bedrooms, property, guests names
        guestNum = row.size() - 9;

        //set value for next member number
        //create a file and update member number when ever it is taken.
        //place data into class
        newMember.setMemberNumber(tempNum);
        newMember.setPhone(row[2]);
        newMember.setEmail(row[3]);
        newMember.setDateFrom(DMYToSerial(row[4]));
        newMember.setDateTo(DMYToSerial(row[5]));
        newMember.setAgency(row[6]);
        newMember.setBedrooms(stoi(row[7]));
        newMember.setProperty(row[8]);
        newMember.setStatus(0);
        newMember.setPrice(0);
        newMember.setPropertyID(0);
        for(int x = 0; x <= guestNum; x++)
        {
            newMember.setFamilyNumber(x);
                if (x = 0)
                {
                    newMember.setName(row[0] + " " + row[1]);
                    //set main member number
                }
                else
                {
                    newMember.setName(row[8 + x]);
                    //set family numbers
                }
                importStack.push_back(newMember);
        }
    }
    //close import file
    file.close();

    //open database file and add members to it
    file.open("members.db", std::ios::in | std::ios::app);
    int head = 0;
    while (head < importStack.size())
    {
        file << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << importStack[head].getDatefrom() << "," << importStack[head].getDateTo() << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << std::endl;
        head++;
    }
    file.flush();
    file.close();

    file.open("membernums.num", std::ios::in | std::ios::trunc);
    file << tempNum;
    file.flush();
    file.close();

}

void addProperty()
{
    std::string input = "";
    property newProp;
    int newNum = 0;
    std::string conf = "";
    while (conf != "Y")
    {
        std::cout << "\n\nPLEASE ENTER PROPERTY NAME: ";
        input = getCaps();
        newProp.setPropertyName(input);
        std::cout << "\nPLEASE ENTER PROPERTY ADDRESS: ";
        input = getCaps();
        newProp.setAddress(input);
        std::cout << "\nPLEASE ENTER MEMBER NUMBER: ";
        input = getCaps();
        newProp.setMemberNumber(input);
        std::cout << "\nPLEASE ENTER NUMBER OF BEDROOMS: ";
        std::cin >> newNum;
        newProp.setBedrooms(newNum);
        std::cout << "\nPLEASE ENTER THE MAX NUMBER OF GUESTS ALLOWED TO STAY: ";
        std::cin >> newNum;
        newProp.setGuests(newNum);
        std::cout << "\nIS THIS ENROLLED IN THE RENTAL PROGRAM?";
        std::cout << "\nY or N? ";
        while (input != "Y" || input != "N")
        {
            std::cout << "\n";
            std::cin >> input;
        }
        if (input == "Y")
        {
            newProp.setRentalProgram(true);
        }
        if (input == "N")
        {
            newProp.setRentalProgram(false);
        }
        std::cout << "\nIS THIS PROPERTY UNLIMITED?\nY or N?\n";
        while (input != "Y" || input != "N")
        {
            std::cout << "\n";
            std::cin >> input;
        }
        if (input == "Y")
        {
            newProp.setIsUnlimited(true);
        }
        if (input == "N")
        {
            newProp.setIsUnlimited(false);
        }
        std::cout << "\nPLEASE SELECT A RENTAL AGENCY";
        while (newNum > 9 || newNum < 0)
        {
            for (int i = 0; i < 9;i++)
            {
                std::cout << "\n" << i << ": " << agencies[i];
            }
            std::cout << "\TYPE A NUMBER 0-9 FOR YOUR SELECTION: ";
            try
            {
                std::cin >> newNum;
            }
            catch (...)
            {
                std::cout << "\n!!NOT A VALID SELECTION!!\n";
            }
        }
        newProp.setAgency(newNum);
        
    }
}

void propertiesExport()
{
    
}

void 

void propertiesMenuAdd()
{
    std::cout << "\nPROPERTIES MENU ADD";
    std::cout << "\n    PROPERTY";
    //std::cout << "\n    AGENCY";
    std::cout << "\nPLEASE TYPE YOUR SELECTION: ";
    std::string input = getUserInput();
    int selection = 10;
}

void menuSelection()
{
    int selection = 0;
    switch (selection)
    {
        case 0:
            
            break;
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
            
    }
}



void processPendingAuto()
{
    int daysStay = 0;
    std::vector<int> weeks;
    std::string buffer = "";
    std::fstream file;
    std::vector<member> importStack;
    member newMember;
    std::string line = "";
    std::string word = "";
    std::vector<std::string> row;
    file.open("members.db");
    while (std::getline(file, line))
    {
        row.clear();
        std::stringstream ss(line);
        while (std::getline(ss, word, ','))
        {
                row.push_back(word);
        }
        
        //set member
        newMember.setMemberNumber(stoi(row[0]));
        newMember.setFamilyNumber(stoi(row[1]));
        newMember.setStatus(stoi(row[2]));
        newMember.setName(row[3]);
        newMember.setDateFrom(stoi(row[4]));
        newMember.setDateTo(stoi(row[5]));
        newMember.setPhone(row[6]);
        newMember.setEmail(row[7]);
        newMember.setAgency(row[8]);
        newMember.setProperty(row[9]);
        newMember.setBedrooms(stoi(row[10]));
        newMember.setPropertyID(stoi(row[11]));
        newMember.setPrice(stoi(row[12]));
        importStack.push_back(newMember);
    }
    file.close();
    //set price of head member
    int head = 0;
    int head2 = 0;
    int perPerson = 0;
    int famNum = 0;
    while (head < importStack.size())
    {
        if (importStack[head].getFamilyNumber() == 0 && importStack[head].getStatus() == 0)
        {
            daysStay = importStack[head].getDateTo() - importStack[head].getDatefrom();
            //count how many are in the family
            famNum = 0;
            while (head2 < importStack.size())
            {
                if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber())
                {
                    famNum++;
                }
                head++;
            }
            //check for multiple weeks and push to stack
            weeks.clear();
            weeks.push_back(importStack[head].getDatefrom());
            if (daysStay > 7)
            {
                int tempDays = daysStay;
                int lastDay = importStack[head].getDatefrom();
                while (tempDays > 7)
                {
                    lastDay = lastDay + 7;
                    weeks.push_back(lastDay);
                    tempDays = tempDays - 7;
                }
            }
            //determine rates
            head2 = 0;
            perPerson = 0;
            while (head2 < weeks.size())
            {
            //jan 1 to mar 24
            if (weeks[head2] >= 45292 && weeks[head2] <= 45375)
            {
                if (daysStay == 2)
                {
                    perPerson += 36;
                }
                else if (daysStay == 3)
                {
                    perPerson += 51;
                }
                else if (daysStay > 3)
                {
                    perPerson += 60;
                }
                else
                {
                    //place invalid selection
                }
            }
            //mar 25 - apr 7
            if (weeks[head2] >= 45376 && weeks[head2] <= 45389)
            {
                if (daysStay == 2)
                {
                    perPerson += 60;
                }
                else if (daysStay == 3)
                {
                    perPerson += 90;
                }
                else if (daysStay > 3)
                {
                    perPerson += 120;
                }
                else
                {
                    //place invalid selection
                }
            }
            //apr 8 - may 24
            if (weeks[head2] >= 45390 && weeks[head2] <= 45438)
            {
                if (daysStay == 2)
                {
                    perPerson += 60;
                }
                else if (daysStay == 3)
                {
                    perPerson += 75;
                }
                else if (daysStay > 3)
                {
                    perPerson += 90;
                }
                else
                {
                    //place invalid selection
                }
            }
            //may 27 - jun 7
            if (weeks[head2] >= 45439 && weeks[head2] <= 45450)
            {
                if (daysStay == 2)
                {
                    perPerson += 60;
                }
                else if (daysStay == 3)
                {
                    perPerson += 90;
                }
                else if (daysStay > 3)
                {
                    perPerson += 120;
                }
                else
                {
                    //place invalid selection
                }
                
            }
            //jun 8 - jun 28
            //1 rate 120
            if (weeks[head2] >= 45451 && weeks[head2] <= 45471)
            {
                perPerson += 120;
            }
            //jun 29 - jul 5
            //1 rate 195
            if (weeks[head2] >= 45472 && weeks[head2] <= 45478)
            {
                perPerson += 195;
            }
            //jul 6 - aug 9
            //1 rate 120
            if (weeks[head2] >= 45479 && weeks[head2] <= 45513)
            {
                perPerson += 120;
            }
            //aug 10 - sep 8
            //60,90,120
            if (weeks[head2] >= 45514 && weeks[head2] <= 45543)
            {
                if (daysStay == 2)
                {
                    perPerson += 60;
                }
                else if (daysStay == 3)
                {
                    perPerson += 90;
                }
                else if (daysStay > 3)
                {
                    perPerson += 120;
                }
                else
                {
                    //place invalid selection
                }
            }
            //sep 9 - oct 31
            //60,75,90
            if (weeks[head2] >= 45544 && weeks[head2] <= 45596)
            {
                if (daysStay == 2)
                {
                    perPerson += 60;
                }
                else if (daysStay == 3)
                {
                    perPerson += 75;
                }
                else if (daysStay > 3)
                {
                    perPerson += 90;
                }
                else
                {
                    //place invalid selection
                }
            }
            //nov 1 - dec 31
            //36, 51, 60
            if (weeks[head2] >= 45597 && weeks[head2] <= 45657)
            {
                if (daysStay == 2)
                {
                    perPerson += 60;
                }
                else if (daysStay == 3)
                {
                    perPerson += 90;
                }
                else if (daysStay > 3)
                {
                    perPerson += 120;
                }
                else
                {
                    //place invalid selection
                }
            }
            head2++;
            }
            //add perperson to member object
            importStack[head].setPrice(perPerson* famNum);
            //check if days capacity value
            int dayCheck = importStack[head].getDatefrom();
            int naMonth = 0;
            int naDay = 0;
            int naYear = 0;
            head2 = 0;
            int appstat = 0;
            //check if they go over caps
            while (dayCheck <= importStack[head].getDateTo())
            {
                serialToDMY(dayCheck, naDay, naMonth, naYear);
                if (dayOfWeek(naMonth, naDay, naYear) == "Tuesday" && appstat == 0)
                {
                    if (getCap(dayCheck) < 850)
                    {    
                    }
                    else
                    {
                        appstat = 1;
                        head2 = 0;
                    }
                }
                dayCheck++;
            }
            //set status
            head2 = 0;
            while (head2 < importStack.size())
            {
                if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber())
                {
                    if (appstat == 0)
                    {
                        importStack[head2].setStatus(2);
                    }
                    else
                    {
                        importStack[head2].setStatus(1);
                    }
                    
                }
                head2++;
            }
            //if approved update cap
            int curCap = 0;
            if (appstat == 0)
            {
                dayCheck = importStack[head].getDatefrom();
                while (dayCheck <= importStack[head].getDateTo())
                {
                    curCap = getCap(dayCheck);
                    updateCap(dayCheck, (curCap + famNum));
                    dayCheck++;
                }
            }
        }
        head++;
    }
}
//Generic menu system, tell how many options you have and pass whole string seperatted by commas
int menuSystem(int option, std::string x)
{
    //while loop
    std::string input = "";
    std::string word = "";
    int loopCount = 0;
    int selection = 0;
    bool match = false;
    while (match == false)
    {
        std::stringstream ss(x);
        int loopCount = 0;
        //print the title line
        std::getline(ss, word, ',');
        std::cout << "\n" << word;
        //break string x up using stringstream and print it out
        while (std::getline(ss, word, ','))
        {
            std::cout << "\n    " << word;
        }
        loopCount = 0;
        //get user input
        input = getUserInput();
        std::stringstream ss(x);
        //scrap the title line
        std::getline(ss, word, ',');
        //break string x up again using stringstream and check if input matches any
        while (std::getline(ss, word, ','))
        {
            
            if (input == word)
            {
                match = true;
                selection = loopCount;
            }
            loopCount++;
        }
        if (match == false)
        {
            invalidSelection();
        }
    }
    
    return selection;
}

void propertiesMenu()
{
    std::string input = printPropertiesMenu();
    int selection = 10;
    while (selection == 10)
    {
        if (input == "add" || input == "Add" || input == "ADD")
        {
            selection = 0;
        }
        if (input == "update" || input == "Update" || input == "UPDATE")
        {
            selection = 1;
        }
        if (input == "view" || input == "View" || input == "VIEW")
        {
            selection = 2;
        }
        if (input == "back" || input == "Back" || input == "BACK")
        {
            selection = 9;
        }
        switch (selection)
        {
        case 0:
                propertiesMenuAdd();
            break;
        case 1:

            break;
        case 2:

            break;
        case 9:
            break;
        case 10:
            invalidSelection();
            input = printPropertiesMenu();
            break;
        }
    }

}

void process()
{

}

void selections()
{
    std::string menuOptions = "MAIN MENU,IMPORT,PROCESS,EXPORT,PROPERTIES,QUIT";
    
    int selection = menuSystem(5,menuOptions);
    switch (selection)
    {
    case 0:
        import();
        break;
    case 1:
        process();
        break;
    case 2:
        vexport();
        break;

    case 3:
            propertiesMenu();
        break;
    case 4:
            exit(0);
        break;
    case 10:
        invalidSelection();
        break;
    }
}

int main()
{
    int loop = 1;
    //open up the list of properties into vector
    while (loop > 0)
    {
        selections();
    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
