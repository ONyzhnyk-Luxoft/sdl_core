#ifndef NSRPC2COMMUNICATION_BUTTONS_ONBUTTONEVENT_INCLUDE
#define NSRPC2COMMUNICATION_BUTTONS_ONBUTTONEVENT_INCLUDE

#include "JSONHandler/RPC2Notification.h"

#include "../include/JSONHandler/ALRPCObjects/ButtonName.h"
#include "../include/JSONHandler/ALRPCObjects/ButtonEventMode.h"

/*
  interface	NsRPC2Communication::Buttons
  version	1.2
  generated at	Tue Nov 20 13:32:23 2012
  source stamp	Mon Nov 19 10:17:20 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace Buttons
  {

    class OnButtonEvent : public ::NsRPC2Communication::RPC2Notification
    {
    public:
    
      OnButtonEvent(const OnButtonEvent& c);
      OnButtonEvent(void);
    
      OnButtonEvent& operator =(const OnButtonEvent&);
    
      virtual ~OnButtonEvent(void);
    
      bool checkIntegrity(void);
    
// getters
      const NsAppLinkRPC::ButtonName& get_name(void);

      const NsAppLinkRPC::ButtonEventMode& get_mode(void);


// setters
      bool set_name(const NsAppLinkRPC::ButtonName& name);

      bool set_mode(const NsAppLinkRPC::ButtonEventMode& mode);


    private:

      friend class OnButtonEventMarshaller;

      NsAppLinkRPC::ButtonName name;
      NsAppLinkRPC::ButtonEventMode mode;

    };
  }
}

#endif
