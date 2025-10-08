
  int64_t bat::set_terminal_title_to::h432aeef32092f2a4(int64_t* arg1)

{
    char const* const var_90 = "\x1b]0;rule";
    int64_t var_88 = 4;
    void* const var_80 = &data_489078;
    int64_t var_78 = 1;
    char const* const* var_70 = &var_90;
    int64_t (* var_68)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
    int64_t* var_60 = arg1;
    int64_t (* var_58)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const* var_50 = &var_80;
    int64_t (* var_48)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
    void* const var_40 = &data_489048;
    int64_t var_38 = 3;
    int64_t var_20 = 0;
    char const* const** var_30 = &var_70;
    int64_t var_28 = 3;
    std::io::stdio::_print::h5e446ff973c02de6(&var_40);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_70 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    core::result::Result$LT$T$C$E$GT$::unwrap::h39cf630814389a44(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
        &var_70));
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(arg1);
}
