/* 
 * File:   ieeep1451.h
 * Author: Kevin
 *
 * Created on February 16, 2017, 1:53 PM
 */

#ifndef IEEEP1451_H
#define IEEEP1451_H

#include "p1451_std.h"

namespace p1451{
    
    enum NodeType {NETWORK = 0, CLIENT, SENSOR, HARDWARE};
    
    
    //Messages
    
    struct Header {
        uint8_t type;
        uint16_t id;
        uint8_t session_no;
        uint16_t sequence_no;
        uint8_t error;
        uint8_t priority;
        uint16_t subsequent_bytes;
    };
    
    class Message {
    private:
        Header h;
        uint8_t* message;
    public:
        String toString(){
            
        }
    };
    
    //UUID
    
    
    //Messages
    
    struct Header {
        uint8_t type;
        uint16_t id;
        uint8_t session_no;
        uint16_t sequence_no;
        uint8_t error;
        uint8_t priority;
        uint16_t subsequent_bytes;
    };
    
    class Message {
    private:
        Header h;
        uint8_t* message;
    public:
        String toString(){
            
        }
    };
    
    //UUID
    
    class p1451_UUID {
    private:
        std_uint128 uuid;
    public:
        std_uint128 get_uuid(){
            return uuid;
        }
    };
    
    //Nodes
    
    class  Node{
    private:
        NodeType type;
        p1451_UUID* uuid;
        
    };
    
    class NodeList {};
    
    
    
}
#endif /* IEEEP1451_H */
