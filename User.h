/* 
 * File:   User.h
 * Author: desmond
 *
 * Created on February 6, 2015, 10:07 PM
 */

#ifndef USER_H
#define	USER_H

class User {
public:
    User();
    virtual ~User();
    
    int getID() const;
    char* getUsername() const;
    bool isAdmin() const;
    bool isActivated() const;
    bool isLocked() const;
    
    
    bool authenticate(const char*, const char*);
    int getLoginTries() const;
    void resetLoginTries() const;
    void lock();
    
    
    void updateToFile() const;
    
    
    static encrypt(char*);
    
    static const char USER_FILE[];
    
private:
    int userID;
    char username [NAME_LENGTH];
    char encryptedPass [PASS_LENGTH];
    bool admin;
    bool activated;
    bool lockStatus;
    
    int numLoginTries;
    
    static const int NAME_LENGTH;
    static const int PASS_LENGTH;
    static const int CIPHER_SHIFT;
};

#endif	/* USER_H */

