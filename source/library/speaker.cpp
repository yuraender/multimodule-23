#include "speaker.h"
#include <stdio.h>

static int LogFormattedNameAge( const char* name, const char* age )
{
  printf("Hi, my name is %s I'm %s year old. What about you?\n", name, age );
  return 0;
}

int LogNameAge( const char* name, const char* age )
{
  if( name && age )
  {  	
  	return LogFormattedNameAge( name, age );
  }
  else
  {
  	printf("*** INVALID PARAMETERS ***\n" );
  	return 1;
  }
}