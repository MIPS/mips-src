
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler__
#define __java_awt_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component$AccessibleAWTComponent;
        class Component$AccessibleAWTComponent$AccessibleAWTFocusHandler;
      namespace event
      {
          class FocusEvent;
      }
    }
  }
}

class java::awt::Component$AccessibleAWTComponent$AccessibleAWTFocusHandler : public ::java::lang::Object
{

public: // actually protected
  Component$AccessibleAWTComponent$AccessibleAWTFocusHandler(::java::awt::Component$AccessibleAWTComponent *);
public:
  virtual void focusGained(::java::awt::event::FocusEvent *);
  virtual void focusLost(::java::awt::event::FocusEvent *);
public: // actually package-private
  ::java::awt::Component$AccessibleAWTComponent * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler__
