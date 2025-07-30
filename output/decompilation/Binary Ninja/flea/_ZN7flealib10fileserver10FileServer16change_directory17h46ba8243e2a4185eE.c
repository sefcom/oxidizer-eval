
  int64_t* flealib::fileserver::FileServer::change_directory::h46ba8243e2a4185e(int64_t* arg1, int128_t* arg2, int64_t arg3, uint64_t arg4)

{
    int128_t var_168;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_168, arg3, 
        arg4);
    int32_t var_148 = 0;
    char* rax;
    uint64_t rdx_1;
    rax = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
    int128_t var_f8;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_f8, rax, 
        rdx_1);
    uint64_t var_e8;
    uint64_t var_178 = var_e8;
    int128_t var_188 = var_f8;
    uint64_t var_160;
    void* var_158;
    
    if (!
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h57cc45937a75ced8(
        *var_188[8], var_e8, var_160, var_158))
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
        var_188 = "/";
        *var_188[8] = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h1abb60216f8bb06d;
        int128_t* var_178_1 = &var_168;
        int64_t (* var_170_1)(void* arg1, int64_t* arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        var_f8 = &data_450610;
        *var_f8[8] = 2;
        int64_t var_d8_1 = 0;
        var_e8 = &var_188;
        int64_t var_e0_1 = 2;
        int128_t var_110;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_110, &var_f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
        void* var_100;
        var_158 = var_100;
        var_168 = var_110;
    }
    else
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    
    int64_t r13_1 = *(arg2 + 8);
    int64_t rbp = arg2[1];
    var_148 = 0;
    char* rax_3;
    uint64_t rdx_3;
    rax_3 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_f8, rax_3, 
        rdx_3);
    uint64_t var_178_2 = var_e8;
    var_188 = var_f8;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h7ff1b9328b1378bc(r13_1, rbp, 
            *var_188[8], var_e8))
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    else
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
        var_148 = 0;
        char* rax_5;
        uint64_t rdx_5;
        rax_5 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_f8, 
            rax_5, rdx_5);
        uint64_t var_178_3 = var_e8;
        var_188 = var_f8;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hc91b576f7ea4e5c5(&var_f8, var_160, var_158, 
            *var_188[8], var_e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
        uint64_t var_158_1 = var_e8;
        var_168 = var_f8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    }
    
    var_148 = arg2;
    var_188 = &var_148;
    *var_188[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
    int128_t* var_178_4 = &var_168;
    int64_t (* var_170_2)(void* arg1, int64_t* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    var_f8 = &data_450610;
    *var_f8[8] = 2;
    int64_t var_d8_2 = 0;
    int128_t* var_e8_1 = &var_188;
    int64_t var_e0_2 = 2;
    int128_t var_48;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_f8);
    int128_t var_128 = var_48;
    int64_t var_38;
    int64_t var_118 = var_38;
    char* r12_1 = *var_128[8];
    int64_t rdx_8 = std::fs::metadata::h198ddbb2419bae71(&var_f8, r12_1);
    int32_t var_c0;
    
    if (var_f8 == 2)
    {
        var_148 = *var_f8[8];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
            &var_188, &var_148, rdx_8);
        arg1[2] = var_178_4;
        *arg1 = var_188;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_148);
    }
    else if ((0xf000 & var_c0) != 0x4000)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_188, 
            "Not a directory/root/.rustup/too…", 0xf);
        arg1[2] = var_178_4;
        *arg1 = var_188;
    }
    else
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_188, r12_1, var_38);
        
        if (var_188 == 1)
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_188, 
            *var_188[8], var_178_4);
        var_148 = var_188;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
        arg2[1] = var_178_4;
        *arg2 = var_148;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
    return arg1;
}
