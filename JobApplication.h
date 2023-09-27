#ifndef JOBAPPLICATION_H
#define JOBAPPLICATION_H

#include "Job.h"
#include "User.h"

class JobApplication {
private:
    const Job& job;
    const User& user;
    bool isAccepted;

public:
    JobApplication(const Job& job, const User& user);

    const Job& getJob() const;
    const User& getUser() const;
    bool isAcceptedApplication() const;
    void acceptApplication();
};

#endif
