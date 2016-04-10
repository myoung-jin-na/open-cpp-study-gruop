// Streamer.cpp: implementation of the Streamer class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Streamer.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
void
Streamer::initStart()
{
	char buf[256]="220 Welcome to MyFTP Server1.0";
	peer_.send(buf, strlen(buf)+1);
}

Streamer::Streamer()
{

}

Streamer::~Streamer()
{

}

int Streamer::handle_input (ACE_HANDLE fd /*= ACE_INVALID_HANDLE*/)
{
	char buf[256];
	ssize_t m=peer_.recv(buf,256);
	if(0==m){return -1;}
	buf[m]=0;
//	MessageBox(NULL,buf,"Title",MB_OK);
//	initStart();
	return 0;
}

void Streamer::setReactor(ACE_Reactor * mReactor, int priority/*= ACE_Event_Handler::LO_PRIORITY*/)
{
	reactor(mReactor);
	reactor()->register_handler(this,ACE_Event_Handler::READ_MASK);

}

int Streamer::handle_close (ACE_HANDLE handle,
                        ACE_Reactor_Mask close_mask)
{
	delete this;
	return 0;
}