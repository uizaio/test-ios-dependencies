// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import AVFoundation;
@import AVKit;
@import CoreGraphics;
@import Foundation;
@import GoogleCast;
@import GoogleInteractiveMediaAds;
@import LFLiveKit;
@import MediaPlayer;
@import NKButton;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UizaSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif








SWIFT_CLASS("_TtC7UizaSDK21NKFloatingViewHandler")
@interface NKFloatingViewHandler : NSObject
- (void)backToNormalState;
- (void)updatePosition;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

SWIFT_CLASS("_TtC7UizaSDK14NKProgressView")
@interface NKProgressView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


















/// Class model nền tảng được dùng bởi tất cả các model khác trong framework. Bạn không cần để ý tới class này.
SWIFT_CLASS("_TtC7UizaSDK13UZModelObject")
@interface UZModelObject : NSObject <NSCoding>
/// Khởi tạo class
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Khởi tạo class
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Khởi tạo class
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
@end


/// Class chứa nội dung thông tin quảng cáo
SWIFT_CLASS("_TtC7UizaSDK13UZAdsCuePoint")
@interface UZAdsCuePoint : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK15UZAirPlayButton")
@interface UZAirPlayButton : MPVolumeView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (CGSize)sizeThatFits:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/// Class chứa thông tin của banner item
SWIFT_CLASS("_TtC7UizaSDK12UZBannerItem")
@interface UZBannerItem : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK12UZCastButton")
@interface UZCastButton : NKButton
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK16UZCastingManager")
@interface UZCastingManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface UZCastingManager (SWIFT_EXTENSION(UizaSDK)) <GCKDiscoveryManagerListener>
- (void)didUpdateDeviceList;
@end

@class GCKRemoteMediaClient;
@class GCKMediaStatus;

@interface UZCastingManager (SWIFT_EXTENSION(UizaSDK)) <GCKRemoteMediaClientListener>
- (void)remoteMediaClient:(GCKRemoteMediaClient * _Nonnull)client didStartMediaSessionWithID:(NSInteger)sessionID;
- (void)remoteMediaClient:(GCKRemoteMediaClient * _Nonnull)client didUpdateMediaStatus:(GCKMediaStatus * _Nullable)mediaStatus;
@end

@class GCKRequest;
@class GCKError;

@interface UZCastingManager (SWIFT_EXTENSION(UizaSDK)) <GCKRequestDelegate>
- (void)requestDidComplete:(GCKRequest * _Nonnull)request;
- (void)request:(GCKRequest * _Nonnull)request didFailWithError:(GCKError * _Nonnull)error;
- (void)request:(GCKRequest * _Nonnull)request didAbortWithReason:(GCKRequestAbortReason)abortReason;
@end

@class GCKSessionManager;
@class GCKCastSession;
@class GCKSession;

@interface UZCastingManager (SWIFT_EXTENSION(UizaSDK)) <GCKSessionManagerListener>
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didStartCastSession:(GCKCastSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didResumeCastSession:(GCKCastSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager session:(GCKSession * _Nonnull)session didReceiveDeviceStatus:(NSString * _Nullable)statusText;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didEndSession:(GCKSession * _Nonnull)session withError:(NSError * _Nullable)error;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didSuspendCastSession:(GCKCastSession * _Nonnull)session withReason:(GCKConnectionSuspendReason)reason;
@end


/// Class chứa thông tin của từng chuyên mục
SWIFT_CLASS("_TtC7UizaSDK10UZCategory")
@interface UZCategory : UZModelObject
/// Mô tả object
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK15UZEndscreenView")
@interface UZEndscreenView : UIView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class NSBundle;

SWIFT_CLASS("_TtC7UizaSDK30UZFloatingPlayerViewController")
@interface UZFloatingPlayerViewController : UIViewController
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


/// Class chứa video của các trang nội dung, ví dụ như trang Home
SWIFT_CLASS("_TtC7UizaSDK10UZHomeData")
@interface UZHomeData : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK15UZLiveBadgeView")
@interface UZLiveBadgeView : UIView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (CGSize)sizeThatFits:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/// Class chứa các thông tin về video item
SWIFT_CLASS("_TtC7UizaSDK11UZVideoItem")
@interface UZVideoItem : UZModelObject
/// Mô tả object
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Thông tin một sự kiện đang phát trực tiếp
SWIFT_CLASS("_TtC7UizaSDK11UZLiveEvent")
@interface UZLiveEvent : UZVideoItem
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITapGestureRecognizer;
@class UIButton;

SWIFT_CLASS("_TtC7UizaSDK18UZLiveStreamUIView")
@interface UZLiveStreamUIView : UIView <UITextFieldDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)onTap:(UITapGestureRecognizer * _Nonnull)gesture;
- (void)onButtonSelected:(UIButton * _Nonnull)button;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIGestureRecognizer;
@class UITouch;

@interface UZLiveStreamUIView (SWIFT_EXTENSION(UizaSDK)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC7UizaSDK26UZLiveStreamViewController")
@interface UZLiveStreamViewController : UIViewController
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)start;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class LFLiveSession;
@class LFLiveDebug;

@interface UZLiveStreamViewController (SWIFT_EXTENSION(UizaSDK)) <LFLiveSessionDelegate>
- (void)liveSession:(LFLiveSession * _Nullable)session debugInfo:(LFLiveDebug * _Nullable)debugInfo;
- (void)liveSession:(LFLiveSession * _Nullable)session errorCode:(LFLiveSocketErrorCode)errorCode;
- (void)liveSession:(LFLiveSession * _Nullable)session liveStateDidChange:(LFLiveState)state;
@end


/// Class chứa thông tin trạng thái của LiveVideo
SWIFT_CLASS("_TtC7UizaSDK17UZLiveVideoStatus")
@interface UZLiveVideoStatus : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Class chứa thông tin của menu item
SWIFT_CLASS("_TtC7UizaSDK10UZMenuItem")
@interface UZMenuItem : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// Thông tin số lượng item trong trang
SWIFT_CLASS("_TtC7UizaSDK12UZPagination")
@interface UZPagination : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK8UZPlayer")
@interface UZPlayer : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)showAirPlayDevicesSelection;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class AVPictureInPictureController;

