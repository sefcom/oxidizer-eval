
  fn alacritty_terminal::grid::Grid$LT$T$GT$::reset::h8b322fa070245340(arg1: *mut c_void) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x28);
    let mut rcx: i64 = *arg1.byte_offset(0x98);
    
    if rax < rcx
    {
        rcx = rax;
    }
    
    let rax_1: i64 = *arg1.byte_offset(0x10);
    *arg1.byte_offset(0x28) = rcx;
    
    if rax_1 > rcx + 0x3e8
    {
        alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
    }
    
    *arg1.byte_offset(0xa0) = 0;
    let mut var_50: i128;
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&var_50);
    core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1.byte_offset(0x60));
    let zmm0: i128 = var_50;
    let var_30: i128;
    *arg1.byte_offset(0x80) = var_30;
    let var_40: i128;
    *arg1.byte_offset(0x70) = var_40;
    *arg1.byte_offset(0x60) = zmm0;
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&var_50);
    core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1.byte_offset(0x30));
    let zmm0_1: i128 = var_50;
    *arg1.byte_offset(0x50) = var_30;
    *arg1.byte_offset(0x40) = var_40;
    *arg1.byte_offset(0x30) = zmm0_1;
    *arg1.byte_offset(0xa0) = 0;
    let rax_2: i64 = *arg1.byte_offset(0x28);
    let r15: i64 = *arg1.byte_offset(0x98);
    let mut result_1: i32 = 0;
    let mut result: i32 = rax_2 - r15;
    
    if rax_2 >= r15
    {
        result_1 = result;
    }
    
    let mut i_1: i32 = -(result_1);
    
    if i_1 < r15
    {
        let mut i: i32;
        
        do
        {
            i = i_1 + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, i_1), 
                *arg1.byte_offset(0x4c));
            i_1 = i;
        } while i < r15;
    }
    
    result
}
