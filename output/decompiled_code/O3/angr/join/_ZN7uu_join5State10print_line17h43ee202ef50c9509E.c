long long uu_join::State::print_line::h43ee202ef50c9509(unsigned long a0, char a1, struct_2 *a2, void* a3, struct_1 *a4)
{
    char v0;  // [sp-0x55]
    unsigned long long v1;  // [sp-0x48]
    struct_1 *v2;  // [sp-0x40]
    unsigned long long v4;  // r14
    struct_0 *v5;  // r12
    unsigned long long v6;  // rbp
    struct_1 *v7;  // r14
    void* v8;  // rax
    unsigned long long v9;  // 4096
    unsigned long long v10;  // 4096
    void* v13;  // rsi
    unsigned long v14;  // r13
    char *v15;  // r14
    void* v16;  // rax
    void* v18;  // rsi
    unsigned long long v19;  // rbp
    unsigned long v20;  // r13
    char *v21;  // r15
    struct_4 *v23;  // r12
    unsigned long long v24;  // r14
    char *v25;  // rax
    unsigned long long v26;  // 4096
    unsigned long long v27;  // 4096
    unsigned long long v28;  // rsi
    void* v30;  // rax
    unsigned long long v31;  // rbp
    unsigned long v32;  // r13
    void* v33;  // rsi
    char *v34;  // r15
    char *v35;  // rcx

    v4 = a4->field_10;
    v2 = a4;
    if (!v4)
    {
        v7 = a4;
        v8 = uu_join::Line::get_field::ha4bb61e8b997f700(a3, a0);
        if (!v8)
        {
            v8 = v7->field_18;
            v14 = v7->field_20;
        }
        v15 = a2->field_10;
        if (a2->field_0 - v15 > v14)
        {
            memcpy(&v15[a2->field_8], v8, v14);
            a2->field_10 = &v15[v14];
        }
        else
        {
            v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v8, v14);
            if (v16)
                return v16;
        }
        v16 = uu_join::Repr$LT$Sep$GT$::print_fields::h146957d526fdc953(a2, a3, a0);
        if (v16)
            return v16;
    }
    else
    {
        v5 = a4->field_8;
        v1 = a4->field_18;
        v6 = a4->field_20;
        if (!(char)vvar_399)
        {
            goto LABEL_43d8d9;
        }
        else if (v5->field_1 != a1)
        {
            v13 = 0;
        }
        else
        {
LABEL_43d8d9:
            v13 = uu_join::Line::get_field::ha4bb61e8b997f700(v9, v10);
        }
        if (!v13)
            v1 = v1;
        v18 = v1;
        v20 = v19;
        v21 = a2->field_10;
        if (a2->field_0 - v21 > v20)
        {
            memcpy(&v21[a2->field_8], v18, v20);
            a2->field_10 = &v21[v20];
        }
        else
        {
            v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v18, v20);
            if (v16)
                return v16;
        }
        v23 = v5 + 1;
        while (true)
        {
            v24 = v4 - 1;
            if (v4 == 1)
                break;
            v25 = a2->field_10;
            if (a2->field_0 - v25 >= 2)
            {
                v25[a2->field_8] = 32;
                a2->field_10 = &v25[1];
            }
            else
            {
                v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, " USimpleError", 1);
                if (v16)
                    return v16;
            }
            if (!v23->field_0)
            {
LABEL_43d98a:
                v30 = uu_join::Line::get_field::ha4bb61e8b997f700(v26, v27);
                v1 = v1;
                if (!v30)
                    goto LABEL_43d9a3;
                goto LABEL_43d99d;
            }
            else if (v23->field_1 == a1)
            {
                v28 = v23->field_8;
                goto LABEL_43d98a;
            }
            else
            {
                v30 = 0;
                v1 = v1;
                if (!0)
                    goto LABEL_43d9a3;
LABEL_43d99d:
LABEL_43d9a3:
                v32 = v31;
                v33 = v1;
                v34 = a2->field_10;
                if (a2->field_0 - v34 > v32)
                {
                    memcpy(&v34[a2->field_8], v33, v32);
                    a2->field_10 = &v34[v32];
                    v23 += 1;
                }
                else
                {
                    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v33, v32);
                    v23 += 1;
                    if (v16)
                        return v16;
                }
            }
        }
    }
    v0 = v2->field_28;
    v35 = a2->field_10;
    if (a2->field_0 - v35 > 1)
    {
        v35[a2->field_8] = v0;
        a2->field_10 = &v35[1];
        return 0;
    }
    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, &v0, 1);
    return v16;
}
