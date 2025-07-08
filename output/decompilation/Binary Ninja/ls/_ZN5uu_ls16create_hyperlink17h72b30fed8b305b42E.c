
  int64_t uu_ls::create_hyperlink::h72b30fed8b305b42(int128_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_90 = arg2;
    int64_t var_88 = arg3;
    void* var_108;
    hostname::get::h61ff34d453bc4655(&var_108);
    int128_t var_d8;
    size_t var_c8;
    int64_t var_100;
    
    if (var_108 != -0x8000000000000000)
    {
        size_t var_f8;
        var_c8 = var_f8;
        var_d8 = var_108;
    }
    else
        uu_ls::create_hyperlink::_$u7b$$u7b$closure$u7d$$u7d$::h5c4b22834743e018(&var_d8, var_100);
    void var_80;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_80, *var_d8[8], var_c8);
    std::fs::canonicalize::h205134df7886662b(&var_108, arg4 + 0x18);
    void var_c0;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h2f717c7e2037f670(&var_c0, &var_108);
    int64_t var_b8;
    size_t var_b0;
    void var_a8;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_a8, var_b8, var_b0);
    void* var_a0;
    var_108 = var_a0;
    void* var_98;
    void* var_100_1 = var_98 + var_a0;
    char const* const var_f8_1 = &data_436393[0x28];
    int64_t var_f0 = 6;
    void var_68;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h5a0c4658461ac5be(&var_68, &var_108);
    var_108 = &var_80;
    int64_t (* var_100_2)(int64_t* arg1, int64_t arg2) =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hdd85d91aa0a3dd15;
    void* var_f8_2 = &var_68;
    int64_t (* var_f0_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    int64_t* var_e8 = &var_90;
    int64_t (* var_e0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    char const (** const var_50)[0x0] = &data_6129e8;
    int64_t var_48 = 4;
    int64_t var_30 = 0;
    int64_t* var_40 = &var_108;
    int64_t var_38 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(arg1, &var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_a8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&var_c0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_80);
    return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_d8);
}
