#include "Job.h"

Job::Job(const std::string& jobTitle, const std::string& description, const std::string& requirements,
        double salary, const std::string& company)
        : jobTitle(jobTitle), description(description), requirements(requirements),
          salary(salary), company(company), isOpen(true) {}

const std::string& Job::getJobTitle() const {
    return jobTitle;
}

const std::string& Job::getDescription() const {
    return description;
}

const std::string& Job::getRequirements() const {
    return requirements;
}

double Job::getSalary() const {
    return salary;
}

const std::string& Job::getCompany() const {
    return company;
}

bool Job::isOpenJob() const {
    return isOpen;
}

void Job::closeJob() {
    isOpen = false;
}
