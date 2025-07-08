
  fn uu_date::parse_date::h6b3c33f6fe9898db(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_50: i64;
    let result: *mut i64 = parse_datetime::parse_datetime::h31f6ee9f0c9ea07f(&var_50, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h19d63261396b90f5(arg2));
    
    if var_50 == -0x7ffffffffffffffe
    {
        let var_48: i128;
        *arg1.byte_offset(8) = var_48;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_40: i64;
    let var_28_1: i64 = var_40;
    let mut var_38: i128 = var_50;
    uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h0b2ffe81582c5501(arg1, arg2, &var_38)
}
