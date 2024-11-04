#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hello " << name << " You are " << age << endl;

}

int main()
{

  sayHi("mike", 60);
sayHi("john", 40);
sayHi("steve", 12);

    return 0;
}
