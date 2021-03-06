/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDITesterCertTestFinish : PBCodable <NSCopying> {
    NSString * _accessoryName;
    NSString * _accessoryType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int testStatus : 1; 
    }  _has;
    NSString * _testName;
    unsigned int  _testStatus;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSString *accessoryType;
@property (nonatomic, readonly) BOOL hasAccessoryName;
@property (nonatomic, readonly) BOOL hasAccessoryType;
@property (nonatomic, readonly) BOOL hasTestName;
@property (nonatomic) BOOL hasTestStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *testName;
@property (nonatomic) unsigned int testStatus;
@property (nonatomic) unsigned long long timestamp;

- (id)accessoryName;
- (id)accessoryType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAccessoryName;
- (BOOL)hasAccessoryType;
- (BOOL)hasTestName;
- (BOOL)hasTestStatus;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setAccessoryType:(id)arg1;
- (void)setHasTestStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTestName:(id)arg1;
- (void)setTestStatus:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)testName;
- (unsigned int)testStatus;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
