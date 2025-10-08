
  fn uu_pr::parse_usize::ha0c8a08d466c6b5c(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut c_void

{
    let mut var_90: i64 = arg3;
    let var_88: i64 = arg4;
    let mut var_80: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(&var_80, 
        arg2, arg3, arg4);
    let result: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d(arg3, arg4, &var_80);
    
    if result == 0
    {
        *arg1 = -0x7ffffffffffffffa;
        return result;
    }
    
    let mut var_50: i64;
    uu_pr::parse_usize::_$u7b$$u7b$closure$u7d$$u7d$::hc0ac91cb2498e34f(&var_50, &var_90, result);
    let var_28: i64;
    let var_58_1: i64 = var_28;
    let var_38: i128;
    let var_68_1: i128 = var_38;
    let var_48: i128;
    let var_78_1: i128 = var_48;
    var_80 = var_50;
    core::ops::function::FnOnce::call_once::hf083617b5147bd4a(arg1, &var_80)
}
