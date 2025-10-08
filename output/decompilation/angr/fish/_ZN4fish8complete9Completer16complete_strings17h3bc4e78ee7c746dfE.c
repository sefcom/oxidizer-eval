void fish::complete::Completer::complete_strings(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5, unsigned short a6, unsigned int a7)
{
    unsigned long long v0;  // [bp-0x70]
    char v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned int v7;  // eax
    void* v8;  // r13
    unsigned short v9;  // ax

    v1.to_vec(a1, a2);
    v7 = a0.expand_flags();
    if ((char)fish::expand::expand_one(&v1, v7 | a7 | 5, a0->field_38, 0))
    {
        fish::parse_util::parse_util_unescape_wildcards(&v4, v2, v3);
        if (a5)
        {
            v0 = v5;
            v8 = 0;
            do
            {
                if (*((long long *)(16 + a4 + (char *)v8)))
                {
                    v9 = a0.expand_flags();
                    fish::wildcard::wildcard_complete(*((long long *)(8 + a4 + (char *)v8)), *((long long *)(16 + a4 + (char *)v8)), v0, *((long long *)&v6), a3, &g_14d5cd0, a0, v9 | (unsigned short)a7, a6);
                }
                v8 += 56;
            } while (a5 * 56 != v8);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    return;
}
