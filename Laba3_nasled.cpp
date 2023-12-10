#include <iostream>
#include <string>

class Company {
private:
    std::string name;
public:
    Company(const std::string& companyName) : name(companyName) {}
    std::string getName() const {
        return name;
    }
};

class Employee {
private:
    std::string name;
    int age;
    int idCard;
public:
    Employee(const std::string& employeeName, int number, int count) : name(employeeName), age(count), idCard(number) {}
    std::string getName() const {
        return name;
    }
    int getIdCard() const {
        return idCard;
    }
    int getAge() const {
        return age;
    }
};

class Position {
private:
    std::string mainOffice;
    int workExperience;
public:
    Position(const std::string& isMainOffice, int year) : mainOffice(isMainOffice), workExperience(year) {}
    std::string isMainOffice() const {
        return mainOffice;
    }
    int getWorkExperience() {
        return workExperience;
    }
};

class Office : public Position {
private:
    std::string jobTitle;
    int workingHours;
public:
    Office(const std::string& jobType, int workingYear, const std::string& officejobtitle, int HowManyYear)
        : Position(jobType, workingYear), jobTitle(officejobtitle), workingHours(HowManyYear) {}

    std::string getJobTitle() const {
        return jobTitle;
    }
    int getWorkingHours() const {
        return workingHours;
    }
};

class RemoteWork : public Position {
private:
    std::string jobTitle;
    int workingHours;
    std::string country;
public:
    RemoteWork(int workingYear, int HowManyYear, const std::string& jobType, const std::string& RemoteWorkTitle)
        : Position(jobType, workingYear), jobTitle(RemoteWorkTitle), workingHours(HowManyYear) {}

    std::string getJobTitle() const {
        return jobTitle;
    }
    int getWorkingHours() const {
        return workingHours;
    }
    std::string getCountry() const {
        return country;
    }
};


int main() {
    Company company("MyCompany");
    Employee employee("Aleksandra Ponomareva", 1132226148, 19);
    Position position("Yes", 2);
    Office office("Yes", 2, "programmer", 8);
    RemoteWork remoteWork(1, 6, "No", "Russia");

    std::cout << "Company name: " << company.getName() << std::endl;
    std::cout << "Employee name: " << employee.getName() << std::endl;
    std::cout << "Number id Card: " << employee.getIdCard() << std::endl;
    std::cout << "Count year: " << employee.getAge() << std::endl;
    std::cout << "Position main Office?: " << position.isMainOffice() << std::endl;
    std::cout << "Position year: " << position.getWorkExperience() << std::endl;
    std::cout << "Office: " << office.isMainOffice() << std::endl;
    std::cout << "Work Experience: " << office.getWorkExperience() << std::endl;
    std::cout << "Job Title: " << office.getJobTitle() << std::endl;
    std::cout << "Working Hours: " << office.getWorkingHours() << std::endl;
    std::cout << "Position main Office?: " << remoteWork.isMainOffice() << std::endl;
    std::cout << "Work Experience: " << remoteWork.getWorkExperience() << std::endl;
    std::cout << "Working Hours: " << remoteWork.getWorkingHours() << std::endl;
    std::cout << "Country: " << remoteWork.getJobTitle() << std::endl;

    return 0;
}