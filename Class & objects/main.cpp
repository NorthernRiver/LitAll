#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

};

int main()
{
    Book book1;
    book1.title ="Harry Potter";
    book1.author ="JKRowling";
    book1.pages = 500;

     Book book2;
    book2.title ="Lord of the Rings";
    book2.author ="JRR Tolkien";
    book2.pages = 700;

    cout << book2.author;

    return 0;
}
