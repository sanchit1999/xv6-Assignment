#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  for(int j=1;j<argc;j++)
  {	
  	  int len = 0;
	  while(argv[j][len] != '\0') len++;
	  for(int i=0;i<len;i++)
	  {
	   	if(argv[j][i] - 'a' >= 0 && argv[j][i] - 'a' < 26)
	   	{
	   		argv[j][i] -= 'a';
	   		argv[j][i] += 'A';
	   	}
	   	else if(argv[j][i] - 'A' >= 0 && argv[j][i] - 'A' < 26)
	   	{
	   		argv[j][i] -= 'A';
	   		argv[j][i] += 'a';
	   	} 
	  }
  	  printf(1, "%s ", argv[j]);
  }	    
  printf(1, "\n");
  exit();
}
