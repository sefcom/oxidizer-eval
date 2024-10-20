long long uu_join::State::combine::h4fdca68ed2444ec3(struct_0 *a0, struct_4 *a1, struct_0 *a2, struct_2 *a3)
{
    char v0;  // [sp-0xe9]
    void* v1;  // [sp-0xe8]
    unsigned long long v2;  // [sp-0xe0]
    unsigned long v3;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xc8], Other Possible Types: unsigned int
    char v5;  // [bp-0xc0], Other Possible Types: unsigned int
    unsigned long long v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    unsigned long long v8;  // [sp-0xa8]
    unsigned long long v9;  // [sp-0xa0]
    struct_1 *v10;  // [sp-0x98]
    unsigned long long v11;  // [sp-0x90]
    unsigned long long v12;  // [sp-0x78]
    unsigned long long v13;  // [sp-0x70]
    struct_3 *v14;  // [sp-0x60]
    unsigned long v15;  // [bp-0x58], Other Possible Types: char
    struct_0 *v16;  // [sp-0x50]
    unsigned long long v17;  // [sp-0x48]
    struct_0 *v18;  // [sp-0x40]
    unsigned long long v19;  // [sp-0x38]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    void* v23;  // rax
    unsigned long long v24;  // rdx
    struct_1 *v25;  // rsi
    char v26;  // bl
    unsigned long long v27;  // rdi
    struct_0 *v28;  // 4096
    struct_0 *v29;  // 4096
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rcx
    struct_1 *v34;  // rsi
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rcx
    struct_0 *v37;  // r15
    struct_0 *v38;  // r12
    unsigned long long v39;  // r8
    char v43;  // al
    unsigned long long v44;  // rsi
    unsigned long long v50;  // rsi
    void* v51;  // rsi
    unsigned long v52;  // rbp
    char *v53;  // r15
    struct_3 *v55;  // r12
    char *v56;  // rax
    unsigned long long *v59;  // rax
    void* v60;  // rax
    unsigned long v63;  // r15
    void* v64;  // rsi
    char *v65;  // r13
    char v68;  // dl
    char *v69;  // rax
    unsigned long long v70;  // rbx
    void* v71;  // rbp
    unsigned long v74;  // r15
    void* v75;  // rsi
    char *v76;  // r13
    char v77;  // dl
    char *v78;  // rax

    v3 = uu_join::State::get_current_key::h41ed13e3cd927031(a0);
    v21 = a0->field_10;
    if (!v21)
        return 0;
    v1 = a0->field_8;
    v9 = v21 * 48 + v1;
    v22 = a2->field_10;
    v8 = a3->field_18;
    v7 = a3->field_20;
    v0 = a3->field_28;
    v6 = a3->field_10;
    v13 = a2->field_8;
    if (v6)
    {
        v24 = v22 * 48 + v13;
        v25 = a3->field_8;
        v26 = a3->field_29;
        v5 = a0->field_58;
        v4 = a2->field_58;
        v14 = &v25[1].padding_0;
        v27 = &v3;
        v11 = v24;
        v10 = v25;
        do
        {
            v33 = v1;
            v1 = v33 + 48;
            v12 = v33;
            v13 = v13;
            while (true)
            {
                v39 = v13;
                v24 = v35;
                v25 = v34;
                if (v39 == v24)
                    break;
                v15 = v27;
                v16 = v37;
                v17 = v36;
                v18 = v38;
                v19 = v39;
                v2 = v39;
                if (!(char)vvar_627)
                {
                    v3 = v3;
                }
                else
                {
                    v43 = v25->field_1;
                    v44 = v25->field_8;
                    v17 = v17;
                    if (v43 == v5 || v43 == v4)
                    {
                    }
                }
                v50 = v3;
                if (!v50)
                    v8 = v8;
                v51 = v8;
                if (!v50)
                    v7 = v7;
                v52 = v7;
                v53 = a1->field_10;
                if (a1->field_0 - v53 > v52)
                {
                    memcpy(&v53[a1->field_8], v51, v52);
                    a1->field_10 = &v53[v52];
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v51, v52);
                    if (v23)
                        return v23;
                }
                v2 += 48;
                v6 = v6;
                v14 = v14;
                while (true)
                {
                    v55 = v14;
                    v32 = v6 - 1;
                    if (v6 == 1)
                        break;
                    v56 = a1->field_10;
                    if (a1->field_0 - v56 >= 2)
                    {
                        v56[a1->field_8] = v26;
                        a1->field_10 = &v56[1];
                    }
                    else
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &a3->field_29, 1);
                        if (v23)
                            return v23;
                    }
                    if (!v55->field_0)
                    {
                        v60 = v3;
                        v8 = v8;
                        v7 = v7;
                        if (!v60)
                            goto LABEL_43f12f;
                    }
                    else
                    {
                        v59 = 16;
                        if (!(v55->field_1 != v5) || !((v59 = 32, v55->field_1 != v4)))
                        {
                            v60 = uu_join::Line::get_field::ha4bb61e8b997f700(*((long long *)(&v15 + v59)), v55->field_8);
                            v8 = v8;
                            v7 = v7;
                            if (!v60)
                                goto LABEL_43f12f;
                        }
                        else
                        {
                            v60 = 0;
                            v8 = v8;
                            v7 = v7;
                            if (!0)
                                goto LABEL_43f12f;
                        }
                    }
LABEL_43f12f:
                    v63 = v7;
                    v64 = v8;
                    v65 = a1->field_10;
                    if (a1->field_0 - v65 > v63)
                    {
                        memcpy(&v65[a1->field_8], v64, v63);
                        a1->field_10 = &v65[v63];
                    }
                    else
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v64, v63);
                        if (v23)
                            return v23;
                    }
                }
                v68 = v0;
                v15 = v68;
                v69 = a1->field_10;
                if (a1->field_0 - v69 > 1)
                {
                    v69[a1->field_8] = v68;
                    a1->field_10 = &v69[1];
                    v23 = 0;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v15, 1);
                }
                v27 = &v3;
                v34 = v10;
                v35 = v11;
                v36 = v12;
                v13 = v2;
                if (v23)
                    return v23;
            }
            v28 = v16;
            v29 = v18;
        } while (v1 != v9);
        return 0;
    }
    else
    {
        *((unsigned long long *)&v5) = a0->field_40;
        *((unsigned long long *)&v4) = a2->field_40;
        v2 = v22 * 48;
        do
        {
            v6 = v1 + 48;
            v13 = v13;
            v2 = v2;
            while (true)
            {
                v70 = v2;
                v71 = v13;
                if (!v70)
                    break;
                v8 = v8;
                v7 = v7;
                v74 = v7;
                v75 = v8;
                v76 = a1->field_10;
                if (a1->field_0 - v76 > v74)
                {
                    memcpy(&v76[a1->field_8], v75, v74);
                    a1->field_10 = &v76[v74];
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v75, v74);
                    if (v23)
                        return v23;
                }
                v23 = uu_join::Repr$LT$Sep$GT$::print_fields::haebffdfbbdfe6182(a3, a1, v1, *((long long *)&v5));
                if (v23)
                    return v23;
                v23 = uu_join::Repr$LT$Sep$GT$::print_fields::haebffdfbbdfe6182(a3, a1, v71, *((long long *)&v4));
                if (v23)
                    return v23;
                v77 = v0;
                v15 = v77;
                v78 = a1->field_10;
                if (a1->field_0 - v78 > 1)
                {
                    v78[a1->field_8] = v77;
                    a1->field_10 = &v78[1];
                    v23 = 0;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v15, 1);
                }
                if (v23)
                    return v23;
            }
            v1 = v6;
        } while (v1 != v9);
        return 0;
    }
}
