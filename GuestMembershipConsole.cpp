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
#include <ctime>
#include <iomanip>

std::string agencies[9] = { "BALD HEAD ISLAND SERVICES","BARBARA ADAMS/HOMES ON BHI","BHI RENTALS/ROD HYSON","BHI VACATIONS","EDIE SURRATT","INTRACOASTAL VACATION RENTALS","ITRIP NC BEACHES","VRBO & OTHERS","Wendy Wilmot Properties (WWP)" };
std::string statuses[10] = { "pending", "wait", "Approved", "Email Ready", "Awaiting Payment", "Card Ready", "Active", "InActive", "Canceled", "Active Printed" };
int autoNum = 0;
int billingNum = 0;
int nsImportNum = 0;
int emailGenNum = 0;
int emailSentNum = 0;
int nsImportedNum = 0;

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
    int changed;
    int dateSub;
    std::string comment;

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
    int getChange();
    std::string getAgency();
    std::string getProperty();
    std::string getFamilyName(int a);
    std::string getComment();
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
    void setChange(int a);
    int getDateSub();
    void setDateSub(int a);
    void setComment(std::string a);
};

int member::getDateSub()
{
    return dateSub;
}

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

int member::getChange()
{
    return changed;
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

std::string member::getComment(std::string a)
{
    return comment;
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

void member::setChange(int a)
{
    changed = a;
}

void member::setDateSub(int a)
{
    dateSub = a;
}

void member::setComment(std::string a)
{
    comment = a;
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

void importDataBase(std::vector<member>& importStack)
{
    //Import MemberDatabase
    //added comment row15
    std::fstream file3;
    member newMember;
    std::string line = "";
    std::string word = "";
    std::vector<std::string> row;
    file3.open(".\\database\\members.db");
    while (std::getline(file3, line))
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
        newMember.setChange(stoi(row[13]));
        newMember.setDateSub(stoi(row[14]));
        newMember.setComment(row[15]);
        importStack.push_back(newMember);
    }
    file3.close();
}

void updateNumbers()
{
    //the goal of this is to update the global variables letting the system know how many are ready for said step
    //Import MemberDatabase
    std::fstream file;
    std::vector<member> importStack;
    importDataBase(importStack);

    int head = 0;
    while (head < static_cast<int>(importStack.size()))
    {
        if (importStack[head].getStatus() == 0)
        {
            autoNum++;
        }
        if (importStack[head].getChange() == 1 && importStack[head].getStatus() != 7 && importStack[head].getStatus() != 8)
        {
            nsImportNum++;
        }
        if ((importStack[head].getDatefrom() - 7) > currentDaySerial && importStack[head].getStatus == 6)
        {
            nsImportNum++;
        }
        if (importStack[head].getChange() == 0 && importStack[head].getStatus() == 3)
        {
            emailGenNum++;
        }
        if (importStack[head].getStatus() == 3 && importStack[head].getChange() == 3)
        {
            emailSentNum++;
        }
//
        if (importStack[head].getChange() == 0 && importStack[head].getStatus() == 4)
        {
            billingNum++;
        }
        if (importStack[head].getChange() == 2)
        {
            nsImportedNum++;
        }
        head++;
    }
}

void resetnums()
{
    autoNum = 0;
    nsImportedNum = 0;
    nsImportNum = 0;
    emailGenNum = 0;
    emailSentNum = 0;
    billingNum = 0;
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

std::string serialToString(int nSerialDate)
{
    std::string datex = "";
    int nDay = 0;
    int nMonth = 0;
    int nYear = 0;
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
    datex = std::to_string(nMonth) + "/" + std::to_string(nDay) + "/" +std::to_string(nYear);
    return datex;
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

int removeTime(std::string line)
{
    std::vector<std::string> row;
    std::string word = "";
    std::stringstream ss(line);

    std::getline(ss, word, '.');
    row.push_back(word);

    // DMY to Modified Julian calculated with an extra subtraction of 2415019.
    return stoi(row[0]);
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
    std::getline(std::cin, input);
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    std::cout << input;
    return input;
}

std::string getCaps()
{
    std::string input = "";
    std::cin >> input;
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

int convertStatus(int a)
{
    if (a > 9)
    {
        a = a - 10;
    }
    return a;
}

std::string callNSImport(member xMember)
{
    std::string output = "";
    std::string aname = "";
    std::string fname = "";
    std::string lname = "";
    std::string mtype = "";
    int nmonth = 0;
    int nday = 0;
    int nyear = 0;
    std::string indate = "";
    std::string outdate = "";
    std::string subdate = "";
    std::stringstream ss2(xMember.getName());
    ss2 >> fname >> lname;
    if (lname == "")
    {
        lname = "TBD";
    }
    if (xMember.getStatus() > 2)
    {
        mtype = "GM - ALL Amenities";
    }
    else
    {
        mtype = "Guest Form AR";
    }
    if (xMember.getStatus() < 10)
    {
        serialToDMY(xMember.getDatefrom(), nday, nmonth, nyear);
        indate = std::to_string(nmonth) + "/" + std::to_string(nday) + "/" + std::to_string(nyear);
        serialToDMY(xMember.getDateTo(), nday, nmonth, nyear);
        outdate = std::to_string(nmonth) + "/" + std::to_string(nday) + "/" + std::to_string(nyear);
        serialToDMY(xMember.getDateSub(), nday, nmonth, nyear);
        subdate = std::to_string(nmonth) + "/" + std::to_string(nday) + "/" + std::to_string(nyear);

        output = "Dummy,Dummy," + xMember.getName() + "," + fname + "," + lname + "," + "TM" + std::to_string(xMember.getMemberNumber()) + "G" + std::to_string(xMember.getFamilyNumber()) + "," + mtype + "," + statuses[convertStatus(xMember.getStatus())] + "," + xMember.getEmail() + "," + xMember.getPhone() + "," + indate + " - " + outdate + " (" + subdate + ")" + "," + "Do Not Send" + "," + "N/A" + "," + "28461" + "," + "BALD HEAD ISLAND" + "," + xMember.getProperty() + "," + "North Carolina" + "," + "United States" + "," + "Guest Membership Form" + "," + "Text Fields" + "," + "Membership" + "," + "Guest Member Fee" + "," + "String" + "," + std::to_string(xMember.getPrice()) + "," + "Guest Membership Form" + "," + "Text Fields" + "," + "Membership" + "," + "GM COMMENTS" + "," + "String" + "," + xMember.getComment();
    }
    else
    {
        output = "Dummy,Dummy," + xMember.getName() + "," + fname + "," + lname + "," + "T" + std::to_string(xMember.getMemberNumber()) + "M" + std::to_string(xMember.getFamilyNumber()) + "," + mtype + "," + statuses[convertStatus(xMember.getStatus())] + "," + xMember.getEmail() + "," + xMember.getPhone() + "," + indate + " - " + outdate + " (" + subdate + ")" + "," + "Do Not Send" + "," + "N/A" + "," + "28461" + "," + "BALD HEAD ISLAND" + "," + xMember.getProperty() + "," + "North Carolina" + "," + "United States" + "," + "Guest Membership Form" + "," + "Text Fields" + "," + "Membership" + "," + "Guest Member Fee" + "," + "String" + "," + std::to_string(xMember.getPrice()) + "," + "Guest Membership Form" + "," + "Text Fields" + "," + "Membership" + "," + "GM COMMENTS" + "," + "String" + "," + xMember.getComment();
    }
    return output;
}

void ExportDBCSV(std::vector<member> importStack)
{
    std::fstream filex;
    filex.open(".\\Report.csv", std::ios::out | std::ios::app);
    std::cout << "\nDATABASE SAVING...PLEASE WAIT\n";
    int head = 0;
    while (head < importStack.size())
    {
        filex << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << serialToString(importStack[head].getDatefrom()) << "," << serialToString(importStack[head].getDateTo()) << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << "," << importStack[head].getChange() << "," << importStack[head].getDateSub() << "," << importStack[head].getComment() << std::endl;
        head++;
    }
    filex.flush();
    filex.close();
    std::cout << "\n\nDATABASE SAVED!\n\n";
}

void callExportDB(std::vector<member> importStack, int mode)
{
    std::fstream filex;
    if (mode == 0)
    {
        filex.open(".\\database\\members.db", std::ios::out | std::ios::app);
    }
    if else(mode == 2)
    {
        filex.open(".\\Report.csv", std::ios::out | std::ios::app);
    }
    else
    {
        filex.open(".\\database\\members.db", std::ios::out | std::ios::trunc);
    }
    std::cout << "\nDATABASE SAVING...PLEASE WAIT\n";
    int head = 0;
    while (head < importStack.size())
    {
        filex << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << importStack[head].getDatefrom() << "," << importStack[head].getDateTo() << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << "," << importStack[head].getChange() << "," << importStack[head].getDateSub() << "," << importStack[head].getComment() << std::endl;
        head++;
    }
    filex.flush();
    filex.close();
    std::cout << "\n\nDATABASE SAVED!\n\n";
}

void getCurrentTime(int& nday, int& nmonth, int& nyear)
{
    time_t t = time(0);   // get time now
    struct tm now;
    localtime_s(&now, &t);
    nyear = (now.tm_year + 1900);
    nmonth = (now.tm_mon + 1);
    nday = now.tm_mday;
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

int validAgency(std::string a)
{
    return 1;
}

int getCap(int day)
{
    int good = 0;
    int capNum = 7777;
    std::fstream daycheck;
    std::stringstream xx;
    std::string capCount = "";
    xx << ".\\database\\" << day << ".cap";
    std::string dayName = xx.str();
    daycheck.open(dayName.std::string::c_str(), std::ios::in | std::ios::out | std::ios::app);
    std::getline(daycheck, capCount);
    try
    {
        if (std::stoi(capCount))
        {
            capNum = std::stoi(capCount);
        }
        else
        {
            throw 501;
        }
    }
    catch (...)
    {
        capNum = 0;
        daycheck << 0;
    }
    daycheck.close();
    return capNum;
}

void updateCap(int day, int cap)
{
    std::fstream file3;
    std::stringstream xx;
    xx << ".\\database\\" << day << ".cap";
    std::string filename = xx.str();
    file3.open(filename.c_str(), std::ios::out | std::ios::trunc);
    file3 << cap << std::endl;
    file3.flush();
    file3.close();
}

void importTeams()
{
    std::fstream file;
    std::vector<member> importStack;
    member newMember;
    std::string line = "";
    std::string word = "";
    std::string word2 = "";
    std::vector<std::string> row;
    file.open("teams.csv");
    int counterthing = 0;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        row.clear();
        std::stringstream ss(line);
        counterthing = 0;
        while (std::getline(ss, word, ','))
        {
            word.erase(remove(word.begin(), word.end(), '"'), word.end());
            word.erase(remove(word.begin(), word.end(), '$'), word.end());
            if (counterthing == 1)
            {
                word.erase(remove(word.begin(), word.end(), 'T'), word.end());
                word.erase(remove(word.begin(), word.end(), '\\'), word.end());
                std::stringstream vs(word);
                std::getline(vs, word2, 'M');
                std::getline(vs, word, ',');
                row.push_back(word2);
            }
            row.push_back(word);
            counterthing++;
        }

        //set member
        newMember.setMemberNumber(stoi(row[1]));
        newMember.setFamilyNumber(stoi(row[2]));
        if (row[3] == "Canceled")
        {
            newMember.setStatus(18);
        }
        else if (row[3] == "Paid")
        {
            newMember.setStatus(16);
        }
        else if (row[3] == "Email Sent")
        {
            newMember.setStatus(14);
        }
        else if (row[3] == "Card Printed")
        {
            newMember.setStatus(16);
        }
        else if (row[3] == "Awaiting Payment")
        {
            newMember.setStatus(14);
        }
        
        newMember.setName(row[0]);

        newMember.setDateFrom(stoi(row[6]));
        newMember.setDateTo(stoi(row[7]));
        newMember.setPhone(row[4]);
        newMember.setEmail(row[5]);
        newMember.setAgency(row[10]);
        newMember.setProperty(row[12]);
        newMember.setBedrooms(stoi(row[11]));
        newMember.setPropertyID(0);
        //std::cout << row[15];
        if (row[15] != "")
        {
            newMember.setPrice(stoi(row[15]));
        }
        newMember.setChange(0);
        importStack.push_back(newMember);
    }
    file.close();

    file.open(".\\database\\members.db");
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
        newMember.setChange(stoi(row[13]));
        importStack.push_back(newMember);
    }
    file.close();

    callExportDB(importStack,1);
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
    file2.open(".\\database\\membernums.num");
    std::getline(file2, buffer);
    try
    {
        if (std::stoi(buffer))
        {
            tempNum = std::stoi(buffer);
        }
        else
        {
            throw 505;
        }
    }
    catch (...)
    {
        tempNum = 0;
    }
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
        std::getline(ss, word, ',');
        std::getline(ss, word, ',');
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
        guestNum = row.size() - 10;

        //set value for next member number
        //create a file and update member number when ever it is taken.
        //place data into class
        newMember.setMemberNumber(tempNum);
        newMember.setDateSub(removeTime(row[0]));
        newMember.setPhone(row[3]);
        newMember.setEmail(row[4]);
        newMember.setDateFrom(stoi(row[5]));
        newMember.setDateTo(stoi(row[6]));
        newMember.setAgency(row[7]);
        newMember.setBedrooms(stoi(row[8]));
        newMember.setProperty(row[9]);
        newMember.setStatus(0);
        newMember.setPrice(0);
        newMember.setPropertyID(0);
        newMember.setChange(0);
        newMember.setComment("");
        for (int x = 0; x <= guestNum; x++)
        {
            newMember.setFamilyNumber(x);
            if (x == 0)
            {
                newMember.setName(row[1] + " " + row[2]);
                //set main member number
            }
            else
            {
                newMember.setName(row[9 + x]);
                //set family numbers
            }
            importStack.push_back(newMember);
        }
    }
    //close import file
    file.close();

    //open database file and add members to it
    callExportDB(importStack,0);

    file.open(".\\database\\membernums.num", std::ios::out | std::ios::trunc);
    file << tempNum;
    file.flush();
    file.close();

    std::remove("import.csv");
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
            for (int i = 0; i < 9; i++)
            {
                std::cout << "\n" << i << ": " << agencies[i];
            }
            std::cout << "\nTYPE A NUMBER 0-9 FOR YOUR SELECTION: ";
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

void propertiesMenuAdd()
{
    std::cout << "\nPROPERTIES MENU ADD";
    std::cout << "\n    PROPERTY";
    //std::cout << "\n    AGENCY";
    std::cout << "\nPLEASE TYPE YOUR SELECTION: ";
    std::string input = getUserInput();
    int selection = 10;
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
    importDataBase(importStack);
    //set price of head member
    int head = 0;
    int head2 = 0;
    int perPerson = 0;
    int famNum = 0;
    while (head < (importStack.size()))
    {
        //
        std::cout << "BEGIN PARSE\n";
        if (importStack[head].getFamilyNumber() == 0 && importStack[head].getStatus() == 0)
        {
            //
            std::cout << "HEAD MEMBER FOUND\n";
            daysStay = importStack[head].getDateTo() - importStack[head].getDatefrom();
            //count how many are in the family
            //add one to daystay to account for day arrived
            daysStay++;
            famNum = 0;
            head2 = 0;
            while (head2 < importStack.size())
            {
                if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber())
                {
                    famNum++;
                }
                head2++;
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
                //
                std::cout << "ENTER RATES\n";
                std::cout << weeks[head2] << "\n";
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
            //
            std::cout << (famNum) << "\n";
            importStack[head].setPrice(perPerson * famNum);
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
                    //
                    std::cout << "TUESDAY FOUND\n";
                    if (getCap(dayCheck) < 850)
                    {
                        //
                        std::cout << "APPROVED\n";
                    }
                    else
                    {
                        //
                        std::cout << "BOUNCED";
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
                    importStack[head2].setChange(1);

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
                    //
                    
                    curCap = getCap(dayCheck);
                    std::cout << "UPDATING CAP" << (curCap + famNum) << "\n";
                    updateCap(dayCheck, (curCap + famNum));
                    dayCheck++;
                }
                //add comment approval here
                std::cout << "\n" + importStack[head].getName() + "\n" + importStack[head].getProperty() + "\nPLEASE ENTER COMMENT";
                importStack[head].setComment(getUserInput());
            }
        }
        head++;
    }

    head = 0;
    int aday = 0;
    int amonth = 0;
    int ayear = 0;
   
    getCurrentTime(aday, amonth, ayear);
    std::string currentDateMDY = std::to_string(amonth) + "/" + std::to_string(aday) + "/" + std::to_string(ayear);
    int currentDaySerial = DMYToSerial(currentDateMDY);
    while (head < importStack.size())
    {

        if (importStack[head].getDateTo() < currentDaySerial)
        {
            importStack[head].setStatus(7);
            importStack[head].setChange(1);
        }
        head++;
    }
    //open database file and add members to it
    callExportDB(importStack,1);
}

void nsExport()
{
    //Import MemberDatabase
    std::fstream file;
    std::vector<member> importStack;
    importDataBase(importStack);
    int aday = 0;
    int amonth = 0;
    int ayear = 0;
   
    getCurrentTime(aday, amonth, ayear);
    std::string currentDateMDY = std::to_string(amonth) + "/" + std::to_string(aday) + "/" + std::to_string(ayear);
    int currentDaySerial = DMYToSerial(currentDateMDY);
    //Add all changed to file for export for Northstar and set to no change
    file.open("nsimport.csv", std::ios::out | std::ios::app);
    int head = 0;
    //file << "Header" << std::endl;
    while (head < importStack.size())
    {
        if (importStack[head].getDateTo() < currentDaySerial)
        {
            importStack[head].setStatus(7);
            importStack[head].setChange(1);
        }
        //Check If within a week of arrival
        if ((importStack[head].getDatefrom() - 7) > currentDaySerial && importStack[head].getStatus == 6)
        {
            importStack[head].setStatus(5);
            importStack[head].setChange(1);
        }
        if (importStack[head].getChange() == 1)
        {
            file << callNSImport(importStack[head]) << std::endl;
            importStack[head].setChange(2);
            if (importStack[head].getStatus() == 3)
            {
                importStack[head].setChange(3);
            }
        }
        head++;
    }
    file.flush();
    file.close();

    //open database file and add members to it
    callExportDB(importStack,1);
   // std::remove("import.csv");

}

void forcedExport()
{
    //Import MemberDatabase
    std::fstream file;
    std::vector<member> importStack;
    importDataBase(importStack);

    //Add all changed to file for export for Northstar and set to no change
    file.open("nsimport.csv", std::ios::out | std::ios::app);
    int head = 0;
    //file << "Header" << std::endl;
    while (head < importStack.size())
    {
        if (importStack[head].getChange() >= 0)
        {
            file << callNSImport(importStack[head]) << std::endl;
        }
        head++;
    }
    file.flush();
    file.close();
    std::cout << "\n!!WARNING!!\nPLEASE DELETE nsimport.csv AFTER IMPORTING INTO NORTHSTAR!!\n";
}

void approvedImport()
{
    //Import MemberDatabase
    std::vector<member> importStack;
    importDatabase(importStack);


//change statuses if imported
    int head = 0;
    while (head < importStack.size())
    {
        if (importStack[head].getStatus() == 2 && importStack[head].getChange() == 2 && importStack[head].getFamilyNumber() == 0)
        {
            importStack[head].setStatus(3);
            importStack[head].setChange(0);
        }
        if (importStack[head].getStatus() == 2 && importStack[head].getChange() == 2 && importStack[head].getFamilyNumber() != 0)
        {
            importStack[head].setStatus(2);
            importStack[head].setChange(0);
        }

        //change awaiting payment??
        //MAybe do this elsewhere
        if (importStack[head].getStatus() == 4 && importStack[head].getChange() == 2)
        {
            importStack[head].setChange(0);
        }
        if (importStack[head].getStatus() == 6 && importStack[head].getChange() == 2)
        {
            importStack[head].setChange(0);
        }
        if (importStack[head].getStatus() == 7 && importStack[head].getChange() == 2)
        {
            importStack[head].setChange(0);
        }
         head++;
    }

    //open database file and add members to it
    callExportDB(importStack,1);

    //delete the nsimport file after confirm
    std::remove("nsimport.csv");
}

void cardPrinted()
{
    std::vector<member> importStack;
    importDataBase(importStack);
    int head = 0;
    while (head < importStack.size())
    {
       if (importStack[head].getStatus() == 5 && importStack[head].getChange() == 2)
       {
           importStack[head].setStatus(9);
           importStack[head].setChange(1);
       }
        head++;
    }
    callExportDB(importStack,1);
}

void generateEmail()
{
    //Import MemberDatabase
    std::fstream file;
    std::vector<member> importStack;
    importDataBase(importStack);

    //Add all changed to file for email send
    file.open("email.csv", std::ios::out | std::ios::trunc);
    int head = 0;
    while (head < importStack.size())
    {
        if (importStack[head].getStatus() == 3 && importStack[head].getFamilyNumber() == 0 && importStack[head].getChange() == 0)
        {
            //file << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << importStack[head].getDatefrom() << "," << importStack[head].getDateTo() << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << "," << importStack[head].getChange() << "," << importStack[head].getDateSub() << std::endl;
            
        }
        if (importStack[head].getStatus() == 3 && importStack[head].getChange() == 0)
        {
            importStack[head].setChange(1);
        }
        head++;
    }
    file.flush();
    file.close();

    //open database file and add members to it
    callExportDB(importStack,1);
}

//change from email to awaiting payment
//was last emails sent
void emailSent()
{
    //Import MemberDatabase
    std::fstream file;
    std::vector<member> importStack;
    importDataBase(importStack);
    std::cout << "\n\nDatabase Closed\n\n";
    //open database file and add members to it
    int head = 0;
    int head2 = 0;
    while (head < importStack.size())
    {
        if (importStack[head].getStatus() == 3 && importStack[head].getChange() == 3)
        {
            importStack[head].setStatus(4);
            importStack[head].setChange(1);
            head2 = 0;
            while (head2 < importStack.size())
            {
                if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber())
                {
                    importStack[head].setStatus(4);
                    importStack[head].setChange(1);
                }
                head2++;
            }
        }
        //file << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << importStack[head].getDatefrom() << "," << importStack[head].getDateTo() << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << "," << importStack[head].getChange() << "," << importStack[head].getDateSub() << std::endl;
        head++;
    }

    callExportDB(importStack,1);
    std::remove("email.csv");
    std::remove("nsimport.csv");
}

//
void billing()
{
    //Import MemberDatabase
    std::fstream file;
    std::vector<member> importStack;
    importDataBase(importStack);
    std::cout << "\nLoaded File\n\n";
    int head = 0;
    while (head < importStack.size())
    {
        if (importStack[head].getStatus() == 4 && importStack[head].getChange() == 0 && importStack[head].getFamilyNumber() == 0 || importStack[head].getStatus() == 14 && importStack[head].getChange() == 0 && importStack[head].getFamilyNumber() == 1)
        {
            std::cout << "\n\n";
            std::cout << importStack[head].getName() << "    TM" << importStack[head].getMemberNumber() << "G0\n";
            int amonth = 0;
            int aday = 0;
            int ayear = 0;
            int bmonth = 0;
            int bday = 0;
            int byear = 0;
            serialToDMY(importStack[head].getDatefrom(), aday, amonth, ayear);
            serialToDMY(importStack[head].getDateTo(), bday, bmonth, byear);
            std::cout << amonth << "/" << aday << "/" << ayear << " - " << bmonth << "/" << bday << "/" << byear << "\n";
            serialToDMY(importStack[head].getDateSub(), aday, amonth, ayear);
            std::cout << amonth << "/" << aday << "/" << ayear << "\n";

            int head2 = 0;
            while (head2 < importStack.size())
            {
                if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber() && importStack[head2].getStatus() == importStack[head].getStatus())
                {
                    std::cout << importStack[head2].getName() << "\n";
                }
                head2++;
            }
            std::cout << "Total Price To Be Billed: " << importStack[head].getPrice() << "\n\n";
            
            int selection = 0;
            while (selection == 0)
            {
                std::cout << "Has Thes Been Billed? \n" << "YES  NO  OVERRIDE  QUIT\n";
                std::string input = "";
                input = getUserInput();
                if (input == "YES")
                {
                    selection = 1;
                    //set status to active
                    head2 = 0;
                    while (head2 < importStack.size())
                    {
                        if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber() && importStack[head2].getStatus() < 10)
                        {
                            importStack[head2].setStatus(6); //make them active
                            importStack[head2].setChange(1);
                        }
                        if (importStack[head2].getMemberNumber() == importStack[head].getMemberNumber() && importStack[head2].getStatus() > 10)
                        {
                            importStack[head2].setStatus(16); //make them active
                            importStack[head2].setChange(1);
                        }
                        head2++;
                    }
                }
                if (input == "NO")
                {
                    selection = 1;
                    //do nothing go to next member
                }
                if (input == "OVERRIDE")
                {
                    //change the price and loop back to the question 
                    std::cout << "\nPlease enter the new price: ";
                    importStack[head].setPrice(std::stoi(getUserInput()));
                    std::cout << "\nPrice Changed to: " << importStack[head].getPrice() << "\n\n\n";
                }
                if (input == "QUIT")
                {
                    goto EXIT_LOOP;
                }
            }
        }
        head++;
    }
EXIT_LOOP:


    //open database file and add members to it
    callExportDB(importStack,1);
}

