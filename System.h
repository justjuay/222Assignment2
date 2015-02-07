/* 
 * File:   System.h
 * Author: desmond
 *
 * Created on February 6, 2015, 9:59 PM
 */

#ifndef SYSTEM_H
#define	SYSTEM_H

#include "User.h"
#include "Hotel.h"
#include "Review.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class System {
public:
    System();
    virtual ~System();
    
    void run();
private:
    /* HELPER FUNCTIONS */
    
    // input checker
    static bool validateInteger(const string&, const int& = 0, const int& = 0);
    
    // UI
    static void printHeader(const string&);
    
    // retrieve from database
    static vector<User> getAllUsers();
    static vector<Hotel> getAllHotels();
    static vector<Review> getUserReviews(const int&);
    
    
    /* SYSTEM FUNCTIONS */
    
    // Log in
    void displayLogin();
    bool isLoginSuccess(vector<User>&, const string, const string);
    
    
    // main menu
    void displayMenu();
    void displayAdminMenu();
    void displayUserMenu();
    
    void viewHotelReview();
    
    // admin menu
    void addHotelMenu();
    void editHotelMenu();
    void removeHotelMenu();
    
    void activateUser();
    void deleteUser();
    
    void displayReviewSummary();
    void deleteReview();
    
    void approveHotelStayed();
    
    
    // user menu
    void addHotelStayedBefore();
    void addHotelReview();
    

};

#endif	/* SYSTEM_H */

