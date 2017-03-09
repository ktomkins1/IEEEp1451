/* 
 * File:   communications.h
 * Author: Kevin
 *
 * Created on March 9, 2017, 2:01 PM
 */

#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

#include "../p1451_std.h"


namespace 
#define error uint8_t

class commLink{};

error broadcastString(String in, commLink c);
error directString(String in, NetworkNode n, commLink c);



#endif /* COMMUNICATIONS_H */

