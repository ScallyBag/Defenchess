/*
    Defenchess, a chess engine
    Copyright 2017-2019 Can Cetin, Dogac Eldenk

    Defenchess is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Defenchess is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Defenchess.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAGIC_H
#define MAGIC_H

#include "data.h"

typedef struct Magic{
    Bitboard mask;
    Bitboard magic;
} Magic;

const Magic rookMagic[64] = {
    { 0x000101010101017EULL, 0xE580008110204000ULL }, { 0x000202020202027CULL, 0x0160002008011000ULL },
    { 0x000404040404047AULL, 0x3520080020000400ULL }, { 0x0008080808080876ULL, 0x6408080448002002ULL },
    { 0x001010101010106EULL, 0x1824080004020400ULL }, { 0x002020202020205EULL, 0x9E04088101020400ULL },
    { 0x004040404040403EULL, 0x8508008001000200ULL }, { 0x008080808080807EULL, 0x5A000040A4840201ULL },
    { 0x0001010101017E00ULL, 0x0172800180504000ULL }, { 0x0002020202027C00ULL, 0x0094200020483000ULL },
    { 0x0004040404047A00ULL, 0x0341400410000800ULL }, { 0x0008080808087600ULL, 0x007E040020041200ULL },
    { 0x0010101010106E00ULL, 0x0042104404000800ULL }, { 0x0020202020205E00ULL, 0x00CC042090008400ULL },
    { 0x0040404040403E00ULL, 0x00A88081000A0200ULL }, { 0x0080808080807E00ULL, 0x006C810180840100ULL },
    { 0x00010101017E0100ULL, 0x0021150010208000ULL }, { 0x00020202027C0200ULL, 0x0000158060004000ULL },
    { 0x00040404047A0400ULL, 0x0080BC2808402000ULL }, { 0x0008080808760800ULL, 0x00113E1000200800ULL },
    { 0x00101010106E1000ULL, 0x0002510001010800ULL }, { 0x00202020205E2000ULL, 0x0008660814001200ULL },
    { 0x00404040403E4000ULL, 0x0000760400408080ULL }, { 0x00808080807E8000ULL, 0x0004158180800300ULL },
    { 0x000101017E010100ULL, 0x00C0826880004000ULL }, { 0x000202027C020200ULL, 0x0000803901002800ULL },
    { 0x000404047A040400ULL, 0x0020005D88000400ULL }, { 0x0008080876080800ULL, 0x0000136A18001000ULL },
    { 0x001010106E101000ULL, 0x0000053200100A00ULL }, { 0x002020205E202000ULL, 0x0004301AA0010400ULL },
    { 0x004040403E404000ULL, 0x0001085C80048200ULL }, { 0x008080807E808000ULL, 0x000000BE04040100ULL },
    { 0x0001017E01010100ULL, 0x0001042142401000ULL }, { 0x0002027C02020200ULL, 0x0140300036282000ULL },
    { 0x0004047A04040400ULL, 0x0009802008801000ULL }, { 0x0008087608080800ULL, 0x0000201870841000ULL },
    { 0x0010106E10101000ULL, 0x0002020926000A00ULL }, { 0x0020205E20202000ULL, 0x0004040078800200ULL },
    { 0x0040403E40404000ULL, 0x0002000250900100ULL }, { 0x0080807E80808000ULL, 0x00008001B9800100ULL },
    { 0x00017E0101010100ULL, 0x0240001090418000ULL }, { 0x00027C0202020200ULL, 0x0000100008334000ULL },
    { 0x00047A0404040400ULL, 0x0060086000234800ULL }, { 0x0008760808080800ULL, 0x0088088011121000ULL },
    { 0x00106E1010101000ULL, 0x000204000E1D2800ULL }, { 0x00205E2020202000ULL, 0x00020082002A0400ULL },
    { 0x00403E4040404000ULL, 0x0006021050270A00ULL }, { 0x00807E8080808000ULL, 0x0000610002548080ULL },
    { 0x007E010101010100ULL, 0x0401410280201A00ULL }, { 0x007C020202020200ULL, 0x0001408100104E00ULL },
    { 0x007A040404040400ULL, 0x0020100980084480ULL }, { 0x0076080808080800ULL, 0x000A004808286E00ULL },
    { 0x006E101010101000ULL, 0x0000100120024600ULL }, { 0x005E202020202000ULL, 0x0002000902008E00ULL },
    { 0x003E404040404000ULL, 0x0001010800807200ULL }, { 0x007E808080808000ULL, 0x0002050400295A00ULL },
    { 0x7E01010101010100ULL, 0x004100A080004257ULL }, { 0x7C02020202020200ULL, 0x000011008048C005ULL },
    { 0x7A04040404040400ULL, 0x8040441100086001ULL }, { 0x7608080808080800ULL, 0x8014400C02002066ULL },
    { 0x6E10101010101000ULL, 0x00080220010A010EULL }, { 0x5E20202020202000ULL, 0x0002000810041162ULL },
    { 0x3E40404040404000ULL, 0x00010486100110E4ULL }, { 0x7E80808080808000ULL, 0x000100020180406FULL }
};

const Magic bishopMagic[64] = {
    { 0x0040201008040200ULL, 0x00A08800240C0040ULL }, { 0x0000402010080400ULL, 0x0020085008088000ULL },
    { 0x0000004020100A00ULL, 0x0080440306000000ULL }, { 0x0000000040221400ULL, 0x000C520480000000ULL },
    { 0x0000000002442800ULL, 0x0024856000000000ULL }, { 0x0000000204085000ULL, 0x00091430A0000000ULL },
    { 0x0000020408102000ULL, 0x0009081820C00000ULL }, { 0x0002040810204000ULL, 0x0005100400609000ULL },
    { 0x0020100804020000ULL, 0x0000004448220400ULL }, { 0x0040201008040000ULL, 0x00001030010C0480ULL },
    { 0x00004020100A0000ULL, 0x00003228120A0000ULL }, { 0x0000004022140000ULL, 0x00004C2082400000ULL },
    { 0x0000000244280000ULL, 0x0000108D50000000ULL }, { 0x0000020408500000ULL, 0x0000128821100000ULL },
    { 0x0002040810200000ULL, 0x00000A0410245000ULL }, { 0x0004081020400000ULL, 0x0000030180208800ULL },
    { 0x0010080402000200ULL, 0x0050000820500C00ULL }, { 0x0020100804000400ULL, 0x0008010050180200ULL },
    { 0x004020100A000A00ULL, 0x0150008A00200500ULL }, { 0x0000402214001400ULL, 0x000E000505090000ULL },
    { 0x0000024428002800ULL, 0x0014001239200000ULL }, { 0x0002040850005000ULL, 0x0006000540186000ULL },
    { 0x0004081020002000ULL, 0x0001000603502000ULL }, { 0x0008102040004000ULL, 0x0005000104480C00ULL },
    { 0x0008040200020400ULL, 0x0011400048880200ULL }, { 0x0010080400040800ULL, 0x0008080020304800ULL },
    { 0x0020100A000A1000ULL, 0x00241800B4000C00ULL }, { 0x0040221400142200ULL, 0x0020480010820040ULL },
    { 0x0002442800284400ULL, 0x011484002E822000ULL }, { 0x0004085000500800ULL, 0x000C050044822000ULL },
    { 0x0008102000201000ULL, 0x0010090020401800ULL }, { 0x0010204000402000ULL, 0x0004008004A10C00ULL },
    { 0x0004020002040800ULL, 0x0044214001005000ULL }, { 0x0008040004081000ULL, 0x0008406000188200ULL },
    { 0x00100A000A102000ULL, 0x0002043000120400ULL }, { 0x0022140014224000ULL, 0x0010280800120A00ULL },
    { 0x0044280028440200ULL, 0x0040120A00802080ULL }, { 0x0008500050080400ULL, 0x0018282700021000ULL },
    { 0x0010200020100800ULL, 0x0008400C00090C00ULL }, { 0x0020400040201000ULL, 0x0024200440050400ULL },
    { 0x0002000204081000ULL, 0x004420104000A000ULL }, { 0x0004000408102000ULL, 0x0020085060000800ULL },
    { 0x000A000A10204000ULL, 0x00090428D0011800ULL }, { 0x0014001422400000ULL, 0x00000A6248002C00ULL },
    { 0x0028002844020000ULL, 0x000140820A000400ULL }, { 0x0050005008040200ULL, 0x0140900848400200ULL },
    { 0x0020002010080400ULL, 0x000890400C000200ULL }, { 0x0040004020100800ULL, 0x0008240492000080ULL },
    { 0x0000020408102000ULL, 0x0010104980400000ULL }, { 0x0000040810204000ULL, 0x0001480810300000ULL },
    { 0x00000A1020400000ULL, 0x0000060410A80000ULL }, { 0x0000142240000000ULL, 0x0000000270150000ULL },
    { 0x0000284402000000ULL, 0x000000808C540000ULL }, { 0x0000500804020000ULL, 0x00002010202C8000ULL },
    { 0x0000201008040200ULL, 0x0020A00810210000ULL }, { 0x0000402010080400ULL, 0x0080801804828000ULL },
    { 0x0002040810204000ULL, 0x0002420010C09000ULL }, { 0x0004081020400000ULL, 0x0000080828180400ULL },
    { 0x000A102040000000ULL, 0x0000000890285800ULL }, { 0x0014224000000000ULL, 0x0000000008234900ULL },
    { 0x0028440200000000ULL, 0x00000000A0244500ULL }, { 0x0050080402000000ULL, 0x0000022080900300ULL },
    { 0x0020100804020000ULL, 0x0000005002301100ULL }, { 0x0040201008040200ULL, 0x0080881014040040ULL }
};

void generate_magic_rook_moves();
void generate_magic_bishop_moves();

Bitboard magicify(int index, Bitboard b);

Bitboard create_rook_attacks(int sq ,Bitboard b);
Bitboard create_bishop_attacks(int sq ,Bitboard b);

void init_magic();

extern Bitboard rook_magic_moves[64][4096];
extern Bitboard bishop_magic_moves[64][512];

#endif