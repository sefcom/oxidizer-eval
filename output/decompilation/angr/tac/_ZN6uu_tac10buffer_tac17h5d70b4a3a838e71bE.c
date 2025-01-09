long long uu_tac::buffer_tac::h5d70b4a3a838e71b(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x108]
    char v1;  // [bp-0x100]
    unsigned long long v2;  // [sp-0xf8]
    unsigned long v3;  // [sp-0xe0], Other Possible Types: unsigned long long
    int v4;  // [bp-0xd8], Other Possible Types: char
    int v5;  // [sp-0xc8]
    int v6;  // [sp-0xb8]
    int v7;  // [sp-0xa8]
    unsigned long long v8;  // [sp-0x98]
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x80]
    char v12;  // [bp-0x70]
    char v13;  // [bp-0x60]
    char v14;  // [bp-0x50]
    char v15;  // [bp-0x40]
    unsigned long long v17;  // 4096
    unsigned long long v18;  // 4096
    unsigned long long v19;  // r13
    void* v20;  // rax
    unsigned long long v21;  // r13
    void* v22;  // rax
    unsigned long long v24;  // rbx
    void* v25;  // rax
    unsigned long long v26;  // r13
    unsigned long v27;  // rdx
    void* v28;  // rax
    unsigned long long v29;  // r14

    v3 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&v0, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3));
    v4 = 1;
    memchr::memmem::FinderBuilder::build_reverse::hb7a1b6dd41e3db97(&v12, &v4, a3, a4);
    *((int128_t *)&v7) = *((int128_t *)&v15);
    *((int128_t *)&v6) = *((int128_t *)&v14);
    *((int128_t *)&v5) = *((int128_t *)&v13);
    *((int128_t *)&v4) = *((int128_t *)&v12);
    v8 = 1;
    v9 = a1;
    v10 = a0;
    v11 = a1;
    if (!a2)
    {
        v18 = a1;
        while (true)
        {
            v19 = v18;
            if (!_$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13d123f2f14d62f(&v4))
                break;
            v24 = v27 + a4;
            v25 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(v24, v19, a0, a1, &g_6c8ad8);
            v26 = v2;
            if (v27 >= *((long long *)&v0) - v26)
            {
                v22 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v25, v27);
                v18 = v24;
            }
            else
            {
                memcpy(*((long long *)&v1) + v26, v25, v27);
                v2 = v27 + v26;
                v18 = v24;
            }
        }
    }
    else
    {
        v17 = a1;
        while (true)
        {
            v19 = v17;
            if (!_$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13d123f2f14d62f(&v4))
                break;
            v20 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(v27, v19, a0, a1, &g_6c8af0);
            v21 = v2;
            if (v27 >= *((long long *)&v0) - v21)
            {
                v22 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v20, v27);
            }
            else
            {
                memcpy(*((long long *)&v1) + v21, v20, v27);
                v2 = v27 + v21;
                v17 = v27;
            }
        }
    }
    core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h8403f4f6f5c7a3f4();
    v28 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v19, a0, a1, &g_6c8ac0);
    v29 = v2;
    if (v27 < *((long long *)&v0) - v29)
    {
        memcpy(*((long long *)&v1) + v29, v28, v27);
        v2 = v27 + v29;
    }
    else
    {
        v22 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v28, v27);
        if (v22)
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
            return v22;
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
    return 0;
}
