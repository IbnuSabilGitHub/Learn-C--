#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

struct Costilation
{
    int costilation;
};

struct Talent
{
    int lvNormalAttack;
    int lvElementalSkill;
    int lvBrush;
};

struct Artifact_Description
{
    std::string name;
    int lv;
    std::string mainStat;
    std::string bonusStat;
    std::string set[2];
};

struct Artifact_FlowerOfLife
{
    Artifact_Description buffer;
};

struct Artifact_PlumeOfDeath
{
    Artifact_Description buffer;
};

struct Artifact_SandsOfEon
{
    Artifact_Description buffer;
};

struct Artifact_GobletOfEonothem
{
    Artifact_Description buffer;
};

struct Artifact_CircletOfLogos
{
    Artifact_Description buffer;
};

struct Artifact
{
    Artifact_FlowerOfLife flowerOfLife;
    Artifact_PlumeOfDeath plumeOfDeath;
    Artifact_SandsOfEon sandsOfEon;
    Artifact_GobletOfEonothem gobletOfEonothem;
    Artifact_CircletOfLogos circletOfLogos;
};

struct Weapon
{
    std::string name;
    int lv;
    int rankRefinement;
};

struct Character
{
    // Character Data
    std::string name;
    std::string element;
    std::string weaponType;

    // Character Wepon
    Weapon useWeapon;

    // Artifact
    Artifact useArtifact;

    // Talent
    Talent talent;

    // Costilation
    Costilation C;
};

void input_data_character();
void OutPut(const Character& output);
Character read_data(int position, std::fstream &MyStream);
void injection_data(Character &data, std::fstream &MyStream);


#endif