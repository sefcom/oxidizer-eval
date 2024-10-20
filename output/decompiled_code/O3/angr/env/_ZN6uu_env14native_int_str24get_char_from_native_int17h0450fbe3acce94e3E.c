long long uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(char a0)
{
    char v0;  // [sp-0x21]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    char v6[4];  // rdx
    unsigned int v7;  // ecx
    unsigned int v8;  // edi
    unsigned int v9;  // esi

    v0 = a0;
    core::str::converts::from_utf8::ha1effb4cca6d9901(&v1, &v0, 1);
    if (*((long long *)&v1))
    {
        return 0x110000;
    }
    else if (!*((long long *)&v3))
    {
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
    else
    {
        v6 = *((long long *)&v2);
        v5 = v6[0];
        if ((char)v5 >= 0)
            return v5;
        v7 = (unsigned int)v5 & 31;
        v8 = v6[1] & 63;
        if ((v5 & 255) <= 223)
        {
            v5 = v7 * 64 | v8;
            return v5;
        }
        v9 = v6[2] & 63 | v8 * 64;
        v5 = ((v5 & 255 & 255) < 240 ? v6[3] & 63 | v9 * 64 | (v7 & 7) * 0x40000 : v9 | v7 * 0x1000);
        return v5;
    }
}
