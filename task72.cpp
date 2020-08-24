#include<windows.h>
int main(int argc,char *argv[])
{
	WSADATA ws;
	WSAStartup(MAKEWORD(2,2),&ws);
	return 0;
}

