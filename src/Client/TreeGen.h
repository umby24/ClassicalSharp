#if 0
#ifndef CS_TREE_GEN_H
#define CS_TREE_GEN_H
#include "Typedefs.h"
#include "Random.h"
#include "Vectors.h"
/* Implements original classic vanilla map generation
   Based on: https://github.com/UnknownShadow200/ClassicalSharp/wiki/Minecraft-Classic-map-generation-algorithm
   Thanks to Jerralish for originally reverse engineering classic's algorithm, then preparing a high level overview of the algorithm.
   I believe this process adheres to clean room reverse engineering.
   Copyright 2014 - 2017 ClassicalSharp | Licensed under BSD-3
*/


/* Dimensions of the map trees are generated on. */
Int32 Tree_Width, Tree_Height, Tree_Length;

/* Blocks of the map trees are generated on. */
BlockID* Tree_Blocks;

/* Random number generator used for trees. */
Random* Tree_Rnd;

/* Packs a coordinate into a single integer index. */
#define Tree_Pack(x, y, z) (((y) * Tree_Length + (z)) * Tree_Width + (x))

/* Appropriate buffer size to hold positions and blocks generated by the tree generator. */
#define Tree_BufferCount 64


/* Returns whether a tree can grow at the specified coordinates. */
bool TreeGen_CanGrow(Int32 treeX, Int32 treeY, Int32 treeZ, Int32 treeHeight);

/* Plants a tree of the given height at the given coordinates. 
coords and blocks point to arrays which are filled with the generated positions and block ids. */
Int32 TreeGen_Grow(Int32 treeX, Int32 treeY, Int32 treeZ, Int32 height, Vector3I* coords, BlockID* blocks);
#endif
#endif