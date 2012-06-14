#include "Thread.h"
#include <iostream>
using namespace std;
using namespace tpool;
class thread : public tpool::Thread
{
    virtual void Entry(void)
    {
        cout << "Hello from thread!" << endl;
    }
};
int main(int argc, char *argv[])
{
    thread *a = new thread;
    thread *b = new thread;
    thread *c = new thread;
    cout << "Hello from main" << endl;
    a->Run();
    b->Run();
    c->Run();
    sleep(1); //don't ever do this in a program!
    delete a,b,c;
}
