
/*
----------------------------------------------------------------------------
               Project title   : Jarvis(personal assistant)
               Made By         : Raj kumar
               Written in      : C++
               Platform        : Windows
               IDE used        : Code blocks
               Total Code      : 700+ Lines
 ----------------------------------------------------------------------------
*/



#ifndef ASSISTANT_H
#define ASSISTANT_H
using namespace std;

class assistant
{

   public:
              assistant();
              ~assistant();
         void greeting();
         void typing(string);
         void clock();
         void speak(string);

};

#endif // ASSISTANT_H
