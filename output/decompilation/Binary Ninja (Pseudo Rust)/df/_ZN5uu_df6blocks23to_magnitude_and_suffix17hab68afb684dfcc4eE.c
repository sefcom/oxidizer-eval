
  fn uu_df::blocks::to_magnitude_and_suffix::hab68afb684dfcc4e(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i8) -> *mut i128

{
    let mut rax_1: i8 = 2;
    
    if arg4 - 2 < 2
    {
        rax_1 = arg4 - 2;
    }
    
    let mut var_180_1: i64;
    let mut var_178_1: u64;
    let mut var_170_1: i64;
    let mut var_168_1: u64;
    let mut var_160_1: i64;
    let mut var_158_1: i64;
    let mut var_150_1: i64;
    let mut var_148_1: i64;
    let mut var_140_1: i64;
    let mut rax_3: i64;
    let mut rcx: *const i8;
    let mut rbx: i64;
    let mut rbp: *const i8;
    let mut rdi_1: *const i8;
    let mut r8: *const i8;
    let mut r9: *const i8;
    let mut r10: *const i8;
    let mut r11: *const i8;
    let mut r12: u64;
    let mut r13: i64;
    let mut r14: *const i8;
    let mut r15: *const i8;
    let mut var_1c8: i64;
    let mut var_188_1: i64;
    
    if rax_1 == 0
    {
        r12 = 0;
        var_1c8 = 0x4000000;
        var_178_1 = 0x10000;
        __builtin_memcpy(&var_168_1, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00", 0x30);
        r13 = 0x400;
        r15 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/…";
        r14 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src…";
        rcx = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/sr…";
        rdi_1 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/s…";
        r11 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/…";
        rbp = "GTPEZYkBMBGBTBPBEBZBYBksrc/uu/df…";
        r9 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/d…";
        r8 = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/…";
        rax_3 = 1;
        r10 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu…";
        rbx = 1;
        var_170_1 = 0;
        var_180_1 = 0;
        var_188_1 = 0;
    }
    else if rax_1 != 1
    {
        rax_3 = 0;
        let temp2_1: i8 = arg4 & 1;
        r13 = 0x3e8;
        
        if temp2_1 != 0
        {
            r13 = 0x400;
        }
        
        let mut rdi_2: i64 = 0xf4240;
        
        if temp2_1 != 0
        {
            rdi_2 = 0x100000;
        }
        
        var_140_1 = rdi_2;
        let mut rdi_3: i64 = 0x3b9aca00;
        
        if temp2_1 != 0
        {
            rdi_3 = 0x40000000;
        }
        
        var_148_1 = rdi_3;
        let mut rdi_4: i64 = 0xe8d4a51000;
        
        if temp2_1 != 0
        {
            rdi_4 = 0x10000000000;
        }
        
        var_150_1 = rdi_4;
        let mut rdi_5: i64 = 0x38d7ea4c68000;
        
        if temp2_1 != 0
        {
            rdi_5 = 0x4000000000000;
        }
        
        var_158_1 = rdi_5;
        let mut rdi_6: i64 = 0xde0b6b3a7640000;
        
        if temp2_1 != 0
        {
            rdi_6 = 0x1000000000000000;
        }
        
        var_160_1 = rdi_6;
        let mut rdi_7: u64 = 0x36;
        
        if temp2_1 != 0
        {
            rdi_7 = 0x40;
        }
        
        var_168_1 = rdi_7;
        let mut rcx_1: i64 = 0x35c9adc5dea00000;
        
        if temp2_1 != 0
        {
            rcx_1 = 0;
        }
        
        var_170_1 = rcx_1;
        let mut rdi_8: u64 = 0xd3c2;
        
        if temp2_1 != 0
        {
            rdi_8 = 0x10000;
        }
        
        var_178_1 = rdi_8;
        let mut rcx_2: i64 = 0x1bcecceda1000000;
        
        if temp2_1 != 0
        {
            rcx_2 = 0;
        }
        
        var_180_1 = rcx_2;
        let mut rdi_9: i64 = 0x33b2e3c;
        
        if temp2_1 != 0
        {
            rdi_9 = 0x4000000;
        }
        
        var_1c8 = rdi_9;
        let mut rcx_3: i64 = -0x602f7fc318000000;
        
        if temp2_1 != 0
        {
            rcx_3 = 0;
        }
        
        var_188_1 = rcx_3;
        r8 = "ksrc/uu/df/src/blocks.rsPOSIXLY_…";
        
        if temp2_1 != 0
        {
            r8 = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/…";
        }
        
        r15 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/…";
        r14 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src…";
        rcx = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/sr…";
        rdi_1 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/s…";
        r11 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/…";
        rbp = "GTPEZYkBMBGBTBPBEBZBYBksrc/uu/df…";
        r9 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/d…";
        r10 = 1;
        rbx = 1;
        r12 = 0;
    }
    else
    {
        var_1c8 = 0x33b2e3c;
        __builtin_memcpy(&var_188_1, 
            "\x00\x00\x00\xe8\x3c\x80\xd0\x9f\x00\x00\x00\xa1\xed\xcc\xce\x1b\xc2\xd3\x00\x00\x00\x00\x00\x00\x00\x00\xa0\xde\xc5\xad\xc9\x35\x36\x00\x00\x00\x00\x00\x00\x00\x00\x00\x64\xa7\xb3\xb6\xe0\x0d\x00\x80\xc6\xa4\x7e\x8d\x03\x00\x00\x10\xa5\xd4\xe8\x00\x00\x00\x00\xca\x9a\x3b\x00\x00\x00\x00\x40\x42\x0f\x00\x00\x00\x00\x00", 0x50);
        r12 = 0;
        r13 = 0x3e8;
        r15 = "YBksrc/uu/df/src/blocks.rsPOSIXL…";
        r14 = "ZBYBksrc/uu/df/src/blocks.rsPOSI…";
        rcx = "EBZBYBksrc/uu/df/src/blocks.rsPO…";
        rdi_1 = "PBEBZBYBksrc/uu/df/src/blocks.rs…";
        r11 = "TBPBEBZBYBksrc/uu/df/src/blocks.…";
        rbp = "GBTBPBEBZBYBksrc/uu/df/src/block…";
        r9 = "MBGBTBPBEBZBYBksrc/uu/df/src/blo…";
        rbx = 2;
        r8 = "kBMBGBTBPBEBZBYBksrc/uu/df/src/b…";
        rax_3 = 1;
        r10 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu…";
    }
    let mut var_c0: *const i8 = r10;
    let var_b8: i64 = rax_3;
    let mut var_b0: *const i8 = r8;
    let var_a8: i64 = rbx;
    let mut var_a0: *const i8 = r9;
    let var_98: i64 = rbx;
    let mut var_90: *const i8 = rbp;
    let var_88: i64 = rbx;
    let mut var_80: *const i8 = r11;
    let var_78: i64 = rbx;
    let mut var_70: *mut i8 = rdi_1;
    let var_68: i64 = rbx;
    let mut var_60: *const i8 = rcx;
    let var_58: i64 = rbx;
    let mut var_50: *const i8 = r14;
    let var_48: i64 = rbx;
    let mut var_40: *const i8 = r15;
    let var_38: i64 = rbx;
    let c_2: bool = /* bool c_2 = unimplemented  {sbb rcx, rdx} */;
    let mut var_1c8_1: *const *const i8;
    let mut r14_1: i64;
    let mut r15_1: i64;
    
    if !c_2
    {
        r14_1 = arg3;
        r15_1 = arg2;
        r13 = 1;
        var_1c8_1 = &var_c0;
        r12 = 0;
    }
    else
    {
        let c_5: bool = /* bool c_5 = unimplemented  {sbb rcx, rdx} */;
        
        if !c_5
        {
            r14_1 = arg3;
            r15_1 = arg2;
            var_1c8_1 = &var_b0;
        }
        else
        {
            let c_8: bool = /* bool c_8 = unimplemented  {sbb rcx, rdx} */;
            
            if !c_8
            {
                r14_1 = arg3;
                r15_1 = arg2;
                var_1c8_1 = &var_a0;
                r13 = var_140_1;
            }
            else
            {
                r13 = var_150_1;
                let c_11: bool = /* bool c_11 = unimplemented  {sbb rcx, rdx} */;
                
                if !c_11
                {
                    r14_1 = arg3;
                    r15_1 = arg2;
                    var_1c8_1 = &var_90;
                    r13 = var_148_1;
                }
                else
                {
                    let c_14: bool = /* bool c_14 = unimplemented  {sbb rcx, rdx} */;
                    
                    if !c_14
                    {
                        r14_1 = arg3;
                        r15_1 = arg2;
                        var_1c8_1 = &var_80;
                    }
                    else
                    {
                        r13 = var_160_1;
                        let c_17: bool = /* bool c_17 = unimplemented  {sbb rcx, rdx} */;
                        
                        if !c_17
                        {
                            r14_1 = arg3;
                            r15_1 = arg2;
                            var_1c8_1 = &var_70;
                            r13 = var_158_1;
                        }
                        else
                        {
                            let c_20: bool = /* bool c_20 = unimplemented  {sbb rcx, rdx} */;
                            
                            if !c_20
                            {
                                r14_1 = arg3;
                                r15_1 = arg2;
                                var_1c8_1 = &var_60;
                            }
                            else
                            {
                                r13 = var_180_1;
                                r12 = var_178_1;
                                let c_23: bool = /* bool c_23 = unimplemented  {sbb rcx, rdx} */;
                                
                                if !c_23
                                {
                                    r14_1 = arg3;
                                    r15_1 = arg2;
                                    var_1c8_1 = &var_50;
                                    r13 = var_170_1;
                                    r12 = var_168_1;
                                }
                                else
                                {
                                    let c_26: bool = /* bool c_26 =
                                        unimplemented  {sbb rax, rdx} */;
                                    
                                    if c_26
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(0xa, 
                                            0xa);
                                        /* no return */
                                    }
                                    
                                    r15_1 = arg2;
                                    r14_1 = arg3;
                                    var_1c8_1 = &var_40;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    let mut rax_25: u64;
    let mut rdx_1: i64;
    rax_25 = __udivti3(r15_1, r14_1, r13, r12);
    let var_f0: i64 = rdx_1;
    let mut var_f8: u64 = rax_25;
    let mut rax_26: i64;
    let mut rdx_2: i64;
    rdx_2 = HIGHQ(rax_25 * r13);
    rax_26 = LOWQ(rax_25 * r13);
    let r15_2: i64 = r15_1 - rax_26;
    let r14_2: i64 = r14_1 - (rdx_1 * r13 + rdx_2 + rax_25 * r12);
    let mut var_e8: i128 = *var_1c8_1;
    let mut rsi_3: *mut *mut u64;
    let mut var_1b8: *mut u64;
    let mut var_138: *mut u64;
    let mut rax_42: *mut u64;
    
    if (r15_2 | r14_2) == 0
    {
        rax_42 = &var_f8;
        'label_46a910:
        var_138 = rax_42;
        let var_130: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
        let var_128: *mut i128 = &var_e8;
        let var_120: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb20b9e0280238f;
        var_1b8 = &data_419680;
        let var_1b0: i64 = 2;
        let var_198: i64 = 0;
        let var_1a8: *mut *mut u64 = &var_138;
        let var_1a0: i64 = 2;
        rsi_3 = &var_1b8;
    }
    else
    {
        let c_29: bool = /* bool c_29 = unimplemented  {sbb rax, 0x0} */;
        
        if c_29
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
        
        let r13_1: i64 = r13 >> 1 | r12 << 0x3f;
        let r12_1: u64 = r12 >> 1;
        let rcx_33: i64 = (r13_1 + r12_1 + 0) % 5;
        let r13_2: i64 = r13_1 - rcx_33;
        let mut rax_36: i64;
        let mut rdx_6: i64;
        rdx_6 = HIGHQ(r13_2 * -0x3333333333333333);
        rax_36 = LOWQ(r13_2 * -0x3333333333333333);
        let r12_4: u64 = rdx_6 - r13_2 * 0x3333333333333334 - (r12_1 - 0) * 0x3333333333333333;
        let mut rax_37: u64;
        let mut rdx_9: i64;
        rax_37 = __udivti3(r15_2, r14_2, rax_36, r12_4);
        let var_d0_1: i64 = rdx_9;
        let mut var_d8: u64 = rax_37;
        let mut rax_38: i64;
        let mut rdx_10: i64;
        rdx_10 = HIGHQ(rax_37 * rax_36);
        rax_38 = LOWQ(rax_37 * rax_36);
        let mut rcx_37: *mut u64;
        
        if ((r14_2 - (rax_36 * rdx_9 + rdx_10 + r12_4 * rax_37)) | (r15_2 - rax_38)) == 0
        {
            var_1b8 = &var_f8;
            let var_1b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
            rcx_37 = &var_d8;
        }
        else
        {
            let mut rax_41: i64;
            rax_41 = ((rax_37 ^ 9) | rdx_9) == 0;
            let c_33: bool = /* bool c_33 = unimplemented  {sbb rdx, rbx} */;
            let mut var_108: u64;
            
            if (c_33 | rax_41) != 0
            {
                let var_100_1: i64 = rdx_1 + 0;
                var_108 = rax_25 + 1;
                rax_42 = &var_108;
                goto 'label_46a910;
            }
            
            let var_100_2: i64 = rdx_9 + 0;
            var_108 = rax_37 + 1;
            var_1b8 = &var_f8;
            let var_1b0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
            rcx_37 = &var_108;
        }
        
        let var_1a8_1: *mut u64 = rcx_37;
        let var_1a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
        let var_198_1: *mut i128 = &var_e8;
        let var_190_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb20b9e0280238f;
        var_138 = &data_502da8;
        let var_130_1: i64 = 3;
        let var_118_1: i64 = 0;
        let var_128_1: *mut *mut u64 = &var_1b8;
        let var_120_1: i64 = 3;
        rsi_3 = &var_138;
    }
    core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(arg1, rsi_3)
}
