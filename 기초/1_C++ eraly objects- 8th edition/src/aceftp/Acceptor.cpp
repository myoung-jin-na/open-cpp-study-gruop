// Acceptor.cpp: implementation of the Acceptor class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Acceptor.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Acceptor::	Acceptor()
{
}

Acceptor::~Acceptor()
{

}

void Acceptor::	setReactor(ACE_Reactor * pSetReactor,
                     int priority /*= ACE_Event_Handler::LO_PRIORITY*/)
{
	reactor(pSetReactor);
	reactor()->register_handler(this,ACE_Event_Handler::ACCEPT_MASK);
}

int Acceptor::handle_input (ACE_HANDLE fd/*= ACE_INVALID_HANDLE*/)
{
	Streamer* p = new Streamer;

	if (acceptor_.accept(p->getStream())==-1)
	{
		delete p;
		return 0;
	}

	p->setReactor(reactor());

	p->initStart();
	return 0;
}

int Acceptor::handle_close (ACE_HANDLE handle,
                            ACE_Reactor_Mask close_mask)
{
	delete this;     // �ش� Ŭ������ ���� ���� ������ ���� �޸� ������ ������ �Ѵ�.
	return 0;
}

int Acceptor::open(const char* mAddr)

{
	return acceptor_.open(ACE_INET_Addr(mAddr));
}
