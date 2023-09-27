#ifndef JOB_H
#define JOB_H

#include <string>

class Job {
private:
    std::string jobTitle;
    std::string description;
    std::string requirements;
    double salary;
    std::string company;
    bool isOpen;

public:
    Job(const std::string& jobTitle, const std::string& description, const std::string& requirements,
        double salary, const std::string& company);

    const std::string& getJobTitle() const;
    const std::string& getDescription() const;
    const std::string& getRequirements() const;
    double getSalary() const;
    const std::string& getCompany() const;
    bool isOpenJob() const;
    void closeJob();
};

#endif
