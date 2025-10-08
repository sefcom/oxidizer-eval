
  fn rg::flags::parse::lookup::h97d2ae6acfed87fa(arg1: *mut i64, arg2: u64) -> i64

{
    let mut var_28: i64;
    rg::flags::parse::Parser::find_long::h9dc8bf2eec00e1d3(&var_28, 
        rg::flags::parse::Parser::new::h41a0a58eaeb94208(), arg1, arg2);
    let mut result: i64 = 0;
    
    if 0 + -(var_28)
    {
        let var_20: *mut i64;
        result = *var_20;
        var_20[1];
    }
    
    core::ptr::drop_in_place$LT$lexopt..LastOption$GT$::h7bcd830d12d0510f(&var_28);
    result
}
