
  int128_t* uu_cat::cat_files::h6abdb7a5d8f0206f(int64_t arg1, int64_t arg2, int32_t* arg3)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_220 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    void* const var_198;
    uucore::features::fs::FileInformation::from_file::h44cb74378482ad19(&var_198);
    int64_t var_190;
    int64_t* var_c8;
    void var_c0;
    
    if (!var_198)
    {
        memcpy(&var_c0, &var_190, 0x90);
        var_c8 = 1;
    }
    else
    {
        var_c8 = nullptr;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h88aced0ed65ad377(&var_198);
    }
    
    int64_t var_1e8 = 1;
    int16_t var_1e0 = 1;
    char var_1de = 0;
    int64_t var_200 = 0;
    char const (** var_1f8)[0x52] = 8;
    int64_t var_1f0 = 0;
    int64_t var_1d8 = arg1;
    int64_t var_1d0 = arg1 + arg2 * 0x18;
    void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f5f6c5f762ec4b9(&var_1d8);
    int64_t** var_248;
    uint64_t var_210;
    
    if (i)
    {
        int64_t var_180;
        
        do
        {
            int64_t r15_1 = *(i + 8);
            uint64_t r12_1 = *(i + 0x10);
            int64_t* r9_1 = var_c8;
            
            if (r9_1)
                r9_1 = &var_c0;
            
            int64_t var_1b0;
            uu_cat::cat_path::h3f1de2b8bdfd86c8(&var_1b0, r15_1, r12_1, arg3, &var_1e8, r9_1);
            
            if (var_1b0 != -0x7ffffffffffffffa)
            {
                int64_t var_1a0;
                int64_t var_1b8_1 = var_1a0;
                int128_t var_1c8 = var_1b0;
                var_220 = nullptr;
                int64_t var_218_1 = r15_1;
                var_210 = r12_1;
                char var_208_1 = 0;
                var_248 = &var_220;
                int64_t (* var_240_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                int128_t* var_238_1 = &var_1c8;
                int64_t (* var_230_1)(int64_t arg1, void* arg2) =
                    _$LT$uu_cat..CatError$u20$as$u20$core..fmt..Display$GT$::fmt::h57a85781e439a5e8;
                var_198 = &data_5185e8;
                var_190 = 2;
                int64_t var_178_1 = 0;
                int64_t*** var_188_1 = &var_248;
                var_180 = 2;
                void var_e0;
                core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(&var_e0, &var_198);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf1bb32e3c1651b49(&var_200, &var_e0);
                core::ptr::drop_in_place$LT$uu_cat..CatError$GT$::hfbd18e323f720f0a(&var_1c8);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f5f6c5f762ec4b9(&var_1d8);
        } while (i);
        
        if (*var_1e0[1])
        {
            var_198 = &data_518608;
            var_190 = 1;
            int64_t var_188_2 = 8;
            var_180 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&var_198);
        }
    }
    
    int128_t* result;
    
    if (!var_1f0)
        result = nullptr;
    else
    {
        int64_t* rax_3;
        int64_t rdx_1;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_220 = rax_3;
        int64_t var_218_2 = rdx_1;
        var_248 = &var_220;
        int64_t (* var_240_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59ee80d913007d2d;
        var_198 = &data_518618;
        var_190 = 2;
        int64_t var_178_2 = 0;
        int64_t*** var_188_3 = &var_248;
        int64_t var_180_1 = 1;
        int128_t var_f8;
        core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(&var_f8, &var_198);
        var_248 = var_f8;
        int64_t var_e8;
        int64_t var_238_2 = var_e8;
        alloc::str::join_generic_copy::h1c39acc797b18d82(&var_220, var_1f8, var_1f0, var_240_2, 
            var_e8);
        uint64_t var_188_4 = var_210;
        var_198 = var_220;
        var_180_1 = var_1f0;
        result = alloc::boxed::Box$LT$T$GT$::new::hb263d7b6b0ccd5df(&var_198);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3711f10ec472aa2e(&var_248);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h407b6df26ef1b321(
        &var_200);
    return result;
}
