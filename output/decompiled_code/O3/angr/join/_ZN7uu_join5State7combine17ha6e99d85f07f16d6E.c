long long uu_join::State::combine::ha6e99d85f07f16d6(struct_2 *a0, struct_3 *a1, struct_2 *a2, struct_1 *a3)
{
    char v0;  // [sp-0xe9]
    void* v1;  // [sp-0xe8]
    unsigned long long v2;  // [sp-0xe0]
    char v3;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xb8]
    struct_1 *v7;  // [sp-0xb0]
    struct_1 *v8;  // [sp-0xa8]
    unsigned long long v9;  // [sp-0xa0]
    unsigned long long v10;  // [sp-0x98]
    unsigned long long v11;  // [sp-0x80]
    struct_0 *v12;  // [sp-0x78]
    unsigned long long v13;  // [sp-0x70]
    struct_0 *v14;  // [sp-0x68]
    unsigned long long v15;  // [sp-0x60]
    unsigned long v16;  // [bp-0x58], Other Possible Types: char
    struct_2 *v17;  // [sp-0x50]
    unsigned long long v18;  // [sp-0x48]
    struct_2 *v19;  // [sp-0x40]
    unsigned long long v20;  // [sp-0x38]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    struct_1 *v24;  // rsi
    unsigned long v25;  // r12
    void* v26;  // rax
    struct_0 *v27;  // rdx
    struct_2 *v28;  // 4096
    struct_2 *v29;  // 4096
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rdi
    struct_0 *v34;  // rdx
    struct_2 *v35;  // rbp
    struct_2 *v36;  // r13
    char v41;  // al
    unsigned long long v42;  // rsi
    unsigned long long v48;  // rsi
    void* v49;  // rsi
    char *v50;  // r13
    struct_1 *v51;  // rsi
    struct_0 *v52;  // r13
    struct_1 *v53;  // rsi
    char *v55;  // r14
    unsigned long long *v59;  // rax
    void* v60;  // rax
    void* v63;  // rsi
    char *v64;  // r15
    char v66;  // dl
    char *v67;  // rax
    void* v68;  // r14
    unsigned long long v69;  // rbp
    struct_1 *v72;  // r13
    void* v73;  // rsi
    char *v74;  // r15
    struct_1 *v75;  // r15
    char v76;  // dl
    char *v77;  // rax

    v5 = uu_join::State::get_current_key::h41ed13e3cd927031(a0);
    v22 = a0->field_10;
    if (!v22)
        return 0;
    v1 = a0->field_8;
    v10 = v22 * 48 + v1;
    v23 = a2->field_10;
    v24 = a3->field_108;
    v25 = a3->field_110;
    v9 = a3->field_120;
    v8 = *((long long *)&a3->padding_128[0]);
    v0 = a3->field_148;
    v6 = a3->field_140;
    v7 = v24;
    v11 = a2->field_8;
    if (v6)
    {
        v15 = v23 * 48 + v11;
        v27 = a3->field_138;
        v4 = a0->field_58;
        v3 = a2->field_58;
        v14 = v27 + 1;
        v12 = v27;
        do
        {
            v32 = v1;
            v1 = v32 + 48;
            v13 = v32;
            v11 = v11;
            while (true)
            {
                v27 = v34;
                if (v2 == v15)
                    break;
                v16 = &v5;
                v17 = v36;
                v18 = v33;
                v19 = v35;
                v2 = v11;
                v20 = v2;
                if (!v27->field_0)
                {
                    v5 = v5;
                }
                else
                {
                    v41 = v27->field_1;
                    v42 = v27->field_8;
                    v18 = v18;
                    if (v41 == v4 || (v18 = v2, v41 == v3))
                    {
                    }
                }
                v48 = v5;
                if (!v48)
                    v9 = v9;
                v49 = v9;
                if (!v48)
                    v8 = v8;
                a3 = v8;
                v50 = a1->field_10;
                if (a1->field_0 - v50 > a3)
                {
                    memcpy(&v50[a1->field_8], v49, a3);
                    a1->field_10 = v50 + a3;
                }
                else
                {
                    v26 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v49, a3);
                    if (v26)
                        return v26;
                }
                v2 += 48;
                v6 = v6;
                v14 = v14;
                while (true)
                {
                    v52 = v14;
                    v53 = v51;
                    if (v6 == 1)
                        break;
                    v55 = a1->field_10;
                    if (a1->field_0 - v55 > v25)
                    {
                        memcpy(&v55[a1->field_8], v53, v25);
                        a1->field_10 = &v55[v25];
                    }
                    else
                    {
                        v26 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v53, v25);
                        if (v26)
                            return v26;
                    }
                    if (!v52->field_0)
                    {
                        v60 = v5;
                        v9 = v9;
                        v8 = v8;
                        if (!v60)
                            goto LABEL_43fb4f;
                    }
                    else
                    {
                        v59 = 16;
                        if (!(v52->field_1 != v4) || !((v59 = 32, v52->field_1 != v3)))
                        {
                            v60 = uu_join::Line::get_field::ha4bb61e8b997f700(*((long long *)(&v16 + v59)), v52->field_8);
                            v9 = v9;
                            v8 = v8;
                            if (!v60)
                                goto LABEL_43fb4f;
                        }
                        else
                        {
                            v60 = 0;
                            v9 = v9;
                            v8 = v8;
                            if (!0)
                                goto LABEL_43fb4f;
                        }
                    }
LABEL_43fb4f:
                    a3 = v8;
                    v63 = v9;
                    v64 = a1->field_10;
                    if (a1->field_0 - v64 <= a3)
                    {
                        v26 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v63, a3);
                    }
                    else
                    {
                        memcpy(&v64[a1->field_8], v63, a3);
                        a1->field_10 = v64 + a3;
                        v26 = 0;
                    }
                    v51 = v7;
                    if (v26)
                        return v26;
                }
                v66 = v0;
                v16 = v66;
                v67 = a1->field_10;
                if (a1->field_0 - v67 > 1)
                {
                    v67[a1->field_8] = v66;
                    a1->field_10 = &v67[1];
                    v26 = 0;
                }
                else
                {
                    a3 = v53;
                    v26 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v16, 1);
                }
                v33 = v13;
                v34 = v12;
                v11 = v2;
                if (v26)
                    return v26;
            }
            v28 = v19;
            v29 = v17;
        } while (v1 != v10);
        return 0;
    }
    else
    {
        v4 = a0->field_40;
        v3 = a2->field_40;
        v2 = v23 * 48;
        do
        {
            v6 = v1 + 48;
            v2 = v2;
            v11 = v11;
            while (true)
            {
                v68 = v11;
                v69 = v2;
                if (!v69)
                    break;
                v9 = v9;
                v8 = v8;
                v72 = v8;
                v73 = v9;
                v74 = a1->field_10;
                if (a1->field_0 - v74 > v72)
                {
                    memcpy(&v74[a1->field_8], v73, v72);
                    a1->field_10 = v74 + v72;
                }
                else
                {
                    v26 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v73, v72);
                    if (v26)
                        return v26;
                }
                v75 = v7;
                v26 = uu_join::Repr$LT$Sep$GT$::print_fields::hf5cf6ca92c033f61(v75, v25, a1, v1, v4);
                if (v26)
                    return v26;
                v26 = uu_join::Repr$LT$Sep$GT$::print_fields::hf5cf6ca92c033f61(v75, v25, a1, v68, v3);
                if (v26)
                    return v26;
                v76 = v0;
                v16 = v76;
                v77 = a1->field_10;
                if (a1->field_0 - v77 <= 1)
                {
                    v26 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, &v16, 1);
                }
                else
                {
                    v77[a1->field_8] = v76;
                    a1->field_10 = &v77[1];
                    v26 = 0;
                }
                if (v26)
                    return v26;
            }
            v1 = v6;
        } while (v1 != v10);
        return 0;
    }
}
