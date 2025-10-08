long long uu_shuf::shuf_exec(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3[3])
{
    char v0;  // [bp-0x51]
    unsigned long long v1;  // [bp-0x50], Other Possible Types: char
    unsigned long long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x38]
    unsigned long long v5;  // rbp
    char v6;  // r12b
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    void* v10;  // rax
    unsigned long v11;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    char v15;  // bpl
    unsigned long long v16;  // rdx
    unsigned long v17;  // rax

    if (!a1->field_38)
    {
        v1 = a0.partial_shuffle(a2, a1->field_30);
        v2 = v13;
        if (!v1.next())
            return 0;
        v15 = a1->field_39;
        while (true)
        {
            if (v14.write_all_to(v16, a3).map_err_context())
                break;
            v0 = v15;
            v17 = a3[2];
            if (a3[0] - v17 > 1)
            {
                *((char *)(a3[1] + v17)) = v15;
                a3[2] = v17 + 1;
                if (0.map_err_context())
                    break;
            }
            else
            {
                if (a3.write_all_cold(&v0, 1).map_err_context())
                    break;
            }
            v14 = v1.next();
            if (!v14)
                return 0;
        }
    }
    else if (a0->field_10.is_empty())
    {
        v1.to_vec("no lines to repeatwrite failed/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 18);
        v3 = 1;
        return v1.new();
    }
    else if (a1->field_30)
    {
        v6 = a1->field_39;
        while (true)
        {
            v7 = v5;
            v8 = a0.choose(a2);
            v10 = v8.write_all_to(v9, a3).map_err_context();
            if (v10)
                break;
            v1 = v6;
            v11 = a3[2];
            if (a3[0] - v11 > 1)
            {
                *((char *)(a3[1] + v11)) = v6;
                a3[2] = v11 + 1;
                if (0.map_err_context())
                    break;
            }
            else if (a3.write_all_cold(&v1, 1).map_err_context())
            {
                break;
            }
            v5 = v7 - 1;
            if (v7 == 1)
            {
                v10 = 0;
                break;
            }
        }
    }
    else
    {
        return 0;
    }
    return v10;
}
