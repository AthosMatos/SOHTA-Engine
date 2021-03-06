#pragma once
#include "ModelStrct.h"

class Ground : private Geometry
{	
public:
	Ground();

	void CreateGround(const wchar_t* GrdName, const wchar_t* texpath);
	void UpdateGround(const wchar_t* GrdName,
		XMVECTOR rotaxis, float rot,
		bool ActivateTranslation, XMFLOAT3 pos,
		bool ActivateScale, int size);
	void RenderGround(const wchar_t* GrdName);
	void Release();

private:
	void CreateGrdIndexBuffer();
	void CreateVertexBuffer_Grd();
	void CreateTexture(Model* grd, const wchar_t* texPath);

private:
	static Model* grd;

	static ID3D11Buffer* squareIndexBuffer;
	static ID3D11Buffer* squareVertBuffer;

	UINT stride;
	UINT offset;
};

