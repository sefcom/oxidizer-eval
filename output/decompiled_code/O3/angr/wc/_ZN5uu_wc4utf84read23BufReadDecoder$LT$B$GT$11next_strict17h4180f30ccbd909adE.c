long long uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(unsigned long long a0[3], struct_1 *a1)
{
    unsigned int v0;  // [sp-0x4c]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x37]
    struct_0 *v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // rsi
    void* v9;  // rbp
    char v10;  // dl
    unsigned long long v11;  // rax
    char v12;  // bpl
    unsigned long long v14;  // r14
    unsigned long long v15;  // rcx

    v6 = &a1->padding_18;
    v7 = a1->field_10;
    while (true)
    {
        if (v7)
        {
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::consume::h5ee28ccd51983a15(a1, v7);
            a1->field_10 = 0;
        }
        _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(&v1, a1);
        v8 = *((long long *)&v1);
        if (!v8)
        {
            v15 = *((long long *)&v2);
            a0 = a0;
            a0[0] = 1;
            a0[1] = 0;
            a0[2] = v15;
            return a0;
        }
        v7 = *((long long *)&v2);
        v7 = a1->field_1c;
        if (!v7)
        {
            if (!v7)
            {
                a0[0] = 2;
                return a0;
            }
            v9 = v8;
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v1, v8, v7);
            if (!*((long long *)&v1))
            {
                v12 = 0;
                goto LABEL_49007e;
            }
            v11 = *((long long *)&v2);
            if (v11)
                goto LABEL_490077;
            if (v3)
            {
                v14 = v4;
LABEL_490077:
                v12 = v9 | -0x100 | !v11;
LABEL_49007e:
                a1->field_10 = v7;
                _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(&v1, a1);
                v6 = *((long long *)&v1);
                if (!v6)
                {
                    vvar_278{reg 24} = *((long long *)&v2);
                    vvar_279{reg 16} = a0;
                    a0[0] = 1;
                    a0[1] = 0;
                    a0[2] = v15;
                    return a0;
                }
                else if (v7 > *((long long *)&v2))
                {
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                }
                goto LABEL_490057;
            }
            a1->field_10 = v7;
            v0 = 0;
            if (v7 >= 5)
            {
                goto LABEL_49012b;
            }
            else
            {
                memcpy(&v0, v9, v7);
                v6->field_4 = v7;
                v6->field_0 = v0;
            }
        }
        else
        {
            if (!v7)
            {
                a1->field_1c = 0;
                if ((v7 & 255) >= 5)
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            }
            else
            {
                v7 = uu_wc::utf8::Incomplete::try_complete_offsets::h85069ced82c9bb90(v6, v8, v7);
                a1->field_10 = v7;
                if (v10 == 2)
                    continue;
                v7 = a1->field_1c;
                a1->field_1c = 0;
                if (v7 >= 5)
                {
LABEL_49012b:
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                }
LABEL_490057:
                a0 = a0;
                if (!(v12 & 1))
                {
                    a0[0] = 0;
                    break;
                }
            }
            a0[0] = 1;
            break;
        }
    }
    a0[1] = v6;
    a0[2] = v7;
    return a0;
}
