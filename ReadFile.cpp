#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}

bool ReadFile::eof(ReadFile* rf)
{
   return _eof;
}

void ReadFile::close(ReadFile* rf)
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine(ReadFile* rf)
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
