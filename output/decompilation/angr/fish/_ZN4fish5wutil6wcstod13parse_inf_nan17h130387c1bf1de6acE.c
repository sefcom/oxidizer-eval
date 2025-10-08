long long fish::wutil::wcstod::parse_inf_nan(unsigned long long a0, unsigned int a1, char a2, unsigned long long *a3)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    unsigned long v4;  // rbp
    unsigned int v5;  // eax
    char v6;  // r12b
    unsigned int v7;  // eax
    char v8;  // r13b
    unsigned int v9;  // eax
    unsigned long v10;  // r15
    char v11;  // r14b
    char v12;  // cl
    unsigned long long v13;  // r15

    v4 = a1;
    v2.take_while(a0);
    v5 = v2.next();
    if (v5 == 0x110000)
        return 0;
    v6 = (26 <= v5 - 65 ? (char)v5 : (char)v5 | 32);
    v7 = v2.next();
    if (v7 != 0x110000)
    {
        v8 = (26 <= v7 - 65 ? (char)v7 : (char)v7 | 32);
        v9 = v2.next();
        if (v9 != 0x110000)
        {
            v10 = (v4 & 4294967295) + 3;
            v11 = a2 == 45 & (char)v4;
            v12 = (26 <= v9 - 65 ? (char)v9 : (char)v9 | 32);
            if (v6 == 110 && v8 == 97 && v12 == 110)
            {
                if (!((char)__CFADD__(v10, *(a3))))
                    *(a3) = v10 + *(a3);
                else
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c1330); /* do not return */
            }
            else
            {
                if (v6 != 105)
                {
                    return 0;
                }
                else if (v8 != 110)
                {
                    return 0;
                }
                else if (v12 != 102)
                {
                    return 0;
                }
                else
                {
                    v13 = v10 + *(a3);
                    if ((char)__CFADD__(v10, *(a3)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c1300); /* do not return */
                    *(a3) = v13;
                    v0 = "initysrc/wutil/wcstoi.rs";
                    v1 = "src/wutil/wcstoi.rs";
                    if (v0.all(&v2))
                    {
                        if (!((char)__CFADD__(v13, 5)))
                            *(a3) = v13 + 5;
                        else
                            core::panicking::panic_const::panic_const_add_overflow(&g_14c1318); /* do not return */
                    }
                }
            }
            return 1;
        }
    }
    return 0;
}
