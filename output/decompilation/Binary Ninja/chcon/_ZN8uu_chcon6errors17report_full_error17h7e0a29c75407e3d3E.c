
  int128_t* uu_chcon::errors::report_full_error::h7e0a29c75407e3d3(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_a0 = arg2;
    int64_t var_98 = arg3;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h4ae8628ff8eec263(0x100, 1, 1);
    int64_t var_90 = rax;
    int64_t var_88 = rdx;
    int64_t var_80 = 0;
    int64_t* var_78 = &var_a0;
    int64_t (* var_70)(int64_t* arg1) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbaf2d3403f2b68ee;
    void* const var_60 = &data_419d80;
    int64_t var_58 = 1;
    int64_t var_40 = 0;
    int64_t** var_50 = &var_78;
    int64_t var_48 = 1;
    void** const rsi_1 = &data_4f0328;
    core::result::Result$LT$T$C$E$GT$::unwrap::h074f43735208e33d(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2c24365a0703be39(&var_90, &var_60));
    
    while (true)
    {
        int64_t rax_3;
        int64_t rdx_1;
        rax_3 = (*(var_98 + 0x30))(var_a0, rsi_1);
        
        if (!rax_3)
            break;
        
        var_a0 = rax_3;
        var_98 = rdx_1;
        var_78 = &var_a0;
        int64_t (* var_70_1)(int64_t* arg1) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbaf2d3403f2b68ee;
        var_60 = &data_4f0300;
        int64_t var_58_1 = 1;
        int64_t var_40_1 = 0;
        int64_t** var_50_1 = &var_78;
        int64_t var_48_1 = 1;
        rsi_1 = &data_4f0340;
        core::result::Result$LT$T$C$E$GT$::unwrap::h074f43735208e33d(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2c24365a0703be39(&var_90, &var_60));
    }
    
    arg1[1] = var_80;
    *arg1 = var_90;
    return arg1;
}
