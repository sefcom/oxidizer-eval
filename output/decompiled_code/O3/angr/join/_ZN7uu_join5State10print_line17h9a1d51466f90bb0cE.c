long long uu_join::State::print_line::h9a1d51466f90bb0c(unsigned long a0, char a1, struct_2 *a2, void* a3, struct_1 *a4)
{
    char v0;  // [sp-0x55]
    unsigned long long v1;  // [sp-0x40]
    struct_1 *v2;  // [sp-0x38]
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
    struct_0 *v23;  // r12
    unsigned long long v24;  // r14
    unsigned long long v25;  // 4096
    unsigned long long v26;  // 4096
    unsigned long long v27;  // rsi
    void* v29;  // rax
    unsigned long long v30;  // rbp
    unsigned long v31;  // r13
    void* v32;  // rsi
    char *v33;  // r15
    char *v34;  // rcx

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
        v16 = uu_join::Repr$LT$Sep$GT$::print_fields::hfc502a5f8bd26197(a2, a3, a0);
        if (v16)
            return v16;
    }
    else
    {
        v5 = a4->field_8;
        v1 = a4->field_18;
        v6 = a4->field_20;
        if (!v5->field_0)
        {
            goto LABEL_43de9c;
        }
        else if (v5->field_1 != a1)
        {
            v13 = 0;
        }
        else
        {
LABEL_43de9c:
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
            if (a2->field_0 == a2->field_10)
            {
                v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, 1, 0);
                if (v16)
                    return v16;
            }
            if (!v23->field_0)
            {
LABEL_43df3a:
                v29 = uu_join::Line::get_field::ha4bb61e8b997f700(v25, v26);
                v1 = v1;
                if (!v29)
                    goto LABEL_43df53;
                goto LABEL_43df4d;
            }
            else if (v23->field_1 == a1)
            {
                v27 = v23->field_8;
                goto LABEL_43df3a;
            }
            else
            {
                v29 = 0;
                v1 = v1;
                if (!0)
                    goto LABEL_43df53;
LABEL_43df4d:
LABEL_43df53:
                v31 = v30;
                v32 = v1;
                v33 = a2->field_10;
                if (a2->field_0 - v33 > v31)
                {
                    memcpy(&v33[a2->field_8], v32, v31);
                    a2->field_10 = &v33[v31];
                    v23 += 1;
                }
                else
                {
                    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v32, v31);
                    v23 += 1;
                    if (v16)
                        return v16;
                }
            }
        }
    }
    v0 = v2->field_28;
    v34 = a2->field_10;
    if (a2->field_0 - v34 > 1)
    {
        v34[a2->field_8] = v0;
        a2->field_10 = &v34[1];
        return 0;
    }
    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, &v0, 1);
    return v16;
}
