#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1917318876;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t896427542;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240;
struct WaitForSeconds_t1291133240_marshaled_pinvoke;
// UnityEngine.WrapperlessIcall
struct WrapperlessIcall_t4003675496;
// UnityEngine.WritableAttribute
struct WritableAttribute_t1716006665;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3557331758;
struct YieldInstruction_t3557331758_marshaled_pinvoke;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t471424957;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_UnityString963216403MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Single958209021MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForEndOfFrame1917318876.h"
#include "UnityEngine_UnityEngine_WaitForEndOfFrame1917318876MethodDeclarations.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForFixedUpdate896427542.h"
#include "UnityEngine_UnityEngine_WaitForFixedUpdate896427542MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WrapperlessIcall4003675496.h"
#include "UnityEngine_UnityEngine_WrapperlessIcall4003675496MethodDeclarations.h"
#include "mscorlib_System_Attribute498693649MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WritableAttribute1716006665.h"
#include "UnityEngine_UnityEngine_WritableAttribute1716006665MethodDeclarations.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919MethodDeclarations.h"
#include "mscorlib_System_Threading_Interlocked3007803305MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844.h"
#include "mscorlib_System_Enum2778772662MethodDeclarations.h"
#include "mscorlib_System_Enum2778772662.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m1517109030 (Vector2_t3525329788 * __this, float ___x0, float ___y1, const MethodInfo* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_1(L_0);
		float L_1 = ___y1;
		__this->set_y_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Vector2::Normalize()
extern "C"  void Vector2_Normalize_m195575125 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector2_get_magnitude_m1987058139(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = V_0;
		Vector2_t3525329788  L_3 = Vector2_op_Division_m747627697(NULL /*static, unused*/, (*(Vector2_t3525329788 *)__this), L_2, /*hidden argument*/NULL);
		(*(Vector2_t3525329788 *)__this) = L_3;
		goto IL_0034;
	}

IL_0029:
	{
		Vector2_t3525329788  L_4 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		(*(Vector2_t3525329788 *)__this) = L_4;
	}

IL_0034:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t3525329788  Vector2_get_normalized_m123128511 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	Vector2_t3525329788  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = __this->get_x_1();
		float L_1 = __this->get_y_2();
		Vector2__ctor_m1517109030((&V_0), L_0, L_1, /*hidden argument*/NULL);
		Vector2_Normalize_m195575125((&V_0), /*hidden argument*/NULL);
		Vector2_t3525329788  L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern Il2CppClass* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t958209021_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3928503634;
