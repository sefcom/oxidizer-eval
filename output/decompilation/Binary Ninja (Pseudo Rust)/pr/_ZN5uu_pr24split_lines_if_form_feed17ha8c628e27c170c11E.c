
  fn uu_pr::split_lines_if_form_feed::ha8c628e27c170c11(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if *arg2 == -0x8000000000000000
    {
        /* tailcall */
        return uu_pr::split_lines_if_form_feed::_$u7b$$u7b$closure$u7d$$u7d$::h8a95074bb9280ff2(
            arg1, arg2[1]);
    }
    
    let var_28: i64 = arg2[2];
    let mut var_38: i128 = *arg2;
    let mut var_20: i128;
    uu_pr::split_lines_if_form_feed::_$u7b$$u7b$closure$u7d$$u7d$::hfab3542512aec1ce(&var_20, 
        &var_38);
    *arg1 = var_20;
    let result: i64;
    arg1[2] = result;
    result
}
