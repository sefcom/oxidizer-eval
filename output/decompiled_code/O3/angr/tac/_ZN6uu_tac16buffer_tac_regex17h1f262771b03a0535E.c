long long uu_tac::buffer_tac_regex::h1f262771b03a0535(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
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
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1d23ec31674dd4f4(&v0, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3, v8, v9));
    if (!a1)
    {
        v10 = 0;
        goto LABEL_59f608;
    }
    if (a4)
    {
        do
        {
            v20 = ::0x59d320::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v11);
            regex::regex::bytes::Regex::find_at::h526a8515d7aed21d(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1bf67b3fdc7c6de1(0, v12, a0, a1, &g_6c9068), v9, v20);
            if (*((long long *)&v4))
            {
                v23 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1bf67b3fdc7c6de1(v20, v13, a0, a1, &g_6c9098);
                v24 = v2;
                if (v9 >= *((long long *)&v0) - v24)
                {
                    v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hdc8c84d0a6d628f1(&v0, v23, v9);
                    if (v25)
                        goto LABEL_59f76c;
                }
                else
                {
                    memcpy(*((long long *)&v1) + v24, v23, v9);
                    v2 = v9 + v24;
                }
            }
        } while ((v10 = v22, v20));
    }
    else
    {
        do
        {
            v30 = ::0x59d320::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v16);
            regex::regex::bytes::Regex::find_at::h526a8515d7aed21d(&v4, a2, a3, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1bf67b3fdc7c6de1(0, v14, a0, a1, &g_6c9068), v9, v30);
            if (*((long long *)&v4))
            {
                v34 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1bf67b3fdc7c6de1(*((long long *)&v6) - *((long long *)&v5) + v30, v15, a0, a1, &g_6c9080);
                v35 = v2;
                if (v9 >= *((long long *)&v0) - v35)
                {
                    v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hdc8c84d0a6d628f1(&v0, v34, v9);
                    if (!v25)
                        goto LABEL_0x59f693;
                    else
                        goto LABEL_59f76c;
                }
                else
                {
                    memcpy(*((long long *)&v1) + v35, v34, v9);
                    v2 = v9 + v35;
                }
            }
        } while (v30);
        goto LABEL_59f76c;
    }
LABEL_59f608:
    v37 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1bf67b3fdc7c6de1(0, v10, a0, a1, &g_6c9050);
    v38 = v2;
    if (v9 < *((long long *)&v0) - v38)
    {
        memcpy(*((long long *)&v1) + v38, v37, v9);
        v2 = v9 + v38;
        goto LABEL_0x59f66a;
    }
    else
    {
        v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hdc8c84d0a6d628f1(&v0, v37, v9);
        if (!v25)
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h01729c0187ea9031(&v0);
            return 0;
        }
    }
LABEL_59f76c:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h01729c0187ea9031(&v0);
    return v25;
}
