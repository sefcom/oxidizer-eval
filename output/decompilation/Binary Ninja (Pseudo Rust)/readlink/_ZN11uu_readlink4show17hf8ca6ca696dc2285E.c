
  fn uu_readlink::show::hf8ca6ca696dc2285(arg1: *mut i8, arg2: i64, arg3: i8) -> *mut *mut [i8; 0xbe]

{
    let mut var_68: *mut c_void;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_68, arg1, arg2);
    
    if var_68 != 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_60: i128;
    let mut var_28: i128 = var_60;
    let mut var_38: *mut i128 = &var_28;
    let var_30: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h42c36f4e3441bd7f;
    var_68 = &data_414110;
    var_60 = 1;
    let var_48: i64 = 0;
    *var_60[8] = &var_38;
    let var_50: i64 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_68);
    
    if arg3 != 0xb
    {
        let mut var_69: i8 = arg3;
        var_38 = &var_69;
        let var_30_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_68 = &data_414110;
        var_60 = 1;
        let var_48_1: i64 = 0;
        *var_60[8] = &var_38;
        let var_50_1: i64 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_68);
    }
    
    std::io::stdio::stdout::h077da66234850927();
    var_68 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&var_68)
}
