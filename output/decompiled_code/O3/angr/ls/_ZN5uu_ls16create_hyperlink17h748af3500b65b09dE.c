long long uu_ls::create_hyperlink::h748af3500b65b09d(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long long a3[6])
{
    unsigned long long v0;  // [sp-0x100]
    char v1;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v2;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xe8]
    unsigned long long v4;  // [sp-0xe0]
    unsigned long long v5;  // [sp-0xd8]
    unsigned long long v6;  // [sp-0xd0]
    unsigned long long v7;  // [sp-0xc8]
    unsigned long v8;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xa0]
    char v11;  // [bp-0x98]
    char v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    char v15;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long v16;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x60]
    unsigned long long v18;  // [sp-0x58]
    void* v19;  // [sp-0x50]
    unsigned long v20;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x38]
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rbx
    void* v25;  // r15
    unsigned long long v26;  // r12
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rax

    v20 = a1;
    v21 = a2;
    hostname::get::he11c0450a33727b4(&v15);
    v23 = v15;
    if (v23 != 0x8000000000000000)
    {
        v8 = v8;
    }
    else
    {
        v8 = v16;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v1, 1, 0);
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15718868642555390090(&v8);
        v8 = v8;
        v8 = v2;
        v24 = v1;
    }
    v8 = v8;
    v0 = v24;
    v7 = v8;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v10, v7, v17);
    std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v1, a3[4], a3[5]);
    v25 = v1;
    if (v25 == 0x8000000000000000)
    {
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15718868642555390090(&v2);
        v26 = 1;
        v25 = 0;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, v26, 0);
    v1 = *((long long *)&v13);
    v2 = *((long long *)&v14) + v1;
    v3 = "_-.:~/";
    v4 = 6;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::hff72a3f1779f594d(&v8, &v1);
    v1 = &v10;
    v2 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6c0d2795c5bab2e4;
    v3 = &v8;
    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v5 = &v20;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h237db28e9458866a;
    v15 = &g_5acb78;
    v16 = 4;
    v19 = 0;
    v17 = &v1;
    v18 = 3;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v15);
    if (v8)
        __rust_dealloc(*((long long *)&v9));
    if (*((long long *)&v12) << 1)
    {
        __rust_dealloc(v1);
        if (v25)
        {
LABEL_4d8ac6:
            __rust_dealloc(v26);
        }
    }
    else if (!(!v25))
    {
        goto LABEL_4d8ac6;
    }
    v28 = *((long long *)&v10);
    if (v28 != 0x8000000000000000 && v28)
        __rust_dealloc(*((long long *)&v11));
    if (v0)
        __rust_dealloc(v7);
    return v29;
}
