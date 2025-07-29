long long uu_env::string_parser::StringParser::get_chunk_with_length_at(struct_0 *a0, unsigned long long a1[5], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    uint128_t v3;  // [bp-0x60]
    char v4;  // [bp-0x48]
    char *v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char *v8;  // r14
    unsigned int v9;  // eax
    unsigned long long v10;  // r12
    char *v11;  // r12
    char *v12;  // r12
    unsigned long long v13;  // rdx
    char v14;  // dl
    unsigned long long v15;  // rax

    if (a1[1] < a2)
    {
        v0 = &g_5aa170;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_5aa198); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v4, a1[0], a1[1], a2);
    v8 = *((long long *)&v6);
    if (v8)
    {
        v9 = uu_env::native_int_str::get_char_from_native_int(*(v5));
        if (v9 == 0x110000)
        {
            v11 = 1;
            if (v8 != 1)
            {
                while (true)
                {
                    v11 = v10;
                    if ((int)uu_env::native_int_str::get_char_from_native_int(*((char *)(v5 + v11))) != 0x110000)
                        break;
                    v10 += 1;
                    if (v8 == v10)
                    {
                        v11 = v8;
                        break;
                    }
                }
            }
            v12 = v11;
            a0->field_8 = v12.index(v5, v8, &g_5aa1b0);
            *((unsigned long long *)&a0->field_10) = v13;
            a0->field_18 = v13;
        }
        else
        {
            a0->field_8 = 0;
            *((unsigned int *)&a0->field_10) = v9;
            a0->padding_11[3] = v14;
            a0->field_18 = 1;
        }
        v15 = 0;
    }
    else
    {
        a0->field_8 = a1[4];
        a0->field_10 = 0;
        v15 = 1;
    }
    a0->field_0 = v15;
    return v15;
}
