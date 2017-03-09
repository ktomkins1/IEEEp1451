/* 
 * File:   p1451_std.h
 * Author: Kevin
 *
 * Created on February 16, 2017, 2:00 PM
 */

#ifndef P1451_STD_H
#define P1451_STD_H

#include <string.h>
#include <stdint.h>
#include "std/communications.h"
#include "std/networking.h"

typedef int std_uint128;
typedef char * String;
    
//Nodes
namespace p1451{
    enum NodeType {NETWORK = 0, CLIENT, SENSOR, HARDWARE};

    class  Node{
    private:
        NodeType type;
        p1451_UUID* uuid;
    };

    class NodeList {};
}

#endif /* P1451_STD_H */

