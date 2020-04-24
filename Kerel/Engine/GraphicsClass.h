#pragma once
#include <windows.h>
#include "d3dclass.h"
#include "cameraClass.h"
#include "modelclass.h"
#include "ColorShaderClass.h"
#include "TextureShaderClass.h"
#include "LightShaderClass.h"
#include "LightClass.h"
#include "../Actor.h"
#include <vector>

const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

class GraphicsClass
{
public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();

	bool Initialize(int, int, HWND, vector <Actor*>);
	void Shutdown();
	bool Frame();

private:
	bool Render(float);

private:
	D3DClass* m_D3D;
	CameraClass* m_Camera;
	vector<Actor*> m_Actor;
	LightShaderClass* m_LightShader;
	LightClass* m_Light;
};


