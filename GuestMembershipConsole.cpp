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
}
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
    status memberStatus;
    std::string name;
    std::string phone;
    std::string email;
    std::string dateFrom;
    std::string dateTo;
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
    status getStatus();
    std::string getName();
    std::string getPhone();
    std::string getEmail();
    std::string getDatefrom();
    std::string getDateTo();
    std::string getAgency();
    std::string getProperty();
    std::string getFamilyName(int a);
    void setName(std::string a);
    void setPhone(std::string a);
    void setEmail(std::string a);
    void setDateFrom(std::string a);
    void setDateTo(std::string a);
    void setAgency(std::string a);
    void setProperty(std::string a);
    void addFamilyName(std::string a);
    void setMemberNumber(int a);
    void setFamilyNumber(int a);
    void setPrice(int a);
    void setBedrooms(int a);
    void setStatus(status a);
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

status member::getStatus()
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

std::string member::getDatefrom()
{
    return dateFrom;
}

std::string member::getDateTo()
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

void member::setDateFrom(std::string a)
{
    dateFrom = a;
}

void member::setDateTo(std::string a)
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

void member::setStatus(status a)
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
private:
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

int property::getMemberNumber()
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

void property::setMemberNumber(int a)
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

void setGuests(int a)
{
    guests = a;
}

void import()
{
    std::cout << "Import Menu\n";
   
}

void process()
{
    std::cout << "process";
}

void vexport()
{
    std::cout << "export";
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
            catch
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
