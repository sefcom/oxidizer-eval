
  int64_t* uu_unexpand::expand_shortcuts::hf9e317c33afe99db(int64_t* arg1, void* arg2, int64_t arg3)

{
    void* r14 = arg2;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h0f389c1011ab4014(arg3, 8, 0x18);
    int64_t var_d0 = rax;
    int64_t var_c0 = 0;
    
    if (arg3)
    {
        int64_t i_1 = arg3 * 0x18;
        char var_d4_1 = 0;
        char var_d8_1 = 0;
        int32_t var_b8;
        int64_t i;
        
        do
        {
            char* r15_1 = *(r14 + 8);
            uint64_t rbx_2 = *(r14 + 0x10);
            var_b8 = 0;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8efff08fd85b21e0(r15_1, 
                rbx_2, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_b8)))
            {
                label_45c3cb:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_b8, r14);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd88ea85f4ae5c379(&var_d0, &var_b8);
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7c2f39b0c4e545c7(r15_1, rbx_2, "--all-a--tabs=(uutils coreutils)…", 5))
                    var_d4_1 = 1;
                else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7c2f39b0c4e545c7(r15_1, rbx_2, "-a--tabs=(uutils coreutils) 0.0.…", 2))
                    var_d4_1 = 1;
            }
            else
            {
                int64_t rax_4;
                int64_t rdx_2;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, rbx_2);
                
                if (!rax_4)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r15_1, rbx_2, 1, rbx_2);
                    /* no return */
                }
                
                var_b8 = rax_4;
                int64_t var_b0_1 = rax_4 + rdx_2;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h6d9bdb0da19e3277(core::iter::traits::iterator::Iterator::try_fold::h5635a8b1e58caf26(&var_b8)))
                    goto label_45c3cb;
                
                void var_68;
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, rax_4, rdx_2);
                int64_t var_78 = 0;
                int64_t var_70_1 = rdx_2;
                int16_t var_38_1 = 1;
                var_d8_1 = 1;
                core::iter::traits::iterator::Iterator::fold::hfcc987b97c2fdfd0(&var_78, &var_d0);
            }
            
            r14 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while (i != 0x18);
        
        if (!((~var_d8_1 | var_d4_1) & 1))
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc756f0904f45cd83(&var_b8, "--first-only--all-a--tabs=(uutil…", 0xc);
            int64_t var_a8;
            int64_t var_88_1 = var_a8;
            int128_t var_98 = var_b8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd88ea85f4ae5c379(&var_d0, &var_98);
        }
    }
    
    arg1[2] = var_c0;
    *arg1 = var_d0;
    arg1[1] = rdx;
    return arg1;
}
