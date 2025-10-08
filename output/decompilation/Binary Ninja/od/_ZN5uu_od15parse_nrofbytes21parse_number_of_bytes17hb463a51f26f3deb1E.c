
  int64_t* uu_od::parse_nrofbytes::parse_number_of_bytes::hb463a51f26f3deb1(int64_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t r12 = 2;
    int32_t rbp = 0x10;
    uint64_t rbx;
    rbx = 1;
    int32_t var_50;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, arg3, 
        "0x0Xparse failednulsohstxetxeote…", 2))
    {
        r12 = 2;
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, arg3, 
            "0Xparse failednulsohstxetxeotenq…", 2))
        {
            var_50 = 0;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, 
                arg3, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x30, &var_50), 1))
            {
                void* rax_10;
                uint64_t rdx_6;
                rax_10 = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$str$GT$::as_ref::h34cce61f9bef243c(arg2);
                
                if (rax_10)
                    return uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        arg1, rax_10, rdx_6);
                
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg3);
                /* no return */
            }
            
            rbp = 8;
            rbx = 0;
            r12 = 0;
        }
    }
    
    char* var_40 = arg2;
    void* var_38_1 = &arg2[arg3];
    char rax_5;
    int32_t rdx_1;
    rax_5 = core::str::validations::next_code_point_reverse::h438d37208171f517(&var_40, rbx);
    int64_t r13_1 = 1;
    int64_t* result;
    uint64_t rbp_1;
    
    if (!(rax_5 & 1))
    {
        label_46adbb:
        rbp_1 = arg3;
        label_46adca:
        void* rax_6;
        int64_t rdx_4;
        rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, rbp_1, arg2, arg3);
        
        if (!rax_6)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, rbp_1);
            /* no return */
        }
        
        core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_50, rax_6, 
            rdx_4, rbp);
        
        if (!var_50)
        {
            int64_t var_48;
            int64_t* rbx_2;
            
            if ((r13_1 * var_48) >> 0x40 == {0})
            {
                rbx_2 = arg1;
                rbx_2[1] = r13_1 * var_48;
                result = 4;
            }
            else
            {
                rbx_2 = arg1;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&rbx_2[1], arg2, arg3);
                result = 2;
            }
            
            *rbx_2 = result;
        }
        else
        {
            char var_61 = *var_50[1];
            result = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h3be401356d22601e(&arg1[1], &var_61);
            *arg1 = 1;
        }
    }
    else
    {
        uint64_t rdx_2 = rdx_1 - 0x42;
        
        if (rdx_2 > 0x2b)
            goto label_46adbb;
        
        bool cond:1_1;
        
        switch (rdx_2)
        {
            case 0:
            {
                rbp_1 = arg3;
                
                if (rbx)
                    goto label_46adca;
                
                char rax_11;
                int32_t rdx_7;
                rax_11 = core::str::validations::next_code_point_reverse::h438d37208171f517(
                    &var_40, rbx);
                
                if (!(rax_11 & 1))
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&arg1[1], arg2, arg3);
                    *arg1 = 1;
                }
                else
                {
                    uint64_t rdx_8 = rdx_7 - 0x45;
                    
                    if (rdx_8 > 0x28)
                    {
                        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&arg1[1], arg2, arg3);
                        *arg1 = 1;
                    }
                    else
                    {
                        rbp_1 = arg3 - 2;
                        
                        switch (rdx_8)
                        {
                            case 0:
                            {
                                r13_1 = 0xde0b6b3a7640000;
                                goto label_46adca;
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
                                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&arg1[1], arg2, arg3);
                                *arg1 = 1;
                                break;
                            }
                            case 2:
                            {
                                r13_1 = 0x3b9aca00;
                                goto label_46adca;
                            }
                            case 6:
                            case 0x26:
                            {
                                r13_1 = 0x3e8;
                                goto label_46adca;
                            }
                            case 8:
                            case 0x28:
                            {
                                r13_1 = 0xf4240;
                                goto label_46adca;
                            }
                            case 0xb:
                            {
                                r13_1 = 0x38d7ea4c68000;
                                goto label_46adca;
                            }
                            case 0xf:
                            {
                                r13_1 = 0xe8d4a51000;
                                goto label_46adca;
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
                goto label_46adbb;
            }
            case 3:
            {
                cond:1_1 = rbx;
                r13_1 = 0x1000000000000000;
                label_46af0d:
                
                if (cond:1_1)
                    r13_1 = 1;
                
                rbx ^= 1;
                rbp_1 = arg3 - rbx;
                goto label_46adca;
            }
            case 5:
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x40000000;
                goto label_46adca;
            }
            case 9:
            case 0x29:
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x400;
                goto label_46adca;
            }
            case 0xb:
            case 0x2b:
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x100000;
                goto label_46adca;
            }
            case 0xe:
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x4000000000000;
                goto label_46adca;
            }
            case 0x12:
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x10000000000;
                goto label_46adca;
            }
            case 0x20:
            {
                cond:1_1 = rbx;
                r13_1 = 0x200;
                goto label_46af0d;
            }
        }
    }
    return result;
}
