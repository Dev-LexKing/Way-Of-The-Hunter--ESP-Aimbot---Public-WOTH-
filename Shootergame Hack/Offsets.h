#pragma once
#include "globals.h"

namespace Offsets
{
	enum Offset : DWORD64
	{
		/*	General Things	*/
		GWORLD = 0x00B8, //need//
		gameInstance = 0x0080, //need//
		persistentLevel = 0x0030, //need//
		localPlayers = 0x0038, //need//
		actorsArray = 0x0238, //need//
		actorCount = 0xA0, //need//
		objectID = 0x18, //need//

		/*	Actor Specific		*/
		playerController = 0x04C0, //need//
		APawn = 0x258, // usually 0x258
		RootComponent = 0x130, // usually 0x130

		/*	RootComponent Specific	*/
		componentToWorld = 0x014C, //need//
		Translation = 0x0323,	// (x, y, z) //need//

		/*	Game Pawn Specific	*/
		pawnHealth = 0x00C0, //need//
		CurrentWeapon = 0x4E8, //need
		RunningSpeedModifier = 0x0504, //need//
		IsTargeting = 0x620, //need//

		/*	Weapon Specific		*/
		currentAmmo = 0x474, //need//

		/*	Camera	Offsets		*/
		CameraManager = 0x0C08, //need//
		cameraCachePrivate = 0x1A60, //need//
		POV = 0x0EB8, //need//
		cameraVector = 0x0, //need//
		cameraRotation = 0xC, //need// 
		cameraFOV = 0x18 //need//
	};
}