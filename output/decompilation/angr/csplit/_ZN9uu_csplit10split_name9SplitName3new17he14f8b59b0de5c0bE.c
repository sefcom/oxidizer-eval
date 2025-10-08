void uu_csplit::split_name::SplitName::new(void* a0, unsigned long long a1[3], void* a2, struct_0 *a3)
{
    int v0;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x128]
    unsigned long long v3;  // [bp-0x128]
    unsigned long v4;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x120]
    char *v7;  // [bp-0x118], Other Possible Types: unsigned long long
    char v8;  // [bp-0x110], Other Possible Types: unsigned long long
    int v9;  // [bp-0x110]
    void* v10;  // [bp-0x108]
    int v11;  // [bp-0x100]
    char v12;  // [bp-0xf8]
    int v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    int v15;  // [bp-0xe0]
    unsigned long v16;  // [bp-0xd8]
    unsigned long long v17;  // [bp-0xd0]
    unsigned long v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb8]
    char *v20;  // [bp-0xb0], Other Possible Types: unsigned long, unsigned long long
    int v21;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v22;  // [bp-0xa0]
    int v23;  // [bp-0x90], Other Possible Types: char
    int v24;  // [bp-0x80], Other Possible Types: char
    unsigned long long v25;  // [bp-0x70]
    int v26;  // [bp-0x68], Other Possible Types: char
    char v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    unsigned long v29;  // [bp-0x48]
    int v30;  // [bp-0x40]
    unsigned long long v32;  // rbx
    unsigned long v33;  // rax
    unsigned long v34;  // rcx
    unsigned long long v36;  // rax
    int v37;  // xmm0
    int v39;  // xmm0

    v32 = a1[0];
    if ((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63))
    {
        (char)v3.to_vec("xx%0usrc/uu/csplit/src/split_name.rs", 2);
        v1 = v0;
        v4 = v5;
        v2 = v0;
    }
    else
    {
        v5 = a1[1];
        v33 = a1[2];
        v2 = v32;
    }
    v6 = v4;
    v3 = v1;
    v18 = v33;
    v34 = a3->field_0;
    v4 = v6;
    v36 = 2;
    if (v34 != 0x8000000000000000)
    {
        *((int128_t *)&v21) = *((int128_t *)&(&a3->field_0)[1]);
        v20 = v34;
        uu_csplit::split_name::SplitName::new::{{closure}}(&(char)v3, &v20);
        v37 = *((int128_t *)&v6);
        memcpy(&v26, &v8, 16);
        v4 = v6;
        v36 = v6;
        if (v3 != 13)
        {
            a0[32] = v26;
            *((unsigned long long *)&a0[8]) = v3;
            a0[16] = v37;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(v2, v5);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(*((long long *)a2), (long long)a2[8]);
            return;
        }
    }
    v19 = v36;
    if (*((long long *)a2) == 0x8000000000000000)
    {
        v20 = &v19;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v3 = &g_642c28;
        v4 = 2;
        v10 = 0;
        v7 = &v20;
        v8 = 1;
        v28.map_or_else(&v3);
    }
    else
    {
        *((int128_t *)&v30) = (int128_t)a2[8];
        v29 = *((long long *)a2);
    }
    v3.parse(&v28);
    if (v3 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0[8]) = (v4 + 0x8000000000000000 == 15) + 9;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt,u64>,uucore::features::format::FormatError>>(&v3);
    }
    else
    {
        v25 = v14;
        memcpy(&v24, &v12, 16);
        memcpy(&v21, &v4, 16);
        memcpy(&v23, &v10, 16);
        v20 = v3;
        v21 = v4;
        v26.to_vec(v5, v18);
        v17 = v25;
        v39 = *((int128_t *)&v20);
        v15 = v24;
        v13 = v23;
        v11 = v22;
        v9 = v39;
        v7 = *((long long *)&v27);
        v0 = v26;
        *((unsigned long *)&a0[80]) = v16;
        *((unsigned long long *)&a0[88]) = v17;
        *((int128_t *)&a0[64]) = (int128_t)(&v13)[8];
        *((int128_t *)&a0[48]) = (int128_t)(&v11)[8];
        *((int128_t *)&a0[32]) = (int128_t)(&v9)[8];
        *((unsigned long long *)&a0[16]) = v7;
        *((unsigned long long *)&a0[24]) = v8;
        *(a0) = v26;
    }
    core::ptr::drop_in_place<alloc::string::String>(v2, v5);
    return;
}
