#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name;
    std::string contactInfo;
    std::string resume;

public:
    User(const std::string& name, const std::string& contactInfo, const std::string& resume);

    const std::string& getName() const;
    const std::string& getContactInfo() const;
    const std::string& getResume() const;
};

#endif