@interface UZPlayer (SWIFT_EXTENSION(UizaSDK)) <AVPictureInPictureControllerDelegate>
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
@end

@class IMAAdsLoader;
@class IMAAdsLoadedData;
@class IMAAdLoadingErrorData;
@class IMAAdsManager;
@class IMAAdEvent;
@class IMAAdError;

@interface UZPlayer (SWIFT_EXTENSION(UizaSDK)) <IMAAdsLoaderDelegate, IMAAdsManagerDelegate>
- (void)adsLoader:(IMAAdsLoader * _Null_unspecified)loader adsLoadedWithData:(IMAAdsLoadedData * _Null_unspecified)adsLoadedData;
- (void)adsLoader:(IMAAdsLoader * _Null_unspecified)loader failedWithErrorData:(IMAAdLoadingErrorData * _Null_unspecified)adErrorData;
- (void)adsManager:(IMAAdsManager * _Null_unspecified)adsManager didReceiveAdEvent:(IMAAdEvent * _Null_unspecified)event;
- (void)adsManager:(IMAAdsManager * _Null_unspecified)adsManager didReceiveAdError:(IMAAdError * _Null_unspecified)error;
- (void)adsManagerDidRequestContentPause:(IMAAdsManager * _Null_unspecified)adsManager;
- (void)adsManagerDidRequestContentResume:(IMAAdsManager * _Null_unspecified)adsManager;
@end


SWIFT_CLASS("_TtC7UizaSDK31UZPlayerContainerViewController")
@interface UZPlayerContainerViewController : UIViewController
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UISlider;

SWIFT_CLASS("_TtC7UizaSDK19UZPlayerControlView")
@interface UZPlayerControlView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)onButtonPressed:(UIButton * _Nonnull)button;
- (void)onTap:(UITapGestureRecognizer * _Nonnull)gesture;
- (void)onDoubleTap:(UITapGestureRecognizer * _Nonnull)gesture;
- (void)progressSliderTouchBegan:(UISlider * _Nonnull)sender;
- (void)progressSliderValueChanged:(UISlider * _Nonnull)sender;
- (void)progressSliderTouchEnded:(UISlider * _Nonnull)sender;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


@interface UZPlayerControlView (SWIFT_EXTENSION(UizaSDK)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC7UizaSDK17UZPlayerLayerView")
@interface UZPlayerLayerView : UIView
- (void)layoutSubviews;
- (void)moviePlayerDidEnd;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK22UZPlayerViewController")
@interface UZPlayerViewController : UIViewController
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7UizaSDK8UZSlider")
@interface UZSlider : UISlider
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (CGRect)trackRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeThatFits:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC7UizaSDK13UZThemeConfig")
@interface UZThemeConfig : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Class chứa thông tin người dùng
SWIFT_CLASS("_TtC7UizaSDK6UZUser")
@interface UZUser : UZModelObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
/// Mô tả object
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// So sánh bằng nhau
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


@class UIActivityViewController;

@interface UZVideoItem (SWIFT_EXTENSION(UizaSDK)) <UIActivityItemSource>
- (id _Nullable)activityViewController:(UIActivityViewController * _Nonnull)activityViewController itemForActivityType:(UIActivityType _Nullable)activityType SWIFT_WARN_UNUSED_RESULT;
- (id _Nonnull)activityViewControllerPlaceholderItem:(UIActivityViewController * _Nonnull)activityViewController SWIFT_WARN_UNUSED_RESULT;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
