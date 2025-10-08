
  uint64_t uu_cat::cat_files::hcfbe1e107db8df0e(int64_t arg1, int64_t arg2, char* arg3)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    char var_178;
    uucore::features::fs::FileInformation::from_file::h1c5b8b34aaabd4d7(&var_178);
    char var_c8;
    void var_c0;
    
    if (!(var_178 & 1))
    {
        void var_170;
        memcpy(&var_c0, &var_170, 0x90);
        var_c8 = 1;
    }
    else
    {
        var_c8 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hc263a3b15372b709(&var_178);
    }
    
    uu_cat::LineNumber::new::he2164f0c2cf54569(&var_178);
    int16_t var_140 = 1;
    char var_13e = 0;
    int64_t var_210 = 0;
    int64_t var_208 = 8;
    int64_t var_200 = 0;
    void* const var_248;
    int64_t var_1f8;
    char* var_1f0;
    int64_t var_1e8;
    int128_t var_1d8;
    int64_t* var_1b0;
    
    if (arg2)
    {
        int64_t i = 0;
        int64_t var_230;
        
        do
        {
            char* r15_2 = *(arg1 + i + 8);
            int64_t r13_1 = *(arg1 + i + 0x10);
            int64_t* r9_1 = nullptr;
            
            if (var_c8)
                r9_1 = &var_c0;
            
            int64_t var_190;
            uu_cat::cat_path::h2dae90d146b12434(&var_190, r15_2, r13_1, arg3, &var_178, r9_1);
            
            if (var_190 == -0x7ffffffffffffffa)
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cat..CatError$GT$$GT$::h698f1a96b81da228(&var_190);
            else
            {
                int64_t var_180;
                int64_t var_1c8_1 = var_180;
                var_1d8 = var_190;
                var_1f8 = 0;
                var_1f0 = r15_2;
                var_1e8 = r13_1;
                char var_1e0_1 = 0;
                var_1b0 = &var_1f8;
                int64_t (* var_1a8_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int128_t* var_1a0_1 = &var_1d8;
                int64_t (* var_198_1)(int64_t arg1, int64_t* arg2) =
                    _$LT$uu_cat..CatError$u20$as$u20$core..fmt..Display$GT$::fmt::hf1b120a760cf5cdb;
                var_248 = &data_4eab28;
                int64_t var_240_1 = 2;
                int64_t var_228_1 = 0;
                int64_t** var_238_1 = &var_1b0;
                var_230 = 2;
                void var_e0;
                core::option::Option$LT$T$GT$::map_or_else::hca5ca0cd9da1a1e1(&var_e0, &var_248);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc802380a4422d572(&var_210, &var_e0);
                core::ptr::drop_in_place$LT$uu_cat..CatError$GT$::h14d6c146dec8346b(&var_1d8);
            }
            
            i += 0x18;
        } while (arg2 * 0x18 != i);
        
        if (*var_140[1] & 1)
        {
            var_248 = &data_4eab48;
            int64_t var_240_2 = 1;
            int64_t var_238_2 = 8;
            var_230 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_248);
        }
    }
    
    uint64_t result;
    
    if (!arg2 || !var_200)
        result = 0;
    else
    {
        int64_t* rax_2;
        int64_t rdx_1;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_1b0 = rax_2;
        int64_t var_1a8_2 = rdx_1;
        var_1d8 = &var_1b0;
        *var_1d8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h74b3dbe6826d9b3d;
        var_248 = &data_4eab58;
        int64_t var_240_3 = 2;
        int64_t var_228_2 = 0;
        int128_t* var_238_3 = &var_1d8;
        int64_t var_230_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hca5ca0cd9da1a1e1(&var_1f8, &var_248);
        int64_t r14_1 = var_1f8;
        alloc::str::join_generic_copy::hf9249603796c30e8(&var_1f8, var_208, var_200, var_1f0, 
            var_1e8);
        int64_t var_238_4 = var_1e8;
        var_248 = var_1f8;
        var_230_1 = var_200;
        result = alloc::boxed::Box$LT$T$GT$::new::h8ad1939ef5a5c6bf(&var_248);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4305df3840418334(r14_1, var_1f0);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9e77e8d7d316b011(
        &var_210);
    return result;
}
