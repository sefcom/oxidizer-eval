
  uint64_t uu_cp::copydir::Context::new::h1971362967e4b6cd(int64_t* arg1, char* arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    uint64_t result_2 = -0x8000000000000000;
    uint64_t result_1;
    std::env::current_dir::h2d02f56ea8ff76eb(&result_1);
    uint64_t result = result_1;
    int64_t var_d8;
    
    if (-(result) != -0x8000000000000000)
    {
        int64_t var_120_1 = var_d8;
        int64_t var_110;
        uint64_t var_d0;
        std::path::Path::join::h10fbe6df042abede(&var_110, var_d8, var_d0, arg2);
        std::fs::metadata::h87a95e5fd9b91fc7(&result_1, arg4);
        int32_t result_3 = result_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&result_1);
        int128_t var_108;
        
        if (result_3 != 2)
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, arg2, arg3);
            
            if (result_1 == 1)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hc600a80333ca26e9(var_d8, 
                var_d0, "/.src/uu/cp/src/copydir.rsFailed…", 2))
            {
                char* rax_2;
                uint64_t rdx_3;
                rax_2 = std::path::Path::parent::hef287f60afa56900(var_108, *var_108[8]);
                int128_t var_f8;
                
                if (rax_2)
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &result_1, rax_2, rdx_3);
                    result_2 = result_1;
                    var_f8 = var_d8;
                }
                
                arg1[2] = var_d0;
                *arg1 = result;
                arg1[3] = result_2;
                *(arg1 + 0x20) = var_f8;
                arg1[6] = arg4;
                arg1[7] = arg5;
                arg1[8] = arg2;
                arg1[9] = arg3;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                    &var_110);
            }
        }
        
        int64_t rax_1 = var_110;
        arg1[2] = var_d0;
        *arg1 = result;
        arg1[3] = rax_1;
        *(arg1 + 0x20) = var_108;
        arg1[6] = arg4;
        result = arg5;
        arg1[7] = result;
        arg1[8] = arg2;
        arg1[9] = arg3;
    }
    else
    {
        arg1[1] = var_d8;
        *arg1 = -0x8000000000000000;
    }
    return result;
}
