#pragma once
#include "Object.h"
#include "Engine/Modelclass.h"

class Actor :
	public Object
{
public:
	Actor(vector3 pos, vector3 rot, float m, unsigned int tCount);

	unsigned int getID() const;
	bool isPhysics() const;
	vector3 getPosition() const;
	vector3 getRotation() const;
	float getMass() const;

	unsigned int getTextureCount() const;
	ModelClass** getModel() const;
	wstring* getTexture() const;
	string* getVertex() const;

	void setPhysics(bool bphys);
	void setPosition(vector3 pos);
	void setRotation(vector3 rot);
	void setMass(float m);

	void setModel(wstring texture, string vertex);

protected:
	bool bPhysics;
	vector3 position;
	vector3 rotation;
	float mass;

	ModelClass** model;
	unsigned int textureCount;

	wstring* texture;
	string* vertex;
};

