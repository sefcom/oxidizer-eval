
  int64_t uu_cp::symlink_file::haf96ef023560a2f2(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char** arg6)

{
    int64_t rax = std::os::unix::fs::symlink::ha0101dd5a62d8719(arg2, arg3, arg4);
    int64_t var_1d8 = rax;
    char const* const rax_1;
    int64_t rdx_1;
    rax_1 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg4, arg5);
    
    if (!rax_1)
        rdx_1 = 0x11;
    
    char const* const rbx_1 = "invalid file namecannot create s…";
    
    if (!rax_1)
        rax_1 = "invalid file namecannot create s…";
    
    int64_t var_198 = 0;
    char const* const var_190 = rax_1;
    int64_t var_188 = rdx_1;
    char var_180 = 1;
    char* rax_2;
    int64_t rdx_2;
    rax_2 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg2, arg3);
    
    if (!rax_2)
        rdx_2 = 0x11;
    
    if (rax_2)
        rbx_1 = rax_2;
    
    int64_t var_178 = 0;
    char const* const var_170 = rbx_1;
    int64_t var_168 = rdx_2;
    char var_160 = 1;
    int64_t* var_1b8 = &var_198;
    int64_t (* var_1b0)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    int64_t* var_1a8 = &var_178;
    int64_t (* var_1a0)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    char const (** const var_158)[0x126] = &data_55ebb8;
    int64_t var_150 = 2;
    int64_t var_138 = 0;
    int64_t** var_148 = &var_1b8;
    int64_t var_140 = 2;
    int64_t result_1;
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&result_1, &var_158);
    int64_t result;
    
    if (!rax)
    {
        core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&result_1);
        uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(&var_158, arg4, arg5, 
            0);
        
        if (!(var_158 & 1))
        {
            void var_c0;
            memcpy(&var_c0, &var_150, 0x90);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he952524e990dcb56(arg6, &var_c0);
        }
        
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h6445ae0773dfc02a(&var_158);
        *arg1 = -0x7ffffffffffffff4;
    }
    else
    {
        result = result_1;
        int128_t var_1c8;
        *(arg1 + 0x10) = var_1c8;
        *arg1 = -0x7ffffffffffffffe;
        arg1[1] = result;
        arg1[4] = rax;
    }
    
    return result;
}
