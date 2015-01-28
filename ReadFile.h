#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;
//Last edit by Anthony
struct ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   
   public:
   ReadFile(const char* file_name);
   ~ReadFile();
   bool eof();
   void close();
   String* readLine();
};

#endif
