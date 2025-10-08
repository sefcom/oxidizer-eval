
  int64_t uu_ls::create_hyperlink::h0a10a692235dc40b(int128_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    char const (** const var_118)[0x0];
    hostname::get::ha3f027e3ef97b427(&var_118);
    int128_t var_e8;
    uint64_t var_d8;
    int64_t var_110;
    
    if (!(0 + -(var_118)))
    {
        uint64_t var_108;
        var_d8 = var_108;
        var_e8 = var_118;
    }
    else
        uu_ls::create_hyperlink::_$u7b$$u7b$closure$u7d$$u7d$::h3adf8c02b370a467(&var_e8, var_110);
    int64_t rbx = *var_e8[8];
    void var_78;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_78, rbx, var_d8);
    std::fs::canonicalize::hef8b07af9bd14c71(&var_118, arg4 + 0x18);
    void var_c8;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h0481ca2b4295af1c(&var_c8, &var_118);
    int64_t var_c0;
    uint64_t var_b8;
    void var_b0;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_b0, var_c0, var_b8);
    char const (** var_a8)[0x0];
    var_118 = var_a8;
    void* var_a0;
    void* var_110_1 = var_a0 + var_a8;
    char const* const var_108_1 = &data_4d4206[0x15];
    int64_t var_100 = 6;
    void var_60;
    core::iter::traits::iterator::Iterator::collect::h063b2a55e24d0217(&var_60, &var_118);
    void* var_98 = &var_78;
    int64_t (* var_90)(int64_t* arg1, int64_t* arg2) =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h836131a62ea12574;
    void* var_88 = &var_60;
    int64_t (* var_80)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_118 = &data_686d70;
    int64_t var_110_2 = 3;
    int64_t var_f8 = 0;
    void** var_108_2 = &var_98;
    int64_t var_100_1 = 2;
    int128_t var_48;
    core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(&var_48, &var_118);
    var_118 = var_48;
    std::ffi::os_str::OsString::push::had4c4c06171a790f(&var_118, arg2, arg3);
    std::ffi::os_str::OsString::push::h8d27602952d812af(&var_118, &data_4d422e, 6);
    int64_t var_38;
    arg1[1] = var_38;
    *arg1 = var_118;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_b0);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2dce88b0c646837f(&var_c8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_78);
    return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_e8, 
        rbx);
}
