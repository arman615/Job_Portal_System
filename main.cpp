#include <iostream>
#include <vector>
#include "Job.h"
#include "User.h"
#include "JobApplication.h"

void registerJob(std::vector<Job>& jobs, const std::string& jobTitle, const std::string& description,
                 const std::string& requirements, double salary, const std::string& company);

void registerUser(std::vector<User>& users, const std::string& name, const std::string& contactInfo,
                  const std::string& resume);

std::vector<Job> searchJobs(const std::vector<Job>& jobs, const std::string& keyword);

void applyToJob(std::vector<JobApplication>& jobApplications, const Job& job, const User& user);

void generateJobNotifications(const std::vector<Job>& jobs, const std::vector<User>& users);

int main() {
    std::vector<Job> jobs;
    std::vector<User> users;
    std::vector<JobApplication> jobApplications;

    registerJob(jobs, "Software Engineer", "Develop software applications", "C++, Python, SQL", 80000, "ABS Technologies");
    registerJob(jobs, "Data Analyst", "Analyze and interpret data", "Data analysis, Statistics", 60000, "Dimitri LLC");

    registerUser(users, "Vzgo", "vzgo@gmail.com", "C++, Python, SQL");
    registerUser(users, "Ani", "ani@gmail.com", "Data analysis, Statistics");
    registerUser(users, "Arman", "arman@gmail.com", "C++, Python, Java");
    registerUser(users, "Gago", "gago@gmail.com", "Web Development, JavaScript, HTML, CSS");

    applyToJob(jobApplications, jobs[0], users[0]);
    applyToJob(jobApplications, jobs[1], users[1]);
    applyToJob(jobApplications, jobs[0], users[2]);
    applyToJob(jobApplications, jobs[1], users[3]);

    jobs[0].closeJob();

    generateJobNotifications(jobs, users);

    return 0;
}

void registerJob(std::vector<Job>& jobs, const std::string& jobTitle, const std::string& description,
                 const std::string& requirements, double salary, const std::string& company) {
    Job newJob(jobTitle, description, requirements, salary, company);
    jobs.push_back(newJob);
    std::cout << "Job registered successfully.\n";
}

void registerUser(std::vector<User>& users, const std::string& name, const std::string& contactInfo,
                  const std::string& resume) {
    User newUser(name, contactInfo, resume);
    users.push_back(newUser);
    std::cout << "User registered successfully.\n";
}

std::vector<Job> searchJobs(const std::vector<Job>& jobs, const std::string& keyword) {
    std::vector<Job> foundJobs;
    for (const Job& job : jobs) {
        if (job.isOpenJob() && (job.getJobTitle().find(keyword) != std::string::npos ||
                                job.getDescription().find(keyword) != std::string::npos ||
                                job.getRequirements().find(keyword) != std::string::npos)) {
            foundJobs.push_back(job);
        }
    }
    return foundJobs;
}

void applyToJob(std::vector<JobApplication>& jobApplications, const Job& job, const User& user) {
    JobApplication newApplication(job, user);
    jobApplications.push_back(newApplication);
    std::cout << "Job application submitted successfully.\n";
}

void generateJobNotifications(const std::vector<Job>& jobs, const std::vector<User>& users) {
    for (const User& user : users) {
        std::cout << "Notifications for " << user.getName() << ":\n";
        for (const Job& job : jobs) {
            if (job.isOpenJob() && job.getRequirements() == user.getResume()) {
                std::cout << "Job: " << job.getJobTitle() << " at " << job.getCompany() << std::endl;
            }
        }
        std::cout << "-------------------------\n";
    }
}
