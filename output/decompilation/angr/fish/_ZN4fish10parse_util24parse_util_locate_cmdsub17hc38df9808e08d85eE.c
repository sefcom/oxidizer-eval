void fish::parse_util::parse_util_locate_cmdsub(unsigned long long a0[4], unsigned int *a1, unsigned long long a2, unsigned long long a3, char a4, char *a5, char *a6)
{
    unsigned int v0;  // [bp-0x94]
    unsigned long long v1[4];  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    void* v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x40]
    char *v14;  // [bp-0x38]
    unsigned long long v15;  // r14
    unsigned long long v16[4];  // r12
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rcx
    char v19;  // r12b
    unsigned int v20;  // r10d
    char v21;  // al
    unsigned long v23;  // rax
    unsigned long long v24;  // rax
    char v25;  // al
    char v26;  // cl
    char v27;  // dl
    char v28;  // dl
    unsigned long long v29;  // cc_dep1
    unsigned long v30;  // rax
    unsigned int v32;  // ebx
    void* v33;  // rax
    void* v34;  // rcx
    unsigned long v35;  // rcx
    unsigned long long v36;  // rdx
    unsigned long long v37;  // cc_op
    void* v38;  // cc_dep1
    unsigned long long v39;  // cc_dep2
    unsigned long long v40;  // rax
    unsigned long v41;  // rax
    unsigned long long v42;  // rsi
    char v43;  // al
    unsigned int v44;  // ebx
    void* v45;  // cc_ndep

    v15 = a2;
    v2 = 0;
    v3 = 4;
    v4 = 0;
    v10 = 0;
    if (a5 && a2 && *(a5))
        a3 = fish::parse_util::parse_util_locate_cmdsub::process_opening_quote(a1, a2, a5, 0, &v2, a3, &v10, 0x110000).map_or(v17, a2);
    if (a3 >= a2)
    {
        v16[0] = 1;
        core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v2, v3);
        return;
    }
    v14 = a5;
    v1[0] = a0;
    v5 = &g_14dd6f0;
    v13 = &g_14dd708;
    v8 = 0;
    v44 = 0;
    do
    {
        v0 = a1[a3];
        if ((v19 & 1))
        {
            v45 = 0;
            a3 += 1;
            if (a3 < a2)
                continue;
        }
        v20 = v0;
        if (v0.slice_contains("'", 2))
        {
            v21 = fish::parse_util::parse_util_locate_cmdsub::process_opening_quote(a1, a2, v14, v44, &v2, a3, &v10, v20);
            goto LABEL_13e3605;
        }
        else
        {
            switch (v20)
            {
            case 36:
                v10 = 1;
                v11 = a3;
                break;
            case 40:
                v25 = a6;
                v26 = v8 == 1;
                v27 = v44;
                if (!v44)
                    v8 = 1;
                v28 = ~(v27 | v26);
                if (!v27 && !v26)
                    v6 = a3;
                v29 = v25 & v28;
                if ((v25 & v28))
                {
                    v30 = a3 - 1;
                    v29 = v11 == v30 & (char)v10;
                    *(a6) = v11 == v30 & (char)v10;
                    v8 = 1;
                    v6 = a3;
                }
                v45 = _ccall(17, v29, 0, v45);
                v44 += 1;
                if ((char)_ccall(0, 23, (unsigned long long)(v44 + 1), 0, _ccall(17, v29, 0, v45)))
                {
                    v5 = &g_14dd6f0;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dd6f0); /* do not return */
                }
                break;
            case 41:
                v45 = (v23 + (char *)&g_9f5228[0] <= v23 ? 1 : 0);
                v32 = v44 - 1;
                if ((char)_ccall(0, 27, (unsigned long long)(v44 - 1), 0, (v23 + (char *)&g_9f5228[0] <= v23 ? 1 : 0)))
                {
                    v13 = &g_14dd708;
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dd708); /* do not return */
                }
                v16 = v1;
                if (!v32)
                {
                    v43 = 1;
                    v44 = 0;
                    goto LABEL_13e37b4;
                }
                if (v32 < 0)
                {
                    v16[0] = 0;
                    core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v2, v3);
                    return;
                }
                v33 = v4;
                v34 = v33 * 4 + v3;
                v35 = v34 - 4;
                v44 = v32;
                if (!!v34 - 4 && !!v33)
                {
                    v44 = v32;
                    if (*((int *)v35) == v44)
                    {
                        v45 = *((int *)v35) < v32;
                        v4 = v33 - 1;
                        v21 = fish::parse_util::parse_util_locate_cmdsub::process_opening_quote(a1, a2, v14, v32, &v2, a3, &v10, 0x110000);
                        v44 = v32;
LABEL_13e3605:
                        if (!(v21 & 1))
                            goto LABEL_13e37ad;
                        v37 = 19;
                        v38 = 0;
                        v39 = 0;
                        a3 = v36;
                        continue;
                    }
                }
                break;
            case 35:
                v44 = v44;
                v24 = fish::tokenizer::comment_end(a1, a2, a3);
                if (!v24)
                {
                    v13 = &g_14dd6d8;
                    core::panicking::panic_const::panic_const_sub_overflow(0x14dd6d8); /* do not return */
                }
                v45 = _ccall(20, v24, 0, v45);
                a3 = v24 - 1;
                break;
                break;
            case 37: case 38: case 39:
                v37 = 19;
                v38 = 0;
                v39 = 0;
                goto LABEL_13e377a;
            default:
                v19 = 1;
                v37 = 7;
                v38 = v20;
                v39 = 92;
                if (v20 == 92)
                    continue;
                break;
            }
        }
LABEL_13e377a:
        v40 = a3;
        v41 = v40 + 1;
        if ((char)_ccall(4, 24, v40 + 1, 0, _ccall(v37, v38, v39, v45)))
        {
            v5 = &g_14dd750;
            core::panicking::panic_const::panic_const_add_overflow(0x14dd738); /* do not return */
        }
        v42 = 0x110000;
        if (v41 < a2)
            v42 = a1[v41];
        fish::tokenizer::is_token_delimiter(v0, v42);
        v45 = v41 < a2;
        a3 += 1;
    } while (a3 < a2);
LABEL_13e37ad:
    v16 = v1;
LABEL_13e37b4:
    v18 = (a4 | v44 <= 0) & (v44 < 0 ^ 1);
    if ((char)v18 == 1 && ((char)v8 & 1))
    {
        if (!v44)
        {
            if (!v43)
            {
                core::option::unwrap_failed(&g_14dd720); /* do not return */
            }
            else if (!((char)_ccall(4, 24, a3 + 1, 0, _ccall(17, (unsigned long long)v43, 0, v45))))
            {
                v15 = a3 + 1;
            }
            else
            {
                v5 = &g_14dd738;
                core::panicking::panic_const::panic_const_add_overflow(0x14dd738); /* do not return */
            }
        }
        v16[1] = v6;
        v16[2] = v15;
        v16[3] = !v44;
        v16[0] = 2;
        core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v2, v3);
        return;
    }
    v16[0] = v18;
    core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v2, v3);
    return;
}
