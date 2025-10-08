
  uint64_t bat::pager::PagerKind::from_bin::h088ae57711f0ac1e(int64_t arg1, uint64_t arg2)

{
    uint64_t rbp;
    rbp = 4;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg1, arg2, "builtinBAT_PAGERPAGERsrc/preproc…", 7))
    {
        int16_t* rax_1;
        uint64_t rdx_1;
        rax_1 = std::path::Path::file_stem::hc69c2d2c61933548(arg1, arg2);
        int64_t var_60;
        std::env::args_os::h5ff0cf6a45e392f2(&var_60);
        int64_t var_40;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h44aa0e071acc92fb(&var_40, &var_60);
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::h0d349c28e5b4db48(&var_60);
        int64_t rax_2 = var_40;
        int32_t r15_1;
        r15_1 = 5;
        int128_t var_58;
        
        if (rax_2 != -0x8000000000000000)
        {
            int128_t var_38;
            var_58 = var_38;
            var_60 = rax_2;
            int64_t rcx_1;
            rcx_1 = !
                bat::pager::PagerKind::from_bin::_$u7b$$u7b$closure$u7d$$u7d$::h6cf46e1c73f01f26(
                rax_1, rdx_1, &var_60);
            r15_1 = rcx_1 * 5;
        }
        
        if (!rax_1)
        {
            var_60 = -0x7fffffffffffffff;
            rbp = r15_1;
        }
        else
        {
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_60, rax_1, rdx_1);
            
            if (var_60 == -0x7fffffffffffffff)
                rbp = r15_1;
            else
            {
                int64_t rbx_2 = var_58;
                uint64_t r14_2 = *var_58[8];
                rbp = 1;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(rbx_2, r14_2, "lessOS: wordc", 4))
                {
                    rbp = 2;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(rbx_2, r14_2, "more", 4))
                    {
                        rbp = 3;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(rbx_2, r14_2, &data_480bb8, 4))
                            rbp = r15_1;
                    }
                }
            }
        }
        
        core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(&var_60);
    }
    
    return rbp;
}
