#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	if(argc < 3)
	{
		printf(2, "Invalid Syntax\n");
		exit();
	}
	int process_id = atoi(argv[1]);
	int priority = atoi(argv[2]);
	if(priority >= 0 && priority <= 100)
	{
		printf(1, "pid = %d, priority = %d\n",process_id, priority);
		modifypriority(process_id, priority);
	}
	else
	{	
		printf(2, "Invaid Priority\n");
		exit();
	}	
	exit();
}