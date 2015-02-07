/* 
 * File:   Review.h
 * Author: desmond
 *
 * Created on February 6, 2015, 10:24 PM
 */

#ifndef REVIEW_H
#define	REVIEW_H

class Review {
public:
    Review();
    virtual ~Review();
    
    void addReview() const;
    void deleteReview() const;
    void editReview() const;
    void print() const;
    
    bool hasTextReview() const;
    char* getTextReview() const;
    
    static saveTextReview(int);
    
    
private:
    int reviewID;
    int userID;
    int hotelID;
    int locationRating;
    int valueRating;
    int comfortRating;
    int serviceRating;
    bool textReview;

};

#endif	/* REVIEW_H */

