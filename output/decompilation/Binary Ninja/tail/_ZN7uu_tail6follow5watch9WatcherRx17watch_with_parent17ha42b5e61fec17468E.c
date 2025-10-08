
  uint64_t uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(void** arg1, int64_t arg2, int64_t arg3, uint64_t arg4)

{
    void** const var_c8;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_c8, arg3, arg4);
    char* var_c0;
    char* rbx = var_c0;
    uint64_t var_b8;
    uint64_t result;
    void** const var_a8;
    uint64_t var_98;
    
    if (!std::path::Path::is_file::h6e28d87ff76ffc41(rbx, var_b8))
    {
        label_4a3070:
        rbx = var_c0;
        uint64_t r12_1 = var_b8;
        
        if (std::path::Path::is_absolute::hf2dacc49683e82ac(rbx, r12_1))
            goto label_4a30eb;
        
        std::fs::canonicalize::h51813c249f73b0e1(&var_a8, rbx);
        void** const rbp_2 = var_a8;
        
        if (-(rbp_2) != -0x8000000000000000)
        {
            r12_1 = var_98;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
            var_c8 = rbp_2;
            char* var_a0;
            char* var_c0_1 = var_a0;
            uint64_t var_b8_1 = r12_1;
            rbx = var_a0;
            label_4a30eb:
            uint64_t result_1 =
                uu_tail::follow::watch::WatcherRx::watch::h0f775d7b205c66a4(arg1, arg2, rbx, r12_1);
            result = result_1;
            
            if (!result_1)
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
                return 0;
            }
        }
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    else
    {
        char* rax_1;
        uint64_t rdx_1;
        rax_1 = std::path::Path::parent::hef287f60afa56900(rbx, var_b8);
        char* var_78;
        
        if (rax_1)
        {
            int128_t zmm0_1;
            
            if (!std::path::Path::is_dir::h02edbc48c38d7d9e(rax_1, rdx_1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_a8, ".cannot watch parent directory o…", 1);
                var_78 = var_a8;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
                var_b8 = var_98;
                zmm0_1 = var_78;
            }
            else
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_a8, 
                    rax_1, rdx_1);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
                var_b8 = var_98;
                zmm0_1 = var_a8;
            }
            
            var_c8 = zmm0_1;
            goto label_4a3070;
        }
        
        var_78 = rbx;
        uint64_t var_70_1 = var_b8;
        char** var_58 = &var_78;
        uint64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_a8 = &data_573490;
        int64_t var_a0_1 = 1;
        int64_t var_88_1 = 0;
        char*** var_98_1 = &var_58;
        int64_t var_90_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_48, &var_a8);
        var_90_1 = 1;
        var_a8 = var_48;
        int64_t var_38;
        int64_t var_98_2 = var_38;
        result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_a8);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
    return result;
}
