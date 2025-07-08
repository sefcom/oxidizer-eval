
  fn uu_df::blocks::to_magnitude_and_suffix::hfc39cb976c1a05ed(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i8) -> *mut i128

{
    let mut rax_1: i8 = 2;
    
    if arg4 - 2 < 2
    {
        rax_1 = arg4 - 2;
    }
    
    let mut var_1d0_1: i64;
    let mut var_1c8_1: i64;
    let mut var_1c0_1: u64;
    let mut var_1b8_1: i64;
    let mut var_1b0_1: i64;
    let mut var_1a8_1: i64;
    let mut var_198: i64;
    let mut var_150_1: i64;
    let mut var_148_1: u64;
    let mut var_c0: *const i8;
    let mut rcx: *const i8;
    let mut rdx_1: *const i8;
    let mut rbp: *const i8;
    let mut rsi: *const i8;
    let mut rdi: *const i8;
    let mut r8: *const i8;
    let mut r9: *const i8;
    let mut r10: *const i8;
    let mut r11: i64;
    let mut r12: i64;
    let mut r13: i64;
    let mut var_158_1: i64;
    
    if rax_1 == 0
    {
        var_c0 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu…";
        __builtin_memcpy(&var_158_1, 
            "\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00", 0x18);
        __builtin_memcpy(&var_1c0_1, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x01\x00\x00", 0x20);
        var_198 = 0x40000000;
        r12 = 0x400;
        rcx = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/…";
        rdx_1 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src…";
        rsi = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/sr…";
        r8 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/s…";
        r10 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/…";
        r9 = "GTPEZYkBMBGBTBPBEBZBYBksrc/uu/df…";
        rdi = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/d…";
        rbp = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/…";
        r13 = 1;
        r11 = 1;
        let var_1a0: i64 = 0;
        var_1c8_1 = 0;
        var_1d0_1 = 0;
    }
    else
    {
        if rax_1 != 1
        {
            r13 = 0;
            let temp2_1: i8 = arg4 & 1;
            r12 = 0x400;
            
            if temp2_1 == 0
            {
                r12 = 0x3e8;
            }
            
            let mut rax_3: i64 = 0x100000;
            
            if temp2_1 == 0
            {
                rax_3 = 0xf4240;
            }
            
            var_150_1 = rax_3;
            let mut rdx_2: i64 = 0x40000000;
            
            if temp2_1 == 0
            {
                rdx_2 = 0x3b9aca00;
            }
            
            var_198 = rdx_2;
            let mut rdx_3: i64 = 0x10000000000;
            
            if temp2_1 == 0
            {
                rdx_3 = 0xe8d4a51000;
            }
            
            var_1a8_1 = rdx_3;
            let mut rdx_4: i64 = 0x4000000000000;
            
            if temp2_1 == 0
            {
                rdx_4 = 0x38d7ea4c68000;
            }
            
            var_1b0_1 = rdx_4;
            let mut rdx_5: i64 = 0x1000000000000000;
            
            if temp2_1 == 0
            {
                rdx_5 = 0xde0b6b3a7640000;
            }
            
            var_1b8_1 = rdx_5;
            let mut rdx_6: u64 = 0x40;
            
            if temp2_1 == 0
            {
                rdx_6 = 0x36;
            }
            
            var_1c0_1 = rdx_6;
            let mut rcx_1: i64 = 0x35c9adc5dea00000;
            
            if temp2_1 != 0
            {
                rcx_1 = 0;
            }
            
            var_1c8_1 = rcx_1;
            let mut rdx_7: u64 = 0x10000;
            
            if temp2_1 == 0
            {
                rdx_7 = 0xd3c2;
            }
            
            var_148_1 = rdx_7;
            let mut rcx_2: i64 = 0x1bcecceda1000000;
            
            if temp2_1 != 0
            {
                rcx_2 = 0;
            }
            
            var_1d0_1 = rcx_2;
            let mut rdx_8: i64 = 0x4000000;
            
            if temp2_1 == 0
            {
                rdx_8 = 0x33b2e3c;
            }
            
            var_158_1 = rdx_8;
            var_c0 = 1;
            rbp = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/…";
            
            if temp2_1 == 0
            {
                rbp = "ksrc/uu/df/src/blocks.rsPOSIXLY_…";
            }
            
            rcx = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/…";
            rdx_1 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src…";
            rsi = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/sr…";
            r8 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/s…";
            r10 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/…";
            r9 = "GTPEZYkBMBGBTBPBEBZBYBksrc/uu/df…";
            rdi = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/d…";
            r11 = 1;
        }
        else
        {
            __builtin_memcpy(&var_158_1, 
                "\x3c\x2e\x3b\x03\x00\x00\x00\x00\x40\x42\x0f\x00\x00\x00\x00\x00\xc2\xd3\x00\x00\x00\x00\x00\x00", 0x18);
            __builtin_memcpy(&var_1d0_1, 
                "\x00\x00\x00\xa1\xed\xcc\xce\x1b\x00\x00\xa0\xde\xc5\xad\xc9\x35\x36\x00\x00\x00\x00\x00\x00\x00\x00\x00\x64\xa7\xb3\xb6\xe0\x0d\x00\x80\xc6\xa4\x7e\x8d\x03\x00\x00\x10\xa5\xd4\xe8\x00\x00\x00", 0x30);
            var_c0 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu…";
            var_198 = 0x3b9aca00;
            r12 = 0x3e8;
            rcx = "YBksrc/uu/df/src/blocks.rsPOSIXL…";
            rdx_1 = "ZBYBksrc/uu/df/src/blocks.rsPOSI…";
            rsi = "EBZBYBksrc/uu/df/src/blocks.rsPO…";
            r8 = "PBEBZBYBksrc/uu/df/src/blocks.rs…";
            r10 = "TBPBEBZBYBksrc/uu/df/src/blocks.…";
            r9 = "GBTBPBEBZBYBksrc/uu/df/src/block…";
            rdi = "MBGBTBPBEBZBYBksrc/uu/df/src/blo…";
            r11 = 2;
            rbp = "kBMBGBTBPBEBZBYBksrc/uu/df/src/b…";
            r13 = 1;
        }
        
        let var_1a0_1: i64 = 0;
    }
    let var_b8: i64 = r13;
    let var_b0: *const i8 = rbp;
    let var_a8: i64 = r11;
    let var_a0: *const i8 = rdi;
    let var_98: i64 = r11;
    let var_90: *const i8 = r9;
    let var_88: i64 = r11;
    let var_80: *const i8 = r10;
    let var_78: i64 = r11;
    let var_70: *const i8 = r8;
    let var_68: i64 = r11;
    let var_60: *const i8 = rsi;
    let var_58: i64 = r11;
    let var_50: *const i8 = rdx_1;
    let var_48: i64 = r11;
    let var_40: *const i8 = rcx;
    let var_38: i64 = r11;
    let c_2: bool = /* bool c_2 = unimplemented  {sbb rdx, r14} */;
    let mut r13_1: u64;
    let mut r15_1: i32;
    
    if !c_2
    {
        r12 = 1;
        r13_1 = 0;
        r15_1 = 0;
    }
    else
    {
        r15_1 = 1;
        let c_5: bool = /* bool c_5 = unimplemented  {sbb rdx, r14} */;
        r13_1 = 0;
        
        if c_5
        {
            r15_1 = 2;
            let c_8: bool = /* bool c_8 = unimplemented  {sbb rdx, r14} */;
            r12 = var_150_1;
            r13_1 = 0;
            
            if c_8
            {
                r12 = var_198;
                r13_1 = 0;
                r15_1 = 3;
                let c_11: bool = /* bool c_11 = unimplemented  {sbb rcx, r14} */;
                
                if c_11
                {
                    r12 = var_1a8_1;
                    r15_1 = 4;
                    let c_14: bool = /* bool c_14 = unimplemented  {sbb rcx, r14} */;
                    r13_1 = 0;
                    
                    if c_14
                    {
                        r12 = var_1b0_1;
                        r15_1 = 5;
                        let c_17: bool = /* bool c_17 = unimplemented  {sbb rcx, r14} */;
                        r13_1 = 0;
                        
                        if c_17
                        {
                            r12 = var_1b8_1;
                            r15_1 = 6;
                            let c_20: bool = /* bool c_20 = unimplemented  {sbb rcx, r14} */;
                            r13_1 = 0;
                            
                            if c_20
                            {
                                r12 = var_1c8_1;
                                r13_1 = var_1c0_1;
                                r15_1 = 7;
                                let c_23: bool = /* bool c_23 = unimplemented  {sbb rcx, r14} */;
                                
                                if c_23
                                {
                                    r12 = var_1d0_1;
                                    r13_1 = var_148_1;
                                    r15_1 = 8;
                                    let c_26: bool = /* bool c_26 =
                                        unimplemented  {sbb rax, r14} */;
                                    
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
    
    let mut rax_18: u64;
    let mut rdx_17: i64;
    rax_18 = __udivti3(arg2, arg3, r12, r13_1);
    let var_f0: i64 = rdx_17;
    let mut var_f8: u64 = rax_18;
    let mut rax_19: i64;
    let mut rdx_18: i64;
    rdx_18 = HIGHQ(rax_18 * r12);
    rax_19 = LOWQ(rax_18 * r12);
    let rdi_4: i64 = arg2 - rax_19;
    let r14_1: i64 = arg3 - (rdx_17 * r12 + rdx_18 + rax_18 * r13_1);
    let mut var_e8: i128 = *(&var_c0).byte_offset(r15_1 << 4);
    let mut rsi_6: *mut *mut u64;
    let mut var_188: *mut u64;
    let mut var_138: *mut u64;
    let mut rax_35: *mut u64;
    
    if (rdi_4 | r14_1) == 0
    {
        rax_35 = &var_f8;
        'label_4d489a:
        var_138 = rax_35;
        let var_130_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
        let var_128_1: *mut i128 = &var_e8;
        let var_120_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h34828d13b93644f8;
        var_188 = &data_410568;
        let var_180_2: i64 = 2;
        let var_168_1: i64 = 0;
        let var_178_1: *mut *mut u64 = &var_138;
        let var_170_1: i64 = 2;
        rsi_6 = &var_188;
    }
    else
    {
        let c_29: bool = /* bool c_29 = unimplemented  {sbb rax, 0x0} */;
        
        if c_29
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        let r12_1: i64 = r12 >> 1 | r13_1 << 0x3f;
        let r13_2: u64 = r13_1 >> 1;
        let rcx_30: i64 = (r12_1 + r13_2 + 0) % 5;
        let r12_2: i64 = r12_1 - rcx_30;
        let mut rax_28: i64;
        let mut rdx_22: i64;
        rdx_22 = HIGHQ(r12_2 * -0x3333333333333333);
        rax_28 = LOWQ(r12_2 * -0x3333333333333333);
        let r13_5: u64 = rdx_22 - r12_2 * 0x3333333333333334 - (r13_2 - 0) * 0x3333333333333333;
        let mut rax_29: u64;
        let mut rdx_25: i64;
        rax_29 = __udivti3(rdi_4, r14_1, rax_28, r13_5);
        let var_d0_1: i64 = rdx_25;
        let mut var_d8: u64 = rax_29;
        let mut rax_30: i64;
        let mut rdx_26: i64;
        rdx_26 = HIGHQ(rax_29 * rax_28);
        rax_30 = LOWQ(rax_29 * rax_28);
        let mut rcx_35: *mut u64;
        
        if ((r14_1 - (rax_28 * rdx_25 + rdx_26 + r13_5 * rax_29)) | (rdi_4 - rax_30)) == 0
        {
            var_188 = &var_f8;
            let var_180_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            rcx_35 = &var_d8;
        }
        else
        {
            let c_34: bool = /* bool c_34 = unimplemented  {sbb rax, rbx} */;
            let mut var_108: u64;
            
            if c_34 || ((rax_29 ^ 9) | rdx_25) == 0
            {
                let var_100_2: i64 = rdx_17 + 0;
                var_108 = rax_18 + 1;
                rax_35 = &var_108;
                goto 'label_4d489a;
            }
            
            let var_100_1: i64 = rdx_25 + 0;
            var_108 = rax_29 + 1;
            var_188 = &var_f8;
            let var_180: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            rcx_35 = &var_108;
        }
        
        let var_178: *mut u64 = rcx_35;
        let var_170: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
        let var_168: *mut i128 = &var_e8;
        let var_160_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h34828d13b93644f8;
        var_138 = &data_541e78;
        let var_130: i64 = 3;
        let var_118_1: i64 = 0;
        let var_128: *mut *mut u64 = &var_188;
        let var_120: i64 = 3;
        rsi_6 = &var_138;
    }
    core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(arg1, rsi_6);
    arg1
}
