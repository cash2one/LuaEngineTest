/********************************************************************
*
*  ���ƣ�������ͨ�ú����Ľű�ע��
*  ����: 
*
********************************************************************/
#ifndef __SCRIPT_COMMON_REG_H_
#define __SCRIPT_COMMON_REG_H_

extern "C"{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

LUA_API int LuaOpen_ServerCommonLib(lua_State* l);

#endif  //__SCRIPT_COMMON_REG_H_