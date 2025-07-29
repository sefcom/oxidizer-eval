long long uu_shuf::shuf_exec(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3[3])
{
    char v0;  // [bp-0x51]
    unsigned long long v1;  // [bp-0x50], Other Possible Types: char
    unsigned long long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x38]
    unsigned long long v5;  // rbp
    char v6;  // r12b
    void* v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    char v16;  // bpl
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    if (!a1->field_38)
    {
        v1 = a0.partial_shuffle(a2, a1->field_30);
        v2 = v14;
        if (v1.next())
        {
            v16 = a1->field_39;
            do
            {
                v18 = v15.write_all_to(v17, a3).map_err_context();
                if (v18)
                    return v18;
                v0 = v16;
                v19 = a3[2];
                if (a3[0] - v19 > 1)
                {
                    *((char *)(a3[1] + v19)) = v16;
                    a3[2] = v19 + 1;
                    v20 = 0.map_err_context();
                    if (v20)
                        return v20;
                }
                else
                {
                    v21 = a3.write_all_cold(&v0, 1).map_err_context();
                    if (v21)
                        return v21;
                }
                v15 = v1.next();
            } while (v15);
        }
    }
    else if (a0->field_10.is_empty())
    {
        uucore::mods::locale::get_message(&v1, "shuf-error-no-lines-to-repeat", 29);
        v3 = 1;
        return v1.new();
    }
    else if (a1->field_30)
    {
        v6 = a1->field_39;
        v7 = 0;
        while (true)
        {
            v7 = v7.forward_unchecked();
            v8 = a0.choose(a2);
            v10 = v8.write_all_to(v9, a3).map_err_context();
            if (v10)
                return v10;
            v1 = v6;
            v11 = a3[2];
            if (a3[0] - v11 > 1)
            {
                *((char *)(a3[1] + v11)) = v6;
                a3[2] = v11 + 1;
                v12 = 0.map_err_context();
                if (v12)
                    return v12;
            }
            else
            {
                v13 = a3.write_all_cold(&v1, 1).map_err_context();
                if (v13)
                    return v13;
            }
            if (v7 >= v5)
                return 0;
        }
    }
    return 0;
}
