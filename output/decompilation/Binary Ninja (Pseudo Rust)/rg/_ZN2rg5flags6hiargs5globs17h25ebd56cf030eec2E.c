
  fn rg::flags::hiargs::globs::h25ebd56cf030eec2(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let r15: i64 = *arg3.byte_offset(0x138);
    
    if r15 == 0 && *arg3.byte_offset(0x170) == 0
    {
        /* tailcall */
        return ignore::overrides::Override::empty::hb1018ec183410eef(arg1);
    }
    
    let mut var_80: i128;
    ignore::gitignore::GitignoreBuilder::new::hd2f9e2c1dacad7bb(&var_80, arg2);
    let var_37: i8 = 0;
    let var_50: i128;
    let var_a8: i128 = var_50;
    let var_60: i128;
    let var_b8: i128 = var_60;
    let var_70: i128;
    let var_c8: i128 = var_70;
    let mut var_d8: i128 = var_80;
    let var_40: i64;
    let var_98: i64 = var_40;
    let var_38: i8;
    let var_90: i8 = var_38;
    let var_8f: i8 = var_37;
    let var_36: i32;
    let var_8e: i32 = var_36;
    let var_32: i16;
    let var_8a: i16 = var_32;
    let mut var_148: i64;
    
    if *arg3.byte_offset(0x232) != 0
    {
        let var_90_1: i8 = 1;
        let var_140_1: *mut i128 = &var_d8;
        var_148 = 9;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd509385785697347(&var_148);
    }
    
    let mut var_188: i128;
    let var_178: i128;
    let var_168: i128;
    let var_158: i64;
    let mut var_130: i128;
    let mut var_120: i128;
    let mut rax_13: u64;
    
    if r15 == 0
    {
        'label_65210b:
        let var_90_2: i8 = 1;
        let var_140_2: *mut i128 = &var_d8;
        var_148 = 9;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd509385785697347(&var_148);
        let rax_7: i64 = *arg3.byte_offset(0x170);
        
        if rax_7 == 0
        {
            'label_6521b7:
            ignore::overrides::OverrideBuilder::build::h625d1f6598f4f579(&var_148, &var_d8);
            let rax_10: i64 = var_148;
            var_188 = var_140_2;
            let var_168_1: i128 = var_120;
            let var_110: i64;
            
            if -(rax_10) != -0x8000000000000000
            {
                let var_e8: i64;
                arg1[0xc] = var_e8;
                let var_f8: i128;
                *arg1.byte_offset(0x50) = var_f8;
                let var_108: i128;
                *arg1.byte_offset(0x40) = var_108;
                arg1[7] = var_110;
                let zmm0_3: i128 = var_188;
                *arg1.byte_offset(0x28) = var_168_1;
                *arg1.byte_offset(0x18) = var_130;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = rax_10;
            }
            else
            {
                *var_120[8] = var_110;
                let zmm1_1: i128 = var_130;
                var_130 = var_168_1;
                let var_138_1: i128 = zmm1_1;
                var_148 = var_188;
                arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            let r12_1: i64 = *arg3.byte_offset(0x168);
            let mut r13_2: i64 = 0;
            
            loop
            {
                ignore::overrides::OverrideBuilder::add::h525e80db7d282644(&var_188, &var_d8, 
                    *(r12_1 + r13_2 + 8), *(r12_1 + r13_2 + 0x10));
                let rax_9: i64 = var_188;
                
                if rax_9 != 9
                {
                    let rcx_9: i64 = *var_188[8];
                    *var_120[8] = var_158;
                    var_130 = var_168;
                    let var_138_3: i128 = var_178;
                    var_148 = rax_9;
                    let var_140_4: i64 = rcx_9;
                    rax_13 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                    break;
                }
                
                r13_2 += 0x18;
                
                if rax_7 * 0x18 == r13_2
                {
                    goto 'label_6521b7;
                }
            }
            
            arg1[1] = rax_13;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        let r13_1: i64 = *arg3.byte_offset(0x130);
        let mut rbx_1: i64 = 0;
        
        loop
        {
            ignore::overrides::OverrideBuilder::add::h525e80db7d282644(&var_188, &var_d8, 
                *(r13_1 + rbx_1 + 8), *(r13_1 + rbx_1 + 0x10));
            let rax_6: i64 = var_188;
            
            if rax_6 != 9
            {
                let rcx_6: i64 = *var_188[8];
                *var_120[8] = var_158;
                var_130 = var_168;
                let var_138_2: i128 = var_178;
                var_148 = rax_6;
                let var_140_3: i64 = rcx_6;
                rax_13 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                break;
            }
            
            rbx_1 += 0x18;
            
            if r15 * 0x18 == rbx_1
            {
                goto 'label_65210b;
            }
        }
        
        arg1[1] = rax_13;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$ignore..overrides..OverrideBuilder$GT$::h91af0f4315c846a9(&var_d8)
}
