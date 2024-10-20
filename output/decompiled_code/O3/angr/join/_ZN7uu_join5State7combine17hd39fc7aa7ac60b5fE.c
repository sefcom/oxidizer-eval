long long uu_join::State::combine::hd39fc7aa7ac60b5f(struct_0 *a0, struct_3 *a1, struct_0 *a2, struct_5 *a3)
{
    char v0;  // [sp-0xd9]
    void* v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    char v3;  // [bp-0xc8], Other Possible Types: unsigned int
    char v4;  // [bp-0xc0], Other Possible Types: unsigned int
    unsigned long v5;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xa8]
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    struct_2 *v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x78]
    unsigned long long v11;  // [sp-0x70]
    struct_1 *v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x60]
    unsigned long v14;  // [bp-0x58], Other Possible Types: char
    struct_0 *v15;  // [sp-0x50]
    unsigned long long v16;  // [sp-0x48]
    struct_0 *v17;  // [sp-0x40]
    unsigned long long v18;  // [sp-0x38]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // r15
    void* v23;  // rax
    struct_2 *v24;  // r13
    struct_0 *v25;  // 4096
    struct_0 *v26;  // 4096
    unsigned long v29;  // rbp
    unsigned long long v30;  // rdi
    unsigned long long v31;  // rdi
    struct_0 *v32;  // r14
    struct_2 *v33;  // r13
    struct_0 *v34;  // r12
    unsigned long long v37;  // rcx
    char v39;  // al
    unsigned long long v40;  // rsi
    unsigned long long v46;  // rsi
    void* v47;  // rsi
    unsigned long long v48;  // r15
    char *v49;  // r12
    struct_1 *v51;  // r13
    unsigned long long v52;  // r12
    unsigned long long *v55;  // rax
    void* v56;  // rax
    unsigned long long v57;  // r15
    void* v60;  // rsi
    char *v61;  // r14
    char v64;  // dl
    char *v65;  // rax
    unsigned long long v66;  // r12
    void* v67;  // rbp
    unsigned long long v69;  // r15
    unsigned long v71;  // r13
    void* v72;  // rsi
    char *v73;  // r14
    char v74;  // dl
    char *v75;  // rax

    v5 = uu_join::State::get_current_key::h41ed13e3cd927031(a0);
    v20 = a0->field_10;
    if (!v20)
        return 0;
    v1 = a0->field_8;
    v8 = v20 * 48 + v1;
    v21 = a2->field_10;
    v7 = a3->field_18;
    v22 = a3->field_20;
    v0 = a3->field_28;
    v6 = a3->field_10;
    v10 = a2->field_8;
    if (v6)
    {
        v13 = v21 * 48 + v10;
        v24 = a3->field_8;
        v4 = a0->field_58;
        v3 = a2->field_58;
        v12 = &v24[1].padding_0;
        v9 = v24;
        do
        {
            v30 = v1;
            v1 = v30 + 48;
            v11 = v30;
            v10 = v10;
            while (true)
            {
                v24 = v33;
                v37 = v10;
                if (v37 == v13)
                    break;
                v14 = &v5;
                v15 = v34;
                v16 = v31;
                v17 = v32;
                v18 = v37;
                v2 = v37;
                if (!(char)vvar_604)
                {
                    v5 = v5;
                }
                else
                {
                    v39 = v24->field_1;
                    v40 = v24->field_8;
                    v16 = v16;
                    if (v39 == v4 || v39 == v3)
                    {
                    }
                }
                v46 = v5;
                if (!v46)
                    v7 = v7;
                v47 = v7;
                v29 = v48;
                v49 = a1->field_10;
                if (a1->field_0 - v49 > v29)
                {
                    memcpy(&v49[a1->field_8], v47, v29);
                    a1->field_10 = &v49[v29];
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v47, v29);
                    if (v23)
                        return v23;
                }
                v2 += 48;
                v12 = v12;
                v6 = v6;
                while (true)
                {
                    v51 = v12;
                    v52 = v6 - 1;
                    if (v6 == 1)
                        break;
                    if (a1->field_0 == a1->field_10)
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, 1, 0);
                        if (v23)
                            return v23;
                    }
                    if (!v51->field_0)
                    {
                        v56 = v5;
                        v7 = v7;
                        if (!v56)
                            goto LABEL_44002d;
                    }
                    else
                    {
                        v55 = 16;
                        if (!(v51->field_1 != v4) || !((v55 = 32, v51->field_1 != v3)))
                        {
                            v56 = uu_join::Line::get_field::ha4bb61e8b997f700(*((long long *)(&v14 + v55)), v51->field_8);
                            v7 = v7;
                            if (!v56)
                                goto LABEL_44002d;
                        }
                        else
                        {
                            v56 = 0;
                            v7 = v7;
                            if (!0)
                                goto LABEL_44002d;
                        }
                    }
LABEL_44002d:
                    v29 = v57;
                    v60 = v7;
                    v61 = a1->field_10;
                    if (a1->field_0 - v61 > v29)
                    {
                        memcpy(&v61[a1->field_8], v60, v29);
                        a1->field_10 = &v61[v29];
                    }
                    else
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v60, v29);
                        if (v23)
                            return v23;
                    }
                }
                v64 = v0;
                v14 = v64;
                v65 = a1->field_10;
                if (a1->field_0 - v65 > 1)
                {
                    v65[a1->field_8] = v64;
                    a1->field_10 = &v65[1];
                    v23 = 0;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v14, 1);
                }
                v31 = v11;
                v10 = v2;
                v33 = v9;
                if (v23)
                    return v23;
            }
            v25 = v17;
            v26 = v15;
        } while (v1 != v8);
        return 0;
    }
    else
    {
        *((unsigned long long *)&v4) = a0->field_40;
        *((unsigned long long *)&v3) = a2->field_40;
        v2 = v21 * 48;
        do
        {
            v6 = v1 + 48;
            v10 = v10;
            v2 = v2;
            while (true)
            {
                v66 = v2;
                v67 = v10;
                if (!v66)
                    break;
                v7 = v7;
                v71 = v69;
                v72 = v7;
                v73 = a1->field_10;
                if (a1->field_0 - v73 > v71)
                {
                    memcpy(&v73[a1->field_8], v72, v71);
                    a1->field_10 = &v73[v71];
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v72, v71);
                    if (v23)
                        return v23;
                }
                v23 = uu_join::Repr$LT$Sep$GT$::print_fields::hfc502a5f8bd26197(a1, v1, *((long long *)&v4));
                if (v23)
                    return v23;
                v23 = uu_join::Repr$LT$Sep$GT$::print_fields::hfc502a5f8bd26197(a1, v67, *((long long *)&v3));
                if (v23)
                    return v23;
                v74 = v0;
                v14 = v74;
                v75 = a1->field_10;
                if (a1->field_0 - v75 <= 1)
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v14, 1);
                }
                else
                {
                    v75[a1->field_8] = v74;
                    a1->field_10 = &v75[1];
                    v23 = 0;
                }
                if (v23)
                    return v23;
            }
            v1 = v6;
        } while (v1 != v8);
        return 0;
    }
}
