#pragma once
#include <cstddef>
#include <cstdint>

namespace Aryabhata::Memory {

template <size_t BlockSize, size_t BlockCount> class MemoryArena {
  static_assert(BlockSize >= sizeof(void *),
                "BlockSize must be at least sizeof(void*)");

private:
  alignas(std::max_align_t) uint8_t pool_[BlockSize * BlockCount];
  void *freeHead_ = nullptr;
  size_t freeBlocks_ = BlockCount;

public:
  MemoryArena() {
    // Write your loop here to link blocks together in pool_!
    char **tmp = pool_;
    while (!tmp) {
      if (!(tmp + 1)) {
        *tmp = tmp + 1;
      }
    }
  }

  void *allocate() {
    // Pop freeHead_ in O(1)
  }

  void deallocate(void *ptr) {
    // Push ptr back to freeHead_ in O(1)
  }

  size_t free_blocks() const { return freeBlocks_; }
  constexpr size_t total_blocks() const { return BlockCount; }
  constexpr size_t block_size() const { return BlockSize; }
};

} // namespace Aryabhata::Memory
