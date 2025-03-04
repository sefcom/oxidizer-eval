long long uu_env::parse_signal_value::hd39e24cc594f23d4(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [sp-0xb8], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0xb0]
    struct struct_0 **v2;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x98]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x78]
    char *v8;  // [sp-0x70]
    unsigned long long v9;  // [sp-0x68]
    void* v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    unsigned long long v12;  // [sp-0x50]
    char v13;  // [sp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long v19;  // rdx

    alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::h63d26fcff35cb62e(&v5, a1, a2);
    v17 = uucore::features::signals::signal_by_name_or_value::hc8db721c3f0fdbdd(*((long long *)&v6), *((long long *)&v7));
    v10 = 0;
    v11 = a1;
    v12 = a2;
    v13 = 1;
    v8 = &v10;
    v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v0 = &g_5488b0;
    v1 = 2;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    ::0x4cb1b0::core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&v14, &v0);
    v3 = 125;
    *((int128_t *)&v0) = *((int128_t *)&v14);
    v2 = *((long long *)&v15);
    v18 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&v0);
    if (!v17 || !v19)
    {
        a0[0] = v18;
        a0[1] = &g_548908;
    }
    else
    {
        a0[1] = v19;
        a0[0] = 0;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h327fc43f13d631eb(v18);
    }
    return ::0x4ca240::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&v5);
}
