
  fn alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_lines::h797124adb8045c3d(arg1: *mut i64, arg2: i64) -> i64

{
    let rbx_1: i64 = arg2 - arg1[0x13];
    let mut r13: i64 = 0;
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(arg1, 
        arg2 - arg1[4], 
        *_$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, 0).byte_offset(0x10));
    arg1[4] = arg2;
    arg1[0x13] = arg2;
    let rax_1: i64 = arg1[5];
    
    if rax_1 >= arg2
    {
        r13 = rax_1 - arg2;
    }
    
    let rax_3: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(r13, rbx_1);
    let r12_2: i32 = rax_3;
    
    if rbx_1 != rax_3
    {
        alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(arg1, 0, arg2, 
            rbx_1 - rax_3);
    }
    
    arg1[0xd] += r12_2;
    arg1[7] += r12_2;
    let rax_4: i64 = arg1[0x14];
    let mut rcx_2: i64 = 0;
    
    if rax_4 >= rbx_1
    {
        rcx_2 = rax_4 - rbx_1;
    }
    
    arg1[0x14] = rcx_2;
    /* tailcall */
    alacritty_terminal::grid::Grid$LT$T$GT$::decrease_scroll_limit::h8721b8159654f913(arg1, rbx_1)
}
