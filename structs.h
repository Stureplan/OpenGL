#ifndef STRUCTS_H
#define STRUCTS_H

struct TextureData
{
	const char* texturename;
	int width;
	int height;
};

struct ParticleSystemData
{
	glm::vec3 dir;
	float width;
	float height;
	int maxparticles;
	float lifetime;
	float rate;
	float force;
	float gravity;
	bool continuous;
};

//TODO: Separate ParticleSystemData from PlayerData
//to handle playback and stuff
struct PlayerData
{
	bool playing;

};

struct Particle
{
	glm::vec3 pos;
	glm::vec3 dir;
	glm::vec3 vel;
	float ctime;
	float dist;
	bool alive;
};

#endif


//define all the structs here