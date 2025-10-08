
  fn alacritty_terminal::selection::Selection::to_range::h2a26a8fa10c1a05c(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void) -> *mut i64

{
    let r15: i64 = *arg3.byte_offset(0xb8);
    let rax: i64 = arg2[1];
    let mut var_98: i128 = *arg2;
    let mut var_b8: i128 = *arg2.byte_offset(0x18);
    let rax_1: i64 = *arg2.byte_offset(0x28);
    let mut rbp: i32 = *var_b8[8];
    
    if _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(var_98, *var_98[8], var_b8, rbp) > 0
    {
        core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_98, &var_b8);
        rbp = *var_b8[8];
    }
    
    let rax_3: i64 = *arg3.byte_offset(0x50);
    let mut rcx_1: i32 = 0;
    let mut result: *mut i64 = rax_3 - *arg3.byte_offset(0xc0);
    
    if rax_3 >= *arg3.byte_offset(0xc0)
    {
        rcx_1 = result;
    }
    
    if rbp >= -(rcx_1)
    {
        let mut rax_4: i64;
        let mut rdx_2: i32;
        rax_4 = alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(var_98, *var_98[8], 
            arg3, 1);
        var_98 = rax_4;
        *var_98[8] = rdx_2;
        let mut rax_5: i64;
        let mut rdx_4: i32;
        rax_5 =
            alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(var_b8, rbp, arg3, 1);
        var_b8 = rax_5;
        *var_b8[8] = rdx_4;
        let mut var_78: i64;
        let mut var_58: i128;
        
        match arg2[3]
        {
            0 =>
            {
                let var_48_1: i64 = rax;
                var_58 = var_98;
                let var_68_1: i64 = rax_1;
                var_78 = var_b8;
                let var_70_1: i32 = *var_b8[8];
                let var_6c_1: i32 = *var_b8[0xc];
                return alacritty_terminal::selection::Selection::range_simple::h1a39dda08803e914(
                    arg1, arg2, &var_58, &var_78, r15);
            }
            1 =>
            {
                let var_48_2: i64 = rax;
                var_58 = var_98;
                let var_68_2: i64 = rax_1;
                var_78 = var_b8;
                let var_70_2: i32 = *var_b8[8];
                let var_6c_2: i32 = *var_b8[0xc];
                return alacritty_terminal::selection::Selection::range_block::hb0d8e5332cc8abd5(
                    arg1, arg2, &var_58, &var_78);
            }
            2 =>
            {
                /* tailcall */
                return alacritty_terminal::selection::Selection::range_semantic::h4a75215fc3ee45a7(
                    arg1, arg3, rax_4, rdx_2, rax_5, rdx_4);
            }
            3 =>
            {
                let rax_12: i32 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg3, rdx_2);
                let mut rdx_8: i32;
                result = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_right::h7ee6c3b77284b281(arg3, rdx_4);
                *arg1 = 0;
                arg1[1] = rax_12;
                arg1[2] = result;
                arg1[3] = rdx_8;
                arg1[4] = 0;
            }
        }
    }
    else
    {
        arg1[4] = 2;
    }
    
    result
}
