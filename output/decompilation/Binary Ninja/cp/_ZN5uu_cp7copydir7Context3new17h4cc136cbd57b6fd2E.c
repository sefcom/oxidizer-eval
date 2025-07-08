
  uint64_t uu_cp::copydir::Context::new::h4cc136cbd57b6fd2(int64_t* arg1, char* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    uint64_t result_4 = -0x8000000000000000;
    uint64_t result_3;
    std::env::current_dir::h8e5fbaefdf378c8c(&result_3);
    uint64_t result = result_3;
    int64_t var_d8;
    
    if (result != -0x8000000000000000)
    {
        uint64_t result_1 = result;
        int64_t var_120_1 = var_d8;
        uint64_t result_2;
        uint64_t var_d0;
        std::path::Path::join::hb28666e9f3e91503(&result_2, var_d8, var_d0, arg2);
        std::fs::metadata::h003d8cdbffde7c56(&result_3, arg4);
        uint64_t result_5 = result_3;
        int128_t var_108;
        
        if (result_5 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(result_5, var_d8);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&result_3, arg2, arg3);
            
            if (result_3)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h706a83e6dc488ee6(var_d8, 
                var_d0, "/.src/uu/cp/src/copydir.rsFailed…", 2))
            {
                char* rax_1;
                uint64_t rdx_3;
                rax_1 = std::path::Path::parent::h65c9a340a6266f2d(var_108, *var_108[8]);
                int128_t var_f8;
                
                if (rax_1)
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                        &result_3, rax_1, rdx_3);
                    result_4 = result_3;
                    var_f8 = var_d8;
                }
                
                arg1[2] = var_d0;
                *arg1 = result_1;
                arg1[3] = result_4;
                *(arg1 + 0x20) = var_f8;
                arg1[6] = arg4;
                arg1[7] = arg5;
                arg1[8] = arg2;
                arg1[9] = arg3;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                    &result_2);
            }
        }
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(2, var_d8);
        
        result = result_2;
        arg1[2] = var_d0;
        *arg1 = result_1;
        arg1[3] = result;
        *(arg1 + 0x20) = var_108;
        arg1[6] = arg4;
        arg1[7] = arg5;
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
