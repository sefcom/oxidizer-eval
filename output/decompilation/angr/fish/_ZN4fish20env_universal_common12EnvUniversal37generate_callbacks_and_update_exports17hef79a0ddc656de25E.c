long long fish::env_universal_common::EnvUniversal::generate_callbacks_and_update_exports(struct_1 *a0, unsigned long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xe0]
    void* v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    void* v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc8]
    void* v5;  // [bp-0xc0]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xa8]
    int v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x88]
    int v10;  // [bp-0x80], Other Possible Types: void*
    char v11;  // [bp-0x70]
    unsigned long v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    unsigned long v15;  // r14
    unsigned long long v16;  // cc_ndep
    unsigned long long v17[3];  // rax
    unsigned long long v18[3];  // r13
    void* v19;  // rdx
    unsigned long v20;  // cc_dep1
    unsigned long long v22[3];  // rax
    unsigned long long v23[3];  // r12
    struct_0 *v24;  // r15
    char v25;  // bl
    char v26;  // al
    unsigned long long v27;  // cc_op
    unsigned long v28;  // cc_dep1
    unsigned long long v29;  // cc_op
    unsigned long long v30;  // cc_ndep

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v12 = a1 + 40;
    v13.iter(a1 + 40);
    v15 = a1 + 88;
    v1 = 0;
    v2 = &g_14d7468;
    while (true)
    {
        v17 = v13.next();
        if (v17)
        {
            v18 = v17;
            if (v15.get_inner(v17) || a2.get_inner(v18))
                continue;
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, v18[1], v18[2]);
            v9 = v7;
            v8 = v6;
            v10 = 0;
            v3.push(&v8, &g_14d7450);
            v20 = (char)v19[16] & 1;
            if (!((char)v19[16] & 1))
                continue;
            v0 = v1 + 1;
            v1 = v0;
            v16 = _ccall(17, v20, 0, v16);
            if ((char)_ccall(4, 24, v1 + 1, 0, _ccall(17, v20, 0, v16)))
                break;
        }
        else
        {
            v13.iter(a2);
            v2 = &g_14d7420;
            while (true)
            {
                do
                {
                    v22 = v13.next();
                    if (!v22)
                    {
                        *((unsigned long long *)((char *)&a0->field_8 + 8)) = 0;
                        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
                        a0->field_0 = v1;
                        return v1;
                    }
                    v23 = v22;
                } while (v15.get_inner(v22));
                v24 = v12.get_inner(v23);
                if (v24)
                {
                    v25 = (char)v19[16] ^ v24->field_28;
                    v26 = fish::env_universal_common::EnvUniversal::generate_callbacks_and_update_exports::{{closure}}(v19, &v24->padding_0[24]);
                    v27 = 17;
                    v28 = v26;
                    if (!v26)
                    {
                        v27 = 17;
                        v28 = v25 & 1;
                        if (!(v25 & 1))
                        {
                            v29 = 20;
                            if (v24)
                                goto LABEL_13a061d;
                            goto LABEL_13a05f7;
                        }
                    }
                }
                else
                {
                    v29 = 17;
                    v24 = (char)v19[16] & 1;
                    if (!((char)v19[16] & 1))
                        goto LABEL_13a062a;
                    v25 = 1;
                    v27 = 19;
                    v28 = 0;
                    v26 = 0;
                }
                v0 = v1 + 1;
                v30 = _ccall(v27, v28, 0, v16);
                if ((char)_ccall(4, 24, v1 + 1, 0, _ccall(v27, v28, 0, v16)))
                    break;
                v25 |= v26;
                v29 = 20;
                v1 = v0;
                v16 = v30;
                if (!v24)
                {
LABEL_13a05f7:
                }
                else
                {
LABEL_13a061d:
                    v29 = 17;
                    v24 = v25 & 1;
                    if (!(v25 & 1))
                        continue;
                }
LABEL_13a062a:
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v8, v23[1], v23[2]);
                v7 = v9;
                v6 = v8;
                v16 = _ccall(v29, v24, 0, v16);
                if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*((long long *)v19)) + 1, 0, _ccall(v29, v24, 0, v16)))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 20579693()
                v8 = v6;
                v9 = v7;
                *((int128_t *)&v10) = *((int128_t *)v19);
                v11 = (char)v19[16];
                v3.push(&v8, &g_14d7438);
            }
        }
    }
    core::panicking::panic_const::panic_const_add_overflow(v2); /* do not return */
}
