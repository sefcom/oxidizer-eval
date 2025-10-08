
  uint64_t alacritty::config::normalize_import::h3c4d0292275a0832(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int128_t var_98;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h1a305b48c3568182(&var_98, arg4);
    char* var_90;
    char* r12 = var_90;
    uint64_t result;
    uint64_t result_2 = result;
    int64_t rax;
    int64_t rdx_1;
    rax = std::path::Path::strip_prefix::h78cfa837a83b0b87(r12, result_2);
    int128_t var_48;
    home::home_dir::hfa89a945395e3159(&var_48);
    int64_t var_78 = rax;
    int64_t var_70 = rdx_1;
    int128_t var_68 = var_48;
    
    if (!rax || -(var_68) == -0x8000000000000000)
        core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$$RF$std..path..Path$C$std..path..StripPrefixError$GT$$C$core..option..Option$LT$std..path..PathBuf$GT$$RP$$GT$::hf8c010cbfe0ec3b8(&var_78);
    else
    {
        uint64_t result_1;
        std::path::Path::join::h8a1b8cf00bdd3485(&var_48, *var_68[8], result_1, rax);
        core::mem::drop::ha42964a555fb617b(&var_98);
        result = result_1;
        var_98 = var_48;
        core::mem::drop::ha42964a555fb617b(&var_68);
        r12 = var_90;
        result_2 = result;
    }
    
    if (!std::path::Path::is_absolute::hf2dacc49683e82ac(r12, result_2))
    {
        char* rax_6;
        uint64_t rdx_3;
        rax_6 = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
        
        if (rax_6)
        {
            std::path::Path::join::h815c8a3958ff5f69(&var_78, rax_6, rdx_3, &var_98);
            result = var_68;
            var_98 = var_78;
        }
    }
    
    arg1[1] = result;
    *arg1 = var_98;
    return result;
}
