long long fish::wutil::wcstoi::fish_wcstoul(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x34]
    char v4;  // [bp-0x2c]
    unsigned long long v6;  // 4096
    unsigned long long v7;  // r14
    unsigned int v8;  // eax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    char v11;  // bpl
    unsigned long long v12;  // r15
    unsigned long long v13;  // r15
    unsigned int v14;  // eax

    if (!a2)
    {
        *((unsigned short *)a0) = 513;
        return a0;
    }
    v6 = a2;
    while (true)
    {
        v7 = v6;
        v8 = a1.char_at(v7, 0);
        if (v8 - 9 >= 5 && v8 != 32 && (v8 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v8)))
            break;
        a1 = a1.slice_from(v7, 1);
        v6 = v9;
        if (!v6)
        {
            *((unsigned short *)a0) = 513;
            return a0;
        }
    }
    if ((int)a1.char_at(v7, 0) == 45)
    {
        *((unsigned short *)a0) = 513;
        return a0;
    }
    v4 = 0;
    v3 = 42949672961;
    v0 = 0;
    fish::wutil::wcstoi::wcstoi_impl(&v1, a1, a1 + v7 * 4, &v3, &v0);
    if (!v1)
    {
        v10 = a1.slice_from(v7, v0);
        if (!v9)
        {
            *((long long *)&a0[8]) = *((long long *)&v2);
            *((char *)a0) = 0;
            return a0;
        }
        v11 = 2;
        while (true)
        {
            v13 = v12;
            v14 = v10.char_at(v13, 0);
            if (v14 - 9 >= 5 && v14 != 32 && (v14 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v14)))
                break;
            v10 = v10.slice_from(v13, 1);
            v9 = v9;
            if (!v9)
            {
                *((long long *)&a0[8]) = *((long long *)&v2);
                *((char *)a0) = 0;
                return a0;
            }
        }
    }
    *((char *)&a0[1]) = v11;
    *((char *)a0) = 1;
    return a0;
}
