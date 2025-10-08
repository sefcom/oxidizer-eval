
  int64_t uu_df::filesystem::Filesystem::new::h176c4d07e180ea46(int64_t* arg1, int64_t* arg2, int128_t* arg3)

{
    void* rsi = &arg2[0xc];
    
    if (!arg2[0xe])
        rsi = &arg2[3];
    
    void var_1a8;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
        &var_1a8, rsi);
    char var_190;
    uucore::features::fsext::statfs::h383ebb62e1d8f19a(&var_190, &var_1a8);
    
    if (var_190 & 1)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$libc..unix..linux_like..linux..gnu..b64..x86_64..statfs$C$alloc..string..String$GT$$GT$::h4dda94d0d41dac03(&var_190);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hac58f874263dbc4e(arg3);
        /* tailcall */
        return
            core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h0026f4350179d2b5(
            arg2);
    }
    
    int64_t var_118;
    int64_t var_38 = var_118;
    int128_t var_128;
    int128_t var_48 = var_128;
    int128_t var_138;
    int128_t var_58 = var_138;
    int128_t var_148;
    int128_t var_68 = var_148;
    int128_t var_158;
    int128_t var_78 = var_158;
    int128_t var_168;
    int128_t var_88 = var_168;
    int128_t var_178;
    int128_t var_98 = var_178;
    int128_t var_188;
    int128_t var_a8 = var_188;
    int128_t var_1e0;
    uucore::features::fsext::FsUsage::new::hb771c82a6e6cf300(&var_1e0, &var_a8);
    memcpy(&var_190, arg2, 0x98);
    int128_t var_f8 = *arg3;
    int64_t var_e8 = arg3[1];
    int128_t var_e0 = var_1e0;
    int128_t var_1d0;
    int128_t var_d0 = var_1d0;
    int128_t var_1c0;
    int128_t var_c0 = var_1c0;
    int64_t var_1b0;
    int64_t var_b0 = var_1b0;
    return memcpy(arg1, &var_190, 0xe8);
}
