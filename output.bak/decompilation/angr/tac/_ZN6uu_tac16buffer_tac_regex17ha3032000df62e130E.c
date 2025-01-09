long long uu_tac::buffer_tac_regex::ha3032000df62e130(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x88]
    unsigned long long v2;  // [sp-0x80]
    unsigned long v3;  // [sp-0x58], Other Possible Types: unsigned long long
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    void* v8;  // r13
    unsigned long long v9;  // 4096
    unsigned long long v10;  // 4096
    unsigned long long v11;  // 4096
    unsigned long long v12;  // 4096
    unsigned long long v13;  // 4096
    unsigned long long v14;  // 4096
    unsigned long long v18;  // rbp
    unsigned long v19;  // rdx
    unsigned long long v21;  // r13
    void* v22;  // rax
    unsigned long long v23;  // r15
    void* v24;  // rax
    unsigned long long v29;  // rbx
    void* v33;  // rax
    unsigned long long v34;  // r15
    void* v36;  // rax
    unsigned long long v37;  // r14

    v3 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&v0, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3));
    if (!a1)
    {
        v8 = 0;
    }
    else if (a4)
    {
        do
        {
            v18 = ::0x59d7b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v9);
            regex::regex::bytes::Regex::find_at::h97f889983824a43e(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v10, a0, a1, &g_6c8a78), v19, v18);
            if (*((long long *)&v4))
            {
                v22 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(v18, v11, a0, a1, &g_6c8aa8);
                v23 = v2;
                if (v19 < *((long long *)&v0) - v23)
                {
                    memcpy(*((long long *)&v1) + v23, v22, v19);
                    v2 = v19 + v23;
                }
                else
                {
                    v24 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v22, v19);
                    if (v24)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
                        return v24;
                    }
                }
            }
        } while ((v8 = v21, v18));
    }
    else
    {
        do
        {
            v29 = ::0x59d7b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v14);
            regex::regex::bytes::Regex::find_at::h97f889983824a43e(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v12, a0, a1, &g_6c8a78), v19, v29);
            if (*((long long *)&v4))
            {
                v33 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(*((long long *)&v6) - *((long long *)&v5) + v29, v13, a0, a1, &g_6c8a90);
                v34 = v2;
                if (v19 < *((long long *)&v0) - v34)
                {
                    memcpy(*((long long *)&v1) + v34, v33, v19);
                    v2 = v19 + v34;
                }
                else
                {
                    v24 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v33, v19);
                    if (v24)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
                        return v24;
                    }
                }
            }
        } while (v29);
    }
    v36 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, v8, a0, a1, &g_6c8a60);
    v37 = v2;
    if (v19 < *((long long *)&v0) - v37)
    {
        memcpy(*((long long *)&v1) + v37, v36, v19);
        v2 = v19 + v37;
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
        return 0;
    }
    v24 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&v0, v36, v19);
    if (v24)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
        return v24;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&v0);
    return 0;
}
