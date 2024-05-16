#include <iostream>
#include "gflags/gflags.h"

DEFINE_string(operation,"sum", "sum or sub");
DEFINE_int32(val1,0,"first value");
DEFINE_int32(val2,0,"second value");



int main(int argc, char *argv[])
{
   
    
    
    gflags::ParseCommandLineFlags(&argc, &argv, true);
 
  int res ;
  
  
  if (FLAGS_operation == "sum") {
  	res = FLAGS_val1 + FLAGS_val2 ;
  } else {
  	res = FLAGS_val1 - FLAGS_val2 ;
 }
   if (FLAGS_operation != "sum" && FLAGS_operation != "sub") {
  	FLAGS_operation = "sum";
 }
 std::cout <<"result : "<< res << std::endl;
 return 0;
 }
