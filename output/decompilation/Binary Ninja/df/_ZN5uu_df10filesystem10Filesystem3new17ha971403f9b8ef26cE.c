
  int64_t* uu_df::filesystem::Filesystem::new::ha971403f9b8ef26c(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    void* rsi = &arg2[0xc];
    
    if (!arg2[0xe])
        rsi = &arg2[3];
    
    int128_t var_1d0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
        &var_1d0, rsi);
    int64_t var_1c0;
    int64_t var_1d8 = var_1c0;
    int128_t var_1e8 = var_1d0;
    int64_t var_180;
    uucore::features::fsext::statfs::h7710e674e131f3de(&var_180, &var_1e8);
    
    if (!var_180)
    {
        int64_t var_108;
        int64_t var_28_1 = var_108;
        int128_t var_118;
        int128_t var_38_1 = var_118;
        int128_t var_128;
        int128_t var_48_1 = var_128;
        int128_t var_138;
        int128_t var_58_1 = var_138;
        int128_t var_148;
        int128_t var_68_1 = var_148;
        int128_t var_158;
        int128_t var_78_1 = var_158;
        int128_t var_168;
        int128_t var_88_1 = var_168;
        int128_t var_178;
        int128_t var_98 = var_178;
        int128_t var_1b8;
        uucore::features::fsext::FsUsage::new::h19810370d0ac518d(&var_1b8, &var_98);
        int64_t var_d8_1 = arg3[2];
        int128_t var_e8_1 = *arg3;
        memcpy(&var_180, arg2, 0x98);
        int128_t var_d0_1 = var_1b8;
        int128_t var_1a8;
        int128_t var_c0_1 = var_1a8;
        int128_t var_198;
        int128_t var_b0_1 = var_198;
        int64_t var_188;
        int64_t var_a0_1 = var_188;
        memcpy(arg1, &var_180, 0xe8);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$libc..unix..linux_like..linux..gnu..b64..x86_64..statfs$C$alloc..string..String$GT$$GT$::hc9dd6679bfd799be(&var_180);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h74894fec29a483d3(arg3);
        core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h9090e8568995f329(arg2);
    }
    
    return arg1;
}
