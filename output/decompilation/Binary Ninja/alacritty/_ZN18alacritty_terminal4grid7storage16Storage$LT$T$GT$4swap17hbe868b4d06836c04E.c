
  int64_t alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(void* arg1, int32_t arg2, int32_t arg3)

{
    int32_t rcx_6 = *(arg1 + 0x20);
    int64_t rsi = *(arg1 + 0x18);
    int64_t r8 = *(arg1 + 0x10);
    int64_t r10 = r8;
    
    if (rcx_6 - arg2 + rsi - 1 < r8)
        r10 = 0;
    
    if (rcx_6 - arg3 + rsi - 1 < r8)
        r8 = 0;
    
    int128_t* rdx = *(arg1 + 8);
    int128_t zmm0 = rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2];
    rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2] = rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2];
    rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2] = zmm0;
    zmm0 = rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2 + 1];
    rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2 + 1] = rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2 + 1];
    rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2 + 1] = zmm0;
    return (rcx_6 - arg2 + rsi - 1 - r10) << 5;
}
