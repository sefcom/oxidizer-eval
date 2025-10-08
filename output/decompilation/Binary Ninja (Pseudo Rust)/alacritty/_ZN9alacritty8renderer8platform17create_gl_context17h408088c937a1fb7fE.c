
  fn alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(arg1: *mut i128, arg2: *mut i32, arg3: *mut i8, arg4: *mut i128) -> *mut i128

{
    let cond:0: bool = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4;
    let mut var_220: i64 = 2;
    let var_210: i32 = 0x10;
    let var_1f8: i32 = 2;
    let var_1f4: i8 = 1;
    let var_1f3: bool = cond:0;
    let mut var_1f2: i16 = 2;
    let var_1f0: i8 = 4;
    let mut rdx: i64 = 0x70;
    
    if *arg2 != 0
    {
        rdx = 0x5c;
    }
    
    if ((*arg2.byte_offset(8))[rdx] & 1) != 0
    {
        *var_1f2[1] = 3;
    }
    
    let mut var_2a8: i128;
    _$LT$glutin..context..ContextAttributes$u20$as$u20$core..clone..Clone$GT$::clone::he394f954a637a5dc(&var_2a8, &var_220);
    let var_1a8: i128 = var_2a8;
    let var_27c: i64;
    let var_ac: i64 = var_27c;
    let var_274: i32;
    let var_a4: i32 = var_274;
    let zmm0: i128 = *arg4;
    let rax_4: i64 = arg4[1];
    _$LT$glutin..context..ContextAttributes$u20$as$u20$core..clone..Clone$GT$::clone::he394f954a637a5dc(&var_2a8, &var_220);
    let var_178: i128 = var_2a8;
    let var_74: i64 = var_27c;
    let var_6c: i32 = var_274;
    let var_168: i128 = *arg4;
    let rax_7: i64 = arg4[1];
    let var_148: i128 = var_220;
    let var_39: i64 = *var_1f2[1];
    let var_1e9: i8;
    let var_31: i8 = var_1e9;
    let var_138: i128 = *arg4;
    let rcx_2: i64 = arg4[1];
    let mut var_e8: i64 = 0;
    let var_e0: i64 = 3;
    let var_d8: i128 = var_1a8;
    let var_c8: i128 = zmm0;
    let var_b8: i64 = rax_4;
    let var_b0: i32 = 0x3030100;
    let var_80: i64 = rax_7;
    let var_90: i128 = var_168;
    let var_a0: i128 = var_178;
    let var_78: i32 = 0x20101;
    let var_48: i64 = rcx_2;
    let var_58: i128 = var_138;
    let var_68: i128 = var_148;
    let var_40: i32 = 0x1020100;
    let var_3c: i16 = var_1f4;
    let var_3a: i8 = 1;
    core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h211b113f5f8b0d20(&var_2a8, &var_e8);
    
    if var_2a8 == 3
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let var_1b8: i64 = var_27c;
    let var_288: i128;
    let var_1c8: i128 = var_288;
    let var_298: i128;
    let var_1d8: i128 = var_298;
    let mut var_1e8: i128 = var_2a8;
    let mut var_268: i32;
    _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::create_context::h0aad93cc74e20072(&var_268, arg2, arg3);
    let rbx_1: i32 = var_268;
    let mut i: i64;
    core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h211b113f5f8b0d20(&i, &var_e8);
    let mut var_258: i128;
    let mut var_248: i128;
    let mut var_238: i128;
    
    if rbx_1 != 2 && i != 3
    {
        do
        {
            let var_f0: i64;
            let var_1b8_1: i64 = var_f0;
            let var_100: i128;
            let var_1c8_1: i128 = var_100;
            let var_110: i128;
            let var_1d8_1: i128 = var_110;
            var_1e8 = i;
            _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::create_context::h0aad93cc74e20072(&var_2a8, arg2, arg3);
            core::ptr::drop_in_place$LT$core..result..Result$LT$glutin..context..NotCurrentContext$C$glutin..error..Error$GT$$GT$::h6d158cb2c1654f91(&var_268);
            var_238 = *var_27c[4];
            var_248 = var_288;
            var_258 = var_298;
            var_268 = var_2a8;
            let r12_1: i32 = var_268;
            core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h211b113f5f8b0d20(&i, &var_e8);
            
            if r12_1 == 2
            {
                break;
            }
        } while i != 3;
    }
    
    let zmm0_3: i128 = var_268;
    arg1[3] = var_238;
    arg1[2] = var_248;
    arg1[1] = var_258;
    *arg1 = zmm0_3;
    arg1
}
