
#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"

class Article{
    std::string title;
    Author author;
    int publicationYear;
    std::string journal;
    public:
    Article():
    title(""), author(Author()), publicationYear(0),journal(""){}; 
    Article(std::string title,Author author,int publicationYear,std::string journal)
    :title(title), author(author), publicationYear(publicationYear),journal(journal){};
    Article(Article &other)
    :title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){};
    void displayinfo(){
        std::cout<<"AZBEST";
    }
    std::string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getPublicationYear(){
        return publicationYear;
    }std::string getJournal(){
     return journal;   
    }
};
#endif