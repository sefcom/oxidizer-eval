
  fn uu_pr::print_error::hcda7b11e9efc84e6(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_48: i64 = arg2;
    let result: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "no-file-warningsidsunaryoperator…", 0x10);
    
    if result != 0
    {
        return result;
    }
    
    let mut var_40: *mut i64 = &var_48;
    let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h827d363b4bf2d5db;
    let mut var_30: *mut c_void = &data_669188;
    let var_28_1: i64 = 2;
    let var_10_1: i64 = 0;
    let var_20_1: *mut *mut i64 = &var_40;
    let var_18_1: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_30)
}
