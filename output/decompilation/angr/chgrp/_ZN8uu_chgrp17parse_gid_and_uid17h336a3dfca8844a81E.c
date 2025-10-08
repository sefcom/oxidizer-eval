long long uu_chgrp::parse_gid_and_uid(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xc0]
    char *v3;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0xb8]
    unsigned int v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xa8]
    unsigned long long v7[3];  // [bp-0x98]
    char v8;  // [bp-0x90], Other Possible Types: unsigned long long
    char v9;  // [bp-0x88]
    char *v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    int v12;  // [bp-0x68], Other Possible Types: char
    int v13;  // [bp-0x58]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v17[3];  // rax
    unsigned int v18;  // ebp
    unsigned int v19;  // eax

    uu_chgrp::get_dest_gid(&v0, a1);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
    {
        *((int128_t *)&a0[8]) = *((int128_t *)&v3);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    *((uint128_t *)&v13) = v0;
    memcpy(&v12, &v3, 16);
    v0.try_get_one(a1, "fromkindAuto/", 4);
    v17 = "fromkindAuto/".unwrap(4, &v0);
    if (v17)
    {
        v7[0] = v17;
        uu_chgrp::parse_gid_from_str(&v8, v17[1], v17[2]);
        if (v8 != 0x8000000000000000)
        {
            v10 = &v7;
            v11 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4f4910;
            v1 = 2;
            v6 = 0;
            v3 = &v10;
            v5 = 1;
            v14.map_or_else(&v0);
            v5 = 1;
            memcpy(&v0, &v14, 16);
            v3 = *((long long *)&v15);
            *((double *)&a0[8]) = v0.new();
            *((char **)&a0[16]) = &g_4f4898;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::result::Result<u32,alloc::string::String>>(v8, *((long long *)&v9));
            core::ptr::drop_in_place<alloc::string::String>(v2, v4);
            return a0;
        }
        v18 = *((int *)&v9);
        core::ptr::drop_in_place<core::result::Result<u32,alloc::string::String>>(0x8000000000000000, *((long long *)&v9));
        v19 = 2;
    }
    else
    {
        v19 = 0;
    }
    *((unsigned long long *)a0) = v2;
    a0[8] = v12;
    *((unsigned long long *)&a0[24]) = (unsigned long long)v13;
    *((unsigned int *)&a0[32]) = 0;
    *((unsigned int *)&a0[40]) = v19;
    *((unsigned int *)&a0[44]) = v18;
    return a0;
}
