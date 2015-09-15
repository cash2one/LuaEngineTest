/********************************************************************
*
*  ���ƣ�lua5.2.4 �ű�����
*  ����: ����lua�ű��ļ��أ�lua����c++��ͺ�����c++����lua�ű�����
*
********************************************************************/
#ifndef __LUA_SCRIPT_ENGN_H_
#define __LUA_SCRIPT_ENGN_H_

extern "C"{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

#include <string>

class TLuaScriptEngn
{
public:
	static TLuaScriptEngn* GetInstance();
	virtual ~TLuaScriptEngn();
	bool Initial(const std::string& sPath);
	bool ReloadAllScript();	
	char* LoadFile(const std::string& sFileName, size_t& iSize);
	void DoCommonScriptCall(const char* sFuncName);
	std::string GetAppPath() { return m_sAppRootPath; }
private:
	TLuaScriptEngn();
	lua_State* LoadAllScript();
	void SetLuaState(lua_State* l);
	char* m_pTempFileBuffer;
	lua_State* m_lua;
	std::string m_sAppRootPath;
};

#endif