long long uu_join::State::combine::h7d883889fac4cff6(struct_2 *a0, struct_4 *a1, struct_2 *a2, struct_1 *a3)
{
    char v0;  // [sp-0xd9]
    void* v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    unsigned long v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xb8], Other Possible Types: unsigned int
    char v5;  // [bp-0xb0], Other Possible Types: unsigned int
    unsigned long long v6;  // [sp-0xa8]
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    struct_0 *v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x70]
    unsigned long long v12;  // [sp-0x68]
    struct_3 *v13;  // [sp-0x60]
    unsigned long v14;  // [bp-0x58], Other Possible Types: char
    struct_2 *v15;  // [sp-0x50]
    unsigned long long v16;  // [sp-0x48]
    struct_2 *v17;  // [sp-0x40]
    unsigned long long v18;  // [sp-0x38]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    struct_1 *v22;  // r15
    void* v23;  // rax
    unsigned long long v24;  // rdx
    struct_0 *v25;  // rsi
    unsigned long long v26;  // rdi
    struct_2 *v27;  // 4096
    struct_2 *v28;  // 4096
    unsigned long long v31;  // rcx
    struct_0 *v32;  // rsi
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rcx
    struct_2 *v35;  // rbp
    struct_2 *v36;  // r14
    unsigned long long v37;  // r8
    char v41;  // al
    unsigned long long v42;  // rsi
    unsigned long long v48;  // rsi
    void* v49;  // rsi
    struct_1 *v50;  // r15
    char *v51;  // r12
    struct_3 *v53;  // rbp
    unsigned long long v54;  // r12
    char *v55;  // rax
    unsigned long long *v58;  // rax
    void* v59;  // rax
    struct_1 *v60;  // r15
    void* v63;  // rsi
    char *v64;  // r14
    char v67;  // dl
    char *v68;  // rax
    unsigned long long v69;  // r12
    void* v70;  // rbp
    struct_1 *v72;  // r15
    struct_1 *v74;  // r13
    void* v75;  // rsi
    char *v76;  // r14
    char v77;  // dl
    char *v78;  // rax

    v3 = uu_join::State::get_current_key::h41ed13e3cd927031(a0);
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
    v12 = a2->field_8;
    if (v6)
    {
        v24 = v21 * 48 + v12;
        v25 = a3->field_8;
        v5 = a0->field_58;
        v4 = a2->field_58;
        v13 = &v25[1].padding_0;
        v26 = &v3;
        v10 = v24;
        v9 = v25;
        do
        {
            v31 = v1;
            v1 = v31 + 48;
            v11 = v31;
            v12 = v12;
            while (true)
            {
                v37 = v12;
                v24 = v33;
                v25 = v32;
                if (v37 == v24)
                    break;
                v14 = v26;
                v15 = v35;
                v16 = v34;
                v17 = v36;
                v18 = v37;
                v2 = v37;
                if (!(char)vvar_617)
                {
                    v3 = v3;
                }
                else
                {
                    v41 = v25->field_1;
                    v42 = v25->field_8;
                    v16 = v16;
                    if (v41 == v5 || v41 == v4)
                    {
                    }
                }
                v48 = v3;
                if (!v48)
                    v7 = v7;
                v49 = v7;
                a3 = v50;
                v51 = a1->field_10;
                if (a1->field_0 - v51 > a3)
                {
                    memcpy(&v51[a1->field_8], v49, a3);
                    a1->field_10 = v51 + a3;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v49, a3);
                    if (v23)
                        return v23;
                }
                v2 += 48;
                v13 = v13;
                v6 = v6;
                while (true)
                {
                    v53 = v13;
                    v54 = v6 - 1;
                    if (v6 == 1)
                        break;
                    v55 = a1->field_10;
                    if (a1->field_0 - v55 >= 2)
                    {
                        v55[a1->field_8] = 32;
                        a1->field_10 = &v55[1];
                    }
                    else
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, " USimpleError", 1);
                        if (v23)
                            return v23;
                    }
                    if (!v53->field_0)
                    {
                        v59 = v3;
                        v7 = v7;
                        if (!v59)
                            goto LABEL_43f61d;
                    }
                    else
                    {
                        v58 = 16;
                        if (!(v53->field_1 != v5) || !((v58 = 32, v53->field_1 != v4)))
                        {
                            v59 = uu_join::Line::get_field::ha4bb61e8b997f700(*((long long *)(&v14 + v58)), v53->field_8);
                            v7 = v7;
                            if (!v59)
                                goto LABEL_43f61d;
                        }
                        else
                        {
                            v59 = 0;
                            v7 = v7;
                            if (!0)
                                goto LABEL_43f61d;
                        }
                    }
LABEL_43f61d:
                    a3 = v60;
                    v63 = v7;
                    v64 = a1->field_10;
                    if (a1->field_0 - v64 > a3)
                    {
                        memcpy(&v64[a1->field_8], v63, a3);
                        a1->field_10 = v64 + a3;
                    }
                    else
                    {
                        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v63, a3);
                        if (v23)
                            return v23;
                    }
                }
                v67 = v0;
                v14 = v67;
                v68 = a1->field_10;
                if (a1->field_0 - v68 > 1)
                {
                    v68[a1->field_8] = v67;
                    a1->field_10 = &v68[1];
                    v23 = 0;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v14, 1);
                }
                v26 = &v3;
                v32 = v9;
                v33 = v10;
                v34 = v11;
                v12 = v2;
                if (v23)
                    return v23;
            }
            v27 = v15;
            v28 = v17;
        } while (v1 != v8);
        return 0;
    }
    else
    {
        *((unsigned long long *)&v5) = a0->field_40;
        *((unsigned long long *)&v4) = a2->field_40;
        v2 = v21 * 48;
        do
        {
            v6 = v1 + 48;
            v12 = v12;
            v2 = v2;
            while (true)
            {
                v69 = v2;
                v70 = v12;
                if (!v69)
                    break;
                v7 = v7;
                v74 = v72;
                v75 = v7;
                v76 = a1->field_10;
                if (a1->field_0 - v76 > v74)
                {
                    memcpy(&v76[a1->field_8], v75, v74);
                    a1->field_10 = v76 + v74;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v75, v74);
                    if (v23)
                        return v23;
                }
                v23 = uu_join::Repr$LT$Sep$GT$::print_fields::h146957d526fdc953(a1, v1, *((long long *)&v5));
                if (v23)
                    return v23;
                v23 = uu_join::Repr$LT$Sep$GT$::print_fields::h146957d526fdc953(a1, v70, *((long long *)&v4));
                if (v23)
                    return v23;
                v77 = v0;
                v14 = v77;
                v78 = a1->field_10;
                if (a1->field_0 - v78 > 1)
                {
                    v78[a1->field_8] = v77;
                    a1->field_10 = &v78[1];
                    v23 = 0;
                }
                else
                {
                    v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v14, 1);
                }
                if (v23)
                    return v23;
            }
            v1 = v6;
        } while (v1 != v8);
        return 0;
    }
}
