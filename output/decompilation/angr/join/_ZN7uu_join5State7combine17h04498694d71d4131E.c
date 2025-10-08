long long uu_join::State::combine(struct_1 *a0, unsigned long long a1, unsigned long long a2[9])
{
    char v0;  // [bp-0xb1]
    void* v1;  // [bp-0xb0]
    void* v2;  // [bp-0xb0]
    void* v3;  // [bp-0xb0]
    struct_0 *v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    void* v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    unsigned long v10;  // [bp-0x78]
    unsigned long v11;  // [bp-0x70]
    char *v12;  // [bp-0x68], Other Possible Types: char
    char v13;  // [bp-0x68]
    struct_1 *v14;  // [bp-0x60]
    void* v15;  // [bp-0x58]
    unsigned long long v16[9];  // [bp-0x50]
    unsigned long v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    unsigned long long v19;  // [bp-0x38]
    unsigned long long v21;  // rdx
    void* v22;  // rcx
    void* v23;  // rsi
    unsigned long v24;  // rdi
    struct_0 *v25;  // rcx
    unsigned long v26;  // rdi
    unsigned long v27;  // rdi
    unsigned long v28;  // rcx
    unsigned long v29;  // rbp
    unsigned long v30;  // rcx
    unsigned long v31;  // rbp
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    void* v34;  // rcx
    void* v35;  // rsi
    void* v36;  // rcx
    unsigned long v38;  // rdi
    unsigned long v39;  // rdi
    unsigned long v40;  // r12
    unsigned long v41;  // rbp
    unsigned long v42;  // r12
    unsigned long v43;  // rbp
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    void* v48;  // rax
    void* v49;  // rsi
    void* v50;  // rax

    v4 = a0.get_current_key();
    v18 = v4;
    v6 = v21;
    v19 = v21;
    if (!a0->field_10)
        return 0;
    v22 = a0->field_8;
    v3 = v22;
    v23 = v22 + 48;
    v24 = a2[1];
    v7 = a2[2] * 48 + v24;
    v0 = v25->field_148;
    v5 = v24;
    if (v25->field_140)
    {
        v4 = v25;
        v9 = a0->field_10 * 48 + v22;
        v26 = v24;
        do
        {
            v27 = v26;
            v1 = v3;
            v2 = v23;
            while (true)
            {
                v28 = v27;
                v29 = v28 + 48;
                if (v28 == v7)
                {
                    v30 = v28;
                    if (v30 == v7)
                        break;
                }
                else
                {
                    v30 = v29;
                    if (v28 == v7)
                        break;
                }
                v31 = v30;
                v12 = &v18;
                v14 = a0;
                v15 = v1;
                v16[0] = a2;
                v17 = v28;
                v32 = v4.print_format(a1, &v12);
                if (v32)
                    return v32;
                v13 = v0;
                v33 = a1.write_all(&v13, 1);
                v27 = v31;
                if (v33)
                    return v33;
            }
            v34 = v2;
            v35 = v34 + 48;
            if (v34 == v9)
                v36 = v34;
            else
                v36 = v35;
            v23 = v36;
            v3 = v2;
            v26 = v5;
        } while (v34 != v9);
        return 0;
    }
    else
    {
        if (!v4)
        {
            v4 = v25->field_120;
            v6 = v25->field_128;
        }
        v11 = a0->field_40;
        v10 = a2[8];
        v38 = v24;
        do
        {
            v39 = v38;
            v8 = v23;
            while (true)
            {
                v40 = v39;
                v41 = v40 + 48;
                if (v40 == v7)
                {
                    v42 = v40;
                    if (v42 == v7)
                        break;
                }
                else
                {
                    v42 = v41;
                    if (v40 == v7)
                        break;
                }
                v43 = v42;
                v44 = a1.write_all(v4, v6);
                if (v44)
                    return v44;
                v45 = v25->field_108.print_fields(v25->field_110, a1, v3, v11);
                if (v45)
                    return v45;
                v46 = v25->field_108.print_fields(v25->field_110, a1, v40, v10);
                if (v46)
                    return v46;
                v12 = v0;
                v47 = a1.write_all(&v12, 1);
                v39 = v43;
                if (v47)
                    return v47;
            }
            v48 = v8;
            v49 = v48 + 48;
            v3 = v48;
            if (v48 == v9)
                v50 = v48;
            else
                v50 = v49;
            v23 = v50;
            v38 = v5;
        } while (v48 != v9);
        return 0;
    }
}
