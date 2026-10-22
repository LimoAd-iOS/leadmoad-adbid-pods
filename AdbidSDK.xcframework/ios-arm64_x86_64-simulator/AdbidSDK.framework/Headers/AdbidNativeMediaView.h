//
//  adbidNativeMediaView.h
//  LeadmoadAdSDK
//
//  Created by youzhadoubao on 2025/9/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AdbidNativeMediaView;
@protocol AdbidNativeMediaViewDelegate <NSObject>

@optional
/**
 准备播放
 */
- (void)nativeMediaViewReadyToPlay:(AdbidNativeMediaView *)mediaView;

/**
 播放完成回调

 @param mediaView 播放器实例
 */
- (void)nativeMediaViewDidPlayFinished:(AdbidNativeMediaView *)mediaView;
/**
 播放失败回调
 */
- (void)nativeMediaView:(AdbidNativeMediaView *)mediaView didPlayFailWithError:(NSError *_Nullable)error;

@end

@interface AdbidNativeMediaView : UIView

/**
 MoskenNativeMediaView 回调对象
 */
@property (nonatomic, weak) id<AdbidNativeMediaViewDelegate> delegate;

/**
 播放视频
 */
- (void)play __attribute__((deprecated("Do nothing now, it will work in a future version")));

/**
 暂停视频，调用 pause 后，需要被暂停的视频广告对象，不会再自动播放，需要调用 play 才能恢复播放。
 */
- (void)pause __attribute__((deprecated("Do nothing now, it will work in a future version")));

/**
 停止播放，并展示第一帧
 */
- (void)stop __attribute__((deprecated("Do nothing now, it will work in a future version")));

/**
 是否循环播放。默认 NO，只播放一遍。
 播完后回到第一帧，并回调 nativeMediaViewDidPlayFinished:。
 设为 YES 后一直循环。需在 registerContainer 之前设置；播放开始后修改，从下一次播完生效。
 */
@property (nonatomic, assign) BOOL videoLooped;

@end

NS_ASSUME_NONNULL_END
