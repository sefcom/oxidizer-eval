long long fish::util::wcsfilecmp(unsigned int *a0, unsigned long long a1, unsigned int *a2, unsigned long long a3)
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
    char *v16;  // rdx
    unsigned long long v17;  // r8
    unsigned int *v18;  // 4096
    void* v19;  // r14
    unsigned int *v20;  // rdi
    unsigned int v21;  // esi
    unsigned int v22;  // ebp
    unsigned int *v23;  // rdi
    char *v24;  // r15
    char *v25;  // rsi
    char *v26;  // rdi
    unsigned int v27;  // eax
    char v28;  // al
    void* v35;  // r12

    v10 = a3;
    v11 = a2;
    v12 = a1;
    v14 = v13 & 0xffffffffffffff00 | !a1;
    v19 = 0;
    if (!!a3 && !!a1)
    {
        v15 = &v5;
        v16 = &v4;
        v17 = core::unicode::unicode_data::conversions::to_upper;
        v35 = 0;
        v3 = a1;
        v2 = a3;
        v1 = a2;
        v18 = a0;
        do
        {
            v20 = v18;
            v21 = *((int *)((char *)v20 + 0x4 * v19));
            v22 = *((int *)((char *)v11 + 0x4 * v35));
            v14 = v21 - 48;
            if ((unsigned int)v14 <= 9)
            {
                v14 = v22 - 48;
                if ((unsigned int)v14 < 10)
                {
                    fish::util::wcsfilecmp_leading_digits(v15, (char *)v20 + 0x4 * v19, v12 - v19, 0x4 * v35 + (char *)v11, v10 - v35);
                    v19 += v6;
                    if ((char)__CFADD__(v19, v6))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e4458); /* do not return */
                    v35 += *((long long *)&v8);
                    if ((char)__CFADD__(v35, *((long long *)&v8)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e4470); /* do not return */
                    v14 = (char)v7;
                    v20 = a0;
                    v15 = &v5;
                    v16 = &v4;
                    v17 = core::unicode::unicode_data::conversions::to_upper;
                    v23 = v20;
                    if ((v14 & 255))
                        goto LABEL_14219d4;
                    v23 = v20;
                    if (v19 == v12)
                        goto LABEL_14219d4;
                    v23 = v20;
                    if (v35 == v10)
                        goto LABEL_14219d4;
                    goto LABEL_14218aa;
                }
            }
            if (v21 == v22)
            {
                v19 += 1;
                v35 += 1;
LABEL_14218aa:
                v23 = v20;
                if (v19 >= v12)
                    break;
                continue;
            }
            else
            {
                v24 = v15;
                core::unicode::unicode_data::conversions::to_upper();
                v25 = v16;
                v24.new(v25);
                v26 = v24;
                v27 = v24.next();
                if (v27 == 0x110000)
                    core::option::unwrap_failed(&g_14e4428); /* do not return */
                v0 = v27;
                core::unicode::unicode_data::conversions::to_upper();
                v24.new(v25);
                v14 = v24.next();
                if ((unsigned int)v14 == 0x110000)
                    core::option::unwrap_failed(&g_14e4440); /* do not return */
                if (v0 == (unsigned int)v14)
                {
                    v19 += 1;
                    v35 += 1;
                    v11 = v1;
                    v10 = v2;
                    v12 = v3;
                    v20 = a0;
                    v15 = &v5;
                    v16 = &v4;
                    v17 = core::unicode::unicode_data::conversions::to_upper;
                    v23 = v20;
                    if (v19 >= v12)
                        break;
                    continue;
                }
                else
                {
                    v28 = (v0 > (unsigned int)v14) - 0 - (v0 < (unsigned int)v14);
                    v14 = v14 & 0xffffffffffffff00 | v28;
                    v12 = v3;
                    v11 = v1;
                    v10 = v2;
                    v23 = a0;
LABEL_14219d4:
                    if (v28)
                        return v14;
                    break;
                }
            }
            v23 = v20;
            v18 = v20;
        } while (v35 < v10);
    }
    else
    {
        v35 = 0;
        v23 = a0;
    }
    if (v19 == v12)
    {
        if (v35 == v10)
            return core::slice::cmp::chaining_impl(v23, v12, v11, v10);
        return v14 & 0xffffffffffffff00 | 255;
    }
    else
    {
        if (v35 != v10)
            core::panicking::panic("assertion failed: bi == b.len()wait handle already completedsrc/wait_handle.rssrc/wchar.rssrc/wcstringutil.rs", 31, &g_14e4488); /* do not return */
        return v14 & 0xffffffffffffff00 | 1;
    }
}
