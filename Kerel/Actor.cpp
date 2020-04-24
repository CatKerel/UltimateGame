#include "Actor.h"

Actor::Actor(vector3 pos, vector3 rot, float m, unsigned int tCount) 
{
	ID = 0;
	bPhysics = true;
	position = pos;
	rotation = rot;
	if (m > 0) mass = m;
	else m = 1.f;
	textureCount = tCount;
	model = new ModelClass* [textureCount];
	for (int i = 0; i < textureCount; i++) model[i] = new ModelClass;
	texture = new wstring[textureCount];
	vertex = new string[textureCount];
}

unsigned int Actor::getID() const
{
	return ID;
}

bool Actor::isPhysics() const
{
	return bPhysics;
}

vector3 Actor::getPosition() const
{
	return position;
}

vector3 Actor::getRotation() const
{
	return rotation;
}

float Actor::getMass() const
{
	return mass;
}

unsigned int Actor::getTextureCount() const
{
	return textureCount;
}

ModelClass** Actor::getModel() const {
	return model;
}

wstring* Actor::getTexture() const
{
	return texture;
}

string* Actor::getVertex() const
{
	return vertex;
}

void Actor::setPhysics(bool bPhys)
{
	bPhysics = bPhys;
}

void Actor::setPosition(vector3 pos)
{
	position = pos;
}

void Actor::setRotation(vector3 rot)
{
	rotation = rot;
}

void Actor::setMass(float m)
{
	if (m > 0) mass = m;
}

void Actor::setModel(wstring texture, string vertex)
{
	for (int i = 0; i < textureCount; i++) {
		this->vertex[i] = vertex;
		int v = texture.find('0');
		this->vertex[i][v] = i + '0';				
		this->texture[i] = texture;
		int t = vertex.find('0');
		this->texture[i][t] = i + '0';
	}
}