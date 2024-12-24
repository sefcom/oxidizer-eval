int uu_cat::write_fast::h3097adf69f85e719()
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
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx
    char v13;  // al
    unsigned long long v14;  // rdx
    struct_0 *v15;  // rdi
    struct_0 *v16;  // rdi
    unsigned long long v18;  // rax
    unsigned long long v20[2];  // rcx
    unsigned long long v21;  // rax
    unsigned long long v23[2];  // rcx

    do
    {
        v8 = 0;
    } while (&v8 != &v4);
    v3 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3, v10, v11);
    uu_cat::splice::write_fast_using_splice::h4d880bff7cc3a56d(&v4, v10, &v0);
    v12 = *((long long *)&v4);
    v13 = v5;
    if (v12 != 9223372036854775814)
    {
        v14 = *((long long *)&v6);
        v16 = v15;
        v16->field_9 = v7;
        *((unsigned long long *)&(&v16->field_8)[1]) = v14;
        v16->field_0 = v12;
        v16->field_8 = v13;
    }
    else if (!v13)
    {
        v15->field_0 = 9223372036854775814;
    }
    else
    {
        memset(&v4, 0, 0x10000);
        while (true)
        {
            v1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(v10, &v4, 0x10000);
            v2 = v11;
            if (v1 || !v11)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hb561c660fdad22b7(&v1);
                v21 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0);
                if (v21)
                {
                    v23 = v15;
                    v23[0] = 0x8000000000000000;
                    v23[1] = v21;
                    break;
                }
                else
                {
                    v15->field_0 = 9223372036854775814;
                    break;
                }
            }
            else
            {
                v18 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, ::0x4ad250::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h63b1aa296660cfa4(v11, &v4, 0x10000, &g_5190f8), v11);
                if (!v18)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hb561c660fdad22b7(&v1);
                }
                else
                {
                    v20 = v15;
                    v20[0] = 0x8000000000000000;
                    v20[1] = v18;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hb561c660fdad22b7(&v1);
                    break;
                }
            }
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hbdcae57c3413de30(v0);
    return;
}
