long long fish::wcstringutil::subsequence_in_string(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x5c]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned long long v10;  // [bp-0x10]
    unsigned long long v12;  // r15
    unsigned long long v13;  // r14
    unsigned long long v14;  // r13
    unsigned long long v15;  // r12
    unsigned long long v16;  // rbx
    unsigned int v17;  // eax
    unsigned int v18;  // edx
    unsigned int v19;  // ebp
    unsigned int v20;  // ebp
    unsigned long long v21;  // rax
    unsigned long v23;  // rax

    if (a1 > a3)
    {
        return 0;
    }
    else if (a1)
    {
        v10 = v12;
        v9 = v13;
        v8 = v14;
        v7 = v15;
        v6 = v16;
        v1 = a0;
        v2 = a0 + a1 * 4;
        v3 = 1114113;
        v4 = a2;
        v5 = a2 + a3 * 4;
        if ((int)v4.next() == 2)
            return v3.get_or_insert_with(&v1) & 0xffffffffffffff00 | v3 == 0x110000;
        do
        {
            v20 = v19;
            v17.unwrap(v20, &g_14bd1b0);
            v0 = v20;
            v1.next_if(&v0);
            v21 = v3.get_or_insert_with(&v1);
            if (v3 == 0x110000)
                return v21 & 0xffffffffffffff00 | 1;
            v17 = v4.next();
            v19 = v18;
        } while (v17 != 2);
        return v3.get_or_insert_with(&v1) & 0xffffffffffffff00 | v3 == 0x110000;
    }
    else
    {
        return v23 & 0xffffffffffffff00 | 1;
    }
}
