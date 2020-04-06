#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
if(argc!=3||!strcmp(argv[1],argv[2]))

	printf("usage:argv[0],[<filename1><filename2>\n");

else if(link(argv[1],argv[2])==0)
	return unlink(argv[1]);

return -1;
}
