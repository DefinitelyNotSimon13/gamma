#include <jni.h>
#include <string>



#include "globalVariables.hpp";

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_gamma_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = testString;
    return env->NewStringUTF(hello.c_str());
}