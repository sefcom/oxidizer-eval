
  fn uu_cp::show_error_if_needed::h934143ac50374c6e(arg1: *mut i64) -> *mut c_void

{
    let mut var_58: *mut i64 = arg1;
    let result_1: *mut c_void = (*arg1).byte_offset(-2);
    let mut result: *mut c_void = 4;
    
    if result_1 < 0xb
    {
        result = result_1;
    }
    
    if result == 3 || result == 6
    {
        return result;
    }
    
    let mut rax: *mut *mut i64;
    let mut rdx_1: i64;
    rax = uucore::util_name::h60d842bf27b05e82();
    let mut var_68: *mut *mut i64 = rax;
    let var_60_1: i64 = rdx_1;
    let mut var_20: *mut *mut *mut i64 = &var_68;
    let var_18_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
    let mut var_50: *mut c_void = &data_5b5cc8;
    let var_48_1: i64 = 2;
    let var_30_1: i64 = 0;
    let var_40_1: *mut *mut *mut *mut i64 = &var_20;
    let var_38_1: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_50);
    var_68 = &var_58;
    let var_60_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2064bcc4257d401d;
    var_50 = &data_5b5ce8;
    let var_48_2: i64 = 2;
    let var_30_2: i64 = 0;
    let var_40_2: *mut *mut *mut i64 = &var_68;
    let var_38_2: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_50)
}
