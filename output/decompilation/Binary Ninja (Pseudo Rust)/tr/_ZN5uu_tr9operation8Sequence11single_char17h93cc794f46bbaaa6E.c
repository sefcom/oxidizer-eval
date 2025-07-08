
  fn uu_tr::operation::Sequence::single_char::h93cc794f46bbaaa6(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_40: i64;
    let mut result: i8 =
        nom::bytes::complete::take::_$u7b$$u7b$closure$u7d$$u7d$::h6d20bacba5a47d43(&var_40, 
        nom::bytes::complete::take::hb83f4516c7d13b17(1), arg2, arg3);
    let var_38: i128;
    let var_28: i128;
    
    if var_40 == 0
    {
        let var_20: i64;
        
        if var_20 == 0
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
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
