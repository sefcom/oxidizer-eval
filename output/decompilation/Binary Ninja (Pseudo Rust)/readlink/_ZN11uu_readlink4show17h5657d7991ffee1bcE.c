
  fn uu_readlink::show::h5657d7991ffee1bc(arg1: *mut i8, arg2: i64, arg3: i8) -> ssize_t

{
    let mut var_68: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_68, arg1, arg2);
    
    if var_68 == 1
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_60: i128;
    let mut var_28: i128 = var_60;
    let mut var_38: *mut i128 = &var_28;
    let var_30: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hae5a03900170492f;
    var_68 = &data_417ae0;
    var_60 = 1;
    let var_48: i64 = 0;
    *var_60[8] = &var_38;
    let var_50: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_68);
    
    if arg3 != 0xb
    {
        let mut var_69: i8 = arg3;
        var_38 = &var_69;
        let var_30_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_68 = &data_417ae0;
        var_60 = 1;
        let var_48_1: i64 = 0;
        *var_60[8] = &var_38;
        let var_50_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_68);
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_68 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(&var_68)
}
