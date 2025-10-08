
  fn alacritty_terminal::term::Term$LT$T$GT$::scroll_up_relative::h61309ba979ffcd4a(arg1: *mut c_void, arg2: i32, arg3: i64) -> i64

{
    let mut r15: i64 = arg3;
    let mut rbp: i32 = arg2;
    let mut var_f4: i32 = arg2;
    let mut var_f0: i64 = arg3;
    let mut var_e8: *mut *mut c_void;
    let mut var_d8: *mut *mut i32;
    let mut var_c8: i64;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 5
    {
        let mut var_b0: *mut i32 = &var_f4;
        let var_a8_1: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$alacritty_terminal..index..Line$u20$as$u20$core..fmt..Display$GT$::fmt::h8bdccc96f374cf92;
        let var_a0_1: *mut i64 = &var_f0;
        let var_98_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_e8 = &data_c77870;
        let var_e0_1: i64 = 2;
        var_c8 = 0;
        var_d8 = &var_b0;
        let var_d0_1: i64 = 2;
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77890);
        let mut var_90: *const i8 = "alacritty_terminal::termScrollin…";
        let var_88_1: i64 = 0x18;
        let var_80_1: *const i8 = "alacritty_terminal::termScrollin…";
        let var_78_1: i64 = 0x18;
        let var_70_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_e8, 5, &var_90);
        r15 = var_f0;
        rbp = var_f4;
    }
    
    let r14: i32 = *arg1.byte_offset(0x2a4);
    let rax_4: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(r15, r14 - *arg1.byte_offset(0x2a0));
    var_f0 = rax_4;
    let rax_5: i8 = *arg1.byte_offset(0x280);
    *arg1.byte_offset(0x280) = 2;
    let mut var_c0: i8;
    
    if rax_5 != 2
    {
        let var_48_1: i64 = *arg1.byte_offset(0x278);
        let var_58_1: i128 = *arg1.byte_offset(0x268);
        let mut var_68: i128 = *arg1.byte_offset(0x258);
        let var_40_1: i8 = rax_5;
        let mut var_3f_1: i64 = *arg1.byte_offset(0x281);
        var_3f_1 = *arg1.byte_offset(0x288);
        alacritty_terminal::selection::Selection::rotate::he038f04baab7ded0(&var_e8, &var_68, 
            *arg1.byte_offset(0xb8), *arg1.byte_offset(0xc0), rbp, r14, rax_4);
    }
    else
    {
        var_c0 = 2;
    }
    
    let var_b8: i64;
    *arg1.byte_offset(0x288) = var_b8;
    let zmm0: i128 = var_e8;
    *arg1.byte_offset(0x278) = var_c8;
    *arg1.byte_offset(0x280) = var_c0;
    let var_bf: i32;
    *arg1.byte_offset(0x281) = var_bf;
    let var_bb: i16;
    *arg1.byte_offset(0x285) = var_bb;
    let var_b9: i8;
    *arg1.byte_offset(0x287) = var_b9;
    *arg1.byte_offset(0x268) = var_d8;
    *arg1.byte_offset(0x258) = zmm0;
    let mut result: i32 = alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(
        arg1.byte_offset(0x28), rbp, r14, rax_4);
    let mut rsi_3: i32 = 0 - *arg1.byte_offset(0xc8);
    
    if rbp != 0
    {
        rsi_3 = rbp;
    }
    
    let rdi_4: i32 = *arg1.byte_offset(0x298);
    
    if r14 > rdi_4 && rsi_3 <= rdi_4
    {
        result = core::cmp::Ord::max::h3396bb7148673668(rdi_4 - var_f0, rsi_3);
        *arg1.byte_offset(0x298) = result;
    }
    
    *arg1.byte_offset(0x210) = 1;
    result
}
