
  fn rg::flags::hiargs::preprocessor_globs::h42aee61fc9b1d1ae(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    if arg4 == 0
    {
        /* tailcall */
        return ignore::overrides::Override::empty::hb1018ec183410eef(arg1);
    }
    
    let mut var_80: i128;
    ignore::gitignore::GitignoreBuilder::new::hd2f9e2c1dacad7bb(&var_80, arg2);
    let var_37: i8 = 0;
    let mut var_d8: i128 = var_80;
    let var_70: i128;
    let var_c8: i128 = var_70;
    let var_60: i128;
    let var_b8: i128 = var_60;
    let var_50: i128;
    let var_a8: i128 = var_50;
    let var_40: i64;
    let var_98: i64 = var_40;
    let var_38: i8;
    let var_90: i8 = var_38;
    let var_8f: i8 = var_37;
    let var_36: i32;
    let var_8e: i32 = var_36;
    let var_32: i16;
    let var_8a: i16 = var_32;
    let mut rbp: i64 = 0;
    
    loop
    {
        let mut var_188: i64;
        ignore::overrides::OverrideBuilder::add::h525e80db7d282644(&var_188, &var_d8, 
            *(arg3 + rbp + 8), *(arg3 + rbp + 0x10));
        let rax_5: i64 = var_188;
        let mut var_148: i64;
        
        if rax_5 != 9
        {
            let var_158: i64;
            let var_118_2: i64 = var_158;
            let var_168: i128;
            let var_128_2: i128 = var_168;
            let var_178: i128;
            let var_138_2: i128 = var_178;
            var_148 = rax_5;
            let var_180: i64;
            let var_140_1: i64 = var_180;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
            *arg1 = -0x8000000000000000;
            break;
        }
        
        rbp += 0x18;
        
        if arg4 * 0x18 == rbp
        {
            ignore::overrides::OverrideBuilder::build::h625d1f6598f4f579(&var_148, &var_d8);
            let rax_6: i64 = var_148;
            let var_140: i64;
            var_188 = var_140;
            let var_138: i128;
            let var_128: i128;
            let var_110: i64;
            
            if -(rax_6) != -0x8000000000000000
            {
                let var_e8: i64;
                arg1[0xc] = var_e8;
                let var_f8: i128;
                *arg1.byte_offset(0x50) = var_f8;
                let var_108: i128;
                *arg1.byte_offset(0x40) = var_108;
                arg1[7] = var_110;
                let zmm0_2: i128 = var_188;
                *arg1.byte_offset(0x28) = var_128;
                *arg1.byte_offset(0x18) = var_138;
                *arg1.byte_offset(8) = zmm0_2;
                *arg1 = rax_6;
            }
            else
            {
                let var_118_1: i64 = var_110;
                let var_128_1: i128 = var_128;
                let var_138_1: i128 = var_138;
                var_148 = var_188;
                arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                *arg1 = -0x8000000000000000;
            }
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$ignore..overrides..OverrideBuilder$GT$::h91af0f4315c846a9(&var_d8)
}
