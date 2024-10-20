long long uu_join::State::print_line::h9f74e5c5b92cf4d5(unsigned long a0, char a1, struct_3 *a2, void* a3, struct_1 *a4)
{
    char v0;  // [sp-0x5e]
    char v1;  // [sp-0x5d]
    struct_1 *v2;  // [sp-0x58]
    unsigned long long v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x40]
    unsigned long long v6;  // r12
    struct_0 *v7;  // r15
    unsigned long long v8;  // r14
    struct_1 *v9;  // r14
    void* v10;  // rax
    unsigned long long v11;  // 4096
    unsigned long long v12;  // 4096
    void* v15;  // rsi
    unsigned long v16;  // r13
    char *v17;  // r14
    void* v18;  // rax
    void* v20;  // rsi
    unsigned long long v21;  // r14
    unsigned long v22;  // r13
    char *v23;  // rbp
    struct_2 *v24;  // r15
    unsigned long long v25;  // r12
    char *v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // 4096
    unsigned long long v29;  // 4096
    unsigned long long v30;  // rsi
    void* v32;  // rax
    unsigned long long v33;  // r14
    unsigned long v34;  // r13
    void* v35;  // rsi
    char *v36;  // rbp
    char *v37;  // rcx

    v6 = a4->field_10;
    v2 = a4;
    if (!v6)
    {
        v9 = a4;
        v10 = uu_join::Line::get_field::ha4bb61e8b997f700(a3, a0);
        if (!v10)
        {
            v10 = v9->field_18;
            v16 = v9->field_20;
        }
        v17 = a2->field_10;
        if (a2->field_0 - v17 > v16)
        {
            memcpy(&v17[a2->field_8], v10, v16);
            a2->field_10 = &v17[v16];
        }
        else
        {
            v18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v10, v16);
            if (v18)
                return v18;
        }
        v18 = uu_join::Repr$LT$Sep$GT$::print_fields::haebffdfbbdfe6182(v2, a2, a3, a0);
        if (v18)
            return v18;
    }
    else
    {
        v0 = a4->field_29;
        v7 = a4->field_8;
        v3 = a4->field_18;
        v8 = a4->field_20;
        if (!(char)vvar_409)
        {
            goto LABEL_43e154;
        }
        else if (v7->field_1 != a1)
        {
            v15 = 0;
        }
        else
        {
LABEL_43e154:
            v15 = uu_join::Line::get_field::ha4bb61e8b997f700(v11, v12);
        }
        if (!v15)
            v3 = v3;
        v20 = v3;
        v22 = v21;
        v23 = a2->field_10;
        if (a2->field_0 - v23 > v22)
        {
            memcpy(&v23[a2->field_8], v20, v22);
            a2->field_10 = &v23[v22];
        }
        else
        {
            v18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v20, v22);
            if (v18)
                return v18;
        }
        v24 = v7 + 1;
        v4 = &v2->field_29;
        while (true)
        {
            v25 = v6 - 1;
            if (v6 == 1)
                break;
            v26 = a2->field_10;
            if (a2->field_0 - v26 >= 2)
            {
                v27 = v0;
                v26[a2->field_8] = v27;
                a2->field_10 = &v26[1];
            }
            else
            {
                v18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v4, 1);
                if (v18)
                    return v18;
            }
            if (!v24->field_0)
            {
LABEL_43e20a:
                v32 = uu_join::Line::get_field::ha4bb61e8b997f700(v28, v29);
                v3 = v3;
                if (!v32)
                    goto LABEL_43e223;
                goto LABEL_43e21d;
            }
            else if (v24->field_1 == a1)
            {
                v30 = v24->field_8;
                goto LABEL_43e20a;
            }
            else
            {
                v32 = 0;
                v3 = v3;
                if (!0)
                    goto LABEL_43e223;
LABEL_43e21d:
LABEL_43e223:
                v34 = v33;
                v35 = v3;
                v36 = a2->field_10;
                if (a2->field_0 - v36 > v34)
                {
                    memcpy(&v36[a2->field_8], v35, v34);
                    a2->field_10 = &v36[v34];
                    v24 += 1;
                }
                else
                {
                    v18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v35, v34);
                    v24 += 1;
                    if (v18)
                        return v18;
                }
            }
        }
    }
    v1 = v2->field_28;
    v37 = a2->field_10;
    if (a2->field_0 - v37 > 1)
    {
        v37[a2->field_8] = v1;
        a2->field_10 = &v37[1];
        return 0;
    }
    v18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, &v1, 1);
    return v18;
}
