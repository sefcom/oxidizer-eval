long long uu_join::State::print_line::h53b1c5c6f82c8dd7(unsigned long long a0, char a1, struct_3 *a2, void* a3, struct_1 *a4)
{
    char v0;  // [sp-0x65]
    void* v1;  // [sp-0x50]
    unsigned long long v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x40]
    unsigned long long v5;  // r15
    unsigned long v6;  // r12
    struct_0 *v7;  // rbp
    void* v8;  // rax
    unsigned long long v9;  // 4096
    unsigned long long v10;  // 4096
    void* v13;  // rsi
    unsigned long v14;  // r14
    char *v15;  // r15
    void* v16;  // rax
    void* v18;  // rsi
    unsigned long v19;  // r14
    char *v20;  // r13
    struct_2 *v21;  // rbp
    unsigned long long v22;  // r15
    char *v23;  // r14
    unsigned long long v25;  // 4096
    unsigned long long v26;  // 4096
    unsigned long long v27;  // rsi
    void* v29;  // rax
    unsigned long v30;  // r14
    void* v31;  // rsi
    char *v32;  // r13
    char *v33;  // rcx

    v5 = a4->field_140;
    if (!v5)
    {
        v8 = uu_join::Line::get_field::ha4bb61e8b997f700(a3, a0);
        if (!v8)
        {
            v8 = a4->field_120;
            v14 = a4->field_128;
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
        v16 = uu_join::Repr$LT$Sep$GT$::print_fields::hf5cf6ca92c033f61(a4->field_108, *((long long *)&a4->field_110), a2, a3, a0);
        if (v16)
            return v16;
    }
    else
    {
        v1 = a4->field_108;
        v6 = *((long long *)&a4->field_110);
        v7 = a4->field_138;
        v3 = a4->field_120;
        v2 = a4->field_128;
        if (!(char)vvar_415)
        {
            goto LABEL_43dbd1;
        }
        else if (v7->field_1 != a1)
        {
            v13 = 0;
        }
        else
        {
LABEL_43dbd1:
            v13 = uu_join::Line::get_field::ha4bb61e8b997f700(v9, v10);
        }
        if (!v13)
            v3 = v3;
        v18 = v3;
        if (!v13)
            v2 = v2;
        v19 = v2;
        v20 = a2->field_10;
        if (a2->field_0 - v20 > v19)
        {
            memcpy(&v20[a2->field_8], v18, v19);
            a2->field_10 = &v20[v19];
        }
        else
        {
            v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v18, v19);
            if (v16)
                return v16;
        }
        v21 = v7 + 1;
        while (true)
        {
            v22 = v5 - 1;
            if (v5 == 1)
                break;
            v23 = a2->field_10;
            if (a2->field_0 - v23 > v6)
            {
                memcpy(&v23[a2->field_8], v1, v6);
                a2->field_10 = &v23[v6];
            }
            else
            {
                v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v1, v6);
                if (v16)
                    return v16;
            }
            if (!v21->field_0)
            {
LABEL_43dc8a:
                v29 = uu_join::Line::get_field::ha4bb61e8b997f700(v25, v26);
                v3 = v3;
                v2 = v2;
                if (!v29)
                    goto LABEL_43dca5;
                goto LABEL_43dc9f;
            }
            else if (v21->field_1 == a1)
            {
                v27 = v21->field_8;
                goto LABEL_43dc8a;
            }
            else
            {
                v29 = 0;
                v3 = v3;
                v2 = v2;
                if (!0)
                    goto LABEL_43dca5;
LABEL_43dc9f:
LABEL_43dca5:
                v30 = v2;
                v31 = v3;
                v32 = a2->field_10;
                if (a2->field_0 - v32 > v30)
                {
                    memcpy(&v32[a2->field_8], v31, v30);
                    a2->field_10 = &v32[v30];
                    v21 += 1;
                }
                else
                {
                    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v31, v30);
                    v21 += 1;
                    if (v16)
                        return v16;
                }
            }
        }
    }
    v0 = a4->field_148;
    v33 = a2->field_10;
    if (a2->field_0 - v33 > 1)
    {
        v33[a2->field_8] = v0;
        a2->field_10 = &v33[1];
        return 0;
    }
    v16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, &v0, 1);
    return v16;
}
