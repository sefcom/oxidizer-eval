long long uu_unexpand::write_tabs::h8e9e933eb88f89cf(struct_2 *a0, unsigned long long *a1, unsigned int a2, unsigned long long a3, unsigned long a4, char a5)
{
    unsigned long v0;  // [sp-0x88], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x80]
    unsigned long long v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x68]
    struct struct_0 **v5;  // [sp-0x60], Other Possible Types: struct struct_1 **
    unsigned long long v6;  // [sp-0x58]
    void* v7;  // [sp-0x50]
    struct struct_0 **v8;  // [sp-0x40]
    unsigned long long v9;  // [sp-0x38]
    unsigned long v10;  // [bp+0x8]
    char v11;  // [bp+0x10]
    unsigned long long v12;  // rax
    char v13;  // cl
    unsigned long v14;  // rbp
    unsigned long v15;  // rdx
    unsigned long long v16;  // r13
    char *v17;  // rax
    void* v18;  // rax
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rbx
    char *v21;  // rax

    v12 = (char)v10;
    if ((char)v12)
        v13 = a3 & 0xffffffffffffff00 | 1;
    else
        v13 = v11;
    if (!a5 && a3 + 1 < a4 || a4 > a3 && ((v13 & a5) || (char)v12))
    {
        while (true)
        {
            v14 = a3;
            v12 = uu_unexpand::next_tabstop::h948056bd8ee01f21(a1, a2, v14);
            if (!(v12 == 1) || !((v16 = v15 + v14, v16 <= a4)))
                break;
            v17 = a0->field_10;
            if (a0->field_0 - v17 > 1)
            {
                v17[a0->field_8] = 9;
                a0->field_10 = &v17[1];
                v18 = 0;
            }
            else
            {
                v18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(a0, "\t", 1);
            }
            a3 = v16;
            if (v0)
            {
                v0 = v18;
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v15;
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
    v19 = a4 - v14;
    if (a4 <= v14)
        return v12;
    while (true)
    {
        v20 = v19;
        v21 = a0->field_10;
        if (a0->field_0 - v21 >= 2)
        {
            v21[a0->field_8] = 32;
            v12 = v21 + 1;
            a0->field_10 = v12;
        }
        else
        {
            v12 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(a0, " ", 1);
            if (v12)
            {
                v0 = v12;
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v15;
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
        v19 = v20 - 1;
        if (v20 == 1)
            return v12;
    }
}