void databaseCSV()
{
    //imports database then uses callexport to export to root as csv
    std::vector<member> importStack;
    importDataBase(importStack);
    ExportDBCSV(importStack);
}

void reportByStatus()
{
    std::string menuOptions = "";
    std::vector<member> importStack;
    importDataBase(importStack);
    int selection = 0;
    int daya = 0;
    int montha = 0;
    int yeara = 0;
    int dayb = 0;
    int monthb = 0;
    int yearb = 0;
    int statusa = 0;
    int seriala = 0;
    int serialb = 0;
    int head = 0;
    int head2 = 0;
    int count = 0;
    std::string datea = "";
    std::string dateb = "";
    REPORT_BY_STATUS_RESTART:
    menuOptions = "PLEASE SELECT STATUS TO SEARCH BY,PENDING,WAIT,APPROVED,EMAIL READY,AWAITING PAYMENT,CARD READY,ACTIVE,INACTIVE,CANCELED,ACTIVE PRINTED,PAID";
    statusa = menuSystem(5, menuOptions);
    menuOptions = "PLEASE SELECT THE START MONTH,JANUARY,FEBUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER";
    montha = menuSystem(5, menuOptions);
    montha++;
    std::cout << "\nPLEASE ENTER THE START DAY: ";
    try
    {
        daya = stoi(getUserInput());
    }
    catch (...)
    {
        std::cout << "\n!!INVALID!!\n\n";
        goto REPORT_BY_STATUS_RESTART;
    }
    std::cout << "\nPLEASE ENTER THE START YEAR: ";
    try
    {
        yeara = stoi(getUserInput());
    }
    catch (...)
    {
        std::cout << "\n!!INVALID!!\n\n";
        goto REPORT_BY_STATUS_RESTART;
    }
    menuOptions = "PLEASE SELECT THE END MONTH,JANUARY,FEBUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER";
    monthb = menuSystem(5, menuOptions);
    monthb++;
    std::cout << "\nPLEASE ENTER THE END DAY: ";
    try
    {
        dayb = stoi(getUserInput());
    }
    catch (...)
    {
        std::cout << "\n!!INVALID!!\n\n";
        goto REPORT_BY_STATUS_RESTART;
    }
    std::cout << "\nPLEASE ENTER THE END YEAR: ";
    try
    {
        yearb = stoi(getUserInput());
    }
    catch (...)
    {
        std::cout << "\n!!INVALID!!\n\n";
        goto REPORT_BY_STATUS_RESTART;
    }
    datea = std::to_string(montha) + "/" + std::to_string(daya) + "/" + std::to_string(yeara);
    try 
    {
        seriala = DMYToSerial(datea);
    } 
    catch (...)
    {
        std::cout << "\n!!INVALID DATE!!\n\n"
        goto REPORT_BY_STATUS_RESTART;
    }
    dateb = std::to_string(monthb) + "/" + std::to_string(dayb) + "/" + std::to_string(yearb);
    try
    {
        serialb = DMYToSerial(dateb);
    }
    catch (...)
    {
        std::cout << "\n!!INVALID DATE!!\n\n"
        goto REPORT_BY_STATUS_RESTART;
    }
    std::fstream filex;
    filex.open(".\\NumberReport.csv", std::ios::out | std::ios::app);
    head2 = seriala;
    //loop for counting all on those days
    while (head2 >= seriala && head2 <= serialb)
    {
        head = 0;
        count = 0;
        while (head < importStack.size())
        {
            if (statusa == 10)
            {
                if (importStack[head].getDatefrom() <= head2 && importStack[head].getDateTo() >= head2)
                {
                    if (importStack[head].getStatus == 5 || importStack[head].getStatus == 6 || importStack[head].getStatus == 9)
                    {
                        count++;
                    }
                }
            }
            else if (importStack[head].getDatefrom() <= head2 && importStack[head].getDateTo() >= head2 && importStack[head].getStatus() == statusa)
            {
                count++;
            }
            head++;
        }
        //conver serial back to MDY
        //serialToDMY(head2,daya,montha,yeara);
        //write to file
        filex << serialToString(head2) << "," << std::to_string(count) << std::endl;
        std::cout << "\n" << serialToString(head2) << " - " << count;
        head2++;
    }
    filex.flush();
    filex.close();
    std::cout << "\nREPORT COMPLETE\n";
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
            std::cout << "\n    " << std::left << std::setw(30) << word;
            //getline the number then cout it
            if (option == 1 && word != "BACK")
            {
                std::getline(ss, word, ',');
                std::cout << std:: setprecision(2)<< word;
            }
        }
        loopCount = 0;
        //get user input
        input = getUserInput();
        std::stringstream ss2(x);
        //scrap the title line
        std::getline(ss2, word, ',');
        //break string x up again using stringstream and check if input matches any
        while (std::getline(ss2, word, ','))
        {

            if (input == word)
            {
                match = true;
                selection = loopCount;
            }
            loopCount++;
            //getline to remove the number
            if (option == 1)
            {
                std::getline(ss2, word, ',');
            }
        }
        if (match == false)
        {
            invalidSelection();
        }
    }
    std::cout << "\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.";
    return selection;
}

