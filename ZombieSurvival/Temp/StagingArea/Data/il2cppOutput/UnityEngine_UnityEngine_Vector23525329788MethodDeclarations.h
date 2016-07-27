﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m1517109030 (Vector2_t3525329788 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::Normalize()
extern "C"  void Vector2_Normalize_m195575125 (Vector2_t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t3525329788  Vector2_get_normalized_m123128511 (Vector2_t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m3859776067 (Vector2_t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m128434585 (Vector2_t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m3404198849 (Vector2_t3525329788 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m1987058139 (Vector2_t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t3525329788  Vector2_get_zero_m199872368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  Vector2_op_Multiply_m1738245082 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  Vector2_op_Division_m747627697 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t3525329788  Vector2_op_Implicit_m4083860659 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector2_t3525329788;
struct Vector2_t3525329788_marshaled_pinvoke;

extern "C" void Vector2_t3525329788_marshal_pinvoke(const Vector2_t3525329788& unmarshaled, Vector2_t3525329788_marshaled_pinvoke& marshaled);
extern "C" void Vector2_t3525329788_marshal_pinvoke_back(const Vector2_t3525329788_marshaled_pinvoke& marshaled, Vector2_t3525329788& unmarshaled);
extern "C" void Vector2_t3525329788_marshal_pinvoke_cleanup(Vector2_t3525329788_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector2_t3525329788;
struct Vector2_t3525329788_marshaled_com;

extern "C" void Vector2_t3525329788_marshal_com(const Vector2_t3525329788& unmarshaled, Vector2_t3525329788_marshaled_com& marshaled);
extern "C" void Vector2_t3525329788_marshal_com_back(const Vector2_t3525329788_marshaled_com& marshaled, Vector2_t3525329788& unmarshaled);
extern "C" void Vector2_t3525329788_marshal_com_cleanup(Vector2_t3525329788_marshaled_com& marshaled);
