long long fish::util::wcsfilecmp_glob(void* a0, unsigned long long a1, unsigned int *a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x7c]
    unsigned int *v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char v4;  // [bp-0x5c]
    char v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    unsigned long long v10;  // rbx
    unsigned int *v11;  // r13
    unsigned long long v12;  // r15
    unsigned long v13;  // rax
    unsigned long long v14;  // rax
    char *v15;  // r9
    char *v16;  // rcx
    void* v17;  // 4096
    void* v18;  // r14
    void* v19;  // rdi
    unsigned int v20;  // esi
    unsigned int v21;  // ebp
    void* v22;  // rdi
    char *v23;  // r15
    char *v24;  // rbx
    unsigned int v25;  // eax
    char v26;  // al
    void* v33;  // r12

    v10 = a3;
    v11 = a2;
    v12 = a1;
    v14 = v13 & 0xffffffffffffff00 | !a1;
    v18 = 0;
    if (!!a3 && !!a1)
    {
        v15 = &v5;
        v16 = &v4;
        v33 = 0;
        v3 = a1;
        v2 = a3;
        v1 = a2;
        v17 = a0;
        do
        {
            v19 = v17;
            v20 = *((int *)((char *)v19 + 0x4 * v18));
            v21 = *((int *)((char *)v11 + 0x4 * v33));
            v14 = v20 - 48;
            if ((unsigned int)v14 <= 9)
            {
                v14 = v21 - 48;
                if ((unsigned int)v14 < 10)
                {
                    fish::util::wcsfilecmp_leading_digits(v15, v19 + v18 * 4, v12 - v18, 0x4 * v33 + (char *)v11, v10 - v33);
                    v18 += v6;
                    if ((char)__CFADD__(v18, v6))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e44d0); /* do not return */
                    v33 += *((long long *)&v8);
                    if ((char)__CFADD__(v33, *((long long *)&v8)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e44e8); /* do not return */
                    v14 = (char)v7;
                    v19 = a0;
                    v15 = &v5;
                    v16 = &v4;
                    v22 = v19;
                    if ((v14 & 255))
                        goto LABEL_1421c2d;
                    v22 = v19;
                    if (v18 == v12)
                        goto LABEL_1421c2d;
                    v22 = v19;
                    if (v33 == v10)
                        goto LABEL_1421c2d;
                    goto LABEL_1421b1a;
                }
            }
            if (v20 == v21)
            {
                v18 += 1;
                v33 += 1;
LABEL_1421b1a:
                v22 = v19;
                if (v18 >= v12)
                    break;
                continue;
            }
            else
            {
                v23 = v15;
                v24 = v16;
                core::unicode::unicode_data::conversions::to_lower(v16, v20);
                v23.new(v24);
                v25 = v23.next();
                if (v25 == 0x110000)
                    core::option::unwrap_failed(&g_14e44a0); /* do not return */
                v0 = v25;
                core::unicode::unicode_data::conversions::to_lower(v24, v21);
                v23.new(v24);
                v14 = v23.next();
                if ((unsigned int)v14 == 0x110000)
                    core::option::unwrap_failed(&g_14e44b8); /* do not return */
                if (v0 == (unsigned int)v14)
                {
                    v18 += 1;
                    v33 += 1;
                    v11 = v1;
                    v10 = v2;
                    v12 = v3;
                    v19 = a0;
                    v15 = &v5;
                    v16 = &v4;
                    v22 = v19;
                    if (v18 >= v12)
                        break;
                    continue;
                }
                else
                {
                    v26 = (v0 > (unsigned int)v14) - 0 - (v0 < (unsigned int)v14);
                    v14 = v14 & 0xffffffffffffff00 | v26;
                    v12 = v3;
                    v11 = v1;
                    v10 = v2;
                    v22 = a0;
LABEL_1421c2d:
                    if (v26)
                        return v14;
                    break;
                }
            }
            v22 = v19;
            v17 = v19;
        } while (v33 < v10);
    }
    else
    {
        v33 = 0;
        v22 = a0;
    }
    if (v18 == v12)
    {
        if (v33 == v10)
            return core::slice::cmp::chaining_impl(v22, v12, v11, v10);
        return v14 & 0xffffffffffffff00 | 255;
    }
    else
    {
        if (v33 != v10)
            core::panicking::panic("assertion failed: bi == b.len()wait handle already completedsrc/wait_handle.rssrc/wchar.rssrc/wcstringutil.rs", 31, &g_14e4500); /* do not return */
        return v14 & 0xffffffffffffff00 | 1;
    }
}
