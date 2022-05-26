#include <iostream>

using namespace std;

class NewProgram
{
    public:
  //constructor
    NewProgram(){
      //computer cannot allocate this much memory , so it throws exception
    char *name = new char[999999999999999999999999];
    
    delete[] name;
    }
};
int main()
{
    NewProgram Obj;
   
    return 0;
}


Output:
char *name = new char [999999999999999999999999];
terminate after throwing an exception an instance of 'std::bad_alloc'
  what():  std::bad_alloc
