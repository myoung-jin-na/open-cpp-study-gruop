#include "StdAfx.h"
#include "AceInit.h"


AceInit::AceInit(void)
{
	WSADATA WSAData;
	WSAStartup(
		MAKEWORD(2,2),
		&WSAData		
		);

	ACE::init();
}

AceInit::~AceInit(void)
{
	ACE::fini();
	WSACleanup();
}
