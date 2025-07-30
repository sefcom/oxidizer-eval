
  int64_t flea::print_usage::hb3135f8e2fa442e9(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_48 = arg1;
    int64_t var_40 = arg2;
    int64_t* var_80 = &var_48;
    int64_t (* var_78)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he53499d21221b86b;
    void** const var_b0 = &data_af5918;
    int64_t var_a8 = 2;
    int64_t var_90 = 0;
    int64_t** var_a0 = &var_80;
    int64_t var_98 = 1;
    int128_t var_28;
    core::option::Option$LT$T$GT$::map_or_else::hbd37af77d9713dc6(&var_28, &var_b0);
    int128_t var_68 = var_28;
    int64_t var_18;
    int64_t var_58 = var_18;
    getopts::Options::usage::h7f7fdd7b1cb03bdd(&var_80, arg3, *var_68[8]);
    int64_t** var_38 = &var_80;
    int64_t (* var_30)(void* arg1, int64_t* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    var_b0 = &data_af5938;
    int64_t var_a8_1 = 2;
    int64_t var_90_1 = 0;
    int64_t*** var_a0_1 = &var_38;
    int64_t var_98_1 = 1;
    std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_b0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_80);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_68);
    return core::ptr::drop_in_place$LT$getopts..Options$GT$::ha123b29a12c62a26(arg3);
}
