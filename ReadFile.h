#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class used to read text from a file
/*!
 * The ReadFile class accepts a String through the constructor
 * The class uses this string to create a ifstream variable
 * It also initializes the _eof and closed variables
 * The original String is not affected
 */
class ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   
   public:
//! The constructor accepts a String to be used as the file name for the created ifstream (The String is not affected)
   ReadFile(const char* file_name);
//! The destructor
   ~ReadFile();
//! Returns the bool value true or false dependant on whether the end of file has been reached
   bool eof();
//! closes the ifstream and returns the bool value true
   void close();
//! reads one line from the ifstream file and returns that value as a String
   String* readLine();
};

#endif
