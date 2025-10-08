
  char const* const uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(int64_t* arg1, char* arg2, int64_t arg3)

{
    int32_t var_50 = 0;
    uint64_t r12 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, 
        arg3, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_50), 1);
    void* rax_2;
    int64_t rdx_2;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, arg3, arg2, arg3);
    
    if (rax_2)
    {
        int64_t rbx_1;
        int32_t rbp_2;
        int64_t r13_2;
        
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(rax_2, 
            rdx_2, "0x0Xparse failednulsohstxetxeote…", 2))
        {
            label_46ab7d:
            r12 |= 2;
            rbp_2 = 0x10;
            rbx_1 = 1;
            r13_2 = arg3;
            label_46ac35:
            void* rax_13;
            int64_t rdx_10;
            rax_13 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, r13_2, arg2, arg3);
            
            if (!rax_13)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, r13_2);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_50, rax_13, 
                rdx_10, rbp_2);
            char const* const result = nullptr;
            char temp0 = var_50;
            
            if (temp0)
                result = "parse failednulsohstxetxeotenqac…";
            
            int64_t rcx_5 = 0xc;
            int64_t var_48;
            
            if (!temp0)
                rcx_5 = rbx_1 * var_48;
            *arg1 = result;
            arg1[1] = rcx_5;
            return result;
        }
        
        void* rax_4;
        int64_t rdx_4;
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, arg3, arg2, arg3);
        
        if (rax_4)
        {
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(rax_4, 
                    rdx_4, "0Xparse failednulsohstxetxeotenq…", 2))
                goto label_46ab7d;
            
            var_50 = 0;
            char rax_7 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h0e81aafc98d6f07c(
                rax_4, rdx_4, 
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x62, &var_50));
            r13_2 = arg3 - rax_7;
            void* rax_9;
            int64_t rdx_7;
            rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, r13_2, arg2, arg3);
            
            if (!rax_9)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, r13_2);
                /* no return */
            }
            
            rbx_1 = 1;
            
            if (rax_7)
                rbx_1 = 0x200;
            
            var_50 = 0;
            uint64_t rax_12 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h0e81aafc98d6f07c(rax_9, 
                rdx_7, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2e, &var_50));
            rbp_2 = (rax_12 << 1) + 8;
            r13_2 -= rax_12;
            goto label_46ac35;
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, arg3);
    /* no return */
}
