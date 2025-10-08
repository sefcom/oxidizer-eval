
  int64_t uu_ptx::format_roff_line::he10d8fad25b32594(int128_t* arg1, char const (** arg2)[0x94], int64_t arg3, int64_t arg4, char* arg5, int64_t arg6, int64_t arg7, int64_t arg8, char* arg9, int64_t arg10)

{
    int64_t var_208 = 0;
    int64_t var_200 = 1;
    int64_t var_1f8 = 0;
    char const (** const var_d8)[0x94] = arg2;
    int64_t (* var_d0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_1f0)[0x95] = &data_651b78;
    int64_t var_1e8 = 1;
    int64_t var_1d0 = 0;
    int64_t* var_1e0 = &var_d8;
    int64_t var_1d8 = 1;
    char rax;
    int32_t zmm0[0x4];
    rax = _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7f67013864aca505(&var_208, &var_1f0);
    core::result::Result$LT$T$C$E$GT$::unwrap::h32ad99550983bc66(rax);
    uu_ptx::prepare_line_chunks::h265ec8f47d6fd28d(&var_1f0, arg2, arg3, arg4, arg5, arg6, zmm0, 
        arg7, arg8, arg9, arg10);
    int128_t var_178 = var_1f0;
    int128_t var_158 = var_1d8;
    int128_t var_1c0;
    int128_t var_138 = var_1c0;
    int128_t var_1a8;
    int128_t var_118 = var_1a8;
    int128_t var_190;
    int128_t var_f8 = var_190;
    void var_90;
    uu_ptx::format_roff_field::hd7ef2489e9fe3241(&var_90, *var_178[8], var_1e0);
    int64_t var_1c8;
    void var_78;
    uu_ptx::format_roff_field::hd7ef2489e9fe3241(&var_78, *var_158[8], var_1c8);
    int64_t var_1b0;
    void var_60;
    uu_ptx::format_roff_field::hd7ef2489e9fe3241(&var_60, *var_138[8], var_1b0);
    int64_t var_198;
    void var_48;
    uu_ptx::format_roff_field::hd7ef2489e9fe3241(&var_48, *var_118[8], var_198);
    int64_t var_180;
    void** var_a8;
    uu_ptx::format_roff_field::hd7ef2489e9fe3241(&var_a8, *var_f8[8], var_180);
    var_1f0 = &var_90;
    int64_t (* var_1e8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* var_1e0_1 = &var_78;
    int64_t (* var_1d8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* var_1d0_1 = &var_60;
    int64_t (* var_1c8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1c0 = &var_48;
    *var_1c0[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void*** var_1b0_1 = &var_a8;
    var_1a8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_d8 = &data_651b88;
    int64_t var_d0_1 = 6;
    int64_t var_b8 = 0;
    char const (** const* var_c8)[0x95] = &var_1f0;
    int64_t var_c0 = 5;
    core::result::Result$LT$T$C$E$GT$::unwrap::h32ad99550983bc66(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7f67013864aca505(&var_208, &var_d8));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_90);
    
    if (*(arg2 + 0x59) || *(arg2 + 0x5a) == 1)
    {
        uu_ptx::format_roff_field::hd7ef2489e9fe3241(&var_d8, arg9, arg10);
        var_a8 = &var_d8;
        int64_t (* var_a0_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_1f0 = &data_651be8;
        int64_t var_1e8_2 = 2;
        int64_t var_1d0_2 = 0;
        void*** var_1e0_2 = &var_a8;
        int64_t var_1d8_2 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h32ad99550983bc66(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7f67013864aca505(&var_208, &var_1f0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_d8);
    }
    
    arg1[1] = var_1f8;
    *arg1 = var_208;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_118);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_138);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_158);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_178);
}
