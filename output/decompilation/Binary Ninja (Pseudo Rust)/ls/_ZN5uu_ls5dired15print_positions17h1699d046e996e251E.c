
  fn uu_ls::dired::print_positions::h1699d046e996e251(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> *mut c_void

{
    let mut var_40: i64 = arg1;
    let var_38: i64 = arg2;
    let mut var_98: *mut i64 = &var_40;
    let var_90: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    let mut var_88: *mut i128 = &data_423c10;
    let var_80: i64 = 1;
    let var_68: i64 = 0;
    let var_78: *mut *mut i64 = &var_98;
    let mut var_70: i64 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_88);
    let mut var_58: i64 = arg3;
    let var_50: i64 = (arg4 << 4) + arg3;
    
    for let mut i: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7f2942e0b93b17b0(&var_58); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7f2942e0b93b17b0(&var_58)
    {
        let mut i_1: i64 = i;
        var_98 = &i_1;
        let var_90_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7b0229abfda6cdd0;
        var_88 = &data_613738;
        let var_80_1: i64 = 1;
        let var_68_1: i64 = 0;
        let var_78_1: *mut *mut i64 = &var_98;
        var_70 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_88);
    }
    
    var_88 = &data_613728;
    let var_80_2: i64 = 1;
    let var_78_2: i64 = 8;
    var_70 = {0};
    std::io::stdio::_print::he918bceb0c89db46(&var_88)
}
