long long uu_fmt::parasplit::FileLines::match_prefix_generic(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned int v5;  // ebp
    unsigned long long v6;  // rax
    unsigned int v7;  // edx
    unsigned int v8;  // r15d
    unsigned int v9;  // r15d
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax

    v4 = core::slice::<impl [T]>::starts_with(a2, a3, a0, a1);
    if (a4 || (char)v4)
    {
        v5 = v4;
    }
    else
    {
        v0 = a2;
        v1 = a2 + a3;
        v2 = 0;
        v6 = v0.next();
        if (v7 == 0x110000)
            return 0;
        while (true)
        {
            v9 = v8;
            v10 = v6.get(a2, a3);
            if (!v10)
                core::str::slice_error_fail(a2, a3, v6, a3, &g_4f04a8); /* do not return */
            v12 = core::slice::<impl [T]>::starts_with(v10, v11, a0, a1);
            v5 = v12;
            if ((char)v12)
                return v12 & 4294967295;
            if (v9 - 9 >= 5 && v9 != 32 && (v9 < 128 || !(char)::0x45f200::core::unicode::unicode_data::white_space::lookup(v9)))
                break;
            v6 = v0.next();
            v8 = v11;
            if (v7 == 0x110000)
                break;
        }
    }
    return v5;
}
