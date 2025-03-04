long long uu_cat::write_fast::hd2141eaf4d9f5934(struct_0 *a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x10058]
    unsigned long v1;  // [sp-0x10048]
    unsigned long long v2;  // [sp-0x10040]
    unsigned long v3;  // [sp-0x10038]
    char v4;  // [bp-0x10030]
    char v5;  // [bp-0x10028]
    char v6;  // [bp-0x10027]
    unsigned long v7;  // [bp-0x10020]
    void* v8;  // [sp-0x2030]
    unsigned long long v10;  // r15
    unsigned long long v11;  // rcx
    char v12;  // al
    unsigned long long v13;  // rdx
    struct_0 *v14;  // rdi
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    struct_0 *v18;  // rcx
    unsigned long long v19;  // rax
    struct_0 *v20;  // rcx

    do
    {
        v8 = 0;
    } while (&v8 != &v4);
    v3 = std::io::stdio::stdout::h077da66234850927();
    v10 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3);
    v0 = v10;
    uu_cat::splice::write_fast_using_splice::hbaaa5718090ebd33(&v4, a1, &v0);
    v11 = *((long long *)&v4);
    v12 = v5;
    if (v11 != 9223372036854775814)
    {
        v13 = *((long long *)&v6);
        v14 = a0;
        v14->field_9 = v7;
        *((unsigned long long *)&(&v14->field_8)[1]) = v13;
        v14->field_0 = v11;
        v14->field_8 = v12;
        v15 = v10;
    }
    else if (!v12)
    {
        a0->field_0 = 9223372036854775814;
        v15 = v10;
    }
    else
    {
        memset(&v4, 0, 0x10000);
        while (true)
        {
            v1 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::hcece2f3bec9614ed(a1, &v4, 0x10000);
            v2 = v16;
            if (v1 || !v16)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v1);
                v19 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0);
                if (v19)
                {
                    v20 = a0;
                    v20->field_0 = 0x8000000000000000;
                    *((unsigned long long *)&v20->field_8) = v19;
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
                v17 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, ::0x4acde0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v16, &v4, 0x10000, &g_5186e0), v16);
                if (!v17)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v1);
                }
                else
                {
                    v18 = a0;
                    v18->field_0 = 0x8000000000000000;
                    *((unsigned long long *)&v18->field_8) = v17;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v1);
                    break;
                }
            }
        }
        v15 = v0;
    }
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v15);
}
