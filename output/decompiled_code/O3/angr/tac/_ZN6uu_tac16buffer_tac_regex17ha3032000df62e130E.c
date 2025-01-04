long long uu_tac::buffer_tac_regex::ha3032000df62e130(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x88]
    unsigned long long v2;  // [sp-0x80]
    unsigned long v3;  // [sp-0x58], Other Possible Types: unsigned long long
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // rsi
    unsigned long v9;  // rdx
    void* v10;  // r13
    unsigned long long v11;  // 4096
    unsigned long long v12;  // 4096
    unsigned long long v13;  // 4096
    unsigned long long v14;  // 4096
    unsigned long long v15;  // 4096
    unsigned long long v16;  // 4096
    unsigned long long v20;  // rbp
    unsigned long long v22;  // r13
    void* v23;  // rax
    unsigned long long v24;  // r15
    void* v25;  // rax
    unsigned long long v30;  // rbx
    void* v34;  // rax
    unsigned long long v35;  // r15
    void* v37;  // rax
    unsigned long long v38;  // r14

    v3 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&v0, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3, v8, v9));
    if (!a1)
    {
        v10 = 0;
    }
    else if (a4)
    {
        do
        {
            v20 = ::0x59d7b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v11);
            regex::regex::bytes::Regex::find_at::h97f889983824a43e(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v12, a0, a1, &g_6c8a78), v9, v20);
            if (*((long long *)&v4))
            {
                v23 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(v20, v13, a0, a1, &g_6c8aa8);
                v24 = v2;
                if (v9 < *((long long *)&v0) - v24)
                {
                    memcpy(*((long long *)&v1) + v24, v23, v9);
                    v2 = v9 + v24;
                }
                else
                {
                    v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v23, v9);
                    if (v25)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
                        return v25;
                    }
                }
            }
        } while ((v10 = v22, v20));
    }
    else
    {
        do
        {
            v30 = ::0x59d7b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v16);
            regex::regex::bytes::Regex::find_at::h97f889983824a43e(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v14, a0, a1, &g_6c8a78), v9, v30);
            if (*((long long *)&v4))
            {
                v34 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(*((long long *)&v6) - *((long long *)&v5) + v30, v15, a0, a1, &g_6c8a90);
                v35 = v2;
                if (v9 < *((long long *)&v0) - v35)
                {
                    memcpy(*((long long *)&v1) + v35, v34, v9);
                    v2 = v9 + v35;
                }
                else
                {
                    v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v34, v9);
                    if (v25)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
                        return v25;
                    }
                }
            }
        } while (v30);
    }
    v37 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v10, a0, a1, &g_6c8a60);
    v38 = v2;
    if (v9 < *((long long *)&v0) - v38)
    {
        memcpy(*((long long *)&v1) + v38, v37, v9);
        v2 = v9 + v38;
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
        return 0;
    }
    v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v37, v9);
    if (v25)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
        return v25;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
    return 0;
}
