
  void* const uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(int64_t* arg1, char* arg2, void* arg3)

{
    int32_t var_50 = 0;
    uint64_t r12 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, 
        arg3, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_50), 1);
    void* rax_2;
    int64_t rdx_2;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, arg3, arg2, arg3);
    
    if (!rax_2)
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, r12, arg3);
        /* no return */
    }
    
    char rax_3 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(rax_2, 
        rdx_2, "0x0Xparse failed()/rustc/8bfcae7…", 2);
    char rax_4;
    
    if (!rax_3)
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(rax_2, 
            rdx_2, "0Xparse failed()/rustc/8bfcae730…", 2);
    
    void* r13_1;
    int64_t rbx_1;
    int32_t rbp_1;
    
    if (!rax_3 && !rax_4)
    {
        var_50 = 0;
        char rax_6 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(
            rax_2, rdx_2, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x62, &var_50), 
            1);
        r13_1 = arg3 - rax_6;
        void* rax_8;
        int64_t rdx_5;
        rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, r13_1, arg2, arg3);
        
        if (rax_8)
        {
            rbx_1 = 0x200;
            
            if (!rax_6)
                rbx_1 = 1;
            
            var_50 = 0;
            uint64_t rax_11 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(rax_8, 
                rdx_5, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2e, &var_50), 1);
            r13_1 -= rax_11;
            rbp_1 = (rax_11 << 1) + 8;
            goto label_4d3232;
        }
    }
    else
    {
        r12 |= 2;
        rbx_1 = 1;
        rbp_1 = 0x10;
        r13_1 = arg3;
        label_4d3232:
        void* rax_12;
        int64_t rdx_8;
        rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, r13_1, arg2, arg3);
        
        if (rax_12)
        {
            core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&var_50, rax_12, 
                rdx_8, rbp_1);
            void* const result = nullptr;
            char temp0 = var_50;
            int64_t rcx_4 = 0xc;
            int64_t var_48;
            
            if (!temp0)
                rcx_4 = rbx_1 * var_48;
            
            if (temp0)
                result = "parse failed()/rustc/8bfcae730a5…";
            
            arg1[1] = rcx_4;
            *arg1 = result;
            return result;
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, r12, r13_1);
    /* no return */
}
