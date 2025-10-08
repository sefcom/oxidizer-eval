
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::on_focus_change::h97bba9d0774047a7(int64_t* arg1, void* arg2, uint64_t arg3)

{
    int64_t result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(arg2);
    
    if (!(*(arg2 + 0x6dd) & 8))
        return result;
    
    void* const rcx_1 = "OI[X]ALACRITTY_SOCKET=; export A…";
    
    if (arg3)
        rcx_1 = "I[X]ALACRITTY_SOCKET=; export AL…";
    
    void* const var_80 = rcx_1;
    int64_t var_78_1 = 1;
    void* const* var_70 = &var_80;
    int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    void** const var_60 = &data_c82c60;
    int64_t var_58_1 = 1;
    int64_t var_40_1 = 0;
    void* const** var_50_1 = &var_70;
    int64_t var_48_1 = 1;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_30, 0, arg3, &var_60);
    return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(arg1, &var_30);
}
