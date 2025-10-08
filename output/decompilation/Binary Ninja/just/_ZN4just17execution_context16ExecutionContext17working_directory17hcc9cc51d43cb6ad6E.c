
  int64_t just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(int128_t* arg1, void* arg2, void* arg3)

{
    void* rdx = arg3 + 0x18;
    
    if (*(arg2 + 0x230) != 0x25)
        rdx = arg2 + 0x78;
    
    int64_t rsi = *(rdx + 8);
    uint64_t rdx_1 = *(rdx + 0x10);
    
    if (0 + -(*(arg2 + 0x1c8)))
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(arg1, rsi, rdx_1);
    
    /* tailcall */
    return std::path::Path::join::h509d33a3bbf89c2c(arg1, rsi, rdx_1, arg2 + 0x1c8);
}
