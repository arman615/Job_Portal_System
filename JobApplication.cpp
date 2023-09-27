#include "JobApplication.h"

JobApplication::JobApplication(const Job& job, const User& user)
        : job(job), user(user), isAccepted(false) {}

const Job& JobApplication::getJob() const {
    return job;
}

const User& JobApplication::getUser() const {
    return user;
}

bool JobApplication::isAcceptedApplication() const {
    return isAccepted;
}

void JobApplication::acceptApplication() {
    isAccepted = true;
}
