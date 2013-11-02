#include "mainActivity.h"
#include <android/log.h>

//==============================
// Declarations
//==============================
#define LOG_TAG "mainActivity.cpp"
#define DPRINTF(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define IPRINTF(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define EPRINTF(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

JNIEXPORT void JNICALL JNICALL Java_org_es_ndkexperiments_MainActivity_cppFunction
(JNIEnv *, jobject)
{
    DPRINTF( "%s\n", __FUNCTION__ );
    DPRINTF( "This is a debug message coming from my C++ code!\n");
}
