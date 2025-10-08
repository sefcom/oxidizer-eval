long long check_docs::search_for_pattern(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    char *v2;  // [sp-0x198], Other Possible Types: char
    unsigned long long v3;  // [bp-0x190]
    unsigned long long v4;  // [bp-0x188]
    char v5;  // [bp-0x160]
    char v6;  // [bp-0x148]
    char v7;  // [bp-0x130]
    char v8;  // [bp-0x128], Other Possible Types: unsigned long long
    int v9;  // [bp-0x120], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110]
    void* v12;  // [bp-0x108]
    char v13;  // [bp-0x48]

    v0 = a1;
    v1 = a2;
    v8.new("grepb");
    v8.arg("-H-n-r--binary-files=without-match--exclude-dir=check-docsfailed grep commandFailed running `find` command for pattern ", 2);
    v8.arg("-n-r--binary-files=without-match--exclude-dir=check-docsfailed grep commandFailed running `find` command for pattern ", 2);
    v8.arg("-r--binary-files=without-match--exclude-dir=check-docsfailed grep commandFailed running `find` command for pattern ", 2);
    v8.arg("--binary-files=without-match--exclude-dir=check-docsfailed grep commandFailed running `find` command for pattern ", 28);
    v8.arg("--exclude-dir=check-docsfailed grep commandFailed running `find` command for pattern ", 24);
    v8.arg(a1, a2);
    v8.arg(a3, a4);
    v2.output(&v8);
    v5.expect(&v2, "failed grep commandFailed running `find` command for pattern ", 19, &g_5d36a8);
    core::ptr::drop_in_place<std::process::Command>(&v8);
    if (*((int *)&v7))
    {
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v8 = &g_5d3688;
        v9 = 2;
        v12 = 0;
        v10 = &v2;
        v11 = 1;
        v13.map_or_else(0, a2, &v8);
        *((long long *)&a0[8]) = v13.msg();
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
    }
    else
    {
        v8.from_utf8(&v5);
        memcpy(&v2, &(char)v9, 16);
        v4 = v11;
        if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        {
            *((unsigned long long *)&a0[16]) = v4;
            *((int128_t *)a0) = *((int128_t *)&v2);
        }
        else
        {
            v11 = v4;
            *((int128_t *)&v9) = *((int128_t *)&v2);
            *((long long *)&a0[8]) = v8.from();
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v6);
    return a0;
}
