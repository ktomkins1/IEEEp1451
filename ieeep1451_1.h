/* 
 * File:   ieeep1451_1.h
 * Author: Kevin
 *
 * Created on February 14, 2017, 3:09 PM
 */

#ifndef IEEEP1451_1_H
#define IEEEP1451_1_H

#include "ieeep1451.h"

namespace p1451_apiv0_1 {
    
    
    /*
     * Discovery Services
     */
    
    Message NCAPServerRegister();
    Message NCAPServerUnRegister();
    Message NCAPTIMRegister();
    Message NCAPTransducerRegister();
    Message NCAPServerDiscover();
    Message NCAPTIMDiscover();
    Message NCAPTransducerDiscover();
    Message NCAPClientJoin();
    Message NCAPClientUnJoin();
    Message GroupServerRoster();
    Message GroupClientRoster();
    
    /*
     * Transducer Access
     */
    //Synchronous Read
    Message ReadTransducerSampleDataFromAChannelOfATIM();
    Message ReadTransducerBlockDataFromAChannelOfATIM();
    Message ReadTransducerSampleDataFromMulitipleChannelsOfATIM();
    Message ReadTransducerBlockDataFromMulitipleChannelsOfATIM();
    Message ReadTransducerSampleDataFromMultipleChannelsOfMultipleTIMs();
    Message ReadTransducerBlockDataFromMultipleChannelsOfMultipleTIMs();
    //Synchronous Write
    Message WriteTransducerSampleDataFromAChannelOfATIM();
    Message WriteTransducerBlockDataFromAChannelOfATIM();
    Message WriteTransducerSampleDataFromMulitipleChannelsOfATIM();
    Message WriteTransducerBlockDataFromMulitipleChannelsOfATIM();
    Message WriteTransducerSampleDataFromMultipleChannelsOfMultipleTIMs();
    Message WriteTransducerBlockDataFromMultipleChannelsOfMultipleTIMs();
    //Asynchronous Read
    Message ReadTransducerBlockDataFromAChannelOfATIM();
    Message ReadTransducerStreamDataFromAChannelOfATIM();
    Message ReadTransducerBlockDataFromMultipleChannelsOfATIM();
    Message ReadTransducerBlockDataFromMultipleChannelOfMultipleTIMs();
    //Secure Read
    Message SecureReadTransducerSampleDataFromAChannelOfATIM();
    Message SecureReadTransducerBlockDataFromAChannelOfATIM();
    Message SecureReadTransducerSampleDataFromMultipleChannelsOfATIM();
    Message SecureReadTransducerBlockDataFromMultipleChannelsOfATIM();
    Message SecureReadTransducerSampleDataFromMultipleChannelsOfMultipleTIMs();
    Message SecureReadTransducerBlockDataFromMultipleChannelsOfMultipleTIMs();
    //Secure Write
    Message SecureWriteTransducerSampleDataFromAChannelOfATIM();
    Message SecureWriteTransducerBlockDataFromAChannelOfATIM();
    Message SecureWriteTransducerSampleDataFromMulitipleChannelsOfATIM();
    Message SecureWriteTransducerBlockDataFromMulitipleChannelsOfATIM();
    Message SecureWriteTransducerSampleDataFromMultipleChannelsOfMultipleTIMs();

    /*
     * TEDS Access
     */
    
    Message ReadTIMMetaTEDS();
    Message WriteTIMMetaTEDS();
    Message ReadTransducerChannelTEDS();
    Message WriteTransducerChannelTEDS();
    Message ReadUserTransducerNameTEDS();
    Message WriteUserTransducerNameTEDS();
    Message Read1451Dot5802Dot11PhyTEDS();
    Message Write1451Dot5802Dot11PhyTEDS();
    Message Read1451Dot5BlueToothPhyTEDS();
    Message Write1451Dot5BlueToothPhyTEDS();
    Message Read1451Dot5ZigBeePhyTEDS();
    Message Write1451Dot5ZigBeePhyTEDS();
    Message Read1451Dot56LOWPANPhyTEDS();
    Message Write1451Dot56LOWPANPhyTEDS();
    Message Read1451Dot2PhyTEDS();
    Message Write1451Dot2PhyTEDS();
    Message ReadTIMMetaIdTEDS();
    Message WriteTIMMetaIdTEDS();
    Message ReadTIMGeoLocationTEDS();
    Message WriteTIMGeoLocationTEDS();
    Message ReadTransducerChannelMetaIdTEDS();
    Message WriteTransducerChannelMetaIdTEDS();

    
    /*
     * Event Notification
     */
    
    SubscribeANewTIM
    AnnounceANewTIM
    SubscribeATIMDeparture
    AnnounceADepartedTIM
    SubscribeSensorAlertFromOneChannelOfOneTIM
    NotifySensorAlert
    SubscribeSensorAlertFromMultipleChannelsOfOneTIM
    NotifySensorAlert
    SubscribeSensorAlertFromMultipleChannelsOfMultipleTIMs
    NotifySensorAlert
    SetupASensorAlertThresholdForOneChannelOfOneTIM
    SetupSensorAlertThresholdForMultipleChannelsOfOneTIM
    SetupSensorAlertThresholdForOneChannelOfOneTIM

    
    /*
     * Transducer Management
     */
    
    
}

#endif /* IEEEP1451_1_H */

