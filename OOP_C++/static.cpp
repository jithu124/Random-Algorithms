/*Static data member
    -is associated with class not with object
    -is shared by all the objects of a class
    -needs to be defined outside the class scope (in addition to the declaration within the class scope) to avoid linker error
    -must be initialized in a source file
    -is constructed before main() starts and destructed after main() ends
    -can be private / public type
    -can be accessed with 
        *the class-name followed by the scope resolution operator (::)
        *as a member of any object of the class
    -virtually eliminates any need for global variables in OOPs environment*/

/*static member function
does not have this pointer – not associated with any object
cannot access non-static data members
cannot invoke non-static member functions
can be accessed
*with the class-name followed by the scope resolution operator (::)
*as a member of any object of the class
is needed to read / write static data members
*Again, for encapsulation static data members should be private
*get()-set() idiom is built for access (static member functions in public)
may initialize static data members even before any object creation
cannot co-exist with a non-static version of the same function
cannot be declared as const*/

#include <iostream>
using namespace std;
class PrintJobs { 
        int nPages_; // # of pages in current job
        static int nTrayPages_;
        // # of pages remaining in the tray
        static int nJobs_;
        // # of print jobs executing
        public: PrintJobs(int nP) : nPages_(nP) { ++nJobs_;
        cout << "Printing " << nP << " pages" << endl;
        nTrayPages_ = nTrayPages_ - nP;
        }
        ~PrintJobs() { --nJobs_; }
        static int getJobs() { return nJobs_; }
        static int checkPages() { return nTrayPages_; }
        static void loadPages(int nP) { nTrayPages_ += nP; }
        };
int PrintJobs::nTrayPages_ = 500; // Definition and initialization -- load paper
int PrintJobs::nJobs_ = 0;
// Definition and initialization -- no job to start with
int main() {

    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages= " << PrintJobs::checkPages() << endl;
    //Jobs = 0
    //PrintJobs job1(10);
    //Pages= 500
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    //Printing 10 pages
    cout << "Pages= " << PrintJobs::checkPages() << endl;
    //Jobs = 1
    {
    PrintJobs job1(30), job2(20);
    //Pages= 490
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    //Printing 30 pages
    cout << "Pages= " << PrintJobs::checkPages() << endl;
    //Printing 20 pages
    PrintJobs::loadPages(100);
    //Jobs = 3
    }
    //Pages= 440
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    //Jobs = 1
    cout << "Pages= " << PrintJobs::checkPages() << endl;
    //Pages= 540
return 0;
}