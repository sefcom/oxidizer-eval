
  int64_t alacritty::ipc::socket_prefix::h72fe10f54a073b54(int64_t* arg1)

{
    int32_t var_48;
    std::env::var::h6dfe92363d5ba5ff(&var_48, "WAYLAND_DISPLAYDISPLAYneither WA…");
    int128_t var_a8;
    int128_t var_98;
    void var_40;
    
    if (var_48 != 1)
    {
        int128_t var_38;
        var_98 = var_38;
        var_a8 = var_48;
    }
    else
        alacritty::ipc::socket_prefix::_$u7b$$u7b$closure$u7d$$u7d$::hbd6393b3722c6a59(&var_a8, 
            &var_40);
    void var_70;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h963cd60af23de70f(&var_70, &var_a8);
    int64_t var_68;
    int64_t var_60;
    void var_28;
    uint64_t rdx_2 = alloc::str::_$LT$impl$u20$str$GT$::replace::hb8f25c113ebcb6e9(&var_28, var_68, 
        var_60, 0x2f, "--0o-0b0x0o0bempty YAML tag is n…");
    void* var_58 = &var_28;
    int64_t (* var_50)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_a8 = &data_c83020;
    *var_a8[8] = 1;
    int64_t var_88 = 0;
    var_98 = &var_58;
    *var_98[8] = 1;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(arg1, 0, rdx_2, &var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_28);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_70);
}
