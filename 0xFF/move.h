#ifndef MOVE_H
#define MOVE_H

#include "piece.h"
#include "types.h"

/* Move Type Definitions */
#define NormalFlag			(1 << 24)
#define CastleFlag			(1 << 25)
#define EnpassFlag			(1 << 26)
#define PromotionFlag		(1 << 27)
#define PromoteKnightFlag	(1 << 28)
#define PromoteBishopFlag	(1 << 29)
#define PromoteRookFlag		(1 << 30)
#define PromoteQueenFlag	(1 << 31) 
#define PromoteFlags		(15<< 28)

/* Move Type Macro Definitions */
#define MOVE_IS_NORMAL(move)		(move & NormalFlag)
#define MOVE_IS_CASTLE(move)		(move & CastleFlag)
#define MOVE_IS_ENPASS(move)		(move & EnpassFlag)
#define MOVE_IS_PROMOTION(move)		(move & PromoteFlags)

/* Move Creation Macro Definitions */
#define MAKE_NORMAL_MOVE(f,t,c,p)	((f)|(t<<8)|(c<<16)|(NormalFlag)|(p))
#define MAKE_ENPASS_MOVE(f,t,l)		((f)|(t<<8)|(l<<16)|(EnpassFlag))
#define MAKE_PROMOTION_MOVE(f,t,c,p)((f)|(t<<8)|(c<<16)|(PromotionFlag)|(p))

/* Needed for Macro Definition */
static int PromoteTypes[9] = {0, KnightFlag, BishopFlag, 0, RookFlag, 0, 0, 0, QueenFlag};

/* Move Decode Macro Definitions */
#define MOVE_GET_FROM(m)			((m & (0b11111111 <<  0)) >>  0)
#define MOVE_GET_TO(m)				((m & (0b11111111 <<  8)) >>  8)
#define MOVE_GET_CAPTURE(m)			((m & (0b11111111 << 16)) >> 16)
#define MOVE_GET_CASTLE_FLAGS(m)	((m & (0b00001111 << 28)) >> 25)
#define MOVE_GET_PROMOTE_TYPE(m,c)	(PromoteTypes[((m&PromoteFlags)>>28)]+c)

/* Function Prototypes */
void gen_all_moves(move_t * list, int * size, board_t * board);
void apply_move(board_t * board, move_t move);
void revert_move(board_t * board, move_t move);

void add_position(board_t * board, int to);
void remove_position(board_t * board, int to);
#endif