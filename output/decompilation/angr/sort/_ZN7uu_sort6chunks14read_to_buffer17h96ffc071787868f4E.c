long long uu_sort::chunks::read_to_buffer(unsigned long a0, unsigned long long a1[2], unsigned long long a2[3], unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    struct_0 *v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char v6;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x38]
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned long long v13[2];  // 4096
    unsigned long long v14[2];  // r15
    unsigned long long v15[2];  // rcx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // r15
    unsigned long v18;  // r13
    unsigned long v19;  // r12
    unsigned long v20;  // rbp
    unsigned long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long v26;  // rbp
    unsigned long long v27;  // rax
    unsigned long v28;  // rsi
    char *v29;  // rbp
    unsigned long v30;  // rdi

    v7 = a3;
    v11 = a2[2] - a5;
    if (a2[2] < a5)
        core::slice::index::slice_start_index_len_fail(a5, a2[2], &g_671f18); /* do not return */
    v12 = a5 + a2[1];
    v8 = a4 >> 1;
    v13 = a1;
    v14 = v13;
    v1 = v11;
    while (true)
    {
LABEL_530c90:
        v15 = v14;
        v17 = v16;
        if ((unsigned long long)v14[0].read(v14[1], v12, v11))
            break;
        v18 = v15[0];
        v19 = v15[1];
        if (!(!((char)v7 & 1)))
            continue;
        if (v16)
        {
            v11 -= v17;
            if (v11 < v17)
                core::slice::index::slice_start_index_len_fail(v17, v11, &g_671e78); /* do not return */
            v12 += v17;
            v14 = a1;
            continue;
        }
        else if (!v11)
        {
            v20 = a2[2];
        }
        else
        {
            v27 = v1;
            if (v1 != v11)
            {
                v28 = a2[2];
                v29 = v28 - v11;
                v30 = v29 + 1;
                if (v30 >= v28)
                    core::panicking::panic_bounds_check(v30, v28, &g_671e30); /* do not return */
                if (*((char *)(a2[1] + v30)) != a6)
                {
                    if (v28 >= v11)
                    {
                        v29[a2[1]] = a6;
                        v11 -= 1;
                        v28 = a2[2];
                        v29 = v28 - v11;
                    }
                    else
                    {
                        core::panicking::panic_bounds_check(v29, v28, &g_671e48); /* do not return */
                    }
                }
                v27 = v11;
                if (v11 > v28)
                    core::slice::index::slice_start_index_len_fail(v29, v28, &g_671e60); /* do not return */
                v12 = &v29[a2[1]];
            }
        }
        v24 = a2[1];
        v3 = v24;
        v4 = v24;
        v5 = v20 + v24;
        v6 = a6;
        v25 = v3.next_back(&v6);
        if (v3.next_back(&v6) != 1)
        {
            v26 = a2[2];
            a2.resize(v26 + 0x2800, 0);
            v11 = a2[2] - v26;
            if (a2[2] < v26)
                core::slice::index::slice_start_index_len_fail(v26, a2[2], &g_671e18); /* do not return */
            v12 = v26 + a2[1];
            v14 = a1;
        }
        else if (v25)
        {
            v0->field_8 = v16 + 1;
            v0->field_10 = 1;
            v0->field_0 = 0;
            return a0;
        }
        else
        {
            core::option::unwrap_failed(&g_671de8); /* do not return */
        }
    }
    if ((char)v17.kind() != 35)
    {
        v2 = v17;
        v9.spec_to_string(&v2);
        v6 = 2;
        memcpy(&v3, &v9, 16);
        v5 = *((long long *)&v10);
        *((double *)&v0->field_8) = v3.new();
        *((char **)&v0->field_10) = &g_671eb0;
        v0->field_0 = 1;
        return (unsigned long long)::0x52e0a0::core::ptr::drop_in_place<std::io::error::Error>(v2);
    }
    ::0x52e0a0::core::ptr::drop_in_place<std::io::error::Error>(v17);
    v14 = a1;
    goto LABEL_530c90;
}
