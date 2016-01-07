#ifndef _MAGICS_H
#define _MAGICS_H

#include <stdio.h>

/* Prototypes */
void init_magics();
void generate_knight_map();
void generate_king_map();
void generate_occupancy_mask_rook();
void generate_occupancy_mask_bishop();
void generate_occupancy_variations_rook();
void generate_occupancy_variations_bishop();
void generate_move_database_rook();
void generate_move_database_bishop();

/* Courtesy of Rival Chess */
static int MagicShiftsRook[64] = {
	52,53,53,53,53,53,53,52,53,54,54,54,54,54,54,53,
	53,54,54,54,54,54,54,53,53,54,54,54,54,54,54,53,
	53,54,54,54,54,54,54,53,53,54,54,54,54,54,54,53,
	53,54,54,54,54,54,54,53,52,53,53,53,53,53,53,52
};

/* Courtesy of Rival Chess */
static int MagicShiftsBishop[64] = {
	58,59,59,59,59,59,59,58,59,59,59,59,59,59,59,59,
	59,59,57,57,57,57,59,59,59,59,57,55,55,57,59,59,
	59,59,57,55,55,57,59,59,59,59,57,57,57,57,59,59,
	59,59,59,59,59,59,59,59,58,59,59,59,59,59,59,58
};

/* Courtesy of Rival Chess */
static uint64_t MagicNumberRook[64] = {
	0xa180022080400230, 0x40100040022000, 0x80088020001002, 0x80080280841000,
	0x4200042010460008, 0x4800a0003040080, 0x400110082041008, 0x8000a041000880,
	0x10138001a080c010, 0x804008200480, 0x10011012000c0, 0x22004128102200,
	0x200081201200c, 0x202a001048460004, 0x81000100420004, 0x4000800380004500,
	0x208002904001, 0x90004040026008, 0x208808010002001, 0x2002020020704940,
	0x8048010008110005, 0x6820808004002200, 0xa80040008023011, 0xb1460000811044, 
	0x4204400080008ea0, 0xb002400180200184, 0x2020200080100380, 0x10080080100080,
	0x2204080080800400, 0xa40080360080, 0x2040604002810b1, 0x8c218600004104,
	0x8180004000402000, 0x488c402000401001, 0x4018a00080801004, 0x1230002105001008, 
	0x8904800800800400, 0x42000c42003810, 0x8408110400b012, 0x18086182000401,
	0x2240088020c28000, 0x1001201040c004, 0xa02008010420020, 0x10003009010060,
	0x4008008008014, 0x80020004008080, 0x282020001008080, 0x50000181204a0004, 
	0x102042111804200, 0x40002010004001c0, 0x19220045508200, 0x20030010060a900, 
	0x8018028040080, 0x88240002008080, 0x10301802830400, 0x332a4081140200, 
	0x8080010a601241, 0x1008010400021, 0x4082001007241, 0x211009001200509, 
	0x8015001002441801, 0x801000804000603, 0xc0900220024a401, 0x1000200608243
};

/* Courtesy of Rival Chess */
static uint64_t MagicNumberBishop[64] = {
	0x2910054208004104, 0x2100630a7020180, 0x5822022042000000, 0x2ca804a100200020, 
	0x204042200000900, 0x2002121024000002, 0x80404104202000e8, 0x812a020205010840,
	0x8005181184080048, 0x1001c20208010101, 0x1001080204002100, 0x1810080489021800, 
	0x62040420010a00, 0x5028043004300020, 0xc0080a4402605002, 0x8a00a0104220200, 
	0x940000410821212, 0x1808024a280210, 0x40c0422080a0598, 0x4228020082004050, 
	0x200800400e00100, 0x20b001230021040, 0x90a0201900c00, 0x4940120a0a0108,
	0x20208050a42180, 0x1004804b280200, 0x2048020024040010, 0x102c04004010200,
	0x20408204c002010, 0x2411100020080c1, 0x102a008084042100, 0x941030000a09846, 
	0x244100800400200, 0x4000901010080696, 0x280404180020, 0x800042008240100,
	0x220008400088020, 0x4020182000904c9, 0x23010400020600, 0x41040020110302, 
	0x412101004020818, 0x8022080a09404208, 0x1401210240484800, 0x22244208010080, 
	0x1105040104000210, 0x2040088800c40081, 0x8184810252000400, 0x4004610041002200, 
	0x40201a444400810, 0x4611010802020008, 0x80000b0401040402, 0x20004821880a00, 
	0x8200002022440100, 0x9431801010068, 0x1040c20806108040, 0x804901403022a40, 
	0x2400202602104000, 0x208520209440204, 0x40c000022013020, 0x2000104000420600,
	0x400000260142410, 0x800633408100500, 0x2404080a1410, 0x138200122002900    
};

uint64_t KnightMap[64];
uint64_t KingMap[64];

uint64_t OccupancyMaskRook[64];
uint64_t OccupancyMaskBishop[64];

uint64_t OccupancyVariationsRook[64][4096];
uint64_t OccupancyVariationsBishop[64][512];

uint64_t MoveDatabaseRook[64][4096];
uint64_t MoveDatabaseBishop[64][512];

#endif