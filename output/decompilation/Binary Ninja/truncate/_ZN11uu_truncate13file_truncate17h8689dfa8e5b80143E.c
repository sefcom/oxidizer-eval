
  int128_t* uu_truncate::file_truncate::h8689dfa8e5b80143(int64_t arg1, int64_t arg2, char arg3, int64_t arg4)

{
    int64_t var_d0;
    std::fs::metadata::h6368ec5e748c38e4(&var_d0, arg1);
    int64_t rdi_1 = var_d0;
    int32_t var_148;
    int32_t fd_1;
    int64_t var_c8;
    int32_t var_98;
    
    if (rdi_1 != 2 && (0xf000 & var_98) == 0x1000)
    {
        fd_1 = 0;
        int64_t var_110_1 = arg1;
        int64_t var_108_1 = arg2;
        char var_100_1 = 1;
        int32_t* var_f8 = &fd_1;
        int64_t (* var_f0_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_148 = &data_5165a0;
        int64_t var_140_1 = 2;
        int64_t var_128_1 = 0;
        int32_t** var_138_1 = &var_f8;
        int64_t var_130_1 = 1;
        int128_t var_e8;
        core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&var_e8, &var_148);
        var_130_1 = 1;
        var_148 = var_e8;
        int64_t var_d8;
        int64_t var_138_2 = var_d8;
        int128_t* result = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_148);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(rdi_1, var_c8);
        return result;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(rdi_1, var_c8);
    var_d0 = 0x1b600000000;
    var_c8 = 0;
    *var_c8[4] = 0;
    *var_c8[1] = 1;
    *var_c8[4] = arg3;
    std::fs::OpenOptions::open::h4c049ac57fc11c66(&var_148, &var_d0, arg1);
    int64_t r15_2;
    
    if (!var_148)
    {
        int32_t fd;
        fd_1 = fd;
        r15_2 = std::fs::File::set_len::hd21acd2eeb028efb(&fd_1, arg4);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hb7323c6ad1fce92a(fd);
    }
    else
    {
        int64_t var_140;
        r15_2 = var_140;
        
        if (!std::io::error::Error::kind::hb2ff5fa058639b3d(r15_2) && !arg3)
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbd0972a5eeb59076(r15_2);
            r15_2 = 0;
        }
    }
    
    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd5342900d4cb632d(r15_2);
}
