long long ruff_python_formatter::string::normalize::UnicodeEscape::normalize(void* a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    void* v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [sp-0x50]
    unsigned long long v6;  // [bp-0x48]
    void* v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned int v10;  // edx
    unsigned long long v11;  // rax
    unsigned long v12;  // rdx
    unsigned int v14;  // r15d
    void* v15;  // r15
    unsigned long long v16;  // 4096
    unsigned long long v17;  // rax
    unsigned int v18;  // edx
    unsigned int v19;  // edx
    unsigned long long v20;  // rax
    unsigned long v21;  // rdx
    unsigned long long v24;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    if ((a1 & 1))
    {
        v3 = a0;
        v7 = 0;
        v5 = a3;
        v6 = a3 + a4;
        v5.next();
        if (v10 == 123)
        {
            v4 = &g_97f7f0;
            while (true)
            {
                a2 = v5.next();
                if ((unsigned int)v12 > 44)
                    break;
                if ((unsigned int)v12 == 32)
                    goto LABEL_729110;
LABEL_7290f6:
                if ((unsigned int)v12 - 65 < 26 || (unsigned int)v12 - 48 < 10)
                {
LABEL_729110:
                    v14 = v12;
                    if (!(1))
                        goto LABEL_7290b4;
                }
                else
                {
                    if ((unsigned int)v12 - 97 > 25)
                        goto LABEL_7292b8;
                    v0.reserve(2);
                    v11 = a2.get(a3, a4);
                    if (!v11)
                    {
                        v4 = &g_97f7f0;
                        core::str::slice_error_fail(a3, a4, 0, a2, &g_97f7f0); /* do not return */
                    }
                    v0.spec_extend(v11, v12 + v11);
                    v14 = (unsigned int)v12 & 95;
LABEL_7290b4:
                    v0.push(v14);
                }
            }
            if ((unsigned int)v12 == 45)
                goto LABEL_729110;
            if ((unsigned int)v12 != 125)
            {
                if ((unsigned int)v12 == 0x110000)
                    goto LABEL_7292b8;
                goto LABEL_7290f6;
            }
            if (a2 < 3)
                goto LABEL_7292b8;
            a2 += 1;
            goto LABEL_7292f5;
        }
        else
        {
LABEL_7292b8:
            *((unsigned long long *)v3) = 9223372036854775809;
        }
    }
    else if (a4 < a2)
    {
        *((unsigned long long *)a0) = 9223372036854775809;
    }
    else
    {
        v3 = a0;
        v5 = a3;
        v6 = a3 + a4;
        v7 = 0;
        if (a2)
        {
            v4 = &g_97f7c0;
            v16 = a2;
            while (true)
            {
                v8 = v16 - 1;
                v17 = v5.next();
                if ((unsigned int)v21 == 0x110000)
                    break;
                a2 = v17;
                if ((unsigned int)v21 - 97 < 6 || (unsigned int)v21 - 48 < 10)
                {
                    v19 = v21;
                    if (1)
                        goto LABEL_7291df;
                }
                else
                {
                    if ((unsigned int)v21 - 65 >= 6)
                        goto LABEL_7292b8;
                    v0.reserve(a2);
                    v20 = a2.get(a3, a4);
                    if (!v20)
                    {
                        v4 = &g_97f7c0;
                        core::str::slice_error_fail(a3, a4, 0, a2, &g_97f7c0); /* do not return */
                    }
                    v0.spec_extend(v20, v18 + v20);
                    v19 = (unsigned int)v21 | 32;
                }
                v0.push(v19);
LABEL_7291df:
                v16 = v8;
                if (!v16)
                    break;
            }
        }
LABEL_7292f5:
        v24 = a2.get(a3, a4);
        if (!v24)
        {
            v4 = &g_97f7d8;
            v4 = &g_97f7d8;
            core::str::slice_error_fail(a3, a4, 0, a2, &g_97f7d8); /* do not return */
        }
        *((unsigned long long *)v15) = 0x8000000000000000;
        *((unsigned long long *)&v15[8]) = v24;
        *((unsigned long *)&v15[16]) = v12;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
