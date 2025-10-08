
  fn uu_tr::operation::Sequence::single_char::h03ac86a62102e265(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_40: i32;
    let mut result: i8 = _$LT$nom..bytes..Take$LT$Error$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::h31e110a1e01abcb3(&var_40, 1, arg2, arg3);
    let var_38: i128;
    let var_28: i128;
    
    if var_40 != 1
    {
        let var_20: i64;
        
        if var_20 == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        result = *var_28;
        *arg1.byte_offset(8) = var_38;
        arg1[3] = result;
        *arg1 = 3;
    }
    else
    {
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = var_38;
    }
    result
}