void memberSearch()
{
    int selection = 0;
    int breakout = 0;
    int countingn = 0;
    int hundo = 0;
    int memNum1 = 0;
    int famNum1 = 0;
    int fromDay = 0;
    int fromMonth = 0;
    int fromYear = 0;
    int toDay = 0;
    int toMonth = 0;
    int toYear = 0;
    int subDay = 0;
    int subMonth = 0;
    int subYear = 0;
    int memNumx = 0;
    int head = 0;
    int selectedHead = (1 - 2);
    int typedsel = 0;
    std::string input = "";
    std::fstream file;
    std::vector<member> importStack;
    member newMember;
    std::string line = "";
    std::string word = "";
    std::vector<std::string> row;
    importDataBase(importStack);
SEARCH_BACK:
    std::cout << "\n\nPLEASE ENTER THE MEMBER NUMBER ONLY: ";
    typedsel = stoi(getUserInput());
    head = 0;
    memNum1 = (1 - 2);
    while (head < importStack.size())
    {
        if (typedsel == importStack[head].getMemberNumber() && importStack[head].getFamilyNumber() == 0)
        {
            std::cout << "\n\nMEMBER FOUND\n\n";
            //std::cout << "TM" << importStack[head].getMemberNumber() << "G0\n";
            int head2 = 0;
            memNum1 = importStack[head].getMemberNumber();
            while (head2 < importStack.size())
            {
                if (importStack[head].getMemberNumber() == importStack[head2].getMemberNumber())
                {
                    std::cout << "TM" << importStack[head2].getMemberNumber() << "G" << importStack[head2].getFamilyNumber() << "   " << importStack[head2].getName() << std::endl;
                }
                head2++;
            }
        }
        head++;
    }
    if (memNum1 == (1 - 2))
    {
        std::cout << "\nERROR NO MEMBER FOUND\n";
        goto SEARCH_EXIT;
    }
    std::cout << "\nPLEASE ENTER THE FAMILY NUMBER YOU WOULD LIKE TO EDIT\nENTER A NUMBER OR TYPE QUIT OR BACK\n" << std::endl;
    input = getUserInput();
    memNumx = 0;
    if (input == "QUIT")
    {
        goto SEARCH_EXIT;
    }
    else if (input == "BACK")
    {
        goto SEARCH_BACK;
    }
    else
    {
        memNumx = stoi(input);
    }
    head = 0;
    selectedHead = (1 - 2);
    while (head < importStack.size())
    {
        if (memNum1 == importStack[head].getMemberNumber() && memNumx == importStack[head].getFamilyNumber())
        {
            selectedHead = head;
        }
        head++;
    }
    if (selectedHead == (1 - 2))
    {
        std::cout << "\n\nERROR\n\n";
        goto SEARCH_EXIT;
    }
    //std::cout << "\n\nNAME: " << importStack[selectedHead].getName() << "\nPRICE: " << importStack[selectedHead].getPrice() << "\nDATE FROM: " << importStack[selectedHead].getDatefrom() << "\nDATE TO: " << importStack[selectedHead].getDateTo() << "\nDATE SUBMITTED: " << importStack[selectedHead].getDateSub() << "\nPHONE: " << importStack[selectedHead].getPhone() << "\nEMAIL: " << importStack[selectedHead].getEmail() << "\nPROPERTY: " << importStack[selectedHead].getProperty() << "\nPROPERTY ID: " << importStack[selectedHead].getpropertyID() << "\nAGENCY: " << importStack[selectedHead].getAgency() << "\nBEDROOMS: " << importStack[selectedHead].getBedrooms() << "\nMEMBER STATUS: " << importStack[selectedHead].getStatus() << "\nCHANGED: " << importStack[selectedHead].getChange() << std::endl();
    //Options for member
    fromDay = 0;
    fromMonth = 0;
    fromYear = 0;
    toDay = 0;
    toMonth = 0;
    toYear = 0;
    subDay = 0;
    subMonth = 0;
    subYear = 0;
    serialToDMY(importStack[selectedHead].getDatefrom(), fromDay, fromMonth, fromYear);
    serialToDMY(importStack[selectedHead].getDateTo(), toDay, toMonth, toYear);
    serialToDMY(importStack[selectedHead].getDateSub(), subDay, subMonth, subYear);
    breakout = 0;
    while (breakout == 0)
    {
        std::string menuOptions = "MEMBER INFORMATION,NAME," + importStack[selectedHead].getName() + ",PRICE," + std::to_string(importStack[selectedHead].getPrice()) + ",DATE FROM," + std::to_string(fromMonth) + "/" + std::to_string(fromDay) + "/" + std::to_string(fromYear) + ",DATE TO," + std::to_string(toMonth) + "/" + std::to_string(toDay) + "/" + std::to_string(toYear) + ",DATE SUBMITTED," + std::to_string(subMonth) + "/" + std::to_string(subDay) + "/" + std::to_string(subYear) + ",PHONE," + importStack[selectedHead].getPhone() + ",EMAIL," + importStack[selectedHead].getEmail() + ",PROPERTY," + importStack[selectedHead].getProperty() + ",PROPERTY ID," + std::to_string(importStack[selectedHead].getpropertyID()) + ",AGENCY," + importStack[selectedHead].getAgency() + ",BEDROOMS," + std::to_string(importStack[selectedHead].getBedrooms()) + ",MEMBER STATUS," + statuses[importStack[selectedHead].getStatus()] + ",CHANGED," + std::to_string(importStack[selectedHead].getChange()) + ",SAVE,SAVES ONLY,SEARCH,BACK TO SEARCH,EXPORT,SAVES AND ADDS TO NSIMPORT,DELETE,DELETES CURRENT MEMBER,DELETE FAMILY,DELETES WHOLE FAMILY WITH CURRENT MEMBER NUMBER,BILLING,CONFIRM OR OVERIDE BILLING,COMMENTS," + importStack[selectedhead].getComments() + ",QUIT";
        selection = menuSystem(1, menuOptions);
        switch (selection)
        {
        case 0:
            //name
            std::cout << "\nENTER WHOLE NEW NAME: FIRST LAST";
            importStack[selectedHead].setName(getUserInput());
            break;
        case 1:
            //price
            std::cout << "\nENTER NEW PRICE: ";
            importStack[selectedHead].setPrice(stoi(getUserInput()));
            break;
        case 2:
            //date from
            std::cout << "\nENTER NEW DATES: MM/DD/YYYY  ";
            importStack[selectedHead].setDateFrom(DMYToSerial(getUserInput()));
            break;
        case 3:
            //date to
            std::cout << "\nENTER NEW DATES: MM/DD/YYYY  ";
            importStack[selectedHead].setDateTo(DMYToSerial(getUserInput()));
            break;
        case 4:
            //date submitted
            std::cout << "\nENTER NEW DATES: MM/DD/YYYY  ";
            importStack[selectedHead].setDateSub(DMYToSerial(getUserInput()));
            break;
        case 5:
            //phone
            std::cout << "\nENTER NEW PHONE NUMBER: ";
            importStack[selectedHead].setPhone(getUserInput());
            break;
        case 6:
            //email
            std::cout << "\nENTER NEW EMAIL: ";
            importStack[selectedHead].setEmail(getUserInput());
            break;
        case 7:
            //property
            std::cout << "\nENTER NEW PROPERTY: ";
            importStack[selectedHead].setProperty(getUserInput());
            break;
        case 8:
            //prop ID
            break;
        case 9:
            //agency
            break;
        case 10:
            //bedrooms
            break;
        case 11:
            //memberStatus
            menuOptions = "TYPE NEW STATUS,PENDING,WAIT,APPROVED,EMAIL READY,AWAITING PAYMENT,CARD READY,ACTIVE,INACTIVE,CANCELED";
            selection = menuSystem(5, menuOptions);
            importStack[selectedHead].setStatus(selection);
            break;
        case 12:
            //changed
            break;
        case 13:
            //save
            // 
            //open database file and add members to it
            std::cout << "\n\nSAVING.";
            callExportDB(importStack,1);
            //goto SEARCH_EXIT;
            break;
        case 14:
            goto SEARCH_BACK;
            break;
        case 15:
            //export
        {
        std::cout << "\n\nSAVING.";
        callExportDB(importStack,1);
        
        file.open("nsimport.csv", std::ios::out | std::ios::app);
        std::cout << "\nSTARTING EXPORT";
        file << callNSImport(importStack[selectedHead]) << std::endl;
        file.flush();
        file.close();
        std::cout << "\nEXPORT ADDED\n";
        }
            break;
        case 16:
            //delete member
            importStack.erase(importStack.begin()+selectedHead);
            std::cout << "\nMEMBER DELETED!\n";
            {
                std::cout << "\n\nSAVING.";
                file.open(".\\database\\members.db", std::ios::out | std::ios::trunc);
                head = 0;
                hundo = 0;
                hundo = importStack.size();
                hundo = (hundo / 20);
                countingn = 0;
                while (head < importStack.size())
                {
                    file << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << importStack[head].getDatefrom() << "," << importStack[head].getDateTo() << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << "," << importStack[head].getChange() << "," << importStack[head].getDateSub() << std::endl;
                    if (countingn == hundo)
                    {
                        std::cout << ".";
                        countingn = 0;
                    }
                    countingn++;
                    head++;
                }
                std::cout << "COMPLETE\n";
                file.flush();
                file.close();
            }
            goto SEARCH_EXIT;
            break;
        case 17:
            //delete whole family
            head = 0;
            memNum1 = importStack[selectedHead].getMemberNumber();
            while (head < importStack.size())
            {
                if (importStack[head].getMemberNumber() == memNum1)
                {
                    importStack.erase(importStack.begin()+head);
                    head--;
                    std::cout << "\nMEMBER DELETED!\n";
                }
                head++;
            }
            {
                std::cout << "\n\nSAVING.";
                file.open(".\\database\\members.db", std::ios::out | std::ios::trunc);
                head = 0;
                hundo = 0;
                hundo = importStack.size();
                hundo = (hundo / 20);
                countingn = 0;
                while (head < importStack.size())
                {
                    file << importStack[head].getMemberNumber() << "," << importStack[head].getFamilyNumber() << "," << importStack[head].getStatus() << "," << importStack[head].getName() << "," << importStack[head].getDatefrom() << "," << importStack[head].getDateTo() << "," << importStack[head].getPhone() << "," << importStack[head].getEmail() << "," << importStack[head].getAgency() << "," << importStack[head].getProperty() << "," << importStack[head].getBedrooms() << "," << importStack[head].getpropertyID() << "," << importStack[head].getPrice() << "," << importStack[head].getChange() << "," << importStack[head].getDateSub() << std::endl;
                    if (countingn == hundo)
                    {
                        std::cout << ".";
                        countingn = 0;
                    }
                    countingn++;
                    head++;
                }
                std::cout << "COMPLETE\n";
                file.flush();
                file.close();
            }
            goto SEARCH_EXIT;
            break;
        case 18:
        {
            //Billing
            selection = 0;
            int head2 = 0;
            head = 0;
            while (selection == 0)
            {
                std::cout << "\nCURRENT PRICE  " << importStack[selectedHead].getPrice() << std::endl;
                std::cout << "\nHas Thes Been Billed? \n" << "YES  NO  OVERRIDE\n";
                std::string input = "";
                input = getUserInput();
                if (input == "YES")
                {
                    selection = 1;
                    //set status to active
                    head2 = 0;
                    while (head2 < importStack.size())
                    {
                        if (importStack[head2].getMemberNumber() == importStack[selectedHead].getMemberNumber() && importStack[head2].getStatus() < 10)
                        {
                            importStack[head2].setStatus(6); //make them active
                            importStack[head2].setChange(1);
                        }
                        if (importStack[head2].getMemberNumber() == importStack[selectedHead].getMemberNumber() && importStack[head2].getStatus() > 10)
                        {
                            importStack[head2].setStatus(16); //make them active
                            importStack[head2].setChange(1);
                        }
                        head2++;
                    }
                }
                if (input == "NO")
                {
                    selection = 1;
                    //do nothing go to next member
                }
                if (input == "OVERRIDE")
                {
                    //change the price and loop back to the question 
                    std::cout << "\n\nPLEASE ENTER THE NEW PRICE BELOW\n";
                    importStack[selectedHead].setPrice(std::stoi(getUserInput()));
                    std::cout << "\nPrice Changed to: " << importStack[selectedHead].getPrice() << "\n\n\n";
                }
            }
            break;
        }
        case 19:
            //add comment approval here
            std::cout << "\n" + importStack[head].getName() + "\n" + importStack[head].getProperty() + "\nPLEASE ENTER COMMENT";
            importStack[head].setComment(getUserInput());
            break;
        case 20:
                //QUIT
            goto SEARCH_EXIT;
            break;
        }
    }
SEARCH_EXIT:
    if (1==1)
    {

    }
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

void vexport()
{
    
    int breakout = 0;
    std::string input = "";
    while (breakout == 0)
    {
        updateNumbers();
        std::string menuOptions = "EXPORT MENU,NORTHSTAR," + std::to_string(nsImportNum) + ",NORTHSTAR IMPORTED," + std::to_string(nsImportedNum) + ",EMAIL," + std::to_string(emailGenNum) + ",EMAIL SENT," + std::to_string(emailSentNum) + ",CARDS PRINTED," + "NUMBER HERE" + ",BACK";
        int selection = menuSystem(1, menuOptions);
        switch (selection)
        {
        case 0:
            nsExport();
            break;
        case 1:
            std::cout << "\nWas NorthStar file imported? YES or NO?: ";
            input = getUserInput();
            if (input == "YES")
            {
                approvedImport();
                std::cout << "COMPLETED";
            }
            break;
        case 2:
            generateEmail();
            break;
        case 3:
            emailSent();
            break;
        case 4:
            cardPrinted();
            break;
        case 5:
            breakout = 1;
            break;
        }
        resetnums();
    }
    
}

void process()
{
    
    int breakout = 0;
    while (breakout == 0)
    {
        updateNumbers();
        std::string menuOptions = "PROCESS MENU,AUTO," + std::to_string(autoNum) + ",BILLING," + std::to_string(billingNum) + ",BACK";
        int selection = menuSystem(1, menuOptions);
        switch (selection)
        {
        case 0:
            processPendingAuto();
            break;
        case 1:
            billing();
            break;
        case 2:
            breakout = 1;
            break;
        }
        resetnums();
    }
    
}

void importMenu()
{
    int breakout = 0;
    while (breakout == 0)
    {
        std::string menuOptions = "IMPORT MENU,IMPORT NEW MEMBERS,IMPORT TEAMS,BACK";
        int selection = menuSystem(5, menuOptions);
        switch (selection)
        {
        case 0:
            importNewMembers();
            break;
        case 1:
            importTeams();
            break;
        case 2:
            breakout = 1;
            break;
        }
    }
}

void reportMenu()
{
    int breakout = 0;
    while (breakout == 0)
    {
        std::string menuOptions = "REPORTING MENU,DATABASE REPORT,NUMBERS BY STATUS,BACK";
        int selection = menuSystem(5,menuOptions);
        switch (selection)
        {
            case 0:
                //export database as csv
                databaseCSV();
                break;
            case 1:
                //Report of member numbers by status
                reportByStatus();
                break;
            case 2:
                //quit
                breakout = 1;
                break;
        }
    }
}

void selections()
{
    std::string menuOptions = "ERKEL MAIN MENU,IMPORT,PROCESS,EXPORT,PROPERTIES,REPORT,SEARCH,FORCE EXPORT,QUIT";
    int selection = menuSystem(5, menuOptions);
    switch (selection)
    {
    case 0:
        importMenu();
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
        reportMenu();
        break;
    case 5:
        memberSearch();
        break;
    case 6:
        forcedExport();
        break;
    case 7:
        exit(0);
        break;
    }
}

int main()
{
    //new funtion to count the database and update status numbers for menu counts
    int loop = 1;
    std::cout << "\nWELCOME TO ERKEL\n";
    //open up the list of properties into vector
    while (loop > 0)
    {
        selections();
    }
}



//UPdates 11/10
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
