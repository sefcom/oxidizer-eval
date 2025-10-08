long long uu_chgrp::parse_gid_from_str(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0xa0]
    char *v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    void* v6;  // [bp-0x88]
    char *v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    char *v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdi

    v10 = a1;
    v11 = a2;
    v1 = 0;
    v17 = ::0x45e960::core::char::methods::encode_utf8_raw(&v1).strip_prefix_of(a1, a2);
    if (v17)
    {
        v12 = v17;
        v13 = v18;
        v19 = ::0x45dcd0::core::num::<impl u32>::from_ascii_radix(v17, v18);
        if (!((char)v19 & 1))
        {
            *((unsigned int *)&a0[8]) = v19 >> 32;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
        v7 = &v12;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4f4838;
        v2 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        return a0.map_or_else(&v0);
    }
    else
    {
        v1.locate(a1, a2);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v20 = ::0x45dcd0::core::num::<impl u32>::from_ascii_radix(a1, a2);
            if (((char)v20 & 1))
            {
                v14 = &v10;
                v15 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4f4858;
                v2 = 2;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                (char)v7.map_or_else(&v0);
                *((unsigned long *)&a0[16]) = v9;
                *((int128_t *)a0) = *((int128_t *)&v7);
            }
            else
            {
                *((unsigned int *)&a0[8]) = v20 >> 32;
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            v21 = 1;
        }
        else
        {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v3);
            *((int *)&a0[8]) = v5;
            *((unsigned long long *)a0) = 0x8000000000000000;
            v21 = 0;
        }
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(v21, v3);
    }
}
