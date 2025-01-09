long long uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h89bdfec0735647a2(unsigned long long a0[3], struct_0 *a1)
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
    unsigned long long v14;  // rax
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v5 = &a1->field_38;
    while (true)
    {
        if (a1->field_30)
        {
            _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::consume::hd0093dd6f47d0a06(a1, a1->field_30);
            a1->field_30 = 0;
        }
        _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::hc0fd5a0d31ccb5ff(&v0, a1);
        v7 = *((long long *)&v0);
        if (!v7)
        {
            v17 = *((long long *)&v1);
            a0[0] = 1;
            a0[1] = 0;
            a0[2] = v17;
            return a0;
        }
        v8 = *((long long *)&v1);
        if (!a1->field_3c)
        {
            if (!v8)
            {
                a0[0] = 2;
                return a0;
            }
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v0, v7, v8);
            if (!*((long long *)&v0))
            {
                v13 = 0;
                goto LABEL_4c2b2e;
            }
            v10 = *((long long *)&v1);
            if (v10)
                goto LABEL_4c2b27;
            if (!(v2 & 1))
            {
                a1->field_30 = v8;
                v11 = uu_wc::utf8::Incomplete::new::hcf6109872b689ce7(v7, v8);
                a1->field_38 = v11;
                a1->field_3c = v11 >> 32;
            }
            else
            {
                v14 = v3;
LABEL_4c2b27:
                v13 = v7 & 0xffffffffffffff00 | !v10;
LABEL_4c2b2e:
                a1->field_30 = v8;
                _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::hc0fd5a0d31ccb5ff(&v0, a1);
                v16 = *((long long *)&v0);
                if (!*((long long *)&v0))
                {
                    vvar_235{reg 16} = *((long long *)&v1);
                    a0[0] = 1;
                    a0[1] = 0;
                    a0[2] = v17;
                    return a0;
                }
                v12 = ::0x4c1830::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(v8, v16, *((long long *)&v1));
                if (!(v13 & 1))
                    goto LABEL_4c2b59;
LABEL_4c2b06:
                a0[0] = 1;
                break;
            }
        }
        else if (!v8)
        {
            v12 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(v5);
            goto LABEL_4c2b06;
        }
        else
        {
            a1->field_30 = uu_wc::utf8::Incomplete::try_complete_offsets::h9c1fcf79f71d155f(v5, v7, v8);
            if (v9 == 2)
                continue;
            v12 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(v5);
            if (!(v9 & 1))
            {
LABEL_4c2b59:
                a0[0] = 0;
                break;
            }
        }
    }
    a0[1] = v12;
    a0[2] = v18;
    return a0;
}