extern const uint32_t Vector2_ToString_m3859776067_MetadataUsageId;
extern "C"  String_t* Vector2_ToString_m3859776067 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_m3859776067_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t11523773* L_0 = ((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)2));
		float L_1 = __this->get_x_1();
		float L_2 = L_1;
		Il2CppObject * L_3 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t11523773* L_4 = L_0;
		float L_5 = __this->get_y_2();
		float L_6 = L_5;
		Il2CppObject * L_7 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_7);
		String_t* L_8 = UnityString_Format_m427603113(NULL /*static, unused*/, _stringLiteral3928503634, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m128434585 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	{
		float* L_0 = __this->get_address_of_x_1();
		int32_t L_1 = Single_GetHashCode_m65342520(L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_2();
		int32_t L_3 = Single_GetHashCode_m65342520(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern Il2CppClass* Vector2_t3525329788_il2cpp_TypeInfo_var;
extern const uint32_t Vector2_Equals_m3404198849_MetadataUsageId;
extern "C"  bool Vector2_Equals_m3404198849 (Vector2_t3525329788 * __this, Il2CppObject * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Equals_m3404198849_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t3525329788  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B5_0 = 0;
	{
		Il2CppObject * L_0 = ___other0;
		if (((Il2CppObject *)IsInstSealed(L_0, Vector2_t3525329788_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Il2CppObject * L_1 = ___other0;
		V_0 = ((*(Vector2_t3525329788 *)((Vector2_t3525329788 *)UnBox (L_1, Vector2_t3525329788_il2cpp_TypeInfo_var))));
		float* L_2 = __this->get_address_of_x_1();
		float L_3 = (&V_0)->get_x_1();
		bool L_4 = Single_Equals_m2110115959(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = __this->get_address_of_y_2();
		float L_6 = (&V_0)->get_y_2();
		bool L_7 = Single_Equals_m2110115959(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return (bool)G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector2_get_magnitude_m1987058139_MetadataUsageId;
extern "C"  float Vector2_get_magnitude_m1987058139 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_magnitude_m1987058139_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_x_1();
		float L_1 = __this->get_x_1();
		float L_2 = __this->get_y_2();
		float L_3 = __this->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3)))));
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t3525329788  Vector2_get_zero_m199872368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t3525329788  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m1517109030(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  Vector2_op_Multiply_m1738245082 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___a0, float ___d1, const MethodInfo* method)
{
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_2();
		float L_3 = ___d1;
		Vector2_t3525329788  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  Vector2_op_Division_m747627697 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___a0, float ___d1, const MethodInfo* method)
{
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_2();
		float L_3 = ___d1;
		Vector2_t3525329788  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t3525329788  Vector2_op_Implicit_m4083860659 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___v0, const MethodInfo* method)
{
	{
		float L_0 = (&___v0)->get_x_0();
		float L_1 = (&___v0)->get_y_1();
		Vector2_t3525329788  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m1517109030(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Conversion methods for marshalling of: UnityEngine.Vector2
extern "C" void Vector2_t3525329788_marshal_pinvoke(const Vector2_t3525329788& unmarshaled, Vector2_t3525329788_marshaled_pinvoke& marshaled)
{
	marshaled.___x_1 = unmarshaled.get_x_1();
	marshaled.___y_2 = unmarshaled.get_y_2();
}
extern "C" void Vector2_t3525329788_marshal_pinvoke_back(const Vector2_t3525329788_marshaled_pinvoke& marshaled, Vector2_t3525329788& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.___x_1;
	unmarshaled.set_x_1(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.___y_2;
	unmarshaled.set_y_2(unmarshaled_y_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector2
extern "C" void Vector2_t3525329788_marshal_pinvoke_cleanup(Vector2_t3525329788_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Vector2
extern "C" void Vector2_t3525329788_marshal_com(const Vector2_t3525329788& unmarshaled, Vector2_t3525329788_marshaled_com& marshaled)
{
	marshaled.___x_1 = unmarshaled.get_x_1();
	marshaled.___y_2 = unmarshaled.get_y_2();
}
extern "C" void Vector2_t3525329788_marshal_com_back(const Vector2_t3525329788_marshaled_com& marshaled, Vector2_t3525329788& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.___x_1;
	unmarshaled.set_x_1(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.___y_2;
	unmarshaled.set_y_2(unmarshaled_y_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector2
extern "C" void Vector2_t3525329788_marshal_com_cleanup(Vector2_t3525329788_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2926210380 (Vector3_t3525329789 * __this, float ___x0, float ___y1, float ___z2, const MethodInfo* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m3912867704 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m65342520(L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m65342520(L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_2();
		int32_t L_5 = Single_GetHashCode_m65342520(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern Il2CppClass* Vector3_t3525329789_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_Equals_m3337192096_MetadataUsageId;
extern "C"  bool Vector3_Equals_m3337192096 (Vector3_t3525329789 * __this, Il2CppObject * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Equals_m3337192096_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B6_0 = 0;
	{
		Il2CppObject * L_0 = ___other0;
		if (((Il2CppObject *)IsInstSealed(L_0, Vector3_t3525329789_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Il2CppObject * L_1 = ___other0;
		V_0 = ((*(Vector3_t3525329789 *)((Vector3_t3525329789 *)UnBox (L_1, Vector3_t3525329789_il2cpp_TypeInfo_var))));
		float* L_2 = __this->get_address_of_x_0();
		float L_3 = (&V_0)->get_x_0();
		bool L_4 = Single_Equals_m2110115959(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = __this->get_address_of_y_1();
		float L_6 = (&V_0)->get_y_1();
		bool L_7 = Single_Equals_m2110115959(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = __this->get_address_of_z_2();
		float L_9 = (&V_0)->get_z_2();
		bool L_10 = Single_Equals_m2110115959(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return (bool)G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Normalize_m3047997355 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___value0, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t3525329789  L_0 = ___value0;
		float L_1 = Vector3_Magnitude_m995314358(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t3525329789  L_3 = ___value0;
		float L_4 = V_0;
		Vector3_t3525329789  L_5 = Vector3_op_Division_m4277988370(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001a:
	{
		Vector3_t3525329789  L_6 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern Il2CppClass* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t958209021_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1732534255;
extern const uint32_t Vector3_ToString_m3566373060_MetadataUsageId;
extern "C"  String_t* Vector3_ToString_m3566373060 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_m3566373060_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t11523773* L_0 = ((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)3));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		Il2CppObject * L_3 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t11523773* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		Il2CppObject * L_7 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_7);
		ObjectU5BU5D_t11523773* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		Il2CppObject * L_11 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_11);
		String_t* L_12 = UnityString_Format_m427603113(NULL /*static, unused*/, _stringLiteral1732534255, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_Distance_m3366690344_MetadataUsageId;
extern "C"  float Vector3_Distance_m3366690344 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Distance_m3366690344_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		float L_4 = (&___a0)->get_z_2();
		float L_5 = (&___b1)->get_z_2();
		Vector3__ctor_m2926210380((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_6 = (&V_0)->get_x_0();
		float L_7 = (&V_0)->get_x_0();
		float L_8 = (&V_0)->get_y_1();
		float L_9 = (&V_0)->get_y_1();
		float L_10 = (&V_0)->get_z_2();
		float L_11 = (&V_0)->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_Magnitude_m995314358_MetadataUsageId;
extern "C"  float Vector3_Magnitude_m995314358 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Magnitude_m995314358_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___a0)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___a0)->get_y_1();
		float L_4 = (&___a0)->get_z_2();
		float L_5 = (&___a0)->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3525329789  Vector3_get_zero_m2017759730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m2926210380(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3525329789  Vector3_get_up_m4046647141 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m2926210380(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Addition_m695438225 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method)
{
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		float L_4 = (&___a0)->get_z_2();
		float L_5 = (&___b1)->get_z_2();
		Vector3_t3525329789  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Subtraction_m2842958165 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method)
{
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		float L_4 = (&___a0)->get_z_2();
		float L_5 = (&___b1)->get_z_2();
		Vector3_t3525329789  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Multiply_m973638459 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, float ___d1, const MethodInfo* method)
{
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_1();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_2();
		float L_5 = ___d1;
		Vector3_t3525329789  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Division_m4277988370 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, float ___d1, const MethodInfo* method)
{
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_1();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_2();
		float L_5 = ___d1;
		Vector3_t3525329789  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.Vector3
extern "C" void Vector3_t3525329789_marshal_pinvoke(const Vector3_t3525329789& unmarshaled, Vector3_t3525329789_marshaled_pinvoke& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___z_2 = unmarshaled.get_z_2();
}
extern "C" void Vector3_t3525329789_marshal_pinvoke_back(const Vector3_t3525329789_marshaled_pinvoke& marshaled, Vector3_t3525329789& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp);
	float unmarshaled_z_temp = 0.0f;
	unmarshaled_z_temp = marshaled.___z_2;
	unmarshaled.set_z_2(unmarshaled_z_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector3
extern "C" void Vector3_t3525329789_marshal_pinvoke_cleanup(Vector3_t3525329789_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Vector3
extern "C" void Vector3_t3525329789_marshal_com(const Vector3_t3525329789& unmarshaled, Vector3_t3525329789_marshaled_com& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___z_2 = unmarshaled.get_z_2();
}
extern "C" void Vector3_t3525329789_marshal_com_back(const Vector3_t3525329789_marshaled_com& marshaled, Vector3_t3525329789& unmarshaled)
{
	float unmarshaled_x_temp = 0.0f;
	unmarshaled_x_temp = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp);
	float unmarshaled_y_temp = 0.0f;
	unmarshaled_y_temp = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp);
	float unmarshaled_z_temp = 0.0f;
	unmarshaled_z_temp = marshaled.___z_2;
	unmarshaled.set_z_2(unmarshaled_z_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.Vector3
extern "C" void Vector3_t3525329789_marshal_com_cleanup(Vector3_t3525329789_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m4124201226 (WaitForEndOfFrame_t1917318876 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern "C"  void WaitForFixedUpdate__ctor_m2916734308 (WaitForFixedUpdate_t896427542 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m3184996201 (WaitForSeconds_t1291133240 * __this, float ___seconds0, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_pinvoke(const WaitForSeconds_t1291133240& unmarshaled, WaitForSeconds_t1291133240_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1291133240_marshal_pinvoke_back(const WaitForSeconds_t1291133240_marshaled_pinvoke& marshaled, WaitForSeconds_t1291133240& unmarshaled)
{
	float unmarshaled_m_Seconds_temp = 0.0f;
	unmarshaled_m_Seconds_temp = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_pinvoke_cleanup(WaitForSeconds_t1291133240_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_com(const WaitForSeconds_t1291133240& unmarshaled, WaitForSeconds_t1291133240_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1291133240_marshal_com_back(const WaitForSeconds_t1291133240_marshaled_com& marshaled, WaitForSeconds_t1291133240& unmarshaled)
{
	float unmarshaled_m_Seconds_temp = 0.0f;
	unmarshaled_m_Seconds_temp = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_com_cleanup(WaitForSeconds_t1291133240_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C"  void WrapperlessIcall__ctor_m1888400594 (WrapperlessIcall_t4003675496 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C"  void WritableAttribute__ctor_m2205809533 (WritableAttribute_t1716006665 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m539393484 (YieldInstruction_t3557331758 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_pinvoke(const YieldInstruction_t3557331758& unmarshaled, YieldInstruction_t3557331758_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t3557331758_marshal_pinvoke_back(const YieldInstruction_t3557331758_marshaled_pinvoke& marshaled, YieldInstruction_t3557331758& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_pinvoke_cleanup(YieldInstruction_t3557331758_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_com(const YieldInstruction_t3557331758& unmarshaled, YieldInstruction_t3557331758_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t3557331758_marshal_com_back(const YieldInstruction_t3557331758_marshaled_com& marshaled, YieldInstruction_t3557331758& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_com_cleanup(YieldInstruction_t3557331758_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t681132919_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m1066672614(NULL /*static, unused*/, (((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_pinvoke(const MathfInternal_t681132919& unmarshaled, MathfInternal_t681132919_marshaled_pinvoke& marshaled)
{
}
extern "C" void MathfInternal_t681132919_marshal_pinvoke_back(const MathfInternal_t681132919_marshaled_pinvoke& marshaled, MathfInternal_t681132919& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_pinvoke_cleanup(MathfInternal_t681132919_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_com(const MathfInternal_t681132919& unmarshaled, MathfInternal_t681132919_marshaled_com& marshaled)
{
}
extern "C" void MathfInternal_t681132919_marshal_com_back(const MathfInternal_t681132919_marshaled_com& marshaled, MathfInternal_t681132919& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_com_cleanup(MathfInternal_t681132919_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t435505844_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t471424957 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(TypeInferenceRules_t435505844_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2778772662 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t471424957 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t471424957 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__rule_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
