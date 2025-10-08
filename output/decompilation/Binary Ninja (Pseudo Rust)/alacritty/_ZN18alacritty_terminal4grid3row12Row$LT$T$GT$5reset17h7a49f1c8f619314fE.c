
  fn alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(arg1: *mut c_void, arg2: i32) -> *mut i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    let r14: i64 = *arg1.byte_offset(0x10);
    
    if r14 < 1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(r14 - 1, 0);
        /* no return */
    }
    
    let r15: i64 = *arg1.byte_offset(8);
    var_28 = *(r15 + (r14 - 1) * 0x18 + 0xc);
    *var_28[4] = arg2;
    let mut rsi_1: i64;
    
    if core::cmp::PartialEq::ne::hd8369387fbf0e6bf(&var_28, &*var_28[4]) == 0
    {
        rsi_1 = *arg1.byte_offset(0x18);
    }
    else
    {
        *arg1.byte_offset(0x18) = r14;
        rsi_1 = r14;
    }
    
    let mut result: *mut i64;
    let mut rdx_1: i64;
    result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hd3f76699eb90e028(0, rsi_1, r15, r14);
    
    if rdx_1 != 0
    {
        let mut result_1: *mut i64 = result;
        let mut i_1: i64 = rdx_1 * 0x18;
        let mut i: i64;
        
        do
        {
            result = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::reset::h9328c0b97bb6c37f(result_1, arg2);
            result_1 = &result_1[3];
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
    }
    
    *arg1.byte_offset(0x18) = 0;
    result
}
