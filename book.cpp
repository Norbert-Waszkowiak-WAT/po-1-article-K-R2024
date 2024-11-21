#ifndef Book_H
#define Book_H
#include <iostream>
#include <string>
#include "author.cpp"
#include "chapter.cpp"
#include "article.cpp"
class Book{
    private:
        std::string title;
        Author author;
        int publicationYear;
        std::vector<Chapter> chapters;
    public:
        Book():title(""), author(""), publicationYear(0), chapters(0){};
        Book(std::string booktitle, Author bookauthor, int year, vector<Chapter> &bookchapters):title(booktitle),
        author(bookauthor), publicationYear(year) , chapters(bookchapters){};
        void addChapter(Chapter &chapter){
            chapters.pushback(chapter);
        }
        void displayinfo(){
            std::cout<<"OHIO SKIBIDI MOSTEK";
        }
        std::string getTitle(){
            return title;
        }
        Author getAuthor(){
            return author;
        }
        int getPublicationYear(){
            return publicationYear;
        }
        std::vector<Chapter> getChapters(){
            return chapters()
        }



};
#endif