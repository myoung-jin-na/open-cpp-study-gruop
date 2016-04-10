// Streamer.h: interface for the Streamer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STREAMER_H__15C75D88_470B_4D77_9E2A_D1FFA5B1A939__INCLUDED_)
#define AFX_STREAMER_H__15C75D88_470B_4D77_9E2A_D1FFA5B1A939__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ace/Reactor.h"
#include "ace/Event_Handler.h"
#include "ace/SOCK_Stream.h"

class Streamer :public ACE_Event_Handler 
{
public:
	Streamer();
	virtual ~Streamer();
	ACE_HANDLE get_handle (void) const{
		return peer_.get_handle();
	}
    ACE_SOCK_Stream& getStream(){return peer_;}

	int handle_input (ACE_HANDLE fd = ACE_INVALID_HANDLE);

		void	setReactor(ACE_Reactor * mReactor,
                     int priority = ACE_Event_Handler::LO_PRIORITY);
	int handle_close (ACE_HANDLE handle,
                            ACE_Reactor_Mask close_mask);
	void initStart();
private:
	ACE_SOCK_Stream peer_;

};

#endif // !defined(AFX_STREAMER_H__15C75D88_470B_4D77_9E2A_D1FFA5B1A939__INCLUDED_)
