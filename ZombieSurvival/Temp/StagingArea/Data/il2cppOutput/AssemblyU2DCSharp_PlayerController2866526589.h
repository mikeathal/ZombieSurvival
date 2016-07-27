#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PlayerController::LastTimeFired
	float ___LastTimeFired_2;
	// System.Single PlayerController::PlayerSpeed
	float ___PlayerSpeed_3;
	// UnityEngine.Vector2 PlayerController::PlayerMoveVector
	Vector2_t3525329788  ___PlayerMoveVector_4;
	// UnityEngine.Rigidbody2D PlayerController::PlayerRigidBody
	Rigidbody2D_t3632243084 * ___PlayerRigidBody_5;
	// UnityEngine.Rigidbody2D PlayerController::Bullet
	Rigidbody2D_t3632243084 * ___Bullet_6;
	// System.Single PlayerController::BulletSpeed
	float ___BulletSpeed_7;

public:
	inline static int32_t get_offset_of_LastTimeFired_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___LastTimeFired_2)); }
	inline float get_LastTimeFired_2() const { return ___LastTimeFired_2; }
	inline float* get_address_of_LastTimeFired_2() { return &___LastTimeFired_2; }
	inline void set_LastTimeFired_2(float value)
	{
		___LastTimeFired_2 = value;
	}

	inline static int32_t get_offset_of_PlayerSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___PlayerSpeed_3)); }
	inline float get_PlayerSpeed_3() const { return ___PlayerSpeed_3; }
	inline float* get_address_of_PlayerSpeed_3() { return &___PlayerSpeed_3; }
	inline void set_PlayerSpeed_3(float value)
	{
		___PlayerSpeed_3 = value;
	}

	inline static int32_t get_offset_of_PlayerMoveVector_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___PlayerMoveVector_4)); }
	inline Vector2_t3525329788  get_PlayerMoveVector_4() const { return ___PlayerMoveVector_4; }
	inline Vector2_t3525329788 * get_address_of_PlayerMoveVector_4() { return &___PlayerMoveVector_4; }
	inline void set_PlayerMoveVector_4(Vector2_t3525329788  value)
	{
		___PlayerMoveVector_4 = value;
	}

	inline static int32_t get_offset_of_PlayerRigidBody_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___PlayerRigidBody_5)); }
	inline Rigidbody2D_t3632243084 * get_PlayerRigidBody_5() const { return ___PlayerRigidBody_5; }
	inline Rigidbody2D_t3632243084 ** get_address_of_PlayerRigidBody_5() { return &___PlayerRigidBody_5; }
	inline void set_PlayerRigidBody_5(Rigidbody2D_t3632243084 * value)
	{
		___PlayerRigidBody_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerRigidBody_5, value);
	}

	inline static int32_t get_offset_of_Bullet_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___Bullet_6)); }
	inline Rigidbody2D_t3632243084 * get_Bullet_6() const { return ___Bullet_6; }
	inline Rigidbody2D_t3632243084 ** get_address_of_Bullet_6() { return &___Bullet_6; }
	inline void set_Bullet_6(Rigidbody2D_t3632243084 * value)
	{
		___Bullet_6 = value;
		Il2CppCodeGenWriteBarrier(&___Bullet_6, value);
	}

	inline static int32_t get_offset_of_BulletSpeed_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___BulletSpeed_7)); }
	inline float get_BulletSpeed_7() const { return ___BulletSpeed_7; }
	inline float* get_address_of_BulletSpeed_7() { return &___BulletSpeed_7; }
	inline void set_BulletSpeed_7(float value)
	{
		___BulletSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
