/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureStreamSettings : NSObject {
    BWBracketSettings * _bracketSettings;
    int  _captureType;
    NSString * _portType;
    NSArray * _validBracketedCaptureSequenceNumbers;
}

@property (nonatomic, readonly) BWBracketSettings *bracketSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) int expectedFrameCount;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) NSArray *validBracketedCaptureSequenceNumbers;

- (id)bracketSettings;
- (int)captureType;
- (void)dealloc;
- (id)description;
- (int)expectedFrameCount;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 bracketSettings:(id)arg3 validBracketedCaptureSequenceNumbers:(id)arg4;
- (id)portType;
- (id)validBracketedCaptureSequenceNumbers;

@end
