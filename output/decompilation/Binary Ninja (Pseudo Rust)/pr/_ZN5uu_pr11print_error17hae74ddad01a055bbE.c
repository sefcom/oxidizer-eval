
  fn uu_pr::print_error::hae74ddad01a055bb(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_48: i64 = arg2;
    let result: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
        "no-file-warningsArgumentConflict…", 0x10);
    
    if result != 0
    {
        return result;
    }
    
    let mut var_40: *mut i64 = &var_48;
    let var_38_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0e2d6c98197517eb;
    let mut var_30: *mut c_void = &data_709200;
    let var_28_1: i64 = 2;
    let var_10_1: i64 = 0;
    let var_20_1: *mut *mut i64 = &var_40;
    let var_18_1: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_30)
}
