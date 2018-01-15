package com.ffmpeg.ndkdemo;

/**
 * Created by ZHONGYUAN on 2018/1/15.
 */

public class JNI {

        static{
            System.loadLibrary("Hello");

        }
    public native String getChars();

}
