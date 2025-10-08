
  int64_t bat::theme::color_scheme_from_system::ha72283e88c744bcb()

{
    char var_18 = 0;
    int64_t var_20 = 0;
    int64_t var_17 = 0x1500000006;
    int64_t var_50 = -0x8000000000000000;
    char const* const var_48 = "[bat warning]Theme '' is depreca…";
    int64_t var_40 = 0xd;
    int64_t var_38 = -0x7ffffffffffffffe;
    char const (** const var_b8)[0x52] = &data_acecf0;
    int64_t var_b0 = 1;
    int64_t var_a8 = 8;
    int128_t var_a0 = {0};
    int128_t var_88;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_88, 
        "Theme 'auto:system' is only supp…", 0x3e, &var_b8);
    int128_t var_68 = var_88;
    int64_t var_78;
    int64_t var_58 = var_78;
    var_88 = &var_50;
    *var_88[8] = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    int128_t* var_78_1 = &var_68;
    int64_t (* var_70)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_b8 = &data_ace198;
    int64_t var_b0_1 = 3;
    *var_a0[8] = 0;
    int128_t* var_a8_1 = &var_88;
    var_a0 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_68);
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_50);
}
