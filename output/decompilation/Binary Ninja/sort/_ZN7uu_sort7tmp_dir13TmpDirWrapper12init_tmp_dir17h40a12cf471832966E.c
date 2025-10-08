
  uint64_t uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h40a12cf471832966(void* arg1)

{
    if (*(arg1 + 0x28) != 2)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: self.temp_dir.…");
        /* no return */
    }
    
    int64_t var_f8;
    
    if (*(arg1 + 0x38))
    {
        var_f8 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, arg1 + 0x38, &data_426a60, &var_f8);
        /* no return */
    }
    
    int64_t var_78 = 6;
    int64_t var_88 = 1;
    int64_t var_80 = 0;
    int16_t var_70 = 0;
    int32_t var_a0 = 0;
    char const* const var_98 = "uutils_sortassertion failed: sel…";
    int64_t var_90 = 0xb;
    int128_t var_b8;
    tempfile::Builder::tempdir_in::h41e65ac92346cc8c(&var_b8, &var_a0, arg1);
    char var_a8;
    int64_t var_68;
    int128_t var_60;
    
    if (var_a8 == 2)
    {
        uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h2186ef868a4f153a(&var_68, *(arg1 + 8), *(arg1 + 0x10), var_b8);
        int64_t var_50;
        int64_t var_18 = var_50;
        int128_t var_28 = var_60;
        int128_t var_38;
        int128_t var_c8 = var_38;
        int128_t var_48;
        int128_t var_d8 = var_48;
        int128_t var_118 = var_60;
        int128_t var_f0_1 = var_60;
        int64_t var_e0 = var_50;
        var_f8 = var_68;
        return alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_f8);
    }
    
    int128_t zmm0 = var_b8;
    core::ptr::drop_in_place$LT$core..option..Option$LT$tempfile..dir..TempDir$GT$$GT$::h3def595bc319fe18(arg1 + 0x18);
    *(arg1 + 0x28) = var_a8;
    *(arg1 + 0x18) = zmm0;
    
    if (*(arg1 + 0x28) == 2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_68, *(arg1 + 0x18), 
        *(arg1 + 0x20));
    int64_t* rax_4 = *(arg1 + 0x30);
    int64_t temp0 = *rax_4;
    *rax_4 += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    int64_t var_e0_1 = *(arg1 + 0x30);
    var_f8 = var_68;
    int128_t var_f0;
    *var_f0[8] = *var_60[8];
    ctrlc::init_and_set_handler::hcd032e68e80ef580(&var_a0, &var_f8);
    
    if (var_a0 == 3)
        return 0;
    
    var_f8 = var_a0;
    return uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h7a2370e9f611060b(&var_f8);
}
