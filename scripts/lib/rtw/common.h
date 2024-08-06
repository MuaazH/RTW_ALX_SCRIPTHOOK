//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#ifndef ROME_TOTAL_WAR_TYPES
#define ROME_TOTAL_WAR_TYPES

enum {
    ORIENTATION_EAST = 0xC000,
    ORIENTATION_SOUTH = 0x0000,
    ORIENTATION_WEST = 0x4000,
    ORIENTATION_NORTH = 0x8000
};

typedef struct Character Character;
typedef struct CharacterType CharacterType;
typedef struct TrainableUnit TrainableUnit;
typedef struct TrainableAgent TrainableAgent;
typedef struct SettlementCapabilities SettlementCapabilities;
typedef struct Settlement Settlement;
typedef struct SettlementAi SettlementAi;
typedef struct Region Region;
typedef struct WorldMap WorldMap;
typedef struct UnitType UnitType;
typedef struct SoliderUpgrades SoliderUpgrades;
typedef struct Army Army;
typedef struct ArmyUnit ArmyUnit;
typedef struct Campaign Campaign;
typedef struct Diplomacy Diplomacy;
typedef struct GameDate GameDate;
typedef struct Faction Faction;
typedef struct FactionAi FactionAi;
typedef struct ManagementAi ManagementAi;
typedef struct TreasuryDetails TreasuryDetails;
typedef struct Treasury Treasury;
typedef struct Recruitment Recruitment;
typedef struct RecruitmentQueue RecruitmentQueue;
typedef struct Construction Construction;
typedef struct ConstructionQueue ConstructionQueue;
typedef struct Building Building;
typedef struct BuildingType BuildingType;
typedef struct BuildingLevel BuildingLevel;
typedef struct RecruitmentCapability RecruitmentCapability;
typedef struct BuildingTypeList BuildingTypeList;
typedef struct CityBuildings CityBuildings;
typedef struct City City;
typedef struct CityStats CityStats;
typedef struct CultureData CultureData;
typedef struct CultureModels CultureModels;
typedef struct CultureCityModel CultureCityModel;
typedef struct PopulationLimits PopulationLimits;
typedef struct Seaport Seaport;
typedef struct Docks Docks;
typedef struct Person Person;
typedef struct Fort Fort;
typedef struct FactionInfo FactionInfo;
typedef struct MapPixel MapPixel;
typedef struct MapHeight MapHeight;
typedef struct Road Road;
typedef struct Dictionary Dictionary;

#endif // ROME_TOTAL_WAR_TYPES