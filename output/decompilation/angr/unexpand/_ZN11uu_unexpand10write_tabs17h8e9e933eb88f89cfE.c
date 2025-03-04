long long uu_unexpand::write_tabs::h8e9e933eb88f89cf(struct_2 *a0, unsigned long long *a1, unsigned int a2, unsigned long a3, unsigned long a4, char a5, char a6, char a7)
{
    unsigned long v0;  // [sp-0x88]
    char *v1;  // [sp-0x80]
    unsigned long long v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x70]
    unsigned long long v4;  // [sp-0x68]
    struct struct_0 **v5;  // [sp-0x60], Other Possible Types: struct struct_1 **
    unsigned long long v6;  // [sp-0x58]
    void* v7;  // [sp-0x50]
    struct struct_0 **v8;  // [sp-0x40]
    unsigned long long v9;  // [sp-0x38]
    unsigned long v10;  // rbp
    unsigned long long v11;  // rax
    char v12;  // cl
    unsigned long v13;  // rdx
    unsigned long long v14;  // r13
    char *v15;  // rax
    void* v16;  // rax
    unsigned long long v17;  // rbx
    unsigned long long v18;  // rbx
    char *v19;  // rax

    v10 = a3;
    v11 = a6;
    if ((char)v11)
    {
        v12 = a3 & 0xffffffffffffff00 | 1;
    }
    else
    {
        v12 = a7;
        if (a7 && !a5 && a3 + 1 < a4 || a4 > a3 && ((v12 & a5) || (char)v11))
        {
            while (true)
            {
                v11 = uu_unexpand::next_tabstop::h948056bd8ee01f21(a1, a2, v10);
                if (!(v11 == 1) || !((v14 = v13 + v10, v14 <= a4)))
                    break;
                v15 = a0->field_10;
                if (a0->field_0 - v15 > 1)
                {
                    v15[a0->field_8] = 9;
                    a0->field_10 = &v15[1];
                    v16 = 0;
                }
                else
                {
                    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(a0, "\t", 1);
                }
                v10 = v14;
                if (v16)
                {
                    v0 = v16;
                    v1 = uucore::util_name::h60d842bf27b05e82();
                    v2 = v13;
                    v8 = &v1;
                    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                    v3 = &g_51d100;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v8;
                    v6 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
                    v1 = &v0;
                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v3 = &g_51d120;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v1;
                    v6 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
            }
        }
    }
    v17 = a4 - v10;
    if (a4 <= v10)
        return v11;
    while (true)
    {
        v18 = v17;
        v19 = a0->field_10;
        if (a0->field_0 - v19 >= 2)
        {
            v19[a0->field_8] = 32;
            v11 = v19 + 1;
            a0->field_10 = v11;
        }
        else
        {
            v11 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(a0, " ", 1);
            if (v11)
            {
                v0 = v11;
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v13;
                v8 = &v1;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                v3 = &g_51d100;
                v4 = 2;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
                v1 = &v0;
                v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v3 = &g_51d120;
                v4 = 2;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
        }
        v17 = v18 - 1;
        if (v18 == 1)
            return v11;
    }
}
