/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    struct { 
        unsigned int timestamp : 1; 
        unsigned int akmSuites : 1; 
        unsigned int capabilities : 1; 
        unsigned int channel : 1; 
        unsigned int channelWidth : 1; 
        unsigned int flags : 1; 
        unsigned int htASel : 1; 
        unsigned int htAmpduParams : 1; 
        unsigned int htExtended : 1; 
        unsigned int htInfo : 1; 
        unsigned int htTxBf : 1; 
        unsigned int mcastCipher : 1; 
        unsigned int phyMode : 1; 
        unsigned int reason : 1; 
        unsigned int securityType : 1; 
        unsigned int subreason : 1; 
        unsigned int ucastCipher : 1; 
        unsigned int vhtInfo : 1; 
        unsigned int wpaProtocol : 1; 
        unsigned int isInVol : 1; 
        unsigned int isLinkUp : 1; 
    unsigned int _akmSuites;
    unsigned int _capabilities;
    unsigned int _channel;
    unsigned int _channelWidth;
    unsigned int _flags;
    } _has;
    unsigned int _htASel;
    unsigned int _htAmpduParams;
    unsigned int _htExtended;
    unsigned int _htInfo;
    NSData *_htSupportedMcsSet;
    unsigned int _htTxBf;
    unsigned int _mcastCipher;
    NSData *_oui;
    unsigned int _phyMode;
    unsigned int _reason;
    } _rssiHistorys;
    unsigned int _securityType;
    unsigned int _subreason;
    unsigned long long _timestamp;
    unsigned int _ucastCipher;
    unsigned int _vhtInfo;
    NSData *_vhtSupportedMcsSet;
    unsigned int _wpaProtocol;
    bool_isInVol;
    bool_isLinkUp;
}

@property unsigned int akmSuites;
@property unsigned int capabilities;
@property unsigned int channel;
@property unsigned int channelWidth;
@property unsigned int flags;
@property bool hasAkmSuites;
@property bool hasCapabilities;
@property bool hasChannel;
@property bool hasChannelWidth;
@property bool hasFlags;
@property bool hasHtASel;
@property bool hasHtAmpduParams;
@property bool hasHtExtended;
@property bool hasHtInfo;
@property(readonly) bool hasHtSupportedMcsSet;
@property bool hasHtTxBf;
@property bool hasIsInVol;
@property bool hasIsLinkUp;
@property bool hasMcastCipher;
@property(readonly) bool hasOui;
@property bool hasPhyMode;
@property bool hasReason;
@property bool hasSecurityType;
@property bool hasSubreason;
@property bool hasTimestamp;
@property bool hasUcastCipher;
@property bool hasVhtInfo;
@property(readonly) bool hasVhtSupportedMcsSet;
@property bool hasWpaProtocol;
@property unsigned int htASel;
@property unsigned int htAmpduParams;
@property unsigned int htExtended;
@property unsigned int htInfo;
@property(retain) NSData * htSupportedMcsSet;
@property unsigned int htTxBf;
@property bool isInVol;
@property bool isLinkUp;
@property unsigned int mcastCipher;
@property(retain) NSData * oui;
@property unsigned int phyMode;
@property unsigned int reason;
@property(readonly) int* rssiHistorys;
@property(readonly) unsigned long long rssiHistorysCount;
@property unsigned int securityType;
@property unsigned int subreason;
@property unsigned long long timestamp;
@property unsigned int ucastCipher;
@property unsigned int vhtInfo;
@property(retain) NSData * vhtSupportedMcsSet;
@property unsigned int wpaProtocol;

- (void)addRssiHistory:(int)arg1;
- (unsigned int)akmSuites;
- (unsigned int)capabilities;
- (unsigned int)channel;
- (unsigned int)channelWidth;
- (void)clearRssiHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (bool)hasAkmSuites;
- (bool)hasCapabilities;
- (bool)hasChannel;
- (bool)hasChannelWidth;
- (bool)hasFlags;
- (bool)hasHtASel;
- (bool)hasHtAmpduParams;
- (bool)hasHtExtended;
- (bool)hasHtInfo;
- (bool)hasHtSupportedMcsSet;
- (bool)hasHtTxBf;
- (bool)hasIsInVol;
- (bool)hasIsLinkUp;
- (bool)hasMcastCipher;
- (bool)hasOui;
- (bool)hasPhyMode;
- (bool)hasReason;
- (bool)hasSecurityType;
- (bool)hasSubreason;
- (bool)hasTimestamp;
- (bool)hasUcastCipher;
- (bool)hasVhtInfo;
- (bool)hasVhtSupportedMcsSet;
- (bool)hasWpaProtocol;
- (unsigned long long)hash;
- (unsigned int)htASel;
- (unsigned int)htAmpduParams;
- (unsigned int)htExtended;
- (unsigned int)htInfo;
- (id)htSupportedMcsSet;
- (unsigned int)htTxBf;
- (bool)isEqual:(id)arg1;
- (bool)isInVol;
- (bool)isLinkUp;
- (unsigned int)mcastCipher;
- (void)mergeFrom:(id)arg1;
- (id)oui;
- (unsigned int)phyMode;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (int)rssiHistoryAtIndex:(unsigned long long)arg1;
- (int*)rssiHistorys;
- (unsigned long long)rssiHistorysCount;
- (unsigned int)securityType;
- (void)setAkmSuites:(unsigned int)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setChannel:(unsigned int)arg1;
- (void)setChannelWidth:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasAkmSuites:(bool)arg1;
- (void)setHasCapabilities:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasChannelWidth:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasHtASel:(bool)arg1;
- (void)setHasHtAmpduParams:(bool)arg1;
- (void)setHasHtExtended:(bool)arg1;
- (void)setHasHtInfo:(bool)arg1;
- (void)setHasHtTxBf:(bool)arg1;
- (void)setHasIsInVol:(bool)arg1;
- (void)setHasIsLinkUp:(bool)arg1;
- (void)setHasMcastCipher:(bool)arg1;
- (void)setHasPhyMode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasSubreason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUcastCipher:(bool)arg1;
- (void)setHasVhtInfo:(bool)arg1;
- (void)setHasWpaProtocol:(bool)arg1;
- (void)setHtASel:(unsigned int)arg1;
- (void)setHtAmpduParams:(unsigned int)arg1;
- (void)setHtExtended:(unsigned int)arg1;
- (void)setHtInfo:(unsigned int)arg1;
- (void)setHtSupportedMcsSet:(id)arg1;
- (void)setHtTxBf:(unsigned int)arg1;
- (void)setIsInVol:(bool)arg1;
- (void)setIsLinkUp:(bool)arg1;
- (void)setMcastCipher:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUcastCipher:(unsigned int)arg1;
- (void)setVhtInfo:(unsigned int)arg1;
- (void)setVhtSupportedMcsSet:(id)arg1;
- (void)setWpaProtocol:(unsigned int)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (unsigned int)ucastCipher;
- (unsigned int)vhtInfo;
- (id)vhtSupportedMcsSet;
- (unsigned int)wpaProtocol;
- (void)writeTo:(id)arg1;

@end