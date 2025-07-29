long long uu_tee::process_error(char *a0, unsigned long long a1, unsigned long long a2[3], unsigned long long *a3)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char *v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    void* v5;  // [bp-0x70]
    char *v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x30]
    char v13;  // [bp-0x28]
    unsigned long long v15;  // rdx

    v0 = a1;
    if (a0)
    {
        goto (long long)(g_415e88[*(a0)] + (char *)&g_415e88[0]);
    }
    else
    {
        if ((char)a1.kind() != 11)
        {
            v10 = uucore::util_name();
            v11 = v15;
            v6 = &v10;
            v7 = <&T as core::fmt::Display>::fmt;
            v1 = &g_57b030;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint(&v1);
            v10 = 0;
            v11 = a2[1];
            v12 = a2[2];
            v13 = 0;
            v6 = &v10;
            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = &v0;
            v9 = <std::io::error::Error as core::fmt::Display>::fmt;
            v1 = &g_57b050;
            v2 = 3;
            v5 = 0;
            v3 = &v6;
            v4 = 2;
            std::io::stdio::_eprint(&v1);
            *(a3) = *(a3) + 1;
        }
        ::0x49da00::core::ptr::drop_in_place<std::io::error::Error>(v0);
        return 0;
    }
}
