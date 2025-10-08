
  fn alacritty_terminal::term::Term$LT$T$GT$::resize::h536793f9ff690001(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    let mut r13: i64 = arg3;
    let mut rbp: i64 = arg2;
    let r14: i64 = *arg1.byte_offset(0xb8);
    let r15: i64 = *arg1.byte_offset(0xc0);
    let mut var_108: i64 = arg3;
    let mut var_100: i64 = arg2;
    let result: i64 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    let mut var_f8: *mut *mut c_void;
    let mut var_c0: *const i8;
    
    if ((r15 ^ arg2) | (r14 ^ arg3)) == 0
    {
        if result <= 3
        {
            return result;
        }
        
        var_f8 = &data_c778e0;
        let var_f0_1: i64 = 1;
        let var_e8_1: i64 = 8;
        let mut var_e0: i64;
        var_e0 = {0};
        let rax: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77940);
        var_c0 = "alacritty_terminal::termScrollin…";
        let var_b8_1: i64 = 0x18;
        let var_b0_1: *const i8 = "alacritty_terminal::termScrollin…";
        let var_a8_1: i64 = 0x18;
        let var_a0_1: i64 = rax;
        return log::__private_api::log::h0b6680b994d742b1(&var_f8, 4, &var_c0);
    }
    
    let mut var_e8: *mut *mut i64;
    let mut var_d8: i64;
    
    if result > 3
    {
        let mut var_88: *mut i64 = &var_108;
        let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_78_1: *mut i64 = &var_100;
        let var_70_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_f8 = &data_c778f0;
        let var_f0_2: i64 = 2;
        var_d8 = 0;
        var_e8 = &var_88;
        let var_e0_1: i64 = 2;
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77910);
        var_c0 = "alacritty_terminal::termScrollin…";
        let var_b8_2: i64 = 0x18;
        let var_b0_2: *const i8 = "alacritty_terminal::termScrollin…";
        let var_a8_2: i64 = 0x18;
        let var_a0_2: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_f8, 4, &var_c0);
        rbp = var_100;
        r13 = var_108;
    }
    
    let rax_2: i64 = *arg1.byte_offset(0x50);
    let mut r12_3: i32 = 0;
    
    if rax_2 >= r15
    {
        r12_3 = rax_2 - r15;
    }
    
    let rax_6: i32 = core::cmp::Ord::min::h3552534d3430b892(
        core::cmp::Ord::max::h485505c56320f468(rbp - r15, 
            core::cmp::Ord::min::h3552534d3430b892(0, !*arg1.byte_offset(0x60) + rbp)), 
        r12_3);
    *arg1.byte_offset(0x298) += rax_6;
    let rax_7: i32 = 0x1000 & *arg1.byte_offset(0x6dc);
    alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::resize::h2fe81c4df8ec6262(arg1.byte_offset(0x28), rax_7 == 0, rbp, r13);
    alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::resize::h2fe81c4df8ec6262(arg1.byte_offset(0xd8), rax_7 >> 0xc, var_100, var_108);
    let rsi_7: i64 = var_108;
    let mut r13_1: i64 = r14;
    
    if r13_1 != rsi_7
    {
        *arg1.byte_offset(0x280) = 2;
        var_f8 = *arg1.byte_offset(0x198);
        alloc::vec::Vec$LT$T$C$A$GT$::resize_with::h138e0d9f2b39608f(arg1.byte_offset(0x188), 
            rsi_7, &var_f8);
        r13_1 = var_108;
    }
    else
    {
        let rax_8: i8 = *arg1.byte_offset(0x280);
        *arg1.byte_offset(0x280) = 2;
        
        if rax_8 != 2
        {
            let var_48_1: i64 = *arg1.byte_offset(0x278);
            let var_58_1: i128 = *arg1.byte_offset(0x268);
            let mut var_68: i128 = *arg1.byte_offset(0x258);
            let var_40_1: i8 = rax_8;
            let mut var_3f_1: i64 = *arg1.byte_offset(0x281);
            var_3f_1 = *arg1.byte_offset(0x288);
            let rax_10: i32 = core::cmp::Ord::max::h20b6d33cbe488162(var_100, r15);
            alacritty_terminal::selection::Selection::rotate::he038f04baab7ded0(&var_f8, &var_68, 
                *arg1.byte_offset(0xb8), *arg1.byte_offset(0xc0), 0, rax_10, -(rax_6));
            let var_c8: i64;
            *arg1.byte_offset(0x288) = var_c8;
            let zmm0_2: i128 = var_f8;
            *arg1.byte_offset(0x278) = var_d8;
            *arg1.byte_offset(0x268) = var_e8;
            *arg1.byte_offset(0x258) = zmm0_2;
        }
    }
    
    let r14_4: i64 = *arg1.byte_offset(0x290);
    let r15_1: i32 = *arg1.byte_offset(0xc0);
    let rbp_1: i32 = *arg1.byte_offset(0xc8);
    *arg1.byte_offset(0x298) = core::cmp::Ord::max::h3396bb7148673668(
        core::cmp::Ord::min::h08e004ced85b11eb(*arg1.byte_offset(0x298), !rbp_1 + r15_1), -(rbp_1));
    *arg1.byte_offset(0x290) =
        core::cmp::Ord::min::hffab314b5e6491b1(r14_4, *arg1.byte_offset(0xb8) - 1);
    *arg1.byte_offset(0x2a0) = 0;
    *arg1.byte_offset(0x2a4) = r15_1;
    alacritty_terminal::term::TermDamageState::resize::h700b97a1b27587df(arg1.byte_offset(0x1e8), 
        r13_1, var_100)
}
