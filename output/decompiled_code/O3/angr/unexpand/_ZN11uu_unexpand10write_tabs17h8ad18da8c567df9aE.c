long long uu_unexpand::write_tabs::h8ad18da8c567df9a(struct_2 *a0, struct struct_0 **a1, unsigned long a2, struct struct_0 **a3, unsigned long a4, unsigned long long a5)
{
    struct struct_0 **v0;  // [sp-0x88], Other Possible Types: unsigned long long
    struct struct_0 **v1;  // [sp-0x80], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x68]
    struct struct_1 **v5;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x58]
    void* v7;  // [sp-0x50]
    unsigned long v8;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long v10;  // [bp+0x8]
    char v11;  // [bp+0x10]
    unsigned long long v12;  // r8
    unsigned long long v13;  // rbx
    struct struct_0 **v14;  // rax
    char v15;  // cl
    struct struct_0 **v16;  // r13
    struct struct_0 **v19;  // r15
    struct struct_0 **v20;  // r13
    char *v21;  // rax
    unsigned long long v22;  // rcx
    unsigned long long v23;  // rax
    char *v24;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rbx
    char *v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rsi

    v12 = a4;
    v13 = a4;
    v14 = (char)v10;
    if ((char)v14)
    {
        v15 = a3 | -0x100 | 1;
    }
    else
    {
        v15 = v11;
        if (!v15)
            goto LABEL_4858a1;
    }
    if (!a5 && (char *)a3 + 1 < v13)
    {
LABEL_4858b5:
        if (a2 != 1)
        {
            goto LABEL_4858ec;
        }
        else
        {
            v16 = *(a1);
            if (!v16)
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
            v14 = (char *)v16 - (!(a3 | v16) >> 32 ? (0 CONCAT a3) /m v16 >> 64 : (0 CONCAT (unsigned int)a3) /m (unsigned int)v16 >> 32 & 4294967295) + a3;
            if (v14 <= v13)
            {
                do
                {
                    v19 = v14;
                    v24 = a0->field_10;
                    if (a0->field_0 - v24 <= 1)
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h695b0a70d0577545(a0, "\t: \n ", 1, a0->field_0 - v24, v12, a5);
                        if (v23)
                            goto LABEL_485b07;
                    }
                    else
                    {
                        v24[a0->field_8] = 9;
                        a0->field_10 = &v24[1];
                    }
                } while ((v26 = (!(v19 | v16) >> 32 ? (0 CONCAT (unsigned int)v19) /m (unsigned int)v16 >> 32 & 4294967295 : (unsigned long long)((0 CONCAT v19) /m v16 >> 64)), v14 = v16 - v26 + v19, v14 <= v13));
            }
        }
    }
    else
    {
LABEL_4858a1:
        if (v13 <= a3)
            goto LABEL_48596e;
        if (!(!(v15 & a5)) || !(!(char)v14))
            goto LABEL_4858b5;
        while (true)
        {
LABEL_4858ec:
            v19 = a3;
            v14 = 0;
            do
            {
                if (a2 * 8 == v14)
                {
LABEL_48596e:
                    v27 = v13 - (char *)v19;
                    if (v13 <= v19)
                        return v14;
                    while (true)
                    {
                        v30 = v27;
                        v31 = a0->field_10;
                        v32 = a0->field_0 - v31;
                        if (a0->field_0 - v31 > 1)
                        {
                            v31[a0->field_8] = 32;
                            v14 = v31 + 1;
                            a0->field_10 = v14;
                        }
                        else
                        {
                            v14 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h695b0a70d0577545(a0, " ", 1, v32, v12, a5);
                            if (v14)
                            {
                                v0 = v14;
                                v1 = uucore::util_name::h359eff083fe53467();
                                v2 = v34;
                                v8 = &v1;
                                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0d950737c3cdc14;
                                v3 = &g_4e6c88;
                                v4 = 2;
                                v7 = 0;
                                v5 = &v8;
                                v6 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v35, v34);
                                v1 = &v0;
                                v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                v3 = &g_4e6ca8;
                                v4 = 2;
                                v7 = 0;
                                v5 = &v1;
                                v6 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v35, v34);
                                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                            }
                        }
                        if (v30 == 1)
                            return v14;
                    }
                }
            } while ((v26 = (!(v19 | v16) >> 32 ? (0 CONCAT (unsigned int)v19) /m (unsigned int)v16 >> 32 & 4294967295 : (unsigned long long)((0 CONCAT v19) /m v16 >> 64)), v14 = v16 - v26 + v19, v14 <= v13));
            if (!(v20 <= v13))
                goto LABEL_48596e;
            v21 = a0->field_10;
            v22 = a0->field_0 - v21;
            if (a0->field_0 - v21 > 1)
            {
                v21[a0->field_8] = 9;
                a0->field_10 = &v21[1];
                continue;
            }
            v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h695b0a70d0577545(a0, "\t: \n ", 1, v22, v12, a5);
            if (v23)
            {
LABEL_485b07:
                v0 = v23;
                v1 = uucore::util_name::h359eff083fe53467();
                v2 = v28;
                v8 = &v1;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0d950737c3cdc14;
                v3 = &g_4e6c88;
                v4 = 2;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v29, v28);
                v1 = &v0;
                v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v3 = &g_4e6ca8;
                v4 = 2;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v29, v28);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
        }
    }
}
