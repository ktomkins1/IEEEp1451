/* 
 * File:   ieeep1451.h
 * Author: Kevin
 *
 * Created on February 16, 2017, 1:53 PM
 */

#ifndef IEEEP1451_H
#define IEEEP1451_H

#include "p1451_std.h"

namespace p1451_apiv0_1 {
    
    enum NodeType {NETWORK = 0, CLIENT, SENSOR, HARDWARE};
    
    class p1451_UUID {
    private:
        std_uint128 uuid;
    public:
        std_uint128 get_uuid(){
            return uuid;
        }
    };
    class  Node{
    private:
        NodeType type;
        p1451_UUID* uuid;
        
    };
    class NodeList {};
    struct ReturnCode {};
    struct Response {
        int type;
        NodeList* nl;
        ReturnCode* rc;
    };
    struct Request {
        Node* requestor;
        String request;
    };
    
    
}
#endif /* IEEEP1451_H */

