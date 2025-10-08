
  int64_t alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::resize::h2fe81c4df8ec6262(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4)

{
    int128_t var_38;
    _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_38);
    int64_t result = arg1[0xa];
    int128_t var_58 = *(arg1 + 0x40);
    *(arg1 + 0x40) = var_38;
    int64_t var_28;
    arg1[0xa] = var_28;
    int64_t temp0 = arg1[0x13];
    bool c = temp0 < arg3;
    int64_t rax;
    rax = temp0 != arg3 && !c;
    rax = rax - 0;
    
    if (rax)
    {
        if (rax != 1)
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_lines::h797124adb8045c3d(arg1, arg3);
        else
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_lines::h17439bedf3b4c61e(arg1, arg3);
    }
    
    int64_t temp1 = arg1[0x12];
    bool c_1 = temp1 < arg4;
    rax = temp1 != arg4 && !c_1;
    rax = rax - 0;
    
    if (rax)
    {
        if (rax != 1)
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_columns::hda8ffb581183d2c1(arg1, arg2, arg4);
        else
            alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_columns::hf025751948d3172f(arg1, arg2, arg4);
    }
    
    core::ptr::drop_in_place$LT$alacritty_terminal..term..cell..Cell$GT$::h331fd95bdd9b1d23(
        &arg1[8]);
    arg1[0xa] = result;
    *(arg1 + 0x40) = var_58;
    return result;
}
