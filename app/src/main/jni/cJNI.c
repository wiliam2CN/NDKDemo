//
// Created by ZHONGYUAN on 2018/1/15.
//
#include<stdio.h>
#include<stdlib.h>
#include<jni.h>

jstring Java_com_ffmpeg_ndkdemo_JNI_getChars(JNIEnv *env,jobject obj)
{
    //jstring     (*NewStringUTF)(JNIEnv*, const char*);
     char *str = "Hello JNI";
     jstring s = (*env)->NewStringUTF(env , str);
     return s;
}