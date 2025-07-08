
  char const (**)[0xbe] uu_readlink::show::hf8ca6ca696dc2285(char* arg1, int64_t arg2, char arg3)

{
    void* const var_68;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_68, arg1, arg2);
    
    if (var_68)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int128_t var_60;
    int128_t var_28 = var_60;
    int128_t* var_38 = &var_28;
    int64_t (* var_30)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h42c36f4e3441bd7f;
    var_68 = &data_414110;
    var_60 = 1;
    int64_t var_48 = 0;
    *var_60[8] = &var_38;
    int64_t var_50 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_68);
    
    if (arg3 != 0xb)
    {
        char var_69 = arg3;
        var_38 = &var_69;
        int64_t (* var_30_1)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_68 = &data_414110;
        var_60 = 1;
        int64_t var_48_1 = 0;
        *var_60[8] = &var_38;
        int64_t var_50_1 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_68);
    }
    
    std::io::stdio::stdout::h077da66234850927();
    var_68 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
        &var_68);
}
