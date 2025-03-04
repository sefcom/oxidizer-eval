long long uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    char v1;  // [bp-0x110]
    int v2;  // [sp-0x108]
    int v3;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    int v4;  // [bp-0xf0]
    unsigned long v5;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xe0]
    unsigned long long v7;  // [sp-0xd8]
    unsigned long v8;  // [sp-0xd0]
    unsigned long long v9;  // [sp-0xc8]
    int v10;  // [sp-0xc0]
    int v11;  // [sp-0xb0]
    unsigned long long v12;  // [sp-0xa0]
    char v13;  // [bp-0x98]
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    char v17;  // [bp-0x60]
    char v18;  // [bp-0x58]
    void* v19;  // [sp-0x40]
    unsigned long long v20;  // [sp-0x30]
    int v24;  // xmm0

    signal_hook::iterator::SignalsInfo$LT$E$GT$::new::hff46f358f252dadd(&v0, 10);
    if (!v8)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v9;
        a0->field_0 = 0;
        ::0x4ef240::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$$RP$$GT$$u2b$Output$u20$$u3d$$u20$$LP$$RP$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hbd64289d0f49cc7c(a1, a2);
        return a0;
    }
    v12 = v5;
    *((int128_t *)&v11) = *((int128_t *)&v3);
    v10 = v2;
    v8 = *((long long *)&v0);
    v9 = *((long long *)&v1);
    _$LT$signal_hook..iterator..backend..Handle$u20$as$u20$core..clone..Clone$GT$::clone::h4933321813e84478(&v13, &v8);
    v5 = v12;
    v24 = *((int128_t *)&v8);
    v3 = v11;
    v2 = v10;
    v0 = v24;
    v6 = a1;
    v7 = a2;
    v20 = 0x8000000000000000;
    v19 = 0;
    std::thread::Builder::spawn_unchecked::hf6e5fc31be6cfac7(&v18, &v19, &v0);
    ::0x4ef540::core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&v16, &v18);
    v3 = *((long long *)&v15);
    *((int128_t *)&v2) = *((int128_t *)&v14);
    *((int128_t *)&v0) = *((int128_t *)&v13);
    v6 = *((long long *)&v17);
    *((int128_t *)&v4) = *((int128_t *)&v16);
    *((void*)&a0->field_10) = v2;
    *((void*)&a0->field_0) = v0;
    a0->field_30 = v5;
    a0->field_38 = v6;
    a0->field_20 = v3;
    a0->field_28 = (long long)v4;
    return a0;
}
