long long fish::wutil::wrealpath(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0xb0]
    char *v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0xa0]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    char *v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char *v9;  // [bp-0x70], Other Possible Types: char
    char *v10;  // [bp-0x70]
    char *v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    char v15;  // [bp-0x48]
    char *v16;  // [bp-0x48]
    char *v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    char *v21;  // r14
    unsigned long long v22;  // r12
    char v23;  // r13b
    unsigned long long v24;  // rdx
    char *v26;  // r14
    unsigned long long v27;  // r12
    unsigned long long v28;  // rdx
    unsigned long long v30;  // r13
    char *v33;  // r13

    if (!a2)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    v9.into_bytes(fish::common::wcs2zstring(a1, a2), a2);
    v21 = v11;
    v22 = v12;
    if (v22 >= 2)
    {
        while (v21[1 + v22] == 47)
        {
            if (v22 - 1 <= 1)
            {
                v22 = 1;
                break;
            }
        }
    }
    v12 = v22;
    std::fs::canonicalize(&v4, v21, v22);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
    {
        v0 = v21;
        v13 = &v21[v22];
        v1 = v13;
        v23 = v0.rposition();
        v14 = v4;
        if (!(v23 & 1))
        {
            v8 = v28;
            std::fs::canonicalize(&v15);
            goto LABEL_12edc09;
        }
        if (v24)
        {
            v8 = v24;
            std::fs::canonicalize(&(char)v16, 0.index(v24, v21, v22, &g_14c1590), a2);
LABEL_12edc09:
            if (v16 == 0x8000000000000000)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v16);
                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v4);
            }
            else
            {
                v7 = v17;
                v30 = v23.map_or(v8);
                v9 = v16;
                v1 = v7;
                v2 = *((long long *)&v18);
                if (*((long long *)&v18) >= 2)
                    v9.push(47, &g_14c15a8);
                if (v30 > v22)
                    core::slice::index::slice_start_index_len_fail(v30, v22, &g_14c15c0); /* do not return */
                v9.spec_extend(&v21[v30], v13);
                v0 = v9;
                v3 = v2;
                v26 = v1;
                v27 = v2;
LABEL_12edcc1:
                v33 = v26;
                v2 = v3;
                fish::common::str2wcstring(&v0, v33, v27);
                *((unsigned long long *)&a0[16]) = v2;
                *((int128_t *)a0) = *((int128_t *)&v0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v33);
                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v4);
            }
        }
        else
        {
            v10 = v9;
            v26 = v21;
            v27 = v22;
            goto LABEL_12edcc1;
        }
    }
    else
    {
        fish::common::str2wcstring(&(char)v0, v5, v6);
        *((unsigned long long *)&a0[16]) = v2;
        *((int128_t *)a0) = *((int128_t *)&v0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v10, v21);
    return a0;
}
