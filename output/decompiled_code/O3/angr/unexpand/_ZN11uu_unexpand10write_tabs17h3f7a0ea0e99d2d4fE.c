long long uu_unexpand::write_tabs::h3f7a0ea0e99d2d4f(struct_0 *a0, unsigned long long *a1, unsigned int a2, unsigned int a3, unsigned long a4, char a5)
{
    unsigned long v0;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    void* v7;  // [sp-0x50]
    unsigned long v8;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long v10;  // [bp+0x8]
    char v11;  // [bp+0x10]
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax
    char v14;  // cl
    unsigned long long v15;  // rdx
    unsigned long v16;  // r15
    unsigned long long v17;  // rcx
    char *v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rbx
    char *v24;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rsi

    v12 = a3;
    v13 = (char)v10;
    if ((char)v13)
        v14 = a3 | -0x100 | 1;
    else
        v14 = v11;
    if ((a5 || a3 + 1 >= a4) && (a4 <= a3 || !(v14 & a5) && !(char)v13) || (v13 = uu_unexpand::next_tabstop::hb8f3d586f70f4ac0(a1, a2, a3), v13 != 1))
    {
    }
    else
    {
        while (true)
        {
            v17 = v16;
            v16 = v15 + v17;
            if (v16 > a4)
                break;
            v18 = a0->field_10;
            if (a0->field_0 - v18 > 1)
            {
                v18[a0->field_8] = 9;
                a0->field_10 = &v18[1];
            }
            else
            {
                v19 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h9959613e3a6dd2be(a0, "\t: \n", 1);
                if (v19)
                {
                    v0 = v19;
                    v1 = uucore::util_name::h412db5e565a079f3();
                    v2 = v21;
                    v8 = &v1;
                    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h636358ce49098526;
                    v3 = &g_51ec60;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v8;
                    v6 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v22, v21);
                    v1 = &v0;
                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v3 = &g_51ec80;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v1;
                    v6 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v22, v21);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
            }
            v13 = uu_unexpand::next_tabstop::hb8f3d586f70f4ac0(a1, a2, v16);
            if (v13 != 1)
                break;
        }
    }
    if (a4 <= v12)
        return v13;
    while (true)
    {
        v23 = a4 - v12;
        v24 = a0->field_10;
        if (a0->field_0 - v24 > 1)
        {
            v24[a0->field_8] = 32;
            v13 = v24 + 1;
            a0->field_10 = v13;
        }
        else
        {
            v13 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h9959613e3a6dd2be(a0, " ", 1);
            if (v13)
            {
                v0 = v13;
                v1 = uucore::util_name::h412db5e565a079f3();
                v2 = v26;
                v8 = &v1;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h636358ce49098526;
                v3 = &g_51ec60;
                v4 = 2;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v27, v26);
                v1 = &v0;
                v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v3 = &g_51ec80;
                v4 = 2;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v27, v26);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
        }
        if (v23 == 1)
            return v13;
    }
}
