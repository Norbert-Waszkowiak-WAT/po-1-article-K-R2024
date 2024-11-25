#ifndef Chapter_H
#define Chapter_H
#include <iostream>
#include <string>
#include "author.cpp"
#include "article.cpp"
class Chapter{
    private:
        std::string title;
        Author author;
        int chapternumber;
    public:
    Chapter():title(""),author("",""), chapternumber(1) {};

    Chapter(std::string chaptertitle,Author authorname, int number ):
    title(chaptertitle), author(authorname), chapternumber(number){};

    Chapter(Chapter &other):title(other.title), author(other.author), chapternumber(other.chapternumber){};

    Chapter(Article &article):title(article.getTitle()), author(article.getAuthor()), chapternumber(1){};
    void displayInfo(){
       std::cout<<"Chapter "<<chapternumber<<": "<<title<<" by "<<author.getName()<<" "<<author.getSurname()<<"\n";
    }
    std::string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getChapterNumber(){
        return chapternumber;
    }
    
};
#endif