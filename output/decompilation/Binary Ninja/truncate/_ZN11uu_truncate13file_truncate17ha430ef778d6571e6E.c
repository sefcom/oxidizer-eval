
  uint64_t uu_truncate::file_truncate::ha430ef778d6571e6(int64_t arg1, int64_t arg2, char arg3, int64_t arg4)

{
    int64_t var_e0;
    std::fs::metadata::h460bc532d18d3302(&var_e0, arg1);
    int64_t r15 = var_e0;
    int64_t rdi_1 = 2;
    int32_t var_158;
    int32_t fd_1;
    int64_t var_d8;
    
    if (r15 != 2)
    {
        int32_t var_a8;
        
        if ((0xf000 & var_a8) == 0x1000)
        {
            fd_1 = 0;
            int64_t var_120_1 = arg1;
            int64_t var_118_1 = arg2;
            char var_110_1 = 1;
            int32_t* var_108 = &fd_1;
            int64_t (* var_100_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_158 = &data_4e4020;
            int64_t var_150_1 = 2;
            int64_t var_138_1 = 0;
            int32_t** var_148_1 = &var_108;
            int64_t var_140_1 = 1;
            int128_t var_f8;
            core::option::Option$LT$T$GT$::map_or_else::hccc437e8064ad343(&var_f8, &var_158);
            var_140_1 = 1;
            var_158 = var_f8;
            int64_t var_e8;
            int64_t var_148_2 = var_e8;
            uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_158);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(r15, var_d8);
            return result;
        }
        
        rdi_1 = r15;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(rdi_1, var_d8);
    var_e0 = 0x1b600000000;
    var_d8 = 0;
    *var_d8[4] = 0;
    *var_d8[1] = 1;
    *var_d8[4] = arg3;
    std::fs::OpenOptions::open::h4717b18b07f3e237(&var_158, &var_e0, arg1);
    int64_t r15_1;
    
    if (var_158 != 1)
    {
        int32_t fd;
        fd_1 = fd;
        r15_1 = std::fs::File::set_len::h8625c3bc8a96431d(&fd_1, arg4);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h3fd183804f862cdc(fd);
    }
    else
    {
        int64_t var_150;
        r15_1 = var_150;
        
        if (!arg3 && !std::io::error::Error::kind::h135fe00c4e7365f3(r15_1))
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha9e3f05fa01eaf64(r15_1);
            r15_1 = 0;
        }
    }
    
    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd29365e4fd14d88e(r15_1);
}
