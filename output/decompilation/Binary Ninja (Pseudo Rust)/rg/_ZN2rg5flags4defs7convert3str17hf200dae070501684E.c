
  fn rg::flags::defs::convert::str::hf200dae070501684(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> u64

{
    let mut var_38: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, arg2, arg3);
    let mut result: u64;
    let mut rcx: i64;
    
    if var_38 == 1
    {
        var_38 = &data_7ea250;
        let var_30_1: i64 = 1;
        let var_28: i64 = 8;
        let var_20_1: i128 = {0};
        result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_38);
        rcx = 0;
    }
    else
    {
        let var_30: i64;
        rcx = var_30;
        let result_1: u64;
        result = result_1;
    }
    
    arg1[1] = result;
    *arg1 = rcx;
    result
}
