
  int64_t fd::fmt::FormatTemplate::generate::he820548229a842f6(int64_t* arg1, int32_t* arg2)

{
    int16_t* rax;
    uint64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h03cecf9d3b6fc05e(1);
    
    if (*arg2 == 1)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(arg1, *(arg2 + 0x10), *(arg2 + 0x18));
    
    int64_t var_68 = 0;
    int64_t result = 1;
    int64_t var_58 = 0;
    int64_t rax_2 = *(arg2 + 0x18);
    
    if (rax_2)
    {
        int64_t* r12_1 = *(arg2 + 0x10);
        int64_t i_1 = rax_2 * 0x18;
        int64_t i;
        
        do
        {
            int64_t rax_5 = *r12_1 ^ 0x8000000000000000;
            
            if (rax_5 >= 5)
                rax_5 = 5;
            
            void var_88;
            int64_t var_80;
            int64_t var_78;
            void var_48;
            int64_t r8;
            
            switch (rax_5)
            {
                case 0:
                {
                    fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(&var_88, rax, 
                        rdx, 0, r8);
                    r8 = std::ffi::os_str::OsString::push::h5df44f642c3867c3(&var_68, &var_88);
                    break;
                }
                case 1:
                {
                    int64_t rax_12;
                    int64_t rdx_13;
                    int64_t r8_8;
                    rax_12 = fd::fmt::input::basename::ha1dafb3b189e8a1e(rax, rdx);
                    fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(&var_88, rax_12, 
                        rdx_13, 0, r8_8);
                    r8 = std::ffi::os_str::OsString::push::h5df44f642c3867c3(&var_68, &var_88);
                    break;
                }
                case 2:
                {
                    fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(&var_48, var_80, 
                        var_78, 0, fd::fmt::input::dirname::h900660a28c19a669(&var_88, rax, rdx));
                    std::ffi::os_str::OsString::push::h5df44f642c3867c3(&var_68, &var_48);
                    /* tailcall */
                    return sub_5f5e30();
                }
                case 3:
                {
                    fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(&var_48, var_80, 
                        var_78, 0, 
                        fd::fmt::input::remove_extension::hfdc34e319ac0822a(&var_88, rax, rdx));
                    std::ffi::os_str::OsString::push::h5df44f642c3867c3(&var_68, &var_48);
                    /* tailcall */
                    return sub_5f5e30();
                }
                case 4:
                {
                    int16_t* rax_8;
                    uint64_t rdx_4;
                    rax_8 = fd::fmt::input::basename::ha1dafb3b189e8a1e(rax, rdx);
                    fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(&var_48, var_80, 
                        var_78, 0, 
                        fd::fmt::input::remove_extension::hfdc34e319ac0822a(&var_88, rax_8, rdx_4));
                    std::ffi::os_str::OsString::push::h5df44f642c3867c3(&var_68, &var_48);
                    /* tailcall */
                    return sub_5f5e30();
                }
                case 5:
                {
                    r8 = std::ffi::os_str::OsString::push::h30095eacd8312ed3(&var_68, r12_1);
                    break;
                }
            }
            
            r12_1 = &r12_1[3];
            i = i_1;
            i_1 -= 0x18;
        } while (i != 0x18);
    }
    
    arg1[2] = var_58;
    *arg1 = var_68;
    arg1[1] = result;
    return result;
}
