#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

typedef struct {
    struct Chunk *next;
}Chunk;

size_t mChunksPerBlock;
Chunk *mAlloc = NULL;

Chunk *allocateBlock();

void *allocate(size_t size);
void deallocate(void *ptr, size_t size);

void PoolAllocator(size_t chunksPerBlock)
{
    mChunksPerBlock = chunksPerBlock;
}


int main(int argc, char* argv[])
{




}
