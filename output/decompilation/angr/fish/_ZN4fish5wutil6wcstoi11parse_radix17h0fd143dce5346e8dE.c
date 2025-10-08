long long fish::wutil::wcstoi::parse_radix(void* a0, unsigned long long a1, unsigned long long a2, char a3, unsigned int a4, char a5)
{
    unsigned long long v0;  // [bp-0x98]
    void* v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x88]
    unsigned int v3;  // [bp-0x84]
    void* v4;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x78]
    char *v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x68], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x60]
    void* v9;  // [bp-0x50]
    void* v10;  // [bp-0x48]
    char *v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    void* v14;  // rbx
    unsigned long long v15;  // rdx
    unsigned int v16;  // eax
    unsigned int v18;  // r12d
    void* v19;  // rbp
    unsigned int v20;  // eax
    void* v21;  // rax
    void* v22;  // r14
    unsigned int v23;  // r12d
    char v24;  // r13b
    unsigned int v25;  // eax
    unsigned long v26;  // r12
    unsigned int v27;  // ecx
    void* v29;  // rax
    void* v30;  // r14
    unsigned int v31;  // eax
    unsigned long long v33;  // cc_ndep

    v14 = a0;
    if ((a3 & 1))
    {
        v3 = a4;
        if (!(char)g_9f9bb8.contains(a4))
        {
            v11 = &v3;
            v12 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v4 = &g_14c13f0;
            v5 = 1;
            v8 = 0;
            v6 = &v11;
            v7 = 1;
            core::panicking::panic_fmt(&v4, &g_14c1400); /* do not return */
        }
    }
    v5 = a1.map(a2);
    v6 = v15;
    v7 = 1114113;
    v4 = 0;
    while (true)
    {
        v16 = v4.peek();
        switch (v16)
        {
        case 32:
LABEL_12ec7c0:
            v4.next();
            break;
        case 1114112:
LABEL_12ec7f6:
            v21 = v4.peek();
            if ((unsigned int)v21 == 0x110000)
            {
                *((char *)a0) = 1;
                *((char *)&v14[16]) = 2;
                return v21;
            }
            goto LABEL_12ec80f;
        default:
            if (v16 - 9 < 5 || v16 >= 128 && (char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v16))
                goto LABEL_12ec7c0;
            else
                goto LABEL_12ec7f6;
        }
    }
LABEL_12ec80f:
    if ((int)v4.peek() == 43 || (int)v4.peek() == 45)
    {
        v18 = v4.peek();
        v21 = v4.next();
        if (v18 == 0x110000)
            goto LABEL_12ec844;
        v23 = v18 & 0xffffff00 | v18 == 45;
        if ((v18 == 45 & a5))
        {
            *((char *)v14) = 2;
            *((char *)&v14[16]) = 2;
            return v21;
        }
        v24 = 2;
        v22 = 0;
        if (!(a3 & 1))
            goto LABEL_12ec853;
LABEL_12ec8c6:
        v0 = 0;
    }
    else
    {
LABEL_12ec844:
        v23 = 0;
        v24 = 2;
        v22 = 0;
        if ((a3 & 1))
            goto LABEL_12ec8c6;
LABEL_12ec853:
        if ((int)v4.peek() == 48)
        {
            v4.next();
            v19 = v4;
            v20 = v4.peek();
            if ((v20 | 32) == 120)
            {
                v9 = v19;
                v0 = v4.next() & 0xffffffffffffff00 | 1;
                a4 = 16;
            }
            else
            {
                if (v20 == 0x110000)
                    v20 = 0;
                v21 = "0".contains(v20);
                if (!(char)v21)
                {
                    *((unsigned long long *)a0) = 0;
                    *((void* *)&a0[8]) = v19;
                    *((char *)&v14[16]) = v24;
                    return v21;
                }
                v9 = v19;
                v0 = v21 & 0xffffffffffffff00 | 1;
                a4 = 8;
            }
        }
        else
        {
            a4 = 10;
            v0 = 0;
        }
    }
    v2 = v23;
    v1 = a0;
    v10 = v4;
    v25 = v4.peek();
    if (v25 == 0x110000)
        v25 = 0;
    if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v25, a4) & 1))
    {
        v26 = a4;
        v22 = 0;
        do
        {
            v29 = v22;
            v21 = v29 * v26;
            if ((char)_ccall(0, 48, v29, v26, v33))
            {
                *((char *)v1) = 0;
                *((char *)&v1[16]) = 2;
                return v21;
            }
            v30 = v21;
            v21 = v27;
            if ((char)__CFADD__(v30, v21))
            {
                *((char *)v1) = 0;
                *((char *)&v1[16]) = 2;
                return v21;
            }
            v22 = v30 + v21;
            v4.next();
            v31 = v4.peek();
            if (v31 == 0x110000)
                v31 = 0;
            v27 = v15;
        } while (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v31, a4) & 1));
    }
    v21 = v4;
    if (v21 != v10)
    {
        *((void* *)v1) = v22;
        *((void* *)&v1[8]) = v21;
        *((char *)&v1[16]) = (char)v2 & v22;
        return v21;
    }
    v14 = v1;
    if (!(char)v0)
    {
        *((char *)v14) = 2;
        *((char *)&v14[16]) = 2;
        return v21;
    }
    *((unsigned long long *)v14) = 0;
    *((void* *)&v14[8]) = v9;
    *((char *)&v14[16]) = v24;
    return v9;
}
