long long uu_tail::follow::watch::Observer::init_files(struct_0 *a0, unsigned long long a1[6], unsigned long a2)
{
    void* v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    unsigned long long v16;  // r13
    unsigned long long v17[6];  // rax
    unsigned long long v18[6];  // rsi
    unsigned long long v19[6];  // r15
    unsigned long long v20;  // rbp
    unsigned long long v21;  // r12
    unsigned long v22;  // r14
    unsigned long long v23;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v27[6];  // r15
    unsigned long long v30;  // rdx

    if (a0->field_0 != 3 && a2)
    {
        v16 = &a1[a2];
        v17 = a1 + 1;
        v10 = a0 + 1;
        v0 = 0;
        v9 = &g_572f18;
        while (true)
        {
            v18 = a1;
            v19 = v17;
            if (v18[3] != 0x8000000000000000)
            {
                v3.clone(v18[4], v18[5]);
                v20 = v3;
                v21 = v6;
                v22 = v7;
                v23 = v20;
                if (!(char)v21.is_absolute(v22))
                {
                    std::env::current_dir(&v3);
                    if (v3 != 0x8000000000000000)
                    {
                        v2 = v20;
                        v5 = v21;
                        v8 = v22;
                        v11.join(v6, v7, &v2);
                        v21 = v13;
                        v22 = *((long long *)&v14);
                        core::ptr::drop_in_place<std::path::PathBuf>(v3, v6);
                        v1 = v2;
                        v4 = v5;
                        v7 = v8;
                        v23 = v11;
                    }
                    else
                    {
                        v25 = v6.from();
                        v23 = v2;
                        v21 = v5;
                        break;
                    }
                }
                if ((char)v21.is_tailable(v22))
                {
                    v23 = v23;
                    v21 = v21;
                    if (a0->field_10.watch_with_parent(a0->field_18, v21, v22))
                        break;
                    else
                        goto LABEL_4a3e04;
                }
                else if (v21.is_orphan(v22))
                {
                    v3 = v23;
                    v6 = v21;
                    v7 = v22;
                    v10.push(&v3, &g_573598);
                }
                else
                {
                    if (!v21.parent(v22))
                        core::option::unwrap_failed(&g_573580); /* do not return */
                    v25 = a0->field_10.watch(a0->field_18);
                    if (v25)
                    {
                        v0 = v25;
                        core::ptr::drop_in_place<std::path::PathBuf>(v23, v21);
                        return v0;
                    }
LABEL_4a3e04:
                    core::ptr::drop_in_place<std::path::PathBuf>(v23, v21);
                }
            }
            if (v19 == v16)
            {
                v27 = v19;
                if (v27 == v16)
                    return v0;
            }
            else
            {
                v27 = v19 + 1;
                if (v19 == v16)
                    return v0;
            }
            a1 = v19;
            if (!a1)
                return v0;
        }
        v9 = v30;
        v0 = v25;
        core::ptr::drop_in_place<std::path::PathBuf>(v23, v21);
        return v0;
    }
    v0 = 0;
    return 0;
}
