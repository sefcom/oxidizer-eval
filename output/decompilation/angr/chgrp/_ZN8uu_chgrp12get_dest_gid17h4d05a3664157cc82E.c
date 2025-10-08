double uu_chgrp::get_dest_gid(long long a0, long long a1)
{
    void* v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    unsigned int v3;  // [bp-0x100]
    unsigned int v4;  // [bp-0xfc]
    unsigned long long v5;  // [bp-0xf8], Other Possible Types: unsigned int
    unsigned long long v6;  // [bp-0xf0]
    char v7;  // [bp-0xe8], Other Possible Types: unsigned long
    char v8;  // [bp-0xe0]
    int v9;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v10;  // [bp-0xd0]
    unsigned long long v11;  // [bp-0xc8]
    unsigned int v12;  // [bp-0xc0]
    char v13;  // [bp-0x98]
    unsigned long long v15[3];  // r14
    unsigned int v16;  // eax
    unsigned long long v17;  // rcx
    struct_0 *v18;  // rax
    unsigned long long v19;  // r14
    void* v20;  // r15
    unsigned int v21;  // r12d
    unsigned int v23;  // eax
    unsigned long v24;  // xmm0lq
    int v25;  // xmm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9.try_get_one(a1, "referenceGROUPfailed to get attributes of invalid user: '", 9);
    v15 = "referenceGROUPfailed to get attributes of invalid user: '".unwrap(9, &v9);
    if (v15)
    {
        std::fs::metadata(&v9, v15);
        if (*((int *)&v9) == 2)
        {
            v5 = v10;
            v16 = 1;
        }
        else
        {
            v4 = 1;
            v5 = uu_chgrp::get_dest_gid::{{closure}}(&v0, *((int *)&v13));
            v16 = 0;
        }
        v3 = v16;
        v7.map_err_context(&v3, v15[1], v15[2]);
        if (v7)
        {
            v17 = *((long long *)&v8);
            *((unsigned long *)&a0[16]) = v7;
            *((unsigned long long *)&a0[24]) = v17;
            *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(v0, 1);
            return v24;
        }
    }
    else
    {
        v9.try_get_one(a1, "GROUPfailed to get attributes of invalid user: '", 5);
        v18 = "GROUPfailed to get attributes of invalid user: '".unwrap(5, &v9);
        if (v18)
        {
            v19 = *((long long *)&v18->padding_0[8]);
            v20 = v18->field_10;
        }
        else
        {
            v19 = 1;
            v20 = 0;
        }
        v9.to_vec(v19, v20);
        v2 = v11;
        memcpy(&v0, &v9, 16);
        v21 = 0;
        v23 = (unsigned int)core::ptr::drop_in_place<alloc::string::String>(0, 1);
        if (v20)
        {
            uu_chgrp::parse_gid_from_str(&(char)v3, v19, v20);
            if (!((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63)))
            {
                v11 = v6;
                v24 = *((int128_t *)&v3);
                *((int128_t *)&v9) = *((int128_t *)&v3);
                v12 = 1;
                *((double *)&a0[16]) = v9.new();
                *((unsigned long long **)&a0[24]) = &g_4f4898;
                *((unsigned long long *)&a0[8]) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(v0, 1);
                return v24;
            }
            v21 = 1;
            v23 = v5;
        }
    }
    *((unsigned long long *)&a0[24]) = v2;
    v25 = *((int128_t *)&v0);
    a0[8] = v25;
    *((unsigned int *)a0) = v21;
    *((unsigned int *)&a0[4]) = v23;
    return (unsigned long long)v25;
}
