#ifndef second_server_h
#define second_server_h

#include <Foundation/NSObject.h>
#include <gnustep/base/Array.h>

@interface SecondServer : NSObject
{
  Array *array;
}

- init;
- addRemoteObject: o;
- array;

@end

#endif
