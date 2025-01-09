long long uu_cat::write_fast::he3f5331bc66ac0a4(struct_0 *a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x10058], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x10048], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x10040]
    unsigned long v3;  // [sp-0x10038], Other Possible Types: unsigned long long
    char v4;  // [bp-0x10030]
    char v5;  // [bp-0x10028]
    char v6;  // [bp-0x10027]
    unsigned long v7;  // [bp-0x10020]
    void* v8;  // [sp-0x2030]
    unsigned long long v10;  // rcx
    char v11;  // al
    unsigned long long v12;  // rdx
    struct_0 *v13;  // rdi
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    struct_0 *v16;  // rcx
    unsigned long long v17;  // rax
    struct_0 *v18;  // rcx

    do
    {
        v8 = 0;
    } while (&v8 != &v4);
    v3 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3);
    uu_cat::splice::write_fast_using_splice::h8d35de54429b343d(&v4, a1, &v0);
    v10 = *((long long *)&v4);
    v11 = v5;
    if (v10 != 9223372036854775814)
    {
        v12 = *((long long *)&v6);
        v13 = a0;
        v13->field_9 = v7;
        *((unsigned long long *)&(&v13->field_8)[1]) = v12;
        v13->field_0 = v10;
        v13->field_8 = v11;
    }
    else if (!v11)
    {
        a0->field_0 = 9223372036854775814;
    }
    else
    {
        memset(&v4, 0, 0x10000);
        while (true)
        {
            v1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a1, &v4, 0x10000);
            v2 = v14;
            if (v1 || !v14)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v1);
                v17 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0);
                if (v17)
                {
                    v18 = a0;
                    v18->field_0 = 0x8000000000000000;
                    *((unsigned long long *)&v18->field_8) = v17;
                    break;
                }
                else
                {
                    a0->field_0 = 9223372036854775814;
                    break;
                }
            }
            else
            {
                v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, ::0x4acde0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v14, &v4, 0x10000, &g_5186e0), v14);
                if (!v15)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v1);
                }
                else
                {
                    v16 = a0;
                    v16->field_0 = 0x8000000000000000;
                    *((unsigned long long *)&v16->field_8) = v15;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v1);
                    break;
                }
            }
        }
    }
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad();
}
