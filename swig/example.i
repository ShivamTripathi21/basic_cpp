%module example
 %{
 / Put header files here or function declarations like below /
 #include "example.h"
 #include "Word.h"
 %}

 %include "std_string.i"
 %include "example.h" 
 %include "Word.h" 
