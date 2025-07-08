
  int128_t* uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h98cc8f29e16f1909(void* arg1)

{
    if (*(arg1 + 0x28) != 2)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: self.temp_dir.…");
        /* no return */
    }
    
    int64_t var_c8;
    
    if (*(arg1 + 0x38))
    {
        var_c8 = 0;
        core::panicking::assert_failed::hd9eafe0b9dbc486f(0, arg1 + 0x38, &data_4241e8[0x10], 
            &var_c8);
        /* no return */
    }
    
    int64_t var_60 = 6;
    int64_t var_70 = 1;
    int64_t var_68 = 0;
    int16_t var_58 = 0;
    int32_t var_88 = 0;
    char const* const var_80 = "uutils_sortassertion failed: sel…";
    int64_t var_78 = 0xb;
    int128_t var_e0;
    tempfile::Builder::tempdir_in::h2c1cb977497001f4(&var_e0, &var_88, arg1);
    char var_d0;
    int128_t* result;
    char var_50;
    int128_t var_40;
    
    if (var_d0 != 2)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$tempfile..dir..TempDir$GT$$GT$::h781346d64f7035c3(arg1 + 0x18);
        *(arg1 + 0x28) = var_d0;
        *(arg1 + 0x18) = var_e0;
        
        if (*(arg1 + 0x28) == 2)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_50, 
            *(arg1 + 0x18), *(arg1 + 0x20));
        int64_t* rax_2 = *(arg1 + 0x30);
        int64_t temp0_1 = *rax_2;
        *rax_2 += 1;
        
        if (temp0_1 <= -1)
            trap(6);
        
        int128_t var_b8;
        *var_b8[8] = *(arg1 + 0x30);
        var_c8 = var_50;
        var_b8 = var_40;
        ctrlc::init_and_set_handler::h6af8d99ede2ba210(&var_88, &var_c8, 1);
        
        if (var_88 != 3)
        {
            var_c8 = var_88;
            result = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::hdf55d06592a2f2db(&var_c8);
        }
        else
            result = nullptr;
    }
    else
    {
        uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h483fa247c502359f(&var_50, arg1, var_e0);
        int128_t var_b8_1 = var_40;
        int128_t var_4f;
        *var_c8[1] = var_4f;
        int128_t var_30;
        int128_t var_a8_1 = var_30;
        int128_t var_20;
        int128_t var_98_1 = var_20;
        var_c8 = var_50;
        result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_c8);
    }
    return result;
}
