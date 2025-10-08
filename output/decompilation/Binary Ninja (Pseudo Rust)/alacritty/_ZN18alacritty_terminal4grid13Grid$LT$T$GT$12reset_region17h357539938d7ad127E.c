
  fn alacritty_terminal::grid::Grid$LT$T$GT$::reset_region::h357539938d7ad127(arg1: *mut c_void, arg2: i32) -> *mut i32

{
    let mut var_2c: i32 = arg2;
    let mut result: *mut i32 = _$LT$core..ops..range..RangeTo$LT$T$GT$$u20$as$u20$core..ops..range..RangeBounds$LT$T$GT$$GT$::end_bound::h14c9d6fe65901d1b(&var_2c);
    let r15: i32 = *result;
    
    if r15 > 0
    {
        let rbp_1: i32 = *arg1.byte_offset(0x4c);
        let mut rsi: i32 = 0;
        let mut r12_1: i32;
        
        do
        {
            r12_1 = rsi + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, rsi), 
                rbp_1);
            rsi = r12_1;
        } while r15 != r12_1;
    }
    
    result
}
