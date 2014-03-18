#include <android/log.h>
#include <jni.h>

#include "platform/android/jni/JniHelper.h"

#include "cocos2d.h"
#include "AppDelegate.h"
#include "CCEventType.h"

#define  LOG_TAG    "main"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

using namespace cocos2d;

void cocos_android_app_init (struct android_app* app) {
  LOGD("cocos_android_app_init");
  AppDelegate *pAppDelegate = new AppDelegate();
}
