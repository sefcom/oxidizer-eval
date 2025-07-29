long long uu_sort::chunks::read_to_buffer(unsigned long a0, unsigned int *a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    struct_0 *v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char v4;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x38]
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rdx
    unsigned long long v14;  // r12
    unsigned long v15;  // rbp
    unsigned long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long v20;  // rbp
    unsigned long v21;  // rsi
    char *v22;  // rbp
    unsigned long v23;  // rdi

    v7 = a3;
    v11 = a2[2] - a5;
    if (a2[2] < a5)
        core::slice::index::slice_start_index_len_fail(a5, a2[2], &g_671f18); /* do not return */
    v12 = a5 + a2[1];
    v8 = a4 >> 1;
    v6 = v11;
    while (true)
    {
LABEL_530480:
        v14 = v13;
        if (a1.read(v12, v11))
            break;
        if (!(!((char)v7 & 1)))
            continue;
        if (v13)
        {
            v11 -= v14;
            if (v11 < v14)
                core::slice::index::slice_start_index_len_fail(v14, v11, &g_671e78); /* do not return */
            v12 += v14;
            continue;
        }
        else if (!v11)
        {
            v15 = a2[2];
        }
        else
        {
            v11 = v6;
            if (v6 != v11)
            {
                v21 = a2[2];
                v22 = v21 - v11;
                v23 = v22 + 1;
                if (v23 >= v21)
                    core::panicking::panic_bounds_check(v23, v21, &g_671e30); /* do not return */
                if (*((char *)(a2[1] + v23)) != a6)
                {
                    if (v21 >= v11)
                    {
                        v22[a2[1]] = a6;
                        v11 -= 1;
                        v21 = a2[2];
                        v22 = v21 - v11;
                    }
                    else
                    {
                        core::panicking::panic_bounds_check(v22, v21, &g_671e48); /* do not return */
                    }
                }
                if (v11 > v21)
                    core::slice::index::slice_start_index_len_fail(v22, v21, &g_671e60); /* do not return */
                v12 = &v22[a2[1]];
            }
        }
        v18 = a2[1];
        v1 = v18;
        v2 = v18;
        v3 = v15 + v18;
        v4 = a6;
        v19 = v1.next_back(&v4);
        if (v1.next_back(&v4) != 1)
        {
            v20 = a2[2];
            a2.resize(v20 + 0x2800, 0);
            v11 = a2[2] - v20;
            if (a2[2] < v20)
                core::slice::index::slice_start_index_len_fail(v20, a2[2], &g_671e18); /* do not return */
            v12 = v20 + a2[1];
        }
        else if (v19)
        {
            v0->field_8 = v13 + 1;
            v0->field_10 = 1;
            v0->field_0 = 0;
            return a0;
        }
        else
        {
            core::option::unwrap_failed(&g_671de8); /* do not return */
        }
    }
    if ((char)v14.kind() != 35)
    {
        v5 = v14;
        v9.spec_to_string(&v5);
        v4 = 2;
        memcpy(&v1, &v9, 16);
        v3 = *((long long *)&v10);
        *((double *)&v0->field_8) = v1.new();
        *((char **)&v0->field_10) = &g_671eb0;
        v0->field_0 = 1;
        return (unsigned long long)::0x52e0a0::core::ptr::drop_in_place<std::io::error::Error>(v5);
    }
    ::0x52e0a0::core::ptr::drop_in_place<std::io::error::Error>(v14);
    goto LABEL_530480;
}
