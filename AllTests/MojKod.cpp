#include "mojkod.h"

#include <stdio.h>
#include <stdarg.h>
#include "CppUTest/TestHarness.h"

//static SimpleString* buffer;

TEST_GROUP(MojKod)
{ 
/*
    static int output_method(const char* output, ...)
    {
	va_list arguments;
	va_start(arguments, output);
	*buffer = VStringFromFormat(output, arguments);
	va_end(arguments);
	return 1;
    }*/
    void setup()
    {
/*	buffer = new SimpleString();
        UT_PTR_SET(PrintFormated, &output_method);
*/
    }
    void teardown()
    {
//        delete buffer;
    }
};

TEST(MojKod, PrintOk)
{
    int *w;
    int array[5] = {4,3,2,1,0};
    int arrayTrue[5] = {0,1,2,3,4};
    int n = 5;
    w=wynik(array);
    int err = 0;
    int c;
    
    for ( c = 0 ; c < n ; c++ ){
      if(w[c]!=arrayTrue[c])
      err = 1;
    }
    
   
    CHECK(err==0);
     if (err==1)
       FAIL("Error");
//    STRCMP_EQUAL("Hello World!\n", buffer->asCharString());
}
