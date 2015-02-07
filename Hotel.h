/* 
 * File:   Hotel.h
 * Author: desmond
 *
 * Created on February 6, 2015, 10:11 PM
 */

#ifndef HOTEL_H
#define	HOTEL_H

class Hotel {
public:
    Hotel();
    virtual ~Hotel();
    
    int getID() const;
    char* getName() const;
    char* getCountry() const;
    char* getDistrict() const;
    int getStars() const;
    
private:
    int hotelID;
    char name [NAME_LENGTH];
    char address [ADDRESS_LENGTH];
    char country [COUNTRY_LENGTH];
    char district [DISTRICT_LENGTH];
    int stars;
    
    static const int NAME_LENGTH;
    static const int ADDRESS_LENGTH;
    static const int COUNTRY_LENGTH;
    static const int DISTRICT_LENGTH;
    
};

#endif	/* HOTEL_H */

