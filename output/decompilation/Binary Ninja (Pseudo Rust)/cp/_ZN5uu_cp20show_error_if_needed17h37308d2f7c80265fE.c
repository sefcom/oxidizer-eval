
  fn uu_cp::show_error_if_needed::h37308d2f7c80265f(arg1: *mut i64) -> *mut c_void

{
    let mut var_58: *mut i64 = arg1;
    let result: *mut c_void = *arg1;
    
    if result == -0x7ffffffffffffffc || result == -0x7ffffffffffffff9
    {
        return result;
    }
    
    let mut rax: *mut *mut i64;
    let mut rdx_1: i64;
    rax = uucore::util_name::h074417a1e6395129();
    let mut var_68: *mut *mut i64 = rax;
    let var_60_1: i64 = rdx_1;
    let mut var_20: *mut *mut *mut i64 = &var_68;
    let var_18_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    let mut var_50: *mut c_void = &data_55e700;
    let var_48_1: i64 = 2;
    let var_30_1: i64 = 0;
    let var_40_1: *mut *mut *mut *mut i64 = &var_20;
    let var_38_1: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_50);
    var_68 = &var_58;
    let var_60_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h37de6691381edacb;
    var_50 = &data_55e620;
    let var_48_2: i64 = 2;
    let var_30_2: i64 = 0;
    let var_40_2: *mut *mut *mut i64 = &var_68;
    let var_38_2: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_50)
}
