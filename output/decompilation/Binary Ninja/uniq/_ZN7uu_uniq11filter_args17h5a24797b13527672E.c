
  int128_t* uu_uniq::filter_args::h5a24797b13527672(int128_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4, char* arg5, char* arg6)

{
    size_t var_80;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_80, *(arg2 + 8), arg2[1]);
    
    if (!var_80)
    {
        char r12_1 = *arg5;
        char r15_1 = *arg6;
        char* var_78;
        size_t var_70;
        int128_t var_68_1;
        size_t var_58_1;
        
        if (!uu_uniq::should_extract_obs_skip_fields::h51b5db688d315961(var_78, var_70, r12_1, 
            r15_1))
        {
            if (!uu_uniq::should_extract_obs_skip_chars::h9543cb83474ee9e8(var_78, var_70, r12_1, 
                r15_1))
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_80, var_78, 
                    var_70);
                var_58_1 = var_70;
                var_68_1 = var_80;
                
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(
                    var_78, var_70, "-f-s---wsrc/uu/uniq/src/uniq.rs-…", 2))
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg3);
                    *arg3 = -0x8000000000000000;
                }
                
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(
                    var_78, var_70, "-s---wsrc/uu/uniq/src/uniq.rs--g…", 2))
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
                    *arg4 = -0x8000000000000000;
                }
            }
            else
            {
                uu_uniq::handle_extract_obs_skip_chars::h0678ba5eb79d7842(&var_80, var_78, var_70, 
                    arg4);
                var_58_1 = var_70;
                var_68_1 = var_80;
            }
        }
        else
        {
            uu_uniq::handle_extract_obs_skip_fields::h10397979e7d3d01d(&var_80, var_78, var_70, 
                arg3);
            var_58_1 = var_70;
            var_68_1 = var_80;
        }
        
        uu_uniq::handle_preceding_options::h9f64aa70978a6427(var_78, var_70, arg5, arg6);
        arg1[1] = var_58_1;
        *arg1 = var_68_1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::he3d1ba919720a117(arg2);
    }
    else
    {
        arg1[1] = arg2[1];
        *arg1 = *arg2;
    }
    
    return arg1;
}
