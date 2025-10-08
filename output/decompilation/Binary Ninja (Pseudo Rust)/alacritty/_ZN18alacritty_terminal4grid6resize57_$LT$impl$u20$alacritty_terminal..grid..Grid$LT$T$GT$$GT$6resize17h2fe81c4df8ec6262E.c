
  fn alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::resize::h2fe81c4df8ec6262(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64) -> i64

{
    let mut var_38: i128;
    _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_38);
    let result: i64 = arg1[0xa];
    let var_58: i128 = *arg1.byte_offset(0x40);
    *arg1.byte_offset(0x40) = var_38;
    let var_28: i64;
    arg1[0xa] = var_28;
    let temp0: i64 = arg1[0x13];
    let c: bool = temp0 < arg3;
    let mut rax: i64;
    rax = temp0 != arg3 && !c;
    rax = rax - 0;
    
    if rax != 0
    {
        if rax != 1
        {
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_lines::h797124adb8045c3d(arg1, arg3);
        }
        else
        {
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_lines::h17439bedf3b4c61e(arg1, arg3);
        }
    }
    
    let temp1: i64 = arg1[0x12];
    let c_1: bool = temp1 < arg4;
    rax = temp1 != arg4 && !c_1;
    rax = rax - 0;
    
    if rax != 0
    {
        if rax != 1
        {
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_columns::hda8ffb581183d2c1(arg1, arg2, arg4);
        }
        else
        {
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_columns::hf025751948d3172f(arg1, arg2, arg4);
        }
    }
    
    core::ptr::drop_in_place$LT$alacritty_terminal..term..cell..Cell$GT$::h331fd95bdd9b1d23(
        &arg1[8]);
    arg1[0xa] = result;
    *arg1.byte_offset(0x40) = var_58;
    result
}
