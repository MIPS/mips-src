
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_InputMethodListener__
#define __java_awt_event_InputMethodListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class InputMethodEvent;
          class InputMethodListener;
      }
    }
  }
}

class java::awt::event::InputMethodListener : public ::java::lang::Object
{

public:
  virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent *) = 0;
  virtual void caretPositionChanged(::java::awt::event::InputMethodEvent *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_awt_event_InputMethodListener__
