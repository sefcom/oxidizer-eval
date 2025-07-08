
  fn uu_dd::numbers::SuffixType::base_and_suffix::he90531716fe26654(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64) -> i64

{
    let mut var_e0_1: i64;
    let mut var_d8_1: i64;
    let mut var_d0_1: i64;
    let mut var_c0: ();
    let mut result: i64;
    let mut rdx: i64;
    let mut result_2: i64;
    let mut rdi_1: i64;
    let mut result_3: i64;
    let mut result_4: i64;
    let mut result_5: i64;
    let mut result_6: i64;
    let mut result_1: i64;
    let mut result_7: i64;
    
    if arg2 == 0
    {
        memcpy(&var_c0, &data_561950, 0x90);
        rdx = 0x4000000;
        var_e0_1 = 0x10000;
        var_d8_1 = 0x40;
        result_4 = 0x1000000000000000;
        result_6 = 0x4000000000000;
        result_7 = 0x10000000000;
        result_2 = 0x40000000;
        result = 0x100000;
        result_1 = 0x400;
        rdi_1 = 0;
        result_5 = 0;
        result_3 = 0;
        var_d0_1 = 0;
    }
    else
    {
        memcpy(&var_c0, &data_5619e0, 0x90);
        rdx = 0x33b2e3c;
        __builtin_memcpy(&var_e0_1, 
            "\xc2\xd3\x00\x00\x00\x00\x00\x00\x36\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe8\x3c\x80\xd0\x9f", 0x18);
        result_3 = 0x1bcecceda1000000;
        result_5 = 0x35c9adc5dea00000;
        result_4 = 0xde0b6b3a7640000;
        result_6 = 0x38d7ea4c68000;
        result_7 = 0xe8d4a51000;
        result_2 = 0x3b9aca00;
        result = 0xf4240;
        result_1 = 0x3e8;
        rdi_1 = 0;
    }
    
    let c_2: bool = /* bool c_2 = unimplemented  {sbb rsi, r14} */;
    let mut rcx_2: i32;
    
    if !c_2
    {
        result_1 = 1;
        rdi_1 = 0;
        rcx_2 = 0;
    }
    else
    {
        rcx_2 = 1;
        let c_5: bool = /* bool c_5 = unimplemented  {sbb rdx, r14} */;
        
        if c_5
        {
            rcx_2 = 2;
            let c_8: bool = /* bool c_8 = unimplemented  {sbb rsi, r14} */;
            result_1 = result;
            
            if c_8
            {
                result = result_7 - result_2;
                rcx_2 = 3;
                let c_11: bool = /* bool c_11 = unimplemented  {sbb rdx, r14} */;
                result_1 = result_2;
                
                if c_11
                {
                    result = result_6 - result_7;
                    rcx_2 = 4;
                    let c_14: bool = /* bool c_14 = unimplemented  {sbb rdx, r14} */;
                    result_1 = result_7;
                    
                    if c_14
                    {
                        result = result_4 - result_6;
                        rcx_2 = 5;
                        let c_17: bool = /* bool c_17 = unimplemented  {sbb rdx, r14} */;
                        result_1 = result_6;
                        
                        if c_17
                        {
                            result = result_5 - result_4;
                            rcx_2 = 6;
                            let c_20: bool = /* bool c_20 = unimplemented  {sbb rdx, r14} */;
                            result_1 = result_4;
                            
                            if c_20
                            {
                                result = result_3 - result_5;
                                rdi_1 = var_d8_1;
                                rcx_2 = 7;
                                let c_23: bool = /* bool c_23 = unimplemented  {sbb rdx, r14} */;
                                result_1 = result_5;
                                
                                if c_23
                                {
                                    rdi_1 = var_e0_1;
                                    rcx_2 = 8;
                                    result = rdx - rdi_1 - arg4;
                                    let c_26: bool = /* bool c_26 =
                                        unimplemented  {sbb rax, r14} */;
                                    result_1 = result_3;
                                    
                                    if c_26
                                    {
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(0xa, 
                                            0xa);
                                        /* no return */
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    let zmm0: i128 = *(&var_c0).byte_offset(rcx_2 << 4);
    arg1[1] = rdi_1;
    *arg1 = result_1;
    *arg1.byte_offset(0x10) = zmm0;
    result
}
