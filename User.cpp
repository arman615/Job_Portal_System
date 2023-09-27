#include "User.h"

User::User(const std::string& name, const std::string& contactInfo, const std::string& resume)
        : name(name), contactInfo(contactInfo), resume(resume) {}

const std::string& User::getName() const {
    return name;
}

const std::string& User::getContactInfo() const {
    return contactInfo;
}

const std::string& User::getResume() const {
    return resume;
}
