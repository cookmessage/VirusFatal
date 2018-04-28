/* DO NOT EDIT THIS FILE - it is machine generated */
#include "java\\jni.h"
/* Header for class AvCheckManager */

#ifndef _Included_JNI_FUNC
#define _Included_JNI_FUNC
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JNI
 * Method:    loadAvConfig
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_CheckManager_JNI_loadAvConfig
  (JNIEnv *, jclass);

/*
 * Class:     JNI
 * Method:    getCpuUsage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_CheckManager_JNI_getCpuUsage
  (JNIEnv *, jclass);

/*
 * Class:     JNI
 * Method:    preCreateScanProcess
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_CheckManager_JNI_preCreateScanProcess
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JNI
 * Method:    getFileEntropy
 * Signature: (Ljava/lang/String;)D
 
JNIEXPORT jdouble JNICALL Java_CheckManager_JNI_getFileEntropy
  (JNIEnv *, jclass, jstring);
*/
/*
 * Class:     JNI
 * Method:    preCreateScanProcessClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_CheckManager_JNI_preCreateScanProcessClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     JNI
 * Method:    createNewScanProcess
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_CheckManager_JNI_createNewScanProcess
  (JNIEnv *, jclass, jstring, jstring,jint);

/*
 * Class:     JNI
 * Method:    isProcessFinished
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_isProcessFinished
  (JNIEnv *, jclass, jint);

/*
 * Class:     JNI
 * Method:    writeProcessOutputData
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_writeProcessOutputData
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     JNI
 * Method:    freePROCESSStruct
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_CheckManager_JNI_freePROCESSStruct
  (JNIEnv *, jclass, jint);

/*
 * Class:     JNI
 * Method:    getTimeStamp
 * Signature: ()J
 */
//JNIEXPORT jlong JNICALL Java_CheckManager_JNI_getTimeStamp
//  (JNIEnv *, jclass);


//JNIEXPORT void JNICALL Java_CheckManager_JNI_grabWindowsText(JNIEnv *env, jclass jobj, jint pi);


//JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_clickElemByName(JNIEnv *env, jclass jobj, jstring elemName,jint pi);
//JNIEXPORT jstring JNICALL Java_CheckManager_JNI_getGrabText(JNIEnv *env, jclass jobj, jint pi);
JNIEXPORT void JNICALL Java_CheckManager_JNI_terminateProcess(JNIEnv *env, jclass jobj,jint pi);
JNIEXPORT void JNICALL Java_CheckManager_JNI_InitEngine(JNIEnv *env, jclass jobj);
JNIEXPORT void JNICALL Java_CheckManager_JNI_InitHookEngine(JNIEnv *env, jclass jobj,jstring HookedExeNames);

JNIEXPORT jstring JNICALL Java_CheckManager_JNI_getInjectedGrabText(JNIEnv *env, jclass jobj, jint pi);
JNIEXPORT void JNICALL Java_CheckManager_JNI_dropInjectedGrabText(JNIEnv *env, jclass jobj, jint pi);
JNIEXPORT jint JNICALL Java_CheckManager_JNI_createNewInjectedScanProcess(JNIEnv *env , jclass jobj, jstring avCmd,jstring avStartDir);

JNIEXPORT jint JNICALL Java_CheckManager_JNI_createNewShellScanProcess(JNIEnv *env , 
												jclass jobj, 
												jstring avCLSID,
												jstring checkFilePath,
												jint menuID,
												jstring avExeName,
												jstring MainWinTitle,
												jstring MainWinClass);

JNIEXPORT void JNICALL Java_CheckManager_JNI_StopHookEngine(JNIEnv *env, jclass jobj);

JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_sendMessage(JNIEnv *env, 
									  jclass jobj, 
									  jstring elemName,
									  jstring className,
									  jint elemID,
									  jint msg,
									  jint wParam,
									  jint lParam,
									  jint pi);

//jboolean JNICALL Java_CheckManager_JNI_clickElemByID(JNIEnv *env, jclass jobj, jstring elemID,jint pi);

JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_isShellAvExist(JNIEnv *env, jclass jobj,jstring avCLSID);

JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_clickByString(JNIEnv *env, jclass jobj, jstring elemName, jint pi);


//JNIEXPORT jint JNICALL Java_CheckManager_JNI_createDummySpi(JNIEnv *env, jclass jobj,jstring avExeName,
//												jstring MainWinTitle,
//												jstring MainWinClass);

JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_tray_DblClick(JNIEnv *env, jclass jobj,jstring ttPattern,jstring fileName);
JNIEXPORT jstring JNICALL Java_CheckManager_JNI_tray_GetTooltipText(JNIEnv *env, jclass jobj,jstring ttPattern,jstring fileName);
JNIEXPORT jint JNICALL Java_CheckManager_JNI_createDummySpi(JNIEnv *env, jclass jobj,
												  jstring avExeName,
												jstring MainWinTitle,
												jstring MainWinClass);
JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_tray_TrackPopupMenu(JNIEnv *env, jclass jobj,jstring ttPattern,jstring fileName);



JNIEXPORT jstring JNICALL Java_CheckManager_JNI_getClipboardText(JNIEnv *env, jclass jobj);
JNIEXPORT jstring JNICALL Java_CheckManager_JNI_tray_GetMenuText(JNIEnv *env, jclass jobj,jstring clickType,jint count,jstring fileName,jstring tooltipRegEx);
JNIEXPORT jstring JNICALL Java_CheckManager_JNI_getWinTitle(JNIEnv *env, jclass jobj,jstring fileName,jstring winTitle);
JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_waitWin(JNIEnv *env, jclass jobj,jstring fileName,jstring winTitle);
JNIEXPORT jboolean JNICALL Java_CheckManager_JNI_menuClick(JNIEnv *env, jclass jobj,jstring fileName,jstring itemPath,jstring type,jstring winTitle);
JNIEXPORT jstring JNICALL Java_CheckManager_JNI_regGetValue(JNIEnv *env, jclass jobj,jstring key,jstring path);
JNIEXPORT jstring JNICALL Java_CheckManager_JNI_menuGetItemState(JNIEnv *env, jclass jobj,jstring fileName,jstring itemPath,jstring winTitle);
JNIEXPORT jstring JNICALL Java_CheckManager_JNI_getProcessOutputData(JNIEnv *env, jclass jobj,jint pi);

















#ifdef __cplusplus
}
#endif
#endif