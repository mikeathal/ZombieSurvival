#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieSpawner
struct  ZombieSpawner_t3503245378  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject ZombieSpawner::ZombieToClone
	GameObject_t4012695102 * ___ZombieToClone_2;
	// UnityEngine.Transform ZombieSpawner::ZombieLord
	Transform_t284553113 * ___ZombieLord_3;

public:
	inline static int32_t get_offset_of_ZombieToClone_2() { return static_cast<int32_t>(offsetof(ZombieSpawner_t3503245378, ___ZombieToClone_2)); }
	inline GameObject_t4012695102 * get_ZombieToClone_2() const { return ___ZombieToClone_2; }
	inline GameObject_t4012695102 ** get_address_of_ZombieToClone_2() { return &___ZombieToClone_2; }
	inline void set_ZombieToClone_2(GameObject_t4012695102 * value)
	{
		___ZombieToClone_2 = value;
		Il2CppCodeGenWriteBarrier(&___ZombieToClone_2, value);
	}

	inline static int32_t get_offset_of_ZombieLord_3() { return static_cast<int32_t>(offsetof(ZombieSpawner_t3503245378, ___ZombieLord_3)); }
	inline Transform_t284553113 * get_ZombieLord_3() const { return ___ZombieLord_3; }
	inline Transform_t284553113 ** get_address_of_ZombieLord_3() { return &___ZombieLord_3; }
	inline void set_ZombieLord_3(Transform_t284553113 * value)
	{
		___ZombieLord_3 = value;
		Il2CppCodeGenWriteBarrier(&___ZombieLord_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
