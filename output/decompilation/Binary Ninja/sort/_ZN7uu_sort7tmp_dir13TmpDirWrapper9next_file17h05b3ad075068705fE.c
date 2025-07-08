
  int32_t* uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(int32_t* arg1, void* arg2)

{
    int128_t* rax_1;
    int64_t rdx_1;
    
    if (*(arg2 + 0x28) == 2)
        rax_1 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h98cc8f29e16f1909(arg2);
    
    if (*(arg2 + 0x28) != 2 || !rax_1)
    {
        int128_t var_78;
        std::sync::mutex::Mutex$LT$T$GT$::lock::h2fdf4238f9db328b(&var_78, *(arg2 + 0x30) + 0x10);
        int32_t* rax_2;
        char rdx_2;
        rax_2 = core::result::Result$LT$T$C$E$GT$::unwrap::he8ec3f841ca899b2(&var_78);
        int128_t var_38;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hbab597f68101a0a6(&var_38, 
            arg2 + 0x38);
        *(arg2 + 0x38) += 1;
        
        if (*(arg2 + 0x28) == 2)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int64_t rsi_4 = *(arg2 + 0x18);
        uint64_t rdx_3 = *(arg2 + 0x20);
        int64_t var_28;
        int64_t var_68_1 = var_28;
        var_78 = var_38;
        int128_t var_b0;
        std::path::Path::join::h2322a65c0d7509ac(&var_b0, rsi_4, rdx_3, &var_78);
        std::fs::File::create::h360b3028bf6903a2(&var_78, &var_b0);
        
        if (!var_78)
        {
            int128_t var_90_1 = var_b0;
            *arg1 = *var_78[4];
            int128_t var_94;
            *(arg1 + 4) = var_94;
            *(arg1 + 0x10) = *var_90_1[8];
            int64_t var_a0;
            *(arg1 + 0x18) = var_a0;
        }
        else
        {
            var_78 = 4;
            *var_78[8] = *var_78[8];
            *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_78);
            *(arg1 + 0x18) = &data_600f08;
            *(arg1 + 8) = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_b0);
        }
        
        core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h1ece0fb60dffd106(rax_2, rdx_2 & 1);
    }
    else
    {
        *(arg1 + 0x10) = rax_1;
        *(arg1 + 0x18) = rdx_1;
        *(arg1 + 8) = -0x8000000000000000;
    }
    
    return arg1;
}
