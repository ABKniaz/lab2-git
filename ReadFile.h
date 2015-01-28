#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

struct ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   void close(ReadFile* rf);
   
   public:
   ReadFile(const char* file_name);
   ~ReadFile();
   bool eof(ReadFile* rf);
   String* readLine(ReadFile* rf);
};

#endif
