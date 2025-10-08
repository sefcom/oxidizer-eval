
  fn uu_dd::numbers::SuffixType::base_and_suffix::h8dfa57e28a1f1cdd(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64) -> i64

{
    let mut var_d8: i64;
    let mut var_c0: ();
    let mut rcx: i64;
    let mut rdx: i64;
    let mut rbp: i64;
    let mut rsi: i64;
    let mut rdi_1: i64;
    let mut r8: i64;
    let mut r9: i64;
    let mut r10: i64;
    let mut r11: i64;
    let mut r13: i64;
    
    if (arg2 & 1) == 0
    {
        memcpy(&var_c0, &data_53d7a0, 0x90);
        __builtin_memcpy(&var_d8, 
            "\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00", 0x18);
        r9 = 0x1000000000000000;
        r10 = 0x4000000000000;
        r13 = 0x10000000000;
        rbp = 0x40000000;
        rsi = 0x100000;
        rcx = 0x400;
        r8 = 0;
        r11 = 0;
        rdi_1 = 0;
        rdx = 0;
    }
    else
    {
        memcpy(&var_c0, &data_53d830, 0x90);
        __builtin_memcpy(&var_d8, 
            "\x3c\x2e\x3b\x03\x00\x00\x00\x00\xc2\xd3\x00\x00\x00\x00\x00\x00\x36\x00\x00\x00\x00\x00\x00\x00", 0x18);
        rdx = -0x602f7fc318000000;
        rdi_1 = 0x1bcecceda1000000;
        r11 = 0x35c9adc5dea00000;
        r9 = 0xde0b6b3a7640000;
        r10 = 0x38d7ea4c68000;
        r13 = 0xe8d4a51000;
        rbp = 0x3b9aca00;
        rsi = 0xf4240;
        rcx = 0x3e8;
        r8 = 0;
    }
    
    let mut result: i64 = 0 - 1 - arg4;
    let c_2: bool = /* bool c_2 = unimplemented  {sbb rax, r14} */;
    let mut rdx_2: *mut c_void;
    
    if !c_2
    {
        rcx = 1;
        rdx_2 = &var_c0;
        r8 = 0;
    }
    else
    {
        result = rsi - rcx;
        let c_5: bool = /* bool c_5 = unimplemented  {sbb r12, r14} */;
        let mut var_b0: ();
        
        if !c_5
        {
            rdx_2 = &var_b0;
        }
        else
        {
            result = rbp - rsi;
            let c_8: bool = /* bool c_8 = unimplemented  {sbb rcx, r14} */;
            
            if !c_8
            {
                let mut var_a0: ();
                rdx_2 = &var_a0;
                rcx = rsi;
            }
            else
            {
                result = r13 - rbp;
                let c_11: bool = /* bool c_11 = unimplemented  {sbb rcx, r14} */;
                
                if !c_11
                {
                    let mut var_90: ();
                    rdx_2 = &var_90;
                    rcx = rbp;
                }
                else
                {
                    result = r10 - r13;
                    let c_14: bool = /* bool c_14 = unimplemented  {sbb rcx, r14} */;
                    
                    if !c_14
                    {
                        let mut var_80: ();
                        rdx_2 = &var_80;
                        rcx = r13;
                    }
                    else
                    {
                        result = r9 - r10;
                        let c_17: bool = /* bool c_17 = unimplemented  {sbb rcx, r14} */;
                        
                        if !c_17
                        {
                            let mut var_70: ();
                            rdx_2 = &var_70;
                            rcx = r10;
                        }
                        else
                        {
                            result = r11 - r9;
                            let c_20: bool = /* bool c_20 = unimplemented  {sbb rcx, r14} */;
                            
                            if !c_20
                            {
                                let mut var_60: ();
                                rdx_2 = &var_60;
                                rcx = r9;
                            }
                            else
                            {
                                result = rdi_1 - r11;
                                let var_d0: i64;
                                r8 = var_d0;
                                let c_21: bool = /* bool c_21 = unimplemented  {sbb rcx, r14} */;
                                
                                if !c_21
                                {
                                    let mut var_50: ();
                                    rdx_2 = &var_50;
                                    rcx = r11;
                                    let var_c8: i64;
                                    r8 = var_c8;
                                }
                                else
                                {
                                    result = var_d8 - r8 - arg4;
                                    let c_24: bool = /* bool c_24 =
                                        unimplemented  {sbb rax, r14} */;
                                    
                                    if c_24
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(0xa, 
                                            0xa);
                                        /* no return */
                                    }
                                    
                                    let mut var_40: ();
                                    rdx_2 = &var_40;
                                    rcx = rdi_1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    let zmm0: i128 = *rdx_2;
    arg1[1] = r8;
    *arg1 = rcx;
    *arg1.byte_offset(0x10) = zmm0;
    result
}
