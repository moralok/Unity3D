#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Boundary
struct Boundary_t1794889402;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::tilt
	float ___tilt_3;
	// Boundary PlayerController::boundary
	Boundary_t1794889402 * ___boundary_4;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t1756533147 * ___shot_5;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t3275118058 * ___shotSpawn_6;
	// System.Single PlayerController::fireRate
	float ___fireRate_7;
	// System.Single PlayerController::nextFire
	float ___nextFire_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boundary_4)); }
	inline Boundary_t1794889402 * get_boundary_4() const { return ___boundary_4; }
	inline Boundary_t1794889402 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Boundary_t1794889402 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shot_5)); }
	inline GameObject_t1756533147 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t1756533147 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t1756533147 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shot_5, value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shotSpawn_6)); }
	inline Transform_t3275118058 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t3275118058 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_6, value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
