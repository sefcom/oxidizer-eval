
  ssize_t uu_readlink::show::h5657d7991ffee1bc(char* arg1, int64_t arg2, char arg3)

{
    int32_t var_68;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_68, arg1, arg2);
    
    if (var_68 == 1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int128_t var_60;
    int128_t var_28 = var_60;
    int128_t* var_38 = &var_28;
    int64_t (* var_30)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hae5a03900170492f;
    var_68 = &data_417ae0;
    var_60 = 1;
    int64_t var_48 = 0;
    *var_60[8] = &var_38;
    int64_t var_50 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_68);
    
    if (arg3 != 0xb)
    {
        char var_69 = arg3;
        var_38 = &var_69;
        int64_t (* var_30_1)(char* arg1, int64_t* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_68 = &data_417ae0;
        var_60 = 1;
        int64_t var_48_1 = 0;
        *var_60[8] = &var_38;
        int64_t var_50_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_68);
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_68 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
        &var_68);
}
