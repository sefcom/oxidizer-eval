
  int64_t rg::search::SearchWorkerBuilder::build::h2111ba1553679b5c(void* arg1, void* arg2, int128_t* arg3, int64_t arg4, int64_t arg5)

{
    void var_b8;
    _$LT$rg..search..Config$u20$as$u20$core..clone..Clone$GT$::clone::hdb3acc2cc00aa5bb(&var_b8, 
        arg2);
    char rbp = *(arg2 + 0xc8);
    int128_t var_f0;
    _$LT$grep_cli..decompress..DecompressionMatcher$u20$as$u20$core..clone..Clone$GT$::clone::h39ec143f99b801ab(&var_f0, arg2 + 0x88);
    char r13_1 = *(arg2 + 0xc0);
    int64_t var_c0;
    *(arg1 + 0x2b0) = var_c0;
    int128_t zmm0 = var_f0;
    int128_t var_d0;
    *(arg1 + 0x2a0) = var_d0;
    int128_t var_e0;
    *(arg1 + 0x290) = var_e0;
    *(arg1 + 0x280) = zmm0;
    memcpy(arg1 + 0x1f8, &var_b8, 0x88);
    int128_t zmm1_1 = arg3[1];
    int128_t zmm2_1 = arg3[2];
    int128_t zmm3 = arg3[3];
    *(arg1 + 0x2c0) = *arg3;
    *(arg1 + 0x2d0) = zmm1_1;
    *(arg1 + 0x2e0) = zmm2_1;
    *(arg1 + 0x2f0) = zmm3;
    *(arg1 + 0x300) = arg3[4];
    *(arg1 + 0x310) = arg3[5];
    *(arg1 + 0x320) = arg3[6];
    memcpy(arg1 + 0x108, arg5, 0xf0);
    *(arg1 + 0x328) = rbp;
    *(arg1 + 0x2b8) = r13_1;
    /* tailcall */
    return memcpy(arg1, arg4, 0x108);
}
