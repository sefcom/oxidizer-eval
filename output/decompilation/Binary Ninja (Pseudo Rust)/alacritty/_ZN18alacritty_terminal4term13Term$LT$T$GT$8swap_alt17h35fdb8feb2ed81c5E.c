
  fn alacritty_terminal::term::Term$LT$T$GT$::swap_alt::h35fdb8feb2ed81c5(arg1: *mut c_void) -> i64

{
    if (*arg1.byte_offset(0x6dd) & 0x10) == 0
    {
        let mut rax_1: i64;
        let mut rdx_1: i32;
        rax_1 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::_$u7b$$u7b$closure$u7d$$u7d$::hbf63da3c25834af9(*arg1.byte_offset(0x58), *arg1.byte_offset(0x60));
        let mut var_48: i128;
        _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..clone..Clone$GT$::clone::ha89e2699b0a1570a(&var_48, arg1.byte_offset(0x68));
        let r15_1: i32 = *arg1.byte_offset(0x80);
        let rbp_1: i8 = *arg1.byte_offset(0x84);
        let var_38: i64;
        let var_50_1: i64 = var_38;
        let zmm0_1: i128 = var_48;
        core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1.byte_offset(0x108));
        *arg1.byte_offset(0x108) = rax_1;
        *arg1.byte_offset(0x110) = rdx_1;
        let var_64: i128;
        *arg1.byte_offset(0x114) = var_64;
        *arg1.byte_offset(0x120) = zmm0_1;
        *arg1.byte_offset(0x130) = r15_1;
        *arg1.byte_offset(0x134) = rbp_1;
        let mut rax_4: i64;
        let mut rdx_2: i32;
        rax_4 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::_$u7b$$u7b$closure$u7d$$u7d$::hbf63da3c25834af9(*arg1.byte_offset(0x58), *arg1.byte_offset(0x60));
        _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..clone..Clone$GT$::clone::ha89e2699b0a1570a(&var_48, arg1.byte_offset(0x68));
        let rbp_2: i32 = *arg1.byte_offset(0x80);
        let r13_2: i8 = *arg1.byte_offset(0x84);
        let var_50_2: i64 = var_38;
        let zmm0_3: i128 = var_48;
        core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1.byte_offset(0x88));
        *arg1.byte_offset(0x88) = rax_4;
        *arg1.byte_offset(0x90) = rdx_2;
        *arg1.byte_offset(0x94) = var_64;
        *arg1.byte_offset(0xa0) = zmm0_3;
        *arg1.byte_offset(0xb0) = rbp_2;
        *arg1.byte_offset(0xb4) = r13_2;
        alacritty_terminal::grid::Grid$LT$T$GT$::reset_region::h3f908732bc647e2d(arg1.
            byte_offset(0xd8));
    }
    
    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(arg1.byte_offset(0x1b8), 
        arg1.byte_offset(0x1d0));
    let rax_6: i64 = *arg1.byte_offset(0x1c8);
    let mut rax_7: i8;
    
    if rax_6 == 0
    {
        rax_7 = 0;
    }
    else
    {
        rax_7 = *(*arg1.byte_offset(0x1c0) + rax_6 - 1);
    }
    
    alacritty_terminal::term::Term$LT$T$GT$::set_keyboard_mode::hfafc66273a9bb82d(arg1, 
        _$LT$alacritty_terminal..term..TermMode$u20$as$u20$core..convert..From$LT$vte..ansi..KeyboardModes$GT$$GT$::from::h0c201033fe81af1b(rax_7), 
        0);
    let result: i64 = core::intrinsics::typed_swap_nonoverlapping::h837dfdb8c289e852(
        arg1.byte_offset(0x28), arg1.byte_offset(0xd8));
    *arg1.byte_offset(0x6dd) ^= 0x10;
    *arg1.byte_offset(0x280) = 2;
    *arg1.byte_offset(0x210) = 1;
    result
}
