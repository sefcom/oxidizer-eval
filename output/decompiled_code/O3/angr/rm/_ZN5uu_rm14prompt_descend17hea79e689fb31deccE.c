long long uu_rm::prompt_descend::hea79e689fb31decc(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x90]
    int v3;  // [sp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x80]
    unsigned long v5;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x68]
    unsigned long v7;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x50]
    unsigned long long v10;  // [sp-0x48]
    char v11;  // [sp-0x40]
    unsigned long v12;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdi

    v8 = uucore::util_name::h412db5e565a079f3();
    v9 = v14;
    v5 = &v8;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
    v0 = &g_527d88;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v15, v14);
    v8 = 1;
    v9 = a0;
    v10 = a1;
    v11 = 1;
    v5 = &v8;
    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v0 = &g_528010;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v15, v14);
    v0 = &g_527f20;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v15, v14);
    v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    v16 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12, v15, v14);
    if (v16)
    {
        v7 = v16;
        v8 = uucore::util_name::h412db5e565a079f3();
        v9 = v14;
        v5 = &v8;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
        v0 = &g_527d88;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v15, v14);
        v8 = &v7;
        v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v0 = &g_527f30;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v15, v14);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    return uucore::read_yes::h34a9f501e29598a6(v17, v15, v14);
}
