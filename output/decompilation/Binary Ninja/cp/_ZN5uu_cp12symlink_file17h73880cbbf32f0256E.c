
  char const (** const )[0xff] uu_cp::symlink_file::h73880cbbf32f0256(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6)

{
    int64_t rax = std::os::unix::fs::symlink::h7d55b4689024f9f4(arg2, arg3, arg4);
    int64_t var_1d8 = rax;
    char const* const rax_1;
    int64_t rdx_1;
    rax_1 = uucore::features::fs::get_filename::h4988c52a18f1d407(arg4, arg5);
    
    if (!rax_1)
        rdx_1 = 0x11;
    
    char const* const r12_1 = "invalid file namecannot create s…";
    
    if (!rax_1)
        rax_1 = "invalid file namecannot create s…";
    
    int64_t var_1b0 = 0;
    char const* const var_1a8 = rax_1;
    int64_t var_1a0 = rdx_1;
    char var_198 = 1;
    char* rax_2;
    int64_t rdx_2;
    rax_2 = uucore::features::fs::get_filename::h4988c52a18f1d407(arg2, arg3);
    
    if (rax_2)
        r12_1 = rax_2;
    
    if (!rax_2)
        rdx_2 = 0x11;
    
    int64_t var_190 = 0;
    char const* const var_188 = r12_1;
    int64_t var_180 = rdx_2;
    char var_178 = 1;
    int64_t* var_1d0 = &var_1b0;
    int64_t (* var_1c8)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    int64_t* var_1c0 = &var_190;
    int64_t (* var_1b8)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    char const (** const result_1)[0xff] = &data_5b5e88;
    int64_t var_150 = 2;
    int64_t var_138 = 0;
    int64_t** var_148 = &var_1d0;
    int64_t var_140 = 2;
    int128_t var_170;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_170, &result_1);
    result_1 = var_170;
    char const (** const result)[0xff];
    
    if (!rax)
    {
        core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c139c7d53bd4e4a(&result_1);
        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&result_1, arg4, arg5, 
            0);
        
        if (!result_1)
        {
            void var_c0;
            memcpy(&var_c0, &var_150, 0x90);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h531130355967ce20(arg6, &var_c0);
        }
        
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hf438bf76be742e1b(&result_1);
        *arg1 = 0xd;
    }
    else
    {
        result = result_1;
        arg1[2] = var_150;
        int64_t var_160;
        arg1[3] = var_160;
        *arg1 = 3;
        arg1[1] = result;
        arg1[4] = rax;
    }
    
    return result;
}
