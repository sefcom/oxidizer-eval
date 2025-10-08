long long fish::parse_util::parse_util_unescape_wildcards(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    struct_0 *v3;  // [bp-0x38]
    unsigned long long v5;  // rdx
    char v6;  // al
    unsigned long v7;  // r13
    unsigned int v8;  // ebp
    unsigned int v9;  // cc_dep2
    unsigned int v10;  // ebp
    unsigned int v11;  // ebp
    unsigned long v12;  // rbx
    unsigned long v14;  // rbx
    unsigned int v16;  // ebx
    unsigned int v17;  // cc_dep2
    unsigned int v18;  // ebx
    unsigned int v19;  // ebx
    unsigned long v20;  // rbp
    unsigned long v21;  // rbp

    v0 = a2.with_capacity_in(4, 4, &g_14bd1e0);
    v1 = v5;
    v2 = 0;
    v6 = fish::future_feature_flags::test(1);
    if (a2)
    {
        v7 = 0;
        if (v6)
        {
            do
            {
                v8 = a1.char_at(a2, v7);
                v9 = 42;
                if (v8 != 42)
                {
                    v9 = 92;
                    v10 = v8;
                    v11 = v8;
                    if (v10 != 92)
                        goto LABEL_13e43e5;
                    v12 = v7 + 1;
                    v11 = a1.char_at(a2, v12);
                    v9 = 42;
                    if (v11 == 42)
                    {
                        v0.push((unsigned int)a1.char_at(a2, v12));
                        v14 = v12;
                        goto LABEL_13e43ef;
                    }
                    v11 = a1.char_at(a2, v12);
                    v9 = 92;
                    v10 = v8;
                    if (v11 != 92)
                        goto LABEL_13e43e5;
                    v0.spec_extend("\\", &g_54a338);
                    v14 = v12;
LABEL_13e43ef:
                    v7 = v14 + 1;
                    if ((char)_ccall(4, 24, v14 + 1, 0, (unsigned long long)(char)(v11 < v9)))
                        goto LABEL_0x13e4522;
                    else
                        goto LABEL_13e43f8;
                }
                else
                {
                    v10 = 64993;
                    v11 = v8;
LABEL_13e43e5:
                    v0.push(v10);
                    v14 = v7;
                    goto LABEL_13e43ef;
                }
LABEL_13e43f8:
            } while (v7 < a2);
        }
        else
        {
            do
            {
                v16 = a1.char_at(a2, v7);
                v17 = 42;
                if (v16 == 42)
                {
                    v18 = 64993;
                    v19 = v16;
                    goto LABEL_13e44b5;
                }
                v17 = 63;
                if (v16 == 63)
                {
                    v18 = 64992;
                    v19 = v16;
                    goto LABEL_13e44b5;
                }
                v17 = 92;
                v18 = v16;
                v19 = v16;
                if (v18 != 92)
                    goto LABEL_13e44b5;
                v20 = v7 + 1;
                v19 = a1.char_at(a2, v20);
                v17 = 42;
                if (v19 != 42)
                {
                    v19 = a1.char_at(a2, v20);
                    v17 = 63;
                    if (v19 == 63)
                        goto LABEL_13e4479;
                    v19 = a1.char_at(a2, v20);
                    v17 = 92;
                    v18 = v16;
                    if (v19 != 92)
                    {
LABEL_13e44b5:
                        v0.push(v18);
                        v21 = v7;
                        goto LABEL_13e44bf;
                    }
                    else
                    {
                        v0.spec_extend("\\", &g_54a338);
                        v21 = v20;
LABEL_13e44bf:
                        v7 = v21 + 1;
                        if ((char)_ccall(4, 24, v21 + 1, 0, (unsigned long long)(char)(v19 < v17)))
                            goto LABEL_0x13e4522;
                        else
                            goto LABEL_13e44c4;
                    }
                }
                else
                {
LABEL_13e4479:
                    v0.push((unsigned int)a1.char_at(a2, v20));
                    v21 = v20;
                    goto LABEL_13e44bf;
                }
LABEL_13e44c4:
            } while (v7 < a2);
        }
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return v3;
}
