/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ctre_phoenix_CANifierJNI */

#ifndef _Included_com_ctre_phoenix_CANifierJNI
#define _Included_com_ctre_phoenix_CANifierJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_new_CANifier
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1new_1CANifier
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetLEDOutput
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetLEDOutput
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetGeneralOutputs
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetGeneralOutputs
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetGeneralOutput
 * Signature: (JIZZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetGeneralOutput
  (JNIEnv *, jclass, jlong, jint, jboolean, jboolean);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetPWMOutput
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetPWMOutput
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_EnablePWMOutput
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1EnablePWMOutput
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetGeneralInputs
 * Signature: (J[Z)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetGeneralInputs
  (JNIEnv *, jclass, jlong, jbooleanArray);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetGeneralInput
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetGeneralInput
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetPWMInput
 * Signature: (JI[D)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetPWMInput
  (JNIEnv *, jclass, jlong, jint, jdoubleArray);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetLastError
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetLastError
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetBatteryVoltage
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetBatteryVoltage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetQuadraturePosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetQuadraturePosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetQuadraturePosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetQuadraturePosition
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetQuadratureVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetQuadratureVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ConfigVelocityMeasurementPeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ConfigVelocityMeasurementPeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ConfigVelocityMeasurementWindow
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ConfigVelocityMeasurementWindow
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ConfigSetCustomParam
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ConfigSetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ConfigGetCustomParam
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ConfigGetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ConfigSetParameter
 * Signature: (JIDIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ConfigSetParameter
  (JNIEnv *, jclass, jlong, jint, jdouble, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ConfigGetParameter
 * Signature: (JIII)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ConfigGetParameter
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetStatusFramePeriod
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetStatusFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_SetControlFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1SetControlFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetFirmwareVersion
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetFirmwareVersion
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_HasResetOccurred
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1HasResetOccurred
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetFaults
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetStickyFaults
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetStickyFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_ClearStickyFaults
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1ClearStickyFaults
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_CANifierJNI
 * Method:    JNI_GetBusVoltage
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_CANifierJNI_JNI_1GetBusVoltage
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif