long long fish::io::OutputStream::append_narrow_buffer(unsigned int *a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // r12
    void* v5;  // r13
    void* v6;  // r13
    unsigned long long v7;  // rbp

    if (a1[2])
    {
        v4 = a1[1];
        v5 = 0;
        do
        {
            v6 = v5;
            fish::common::str2wcstring(&v0, *((long long *)(8 + v4 + (char *)v6)), *((long long *)(16 + v4 + (char *)v6)));
            v7 = (unsigned int)a0.append_with_separation(v1, *((long long *)&v2), *(24 + v4 + (char *)v6), 0);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            v5 = v6 + 32;
        } while ((a1[2] * 32 - 32 != v6 & (char)v7));
    }
    else
    {
        v7 = vvar_35{reg 56} & 0xffffffffffffff00 | 1;
    }
    return v7 & 4294967295;
}
