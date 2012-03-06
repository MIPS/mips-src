
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_LineInputStream__
#define __gnu_java_net_LineInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
          class LineInputStream;
      }
    }
  }
}

class gnu::java::net::LineInputStream : public ::java::io::InputStream
{

public:
  LineInputStream(::java::io::InputStream *);
  LineInputStream(::java::io::InputStream *, ::java::lang::String *);
  virtual jint read();
  virtual jint read(JArray< jbyte > *);
  virtual jint read(JArray< jbyte > *, jint, jint);
  virtual ::java::lang::String * readLine();
private:
  jint indexOf(JArray< jbyte > *, jint, jbyte);
public: // actually protected
  ::java::io::InputStream * __attribute__((aligned(__alignof__( ::java::io::InputStream)))) in;
private:
  ::java::io::ByteArrayOutputStream * buf;
  ::java::lang::String * encoding;
  jboolean eof;
  jboolean blockReads;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_LineInputStream__
