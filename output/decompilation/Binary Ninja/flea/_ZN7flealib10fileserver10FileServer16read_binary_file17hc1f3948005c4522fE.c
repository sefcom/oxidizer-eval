
  int64_t* flealib::fileserver::FileServer::read_binary_file::hc1f3948005c4522f(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_f8 = arg3;
    int64_t rcx;
    int64_t var_f0 = rcx;
    int32_t var_148 = 0;
    char* rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
    int128_t var_e8;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_e8, rax, 
        rdx);
    uint64_t var_d8;
    uint64_t var_158 = var_d8;
    int128_t var_168 = var_e8;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h7ff1b9328b1378bc(*(arg2 + 8), 
        *(arg2 + 0x10), *var_168[8], var_d8))
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_e8, 1, 
            0);
        var_148 = var_e8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
        uint64_t var_158_1 = var_d8;
        var_168 = var_148;
    }
    
    var_e8 = arg2;
    *var_e8[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    int128_t* var_d8_1 = &var_168;
    int64_t (* var_d0)(void* arg1, int64_t* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    int64_t* var_c8 = &var_f8;
    int64_t (* var_c0)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
    var_148 = &data_46b258;
    int64_t var_140 = 3;
    int64_t var_128 = 0;
    int128_t* var_138_2 = &var_e8;
    int64_t var_130 = 3;
    int128_t var_30;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_30, &var_148);
    int128_t var_118 = var_30;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_148, &var_118);
    std::fs::metadata::hab0b5a644e120762(&var_e8, &var_148);
    void* rax_5;
    
    if (var_e8 != 2)
    {
        int64_t var_98;
        
        if (var_98 > 0x1f400000)
        {
            rax_5 = std::io::error::Error::new::h73bba56a22ab7bbe(0x28, "File too large", 0xe);
            goto label_77b676;
        }
        
        int64_t var_20;
        int64_t var_d8_2 = var_20;
        var_e8 = var_118;
        std::fs::File::open::h7ac33442c85c547d(&var_148, &var_e8);
        
        if (!(var_148 & 1))
        {
            int32_t fd_1;
            int32_t fd = fd_1;
            var_e8 = 0;
            *var_e8[8] = 1;
            int64_t var_d8_3 = 0;
            int64_t rax_10;
            int64_t rdx_2;
            rax_10 =
                _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(
                &fd, &var_e8);
            
            if (!rax_10)
            {
                arg1[2] = var_d8_3;
                *arg1 = var_e8;
            }
            else
            {
                arg1[1] = rdx_2;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(
                    &var_e8);
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
        }
        else
        {
            arg1[1] = var_140;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        rax_5 = *var_e8[8];
        label_77b676:
        arg1[1] = rax_5;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_118);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
    return arg1;
}
