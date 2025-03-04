long long uu_tac::buffer_tac_regex::ha3032000df62e130(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x90]
    char v1;  // [sp-0x88]
    unsigned long long v2;  // [sp-0x80]
    unsigned long v3;  // [sp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    void* v8;  // r13
    unsigned long long v9;  // r15
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rbp
    unsigned long long v12;  // r15
    unsigned long long v13;  // rbx
    void* v14;  // rax
    unsigned long long v15;  // r15
    void* v16;  // r14
    unsigned long long v17;  // rdx
    void* v18;  // rax
    unsigned long long v19;  // r15
    void* v20;  // rax
    unsigned long long v21;  // r14

    v3 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&v0, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3));
    if (!a1)
    {
        v8 = 0;
    }
    else if (a4)
    {
        v9 = a1;
        v8 = a1;
        v10 = a1;
        do
        {
            v10 = ::0x59d7b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v10);
            regex::regex::bytes::Regex::find_at::h97f889983824a43e(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v9, a0, a1, &g_6c8a78), v17, v10);
            if (*((long long *)&v4))
            {
                v14 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(v10, v8, a0, a1, &g_6c8aa8);
                v15 = v2;
                if (v17 < *((long long *)&v0) - v15)
                {
                    memcpy(*((long long *)&v1) + v15, v14, a2);
                    v2 = v17 + v15;
                    v8 = v10;
                    v9 = v10;
                }
                else
                {
                    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v14, a2);
                    v8 = v10;
                    v9 = v10;
                    if (v16)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
                        return v16;
                    }
                }
            }
        } while (v10);
    }
    else
    {
        v11 = a1;
        v12 = a1;
        v13 = a1;
        do
        {
            v13 = ::0x59d7b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v13);
            regex::regex::bytes::Regex::find_at::h97f889983824a43e(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v11, a0, a1, &g_6c8a78), v17, v13);
            if (!*((long long *)&v4))
            {
                v8 = v12;
            }
            else
            {
                v8 = *((long long *)&v6) - *((long long *)&v5) + v13;
                v18 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(v8, v12, a0, a1, &g_6c8a90);
                v19 = v2;
                if (v17 < *((long long *)&v0) - v19)
                {
                    memcpy(*((long long *)&v1) + v19, v18, a2);
                    v2 = v17 + v19;
                    v11 = v13;
                }
                else
                {
                    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v18, a2);
                    v11 = v13;
                    if (v16)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
                        return v16;
                    }
                }
            }
        } while ((v12 = v8, v13));
    }
    v20 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v8, a0, a1, &g_6c8a60);
    v21 = v2;
    if (v17 < *((long long *)&v0) - v21)
    {
        memcpy(*((long long *)&v1) + v21, v20, a2);
        v2 = v17 + v21;
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
        return 0;
    }
    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v20, a2);
    if (v16)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
        return v16;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
    return 0;
}
