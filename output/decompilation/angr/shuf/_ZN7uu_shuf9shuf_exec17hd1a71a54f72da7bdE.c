long long uu_shuf::shuf_exec(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3[3])
{
    char v0;  // [bp-0x61]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x38]
    unsigned long long v7;  // r13
    char v8;  // r12b
    void* v9;  // rbp
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    char v17;  // bpl
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    if (!a1->field_38)
    {
        v1 = a0.partial_shuffle(a2, a1->field_30);
        v2 = v15;
        if (v1.next())
        {
            v17 = a1->field_39;
            do
            {
                v3 = v16;
                v4 = v18;
                v19 = v3.write_all_to(a3).map_err_context();
                if (v19)
                    return v19;
                v0 = v17;
                v20 = a3[2];
                if (a3[0] - v20 > 1)
                {
                    *((char *)(a3[1] + v20)) = v17;
                    a3[2] = v20 + 1;
                    v21 = 0.map_err_context();
                    if (v21)
                        return v21;
                }
                else
                {
                    v22 = a3.write_all_cold(&v0, 1).map_err_context();
                    if (v22)
                        return v22;
                }
                v16 = v1.next();
            } while (v16);
        }
    }
    else if (a0->field_10.is_empty())
    {
        uucore::mods::locale::get_message(&v3, "shuf-error-no-lines-to-repeat", 29);
        v5 = 1;
        return v3.new();
    }
    else if (a1->field_30)
    {
        v8 = a1->field_39;
        v9 = 0;
        while (true)
        {
            v9 = v9.forward_unchecked();
            v3 = a0.choose(a2);
            v4 = v10;
            v11 = v3.write_all_to(a3).map_err_context();
            if (v11)
                return v11;
            v1 = v8;
            v12 = a3[2];
            if (a3[0] - v12 > 1)
            {
                *((char *)(a3[1] + v12)) = v8;
                a3[2] = v12 + 1;
                v13 = 0.map_err_context();
                if (v13)
                    return v13;
            }
            else
            {
                v14 = a3.write_all_cold(&v1, 1).map_err_context();
                if (v14)
                    return v14;
            }
            if (v9 >= v7)
                return 0;
        }
    }
    return 0;
}
