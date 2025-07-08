
  fn uu_env::parse_args_from_str::ha63b8bbceed9831c(arg1: *mut i128, arg2: i64) -> *mut i128

{
    let mut var_60: i32;
    uu_env::split_iterator::split::h2ad0ba729ee8da1c(&var_60, arg2);
    let var_50: i128;
    
    if var_60 != 8
    {
        let var_40: i64;
        let var_18_1: i64 = var_40;
        let var_28_1: i128 = var_50;
        let mut var_38: i128 = var_60;
        *arg1.byte_offset(8) =
            uu_env::parse_args_from_str::_$u7b$$u7b$closure$u7d$$u7d$::h3c361bada9b8fd30(&var_38);
        arg1[1] = &data_548908;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        arg1[1] = *var_50[8];
        let var_58: i128;
        *arg1 = var_58;
    }
    arg1
}
