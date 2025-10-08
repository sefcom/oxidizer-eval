long long uu_wc::Input::to_title(unsigned long long a0[3], void* a1)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long v4;  // r15
    unsigned long long v5;  // r14
    char v6;  // al
    unsigned long long v7;  // rax

    if (*((long long *)a1) != 9223372036854775809)
    {
        v4 = (long long)a1[8];
        v5 = (long long)a1[16];
        v0.from_utf8_lossy(v4, v5);
        v6 = v1.is_contained_in(*((long long *)&v2));
        v7 = (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
        if (!v6)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v4;
            a0[2] = v5;
            return v7;
        }
        return uucore::features::quoting_style::escape_name(a0, v4, v5, &g_41a13f);
    }
    else if ((char)a1[8])
    {
        a0[0] = 9223372036854775809;
        return 9223372036854775809;
    }
    else
    {
        a0[0] = 0x8000000000000000;
        a0[1] = "-";
        a0[2] = 1;
        return "-";
    }
}
