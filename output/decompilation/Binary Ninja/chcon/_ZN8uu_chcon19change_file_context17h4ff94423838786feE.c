
  uint64_t uu_chcon::change_file_context::h4ff94423838786fe(int32_t* arg1, void* arg2, int32_t* arg3, int64_t arg4, int64_t arg5)

{
    int64_t rbp = *(arg2 + 0x18);
    uint64_t result;
    int32_t result_1;
    int128_t var_1ac;
    int32_t var_1a8;
    int128_t var_1a0;
    int128_t var_190;
    uint64_t result_2;
    int64_t var_170;
    int32_t var_168;
    int128_t var_128;
    int128_t var_108;
    int128_t var_e8;
    int128_t var_dc;
    
    if (rbp + 0x7fffffffffffffff > 1)
    {
        uint32_t rcx_2 = *(arg2 + 0x7a);
        char var_10c_1 = rcx_2;
        selinux::SecurityContext::of_path::h522c60b6cf830605(&result_1, arg4, arg5, rcx_2);
        
        if (result_1 == 0xa)
        {
            if (var_1a8 == 2)
                return uu_chcon::errors::Error::from_io1::head3fca5f0bd97eb(arg1, 
                    "Applying partial security contex…", 0x33, arg4);
            
            var_dc = var_1a0;
            var_e8 = var_1a8;
            selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_168, &var_e8);
            int64_t var_160;
            int64_t var_158;
            
            if (var_168 != 0xa)
            {
                int64_t var_138;
                *(arg1 + 0x30) = var_138;
                int128_t zmm0_5 = var_168;
                int128_t var_148;
                *(arg1 + 0x20) = var_148;
                *(arg1 + 0x10) = var_158;
                *arg1 = zmm0_5;
                *(arg1 + 0x38) = "Getting security contextApplying…";
                *(arg1 + 0x40) = 0x18;
            }
            else if (var_160 != 2)
            {
                int16_t var_150;
                int64_t rdx_3 = var_150;
                int64_t var_f8_2 = rdx_3;
                var_108 = var_160;
                int64_t rsi_5 = *var_108[8];
                int32_t var_68;
                selinux::OpaqueSecurityContext::from_c_str::h368aba2e3de4a508(&var_68, rsi_5);
                int64_t rax_7;
                
                if (var_68 != 0xa)
                {
                    uu_chcon::change_file_context::_$u7b$$u7b$closure$u7d$$u7d$::h6c95354de1eca57e(
                        &result_1, arg4, arg5, &var_68);
                    int64_t zmm0_7 = result_1;
                    rax_7 = var_1a8;
                    var_168 = var_1a0;
                    var_158 = var_190;
                    int128_t var_148_1 = result_2;
                    
                    if (result_1 == 0x12)
                        goto label_4651c0;
                    
                    *(arg1 + 0x40) = var_170;
                    int128_t zmm1_7 = var_168;
                    *(arg1 + 0x30) = var_148_1;
                    *(arg1 + 0x20) = var_158;
                    *(arg1 + 0x10) = zmm1_7;
                    *arg1 = zmm0_7;
                    *(arg1 + 8) = rax_7;
                }
                else
                {
                    int64_t var_60;
                    rax_7 = var_60;
                    label_4651c0:
                    var_128 = rax_7;
                    
                    if (rbp == -0x8000000000000000)
                        goto label_4652c3;
                    
                    int32_t var_c0;
                    uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(&var_c0, *(arg2 + 0x20), 
                        *(arg2 + 0x28));
                    int128_t var_178;
                    int128_t var_148_2;
                    char* rdx_7;
                    int64_t r8_5;
                    int64_t zmm0_8;
                    
                    if (var_c0 != 0x12)
                    {
                        uu_chcon::change_file_context::_$u7b$$u7b$closure$u7d$$u7d$::hd91decac0b464611(&result_1, arg4, arg5, &var_c0);
                        zmm0_8 = result_1;
                        rdx_7 = var_1a8;
                        r8_5 = var_1a0;
                        var_168 = var_1a0;
                        var_158 = var_190;
                        var_148_2 = var_178;
                        
                        if (result_1 == 0x12)
                            goto label_46529a;
                        
                        label_4655b5:
                        int128_t zmm1_8 = var_168;
                        *(arg1 + 0x38) = var_148_2;
                        *(arg1 + 0x28) = var_158;
                        *(arg1 + 0x18) = zmm1_8;
                        *arg1 = zmm0_8;
                        *(arg1 + 8) = rdx_7;
                        *(arg1 + 0x10) = r8_5;
                        core::ptr::drop_in_place$LT$selinux..OpaqueSecurityContext$GT$::he57417cd918cb932();
                    }
                    else
                    {
                        char* var_b8;
                        rdx_7 = var_b8;
                        int64_t var_b0;
                        r8_5 = var_b0;
                        label_46529a:
                        char* var_1b8_1 = rdx_7;
                        int64_t rbp_1 = r8_5;
                        selinux::OpaqueSecurityContext::set_user::hedb81d8385ad715a(&result_1, 
                            &var_128, rdx_7);
                        int32_t result_3 = result_1;
                        
                        if (result_3 != 0xa)
                        {
                            label_46557b:
                            arg1[0xd] = *result_2[4];
                            *(arg1 + 0x24) = var_190;
                            *(arg1 + 0x14) = var_1a0;
                            *(arg1 + 4) = var_1ac;
                            *arg1 = result_3;
                            *(arg1 + 0x38) = "Setting security context userSet…";
                            *(arg1 + 0x40) = 0x1d;
                            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h0b7b43b54cd99185(var_1b8_1, rbp_1);
                            core::ptr::drop_in_place$LT$selinux..OpaqueSecurityContext$GT$::he57417cd918cb932();
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h0b7b43b54cd99185(var_1b8_1, rbp_1);
                            label_4652c3:
                            
                            if (*(arg2 + 0x30) == -0x8000000000000000)
                                goto label_465389;
                            
                            uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(&var_c0, 
                                *(arg2 + 0x38), *(arg2 + 0x40));
                            
                            if (var_c0 != 0x12)
                            {
                                uu_chcon::change_file_context::_$u7b$$u7b$closure$u7d$$u7d$::hd91decac0b464611(&result_1, arg4, arg5, &var_c0);
                                zmm0_8 = result_1;
                                rdx_7 = var_1a8;
                                r8_5 = var_1a0;
                                var_168 = var_1a0;
                                var_158 = var_190;
                                var_148_2 = var_178;
                                
                                if (result_1 != 0x12)
                                    goto label_4655b5;
                                
                                goto label_465360;
                            }
                            
                            rdx_7 = var_b8;
                            r8_5 = var_b0;
                            label_465360:
                            var_1b8_1 = rdx_7;
                            rbp_1 = r8_5;
                            selinux::OpaqueSecurityContext::set_role::hd7572ed457b85c0d(&result_1, 
                                &var_128, rdx_7);
                            result_3 = result_1;
                            
                            if (result_3 != 0xa)
                                goto label_46557b;
                            
                            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h0b7b43b54cd99185(var_1b8_1, rbp_1);
                            label_465389:
                            
                            if (*(arg2 + 0x48) == -0x8000000000000000)
                                goto label_46544f;
                            
                            uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(&var_c0, 
                                *(arg2 + 0x50), *(arg2 + 0x58));
                            
                            if (var_c0 != 0x12)
                            {
                                uu_chcon::change_file_context::_$u7b$$u7b$closure$u7d$$u7d$::hd91decac0b464611(&result_1, arg4, arg5, &var_c0);
                                zmm0_8 = result_1;
                                rdx_7 = var_1a8;
                                r8_5 = var_1a0;
                                var_168 = var_1a0;
                                var_158 = var_190;
                                var_148_2 = var_178;
                                
                                if (result_1 != 0x12)
                                    goto label_4655b5;
                            }
                            else
                            {
                                rdx_7 = var_b8;
                                r8_5 = var_b0;
                            }
                            
                            var_1b8_1 = rdx_7;
                            rbp_1 = r8_5;
                            selinux::OpaqueSecurityContext::set_type::h1115d79b3e28ec42(&result_1, 
                                &var_128, rdx_7);
                            result_3 = result_1;
                            
                            if (result_3 != 0xa)
                                goto label_46557b;
                            
                            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h0b7b43b54cd99185(var_1b8_1, rbp_1);
                            label_46544f:
                            
                            if (*(arg2 + 0x60) == -0x8000000000000000)
                                goto label_46551e;
                            
                            uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(&var_c0, 
                                *(arg2 + 0x68), *(arg2 + 0x70));
                            
                            if (var_c0 != 0x12)
                            {
                                uu_chcon::change_file_context::_$u7b$$u7b$closure$u7d$$u7d$::hd91decac0b464611(&result_1, arg4, arg5, &var_c0);
                                zmm0_8 = result_1;
                                rdx_7 = var_1a8;
                                r8_5 = var_1a0;
                                var_168 = var_1a0;
                                var_158 = var_190;
                                var_148_2 = var_178;
                                
                                if (result_1 != 0x12)
                                    goto label_4655b5;
                            }
                            else
                            {
                                rdx_7 = var_b8;
                                r8_5 = var_b0;
                            }
                            
                            var_1b8_1 = rdx_7;
                            rbp_1 = r8_5;
                            selinux::OpaqueSecurityContext::set_range::h55d2baed979040b1(&result_1, 
                                &var_128, rdx_7);
                            result_3 = result_1;
                            
                            if (result_3 != 0xa)
                                goto label_46557b;
                            
                            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h0b7b43b54cd99185(var_1b8_1, rbp_1);
                            label_46551e:
                            selinux::OpaqueSecurityContext::to_c_string::h430491ec1faf4b27(
                                &result_1, &var_128);
                            int32_t result_4 = result_1;
                            
                            if (result_4 != 0xa)
                            {
                                *(arg1 + 0x18) = var_1a0;
                                *(arg1 + 0x28) = var_190;
                                *arg1 = result_4;
                                arg1[1] = var_1ac;
                                *(arg1 + 8) = var_1a8;
                                *(arg1 + 0x38) = "Getting security contextApplying…";
                                *(arg1 + 0x40) = 0x18;
                                core::ptr::drop_in_place$LT$selinux..OpaqueSecurityContext$GT$::he57417cd918cb932();
                            }
                            else
                            {
                                char* r13_1 = var_1a8;
                                int64_t rbp_2 = var_1a0;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he02cbea1a37bd162(rsi_5, rdx_3 - 1, r13_1, rbp_2 - 1))
                                {
                                    char* var_158_2 = r13_1;
                                    var_168 = 1;
                                    int64_t var_160_2 = rbp_2 - 1;
                                    int16_t var_150_2 = 0;
                                    selinux::SecurityContext::set_for_path::h19303842538e7cce(
                                        &result_1, r13_1, arg4, arg5, var_10c_1);
                                    
                                    if (result_1 != 0xa)
                                    {
                                        *(arg1 + 0x30) = result_2;
                                        int128_t zmm0_11 = result_1;
                                        *(arg1 + 0x20) = var_190;
                                        *(arg1 + 0x10) = var_1a0;
                                        *arg1 = zmm0_11;
                                        *(arg1 + 0x38) = "Setting security contextCreating…";
                                        *(arg1 + 0x40) = 0x18;
                                    }
                                    else
                                        *arg1 = 0x12;
                                    
                                    core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::hd7ef3bf7c0519cb7();
                                }
                                else
                                    *arg1 = 0x12;
                                
                                core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h0b7b43b54cd99185(r13_1, rbp_2);
                                core::ptr::drop_in_place$LT$selinux..OpaqueSecurityContext$GT$::he57417cd918cb932();
                            }
                        }
                    }
                }
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::hdf16f007a625a2bf(&var_108);
            }
            else
            {
                uu_chcon::errors::Error::from_io1::head3fca5f0bd97eb(&result_1, 
                    "Applying partial security contex…", 0x33, arg4);
                *(arg1 + 0x40) = var_170;
                int128_t zmm0_6 = result_1;
                *(arg1 + 0x30) = result_2;
                *(arg1 + 0x20) = var_190;
                *(arg1 + 0x10) = var_1a0;
                *arg1 = zmm0_6;
            }
            return core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::hd7ef3bf7c0519cb7();
        }
        
        result = result_2;
        *(arg1 + 0x30) = result;
        int128_t zmm0_3 = result_1;
        *(arg1 + 0x20) = var_190;
        *(arg1 + 0x10) = var_1a0;
        *arg1 = zmm0_3;
        *(arg1 + 0x38) = "Getting security contextApplying…";
        *(arg1 + 0x40) = 0x18;
    }
    else
    {
        uu_chcon::SELinuxSecurityContext::to_c_string::hdfff47f6cccf28b5(&result_1, arg3);
        result = result_1;
        
        if (result == 0x12)
        {
            int64_t rax_2 = *var_1a0[8];
            *var_dc[8] = rax_2;
            int128_t zmm0_1 = var_1a8;
            var_e8 = zmm0_1;
            var_128 = zmm0_1;
            int64_t var_118_1 = rax_2;
            
            if (var_128 == 2)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$$GT$::h573bdc652f691b23(&var_128);
                /* tailcall */
                return uu_chcon::errors::Error::from_io1::head3fca5f0bd97eb(arg1, 
                    "Setting security contextCreating…", 0x18, arg4);
            }
            
            int64_t rcx_5 = *var_dc[8];
            int64_t var_f8_1 = rcx_5;
            var_108 = var_e8;
            int64_t rsi_3 = *var_108[8];
            int64_t var_158_1 = rsi_3;
            var_168 = 1;
            int64_t var_160_1 = rcx_5 - 1;
            int16_t var_150_1 = 0;
            selinux::SecurityContext::set_for_path::h19303842538e7cce(&result_1, rsi_3, arg4, arg5, 
                *(arg2 + 0x7a));
            
            if (result_1 != 0xa)
            {
                *(arg1 + 0x30) = result_2;
                int128_t zmm0_4 = result_1;
                *(arg1 + 0x20) = var_190;
                *(arg1 + 0x10) = var_1a0;
                *arg1 = zmm0_4;
                *(arg1 + 0x38) = "Setting security contextCreating…";
                *(arg1 + 0x40) = 0x18;
            }
            else
                *arg1 = 0x12;
            
            core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::hd7ef3bf7c0519cb7();
            return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::hdf16f007a625a2bf(&var_108);
        }
        
        var_e8 = var_1ac;
        *(arg1 + 0x40) = var_170;
        *(arg1 + 0x30) = result_2;
        *(arg1 + 0x20) = var_190;
        *(arg1 + 0x10) = var_1a0;
        *(arg1 + 4) = var_e8;
        *arg1 = result;
    }
    return result;
}
