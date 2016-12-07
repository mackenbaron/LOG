#ifndef ___LOG___
#define ___LOG___

//#define log1(userDescription)		
#define log1(userDescription)		_log1(__FILE__, __LINE__, __FUNCTION__, userDescription)


#ifdef __cplusplus
extern "C" {
#endif

int SetLogDir(const char* dir);

//清除超过指定天数的日志，SetLogDir之后调用
int ClearLog(const unsigned int days);

//基础log函数  输出： [年-月-日-时-分-秒]文件-行号-函数名称:
int _log(const char* fileName, int line, const char* funcName, const char *fmt, ...);

//自定义log函数1  基础log函数输出 + syserrno:系统错误描述,userDescription:自定义描述
int _log1(const char* fileName, int line, const char* funcName, const char* userDescription);


#ifdef __cplusplus
}
#endif

#endif
