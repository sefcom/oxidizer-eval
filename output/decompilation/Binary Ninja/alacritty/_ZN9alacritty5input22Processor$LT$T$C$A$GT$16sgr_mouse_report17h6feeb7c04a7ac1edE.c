
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::sgr_mouse_report::h6feeb7c04a7ac1ed(int64_t* arg1, int64_t arg2, int32_t arg3, char arg4, int32_t arg5)

{
    char var_a9 = arg4;
    int32_t var_a8 = arg5 << 5 | 0x4d;
    int64_t var_a0 = arg2 + 1;
    uint64_t rdx = arg3 + 1;
    int32_t var_a4 = rdx;
    char* var_98 = &var_a9;
    uint64_t (* var_90)(char* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    int64_t* var_88 = &var_a0;
    int64_t (* var_80)(int64_t arg1, int64_t* arg2) = _$LT$alacritty_terminal..index..Column$u20$as$u20$core..fmt..Display$GT$::fmt::h86f543d6692d8d80;
    int32_t* var_78 = &var_a4;
    int64_t (* var_70)(int64_t arg1, int64_t* arg2) = _$LT$alacritty_terminal..index..Line$u20$as$u20$core..fmt..Display$GT$::fmt::h8bdccc96f374cf92;
    int32_t* var_68 = &var_a8;
    int64_t (* var_60)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    char const (** const var_58)[0x0] = &data_c82db0;
    int64_t var_50 = 4;
    int64_t var_38 = 0;
    char** var_48 = &var_98;
    int64_t var_40 = 4;
    void var_28;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_28, 0, rdx, &var_58);
    return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(arg1, &var_28);
}
