long long fish::wildcard::wildcard_match(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x60]
    void* v1;  // [bp-0x50]
    void* v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rdx
    char v8;  // r13b
    char v9;  // al
    void* v10;  // r14
    void* v11;  // rbp
    void* v12;  // r12
    void* v13;  // r12
    void* v14;  // r14
    unsigned long v15;  // rbp

    v0 = a0[1].index(a0[2]);
    v4 = a1.as_ref();
    v6 = a1 & 0xffffffffffffff00 | 1;
    if (!v7 && !v7)
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        return (a1 & 0xffffffffffffff00 | 1) & 4294967295;
    }
    v8 = v7;
    v3 = v7 - 1;
    v9 = __CFADD__(v7, -1);
    v10 = 0;
    v11 = 0;
    v1 = 0;
    v12 = 0;
    do
    {
        v1 = v2;
        if ((v9 & 1))
        {
            v6 = (unsigned int)v4.char_at(v7, v10);
            if ((unsigned int)(v6 - 64993) < 2)
            {
                if (v10 == v3)
                    break;
                v13 = v11;
                v12 = v13 + 1;
                if ((char)_ccall(4, 24, v13 + 1, 0, (unsigned long long)(char)(v10 < v3)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e4fe0); /* do not return */
                v1 = v10;
                v14 = v10 + 1;
                v15 = v11;
                goto LABEL_14287b2;
            }
            if ((unsigned int)v6 == 64992)
            {
                if (!(v8 & 1))
                    goto LABEL_14287a0;
                if (!v11 && (int)v0.char_at(v7, 0) == 46)
                    goto LABEL_14287d4;
            }
            else if (!((v8 & 1) && (int)v0.char_at(v7, v11) == (unsigned int)v6))
            {
                goto LABEL_14287a0;
            }
            v15 = v11 + 1;
            v14 = v10 + 1;
            continue;
        }
        else
        {
LABEL_14287a0:
            v15 = v12;
            v14 = v1;
            if (v15 - 1 >= v7)
            {
LABEL_14287d4:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                return 0;
            }
        }
LABEL_14287b2:
        v10 = v14;
        v11 = v15;
        v8 = v11 < v7;
        v9 = v10 < v7;
    } while (v10 < v7 || v11 < v7);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    return (v6 & 0xffffffffffffff00 | 1) & 4294967295;
}
