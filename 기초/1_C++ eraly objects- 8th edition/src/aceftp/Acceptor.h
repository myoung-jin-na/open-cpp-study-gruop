// Acceptor.h: interface for the Acceptor class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ACCEPTOR_H__74D27DEB_F0C8_4F4C_8271_ECB749C97F8C__INCLUDED_)
#define AFX_ACCEPTOR_H__74D27DEB_F0C8_4F4C_8271_ECB749C97F8C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#if _WINDOWS
#if _DEBUG
#pragma comment(lib, "aced.lib")
#else
#pragma comment(lib, "ace.lib")
#endif
#endif

#include "ace/Reactor.h"
#include "ace/Event_Handler.h"
#include "ace/SOCK_Acceptor.h"
#include "Streamer.h"

class Acceptor:public ACE_Event_Handler
{
public:
	Acceptor();
	virtual ~Acceptor();

	void	setReactor(ACE_Reactor * mReactor,
                     int priority = ACE_Event_Handler::LO_PRIORITY);

	ACE_HANDLE get_handle (void) const{
		return acceptor_.get_handle();
	}

	int handle_input (ACE_HANDLE fd = ACE_INVALID_HANDLE);

	int handle_close (ACE_HANDLE handle,
                            ACE_Reactor_Mask close_mask);


	int open(const char* mAddr);
private:
	ACE_SOCK_Acceptor acceptor_;
};

#endif // !defined(AFX_ACCEPTOR_H__74D27DEB_F0C8_4F4C_8271_ECB749C97F8C__INCLUDED_)
