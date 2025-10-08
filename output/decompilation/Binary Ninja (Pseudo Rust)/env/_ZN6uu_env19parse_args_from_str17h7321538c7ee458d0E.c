
  fn uu_env::parse_args_from_str::h7321538c7ee458d0(arg1: *mut i128, arg2: i64) -> *mut i128

{
    let mut var_60: i32;
    uu_env::split_iterator::split::hb91d0c6281405deb(&var_60, arg2);
    let var_50: i128;
    
    if var_60 == 0xc
    {
        arg1[1] = *var_50[8];
        let var_58: i128;
        *arg1 = var_58;
        return arg1;
    }
    
    let var_40: i64;
    let var_18: i64 = var_40;
    let var_28: i128 = var_50;
    let mut var_38: i128 = var_60;
    *arg1.byte_offset(8) =
        uu_env::parse_args_from_str::_$u7b$$u7b$closure$u7d$$u7d$::h6aa40fd98cc1f5c7(&var_38);
    arg1[1] = &data_5108a8;
    *arg1 = -0x8000000000000000;
    arg1
}
