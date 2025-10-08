long long ruff_python_formatter::expression::expr_number_literal::normalize_integer(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x1a8]
    void* v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    void* v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    void* v6;  // [bp-0x58]
    void* v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    void* v9;  // [bp-0x38]
    void* v11;  // r13
    unsigned int v12;  // edx
    unsigned long long v13;  // rax
    unsigned int v14;  // eax
    char v15;  // bpl
    unsigned long long v16;  // rax
    unsigned int v17;  // r13d
    unsigned int v18;  // r13d
    unsigned long long v19;  // rax
    unsigned long long v21;  // rax
    unsigned long long v23;  // 4096
    unsigned long long v24;  // r12

    v11 = a0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v6 = 0;
    v4 = a1;
    v5 = a1 + a2;
    v4.next();
    if (v12 != 48)
    {
        *((unsigned long long *)&v11[8]) = a1;
        *((unsigned long long *)&v11[16]) = a2;
        *((unsigned long long *)v11) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v1);
    }
    v13 = v4.next();
    switch (v12)
    {
    case 88: case 120:
        v15 = 1;
        v14 = v12 - 66;
        if (v14 <= 22)
            goto LABEL_70bbb8;
        break;
    case 1114112:
        *((unsigned long long *)&v11[8]) = a1;
        *((unsigned long long *)&v11[16]) = a2;
        *((unsigned long long *)v11) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v1);
    default:
        v14 = v12 - 66;
        if (v14 <= 22)
        {
LABEL_70bbb8:
            *((unsigned int **)&v0) = &g_402001;
            if ((*((char *)&v0 + ((v14 & 31) >> 3)) >> ((char)v14 & 31 & 7) & 1))
            {
                v1.push(48);
                v1.push(v12 | 32);
                v24 = v13 + 1;
                if (!v15)
                {
                    if (!v24)
                    {
                        *((unsigned long long *)&v11[8]) = a1;
                        *((unsigned long long *)&v11[16]) = a2;
                        *((unsigned long long *)v11) = 0x8000000000000000;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v1);
                    }
                    goto LABEL_70bc2c;
                }
            }
        }
    }
    if (v15)
    {
        v24 = 0;
        v7 = a0;
        v9 = 0;
        memcpy(&v8, &v4, 16);
        v16 = v8.next();
        if (v12 != 0x110000)
        {
            do
            {
                v18 = v17;
                if (v18 - 97 < 6)
                {
                    v19 = v24.get(v16, a1, a2);
                    if (!v19)
                        core::str::slice_error_fail(a1, a2, v24, v16, &g_97db00); /* do not return */
                    v1.spec_extend(v19, v12 + v19);
                    v1.push(v18 & 71);
                    v24 = v16 + 1;
                }
                v16 = v8.next();
                v17 = v12;
            } while (v12 != 0x110000);
        }
        v11 = v7;
        if (v24)
        {
LABEL_70bc2c:
            v21 = v24.get(a1, a2);
            if (!v21)
            {
                v23 = a2;
                core::str::slice_error_fail(a1, a2, v24, v23, &g_97dae8); /* do not return */
            }
            v1.spec_extend(v21, v12 + v21);
            *((unsigned long long *)&v11[16]) = 0;
            *((int128_t *)v11) = *((int128_t *)&v1);
            return 0;
        }
    }
}
