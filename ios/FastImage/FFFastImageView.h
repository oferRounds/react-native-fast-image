#import <UIKit/UIKit.h>

#import <React/RCTComponent.h>
#import <React/RCTResizeMode.h>
#import <PINRemoteImage/PINAnimatedImageView.h>

#import "FFFastImageSource.h"

@interface FFFastImageView : PINAnimatedImageView

@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoadStart;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageProgress;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageError;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoad;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoadEnd;
@property (nonatomic, assign) RCTResizeMode resizeMode;
@property (nonatomic, strong) FFFastImageSource *source;
@property (nonatomic, strong) UIColor *imageColor;

@end

