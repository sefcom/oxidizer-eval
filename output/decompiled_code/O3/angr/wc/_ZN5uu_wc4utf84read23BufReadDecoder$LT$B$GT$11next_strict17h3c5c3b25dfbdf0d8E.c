long long uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h3c5c3b25dfbdf0d8(unsigned long long a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x37]
    unsigned long long v5;  // r15
    unsigned long long v7;  // rbp
    unsigned long long v8;  // r13
    char v9;  // dl
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    char v13;  // bpl
    unsigned long long v15;  // r13
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v5 = &a1->field_18;
    while (true)
    {
        if (a1->field_10)
        {
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::consume::h5ee28ccd51983a15(a1, a1->field_10);
            a1->field_10 = 0;
        }
        _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(&v0, a1);
        v7 = *((long long *)&v0);
        if (!v7)
        {
            v17 = *((long long *)&v1);
            a0 = a0;
            a0[0] = 1;
            a0[1] = 0;
            a0[2] = v17;
            return a0;
        }
        v8 = *((long long *)&v1);
        if (!a1->field_1c)
        {
            if (!v8)
            {
                a0 = a0;
                a0[0] = 2;
                return a0;
            }
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v0, v7, v8);
            if (!*((long long *)&v0))
            {
                v13 = 0;
                goto LABEL_4c3222;
            }
            v10 = *((long long *)&v1);
            if (v10)
                goto LABEL_4c321b;
            if (!v2)
            {
                a1->field_10 = v8;
                v11 = uu_wc::utf8::Incomplete::new::hd002941e7281570d(v7, v8);
                a1->field_18 = v11;
                a1->field_1c = v11 >> 32;
            }
            else
            {
                v15 = v3;
LABEL_4c321b:
                v13 = v7 | -0x100 | !v10;
LABEL_4c3222:
                a1->field_10 = v8;
                _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(&v0, a1);
                if (!*((long long *)&v0))
                {
                    vvar_245{reg 16} = *((long long *)&v1);
                    vvar_246{reg 24} = a0;
                    a0[0] = 1;
                    a0[1] = 0;
                    a0[2] = v17;
                    return a0;
                }
                v12 = ::0x4c1790::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hec1ace9852cd0dd7(v8, *((long long *)&v0), *((long long *)&v1), &g_532538);
                goto LABEL_4c3252;
            }
        }
        else
        {
            if (!v8)
            {
                v12 = uu_wc::utf8::Incomplete::take_buffer::ha5a9047e8136538e(v5);
            }
            else
            {
                a1->field_10 = uu_wc::utf8::Incomplete::try_complete_offsets::h88430e5d3aacb574(v5, v7, v8);
                if (v9 == 2)
                    continue;
                v12 = uu_wc::utf8::Incomplete::take_buffer::ha5a9047e8136538e(v5);
LABEL_4c3252:
                a0 = a0;
                if (!(v13 & 1))
                {
                    a0[0] = 0;
                    break;
                }
            }
            a0[0] = 1;
            break;
        }
    }
    a0[1] = v12;
    a0[2] = v18;
    return a0;
}
