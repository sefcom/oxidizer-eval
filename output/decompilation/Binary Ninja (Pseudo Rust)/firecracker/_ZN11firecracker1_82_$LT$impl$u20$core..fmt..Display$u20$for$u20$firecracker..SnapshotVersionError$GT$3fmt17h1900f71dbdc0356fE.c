
  fn firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..SnapshotVersionError$GT$::fmt::h1900f71dbdc0356f(arg1: *mut i32, arg2: i64, arg3: i64) -> i64

{
    let mut var_40: *mut *mut c_void;
    let mut rax: *mut *mut [i8; 0xe5];
    let mut var_48: *mut c_void;
    
    if *arg1 != 6
    {
        var_48 = arg1;
        var_40 = &var_48;
        let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h892261fdba3d1c45;
        rax = &data_7a4618;
    }
    else
    {
        var_48 = &arg1[2];
        var_40 = &var_48;
        let var_38: fn(arg1: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05d68fb92091720f;
        rax = &data_7a4608;
    }
    let mut var_30: *mut *mut [i8; 0xe5] = rax;
    let var_28: i64 = 1;
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut c_void = &var_40;
    let var_18: i64 = 1;
    core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg2, arg3, &var_30)
}
