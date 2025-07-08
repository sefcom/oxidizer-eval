
  int64_t* uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(int64_t* arg1, char* arg2, uint64_t arg3)

{
    void* r12 = 2;
    int32_t rbp = 0x10;
    uint64_t rbx;
    rbx = 1;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, arg3, 
            "0x0X", 2))
        goto label_4d79df;
    
    r12 = 2;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, arg3, 
            "0X", 2))
        goto label_4d79df;
    
    int32_t var_50 = 0;
    int64_t rax_2;
    uint64_t rdx;
    rax_2 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x30, &var_50);
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, arg3, 
        rax_2, rdx))
    {
        void* rax_6;
        uint64_t rdx_4;
        rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg2);
        
        if (!rax_6)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg3);
            /* no return */
        }
        
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(arg1, rax_6, rdx_4);
    }
    else
    {
        rbp = 8;
        r12 = nullptr;
        rbx = 0;
        label_4d79df:
        char* var_40 = arg2;
        void* var_38_1 = &arg2[arg3];
        int32_t rax_5;
        int32_t rdx_2;
        rax_5 = core::str::validations::next_code_point_reverse::hff7c38eb44570652(&var_40, rbx);
        int64_t r13_1 = 1;
        uint64_t rbp_1;
        
        if (!rax_5)
        {
            label_4d7a28:
            rbp_1 = arg3;
            label_4d7b29:
            void* rax_12;
            int64_t rdx_8;
            rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, rbp_1, arg2, arg3);
            
            if (!rax_12)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, r12, rbp_1);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&var_50, rax_12, 
                rdx_8, rbp);
            
            if (!var_50)
            {
                int64_t var_48;
                int64_t rax_16;
                
                if ((r13_1 * var_48) >> 0x40 == {0})
                {
                    arg1[1] = r13_1 * var_48;
                    rax_16 = 3;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                        &arg1[1], arg2, arg3);
                    rax_16 = 2;
                }
                
                *arg1 = rax_16;
            }
            else
            {
                char var_61 = *var_50[1];
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3f1d93ee7475dcc4(
                    &arg1[1], &var_61);
                *arg1 = 1;
            }
        }
        else
        {
            uint64_t rdx_3 = rdx_2 - 0x42;
            
            if (rdx_3 > 0x2b)
                goto label_4d7a28;
            
            switch (rdx_3)
            {
                case 0:
                {
                    rbp_1 = arg3;
                    
                    if (rbx)
                        goto label_4d7b29;
                    
                    int32_t rax_7;
                    int32_t rdx_5;
                    rax_7 = core::str::validations::next_code_point_reverse::hff7c38eb44570652(
                        &var_40, rbx);
                    
                    if (!rax_7)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&arg1[1], arg2, arg3);
                        *arg1 = 1;
                    }
                    else
                    {
                        uint64_t rdx_6 = rdx_5 - 0x45;
                        
                        if (rdx_6 > 0x28)
                        {
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&arg1[1], arg2, arg3);
                            *arg1 = 1;
                        }
                        else
                        {
                            rbp_1 = arg3 - 2;
                            
                            switch (rdx_6)
                            {
                                case 0:
                                {
                                    r13_1 = 0xde0b6b3a7640000;
                                    goto label_4d7b29;
                                }
                                case 1:
                                case 3:
                                case 4:
                                case 5:
                                case 7:
                                case 9:
                                case 0xa:
                                case 0xc:
                                case 0xd:
                                case 0xe:
                                case 0x10:
                                case 0x11:
                                case 0x12:
                                case 0x13:
                                case 0x14:
                                case 0x15:
                                case 0x16:
                                case 0x17:
                                case 0x18:
                                case 0x19:
                                case 0x1a:
                                case 0x1b:
                                case 0x1c:
                                case 0x1d:
                                case 0x1e:
                                case 0x1f:
                                case 0x20:
                                case 0x21:
                                case 0x22:
                                case 0x23:
                                case 0x24:
                                case 0x25:
                                case 0x27:
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&arg1[1], arg2, arg3);
                                    *arg1 = 1;
                                    break;
                                }
                                case 2:
                                {
                                    r13_1 = 0x3b9aca00;
                                    goto label_4d7b29;
                                }
                                case 6:
                                case 0x26:
                                {
                                    r13_1 = 0x3e8;
                                    goto label_4d7b29;
                                }
                                case 8:
                                case 0x28:
                                {
                                    r13_1 = 0xf4240;
                                    goto label_4d7b29;
                                }
                                case 0xb:
                                {
                                    r13_1 = 0x38d7ea4c68000;
                                    goto label_4d7b29;
                                }
                                case 0xf:
                                {
                                    r13_1 = 0xe8d4a51000;
                                    goto label_4d7b29;
                                }
                            }
                        }
                    }
                    break;
                }
                case 1:
                case 2:
                case 4:
                case 6:
                case 7:
                case 8:
                case 0xa:
                case 0xc:
                case 0xd:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x2a:
                {
                    goto label_4d7a28;
                }
                case 3:
                {
                    rbp_1 = arg3 - (rbx ^ 1);
                    r13_1 = 0x1000000000000000;
                    
                    if (rbx)
                        r13_1 = 1;
                    
                    goto label_4d7b29;
                }
                case 5:
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x40000000;
                    goto label_4d7b29;
                }
                case 9:
                case 0x29:
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x400;
                    goto label_4d7b29;
                }
                case 0xb:
                case 0x2b:
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x100000;
                    goto label_4d7b29;
                }
                case 0xe:
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x4000000000000;
                    goto label_4d7b29;
                }
                case 0x12:
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x10000000000;
                    goto label_4d7b29;
                }
                case 0x20:
                {
                    rbp_1 = arg3 - (rbx ^ 1);
                    r13_1 = 0x200;
                    
                    if (rbx)
                        r13_1 = 1;
                    
                    goto label_4d7b29;
                }
            }
        }
    }
    
    return arg1;
}
