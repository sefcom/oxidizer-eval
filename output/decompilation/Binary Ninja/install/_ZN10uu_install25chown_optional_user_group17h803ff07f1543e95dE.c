
  uint64_t uu_install::chown_optional_user_group::h803ff07f1543e95d(int64_t arg1, uint64_t arg2, void* arg3)

{
    int32_t rbp = *(arg3 + 0x50);
    int32_t r12 = *(arg3 + 0x58);
    int32_t var_158_1;
    int32_t var_150_1;
    char r13_1;
    
    if (rbp | r12)
    {
        var_150_1 = *(arg3 + 0x54);
        var_158_1 = *(arg3 + 0x5c);
        r13_1 = rbp;
    }
    else
    {
        if (uucore::features::process::geteuid::hd0ed7b4820ed9632())
            return 0;
        
        var_150_1 = 0;
        r13_1 = 1;
        r12 = 1;
        var_158_1 = 0;
    }
    
    int32_t var_e0;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg1);
    int64_t var_120;
    int64_t var_118;
    int64_t var_d8;
    
    if (var_e0 == 2)
    {
        var_118 = var_d8;
        var_120 = 0xa;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_120);
    }
    
    int32_t var_a4;
    int32_t var_a0;
    uucore::features::perms::wrap_chown::h181c39f30a5ca939(&var_120, arg1, arg2, var_a4, var_a0, 
        r13_1, var_150_1, r12, var_158_1, !rbp);
    int128_t var_148;
    int64_t var_108;
    
    if (var_120 == 1)
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_148, arg1, 
            arg2);
        int64_t var_b0_1 = var_108;
        int128_t var_c0_1 = var_118;
        var_d8 = var_148;
        int64_t var_138;
        int64_t var_c8_1 = var_138;
        var_e0 = 4;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
    }
    
    int128_t* rdi_6;
    
    if (*(arg3 + 0x61) != 1 || !var_108)
        rdi_6 = &var_118;
    else
    {
        int64_t var_138_1 = var_108;
        var_148 = var_118;
        int128_t* var_130 = &var_148;
        int64_t (* var_128_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_e0 = &data_502478;
        int64_t var_d8_1 = 2;
        int128_t var_c0;
        var_c0 = 0;
        int128_t** var_d0_1 = &var_130;
        int64_t var_c8_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
        rdi_6 = &var_148;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(rdi_6);
    return 0;
}
