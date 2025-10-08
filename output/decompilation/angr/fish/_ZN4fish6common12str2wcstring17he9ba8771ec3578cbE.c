long long fish::common::str2wcstring(struct_0 *a0, char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x118]
    void* v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    void* v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    struct_1 *v5;  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe8]
    unsigned short v7[4];  // [bp-0xe8]
    unsigned short v8[4];  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    uint128_t v11;  // [bp-0xd0]
    uint128_t v12;  // [bp-0xb8]
    uint128_t v13;  // [bp-0xa8]
    uint128_t v14;  // [bp-0x98]
    uint128_t v15;  // [bp-0x88]
    uint128_t v16;  // [bp-0x78]
    uint128_t v17;  // [bp-0x68]
    uint128_t v18;  // [bp-0x58]
    uint128_t v19;  // [bp-0x48]
    void* v21;  // rbx
    char *v22;  // rbp
    unsigned long long v23;  // r13
    char *v24;  // r13
    unsigned long long v26;  // rax
    unsigned long v27;  // rdx
    unsigned long v28;  // r14
    char *v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long v31;  // rsi

    if (!a2)
    {
        a0->field_0 = 0;
        a0->field_8 = 4;
        a0->field_10 = 0;
        return a0;
    }
    v1 = 0;
    v2 = 4;
    v3 = 0;
    v1.reserve(a2);
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v21 = 0;
    v0 = &g_14c0d50;
    do
    {
        v22 = a1;
        v23 = fish::common::count_ascii_prefix(v21 + v22, a2 - v21);
        v24 = v23 + v21;
        if ((char)__CFADD__(v23, v21))
            core::panicking::panic_const::panic_const_add_overflow(v0); /* do not return */
        core::str::converts::from_utf8(&v6, v21.index(v24, v22, a2, &g_14c0d68), a2);
        v26 = v6.unwrap(&g_14c0d80);
        v1.extend(v26, v27 + v26);
        if (a2 < v24)
        {
            v6 = &g_14c0d40;
            v9 = 1;
            v10 = 8;
            v11 = 0;
            core::panicking::panic_fmt(&v6, &g_14c0d98); /* do not return */
        }
        if (a2 == v24)
            break;
        v28 = a2 - v24;
        if (a2 <= v24)
            core::panicking::panic_bounds_check(v24, a2, &g_14c0db0); /* do not return */
        v29 = v22;
        if (*((char *)(v22 + v24)) <= 247)
        {
            *((unsigned int *)&v7) = 0;
            v30 = mbrtowc(&(unsigned long long)v7, v29 + v24, v28, &v12);
            v31 = (unsigned long long)v8;
            v6 = v8;
            if (!(unsigned int)(v31 - 64976) < 32 && !((unsigned int)v31 ^ 0xd800) - 0x110000 < -0x10f800)
            {
                v6 = v8;
                if (!18446744073709551614 <= v30 && !(unsigned int)(v31 - 0xf500) < 0x200)
                {
                    v6 = v8;
                    if (v30 <= v28)
                    {
                        v4 = v30;
                        if (v30)
                        {
                            v1.push(v31);
                            v21 = &v24[v4];
                            if (!((char)__CFADD__(v24, v4)))
                            {
                                v6 = v8;
                                a1 = v29;
                                if (v21 < a2)
                                    continue;
                            }
                            else
                            {
                                v0 = &g_14c0dc8;
                                goto LABEL_0x12e68f0;
                            }
                        }
                        else
                        {
                            v1.push(0);
                            v6 = v8;
                            continue;
                        }
                    }
                }
            }
        }
        v1.push((unsigned int)fish::wchar::encode_byte_to_char(*((char *)(v22 + v24))));
        v21 = v24 + 1;
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v16 = 0;
        v15 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        a1 = v29;
    } while (v21 < a2);
    v5->field_10 = 0;
    v5->field_0 = *((int128_t *)&v1);
    return v5;
}
