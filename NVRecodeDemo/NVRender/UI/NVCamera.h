//
//  NVCamera.h
//  NVRecodeDemo
//
//  Created by Mac on 2018/6/29.
//

#import "NVRenderObject.h"
#import "NVCIFilter.h"

typedef NS_ENUM(NSInteger, NVCameraMode) {
    CAMERA_FRONT,           // 前置摄像头
    CAMERA_BACK,            // 后置摄像头
};

@interface NVCamera : NVRenderObject

- (instancetype)initWithDevicePosition:(NVCameraMode)camera;

- (void)addCIFilter:(NVCIFilter *)filter;

- (void)destory;

@end
