long long zoxide::util::resolve_path(void* a0, unsigned long long a1)
{
    void* v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x200]
    void* v2;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1f0]
    unsigned long long v4;  // [bp-0x1e8]
    char v5;  // [bp-0x1d8]
    int v6;  // [bp-0x1d8]
    char v7;  // [bp-0x1d8]
    unsigned long long v8;  // [bp-0x1d0]
    char v9;  // [bp-0x1c8]
    int v10;  // [bp-0x1c8]
    int v11;  // [bp-0x1b8], Other Possible Types: char
    char v12;  // [bp-0x1a8], Other Possible Types: unsigned long long
    char v13;  // [bp-0x1a0]
    char v14;  // [bp-0x198]
    char v15;  // [bp-0x188]
    int v16;  // [bp-0x178]
    unsigned long long v17;  // [bp-0x168]
    char v18;  // [bp-0x158]
    char v19;  // [bp-0x157]
    char v20;  // [bp-0x148]
    char v21;  // [bp-0x147]
    char v22;  // [bp-0x138]
    char v23;  // [bp-0x137]
    unsigned long long v24;  // [bp-0x128]
    int v25;  // [bp-0x120]
    int v26;  // [bp-0x110]
    int v27;  // [bp-0x100]
    int v28;  // [bp-0xf8]
    char v29;  // [bp-0xf0]
    unsigned long long v30;  // [bp-0xe8]
    char v31;  // [bp-0xe0]
    char v32;  // [bp-0xdf]
    char v33;  // [bp-0xcf]
    char v34;  // [bp-0xbf]
    unsigned long long v35;  // [bp-0xb0]
    char v36;  // [bp-0xa8]
    int v37;  // [bp-0xa7]
    int v38;  // [bp-0x97]
    int v39;  // [bp-0x87]
    unsigned long long v40;  // [bp-0x78]
    char v41;  // [bp-0x70]
    unsigned long long v44;  // rdx
    int v45;  // xmm0
    int v46;  // xmm1
    char v47;  // bpl
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm0
    int v51;  // xmm1
    unsigned long v52;  // rax
    unsigned long v53;  // rax
    unsigned long long v54;  // rax

    v5.components(a1.as_ref(), v44);
    v45 = *((int128_t *)&v5);
    v46 = *((int128_t *)&v9);
    memcpy(&v29, &v12, 16);
    *((int128_t *)&v27) = *((int128_t *)&v11);
    v26 = v46;
    v25 = v45;
    v18 = 11;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v18.get_or_insert_with(&(char)v25);
    if (11.eq())
    {
        v35 = v24;
        memcpy(&v34, &v23, 16);
        memcpy(&v33, &v21, 16);
        memcpy(&v32, &v19, 16);
        v18 = 11;
        v31 = 11;
        v0.push(&v31, &g_534c68);
    }
    else
    {
        zoxide::util::current_dir(&v5);
        if ((char)(((0 ^ *((long long *)&v5)) & (0 ^ -(*((long long *)&v5)))) >> 63))
        {
            *((unsigned long long *)&a0[8]) = v8;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<std::path::Component>>(v0, v1);
        }
        v3 = *((long long *)&v5);
        v4 = v8;
        v41.components(v8, *((long long *)&v9));
        v47 = 1;
        v0.extend_desugared(&v41);
    }
    v17 = v30;
    v16 = v28;
    memcpy(&v15, &(char)v26, 16);
    memcpy(&v14, &v25, 16);
    v48 = *((int128_t *)&v18);
    v49 = *((int128_t *)&v20);
    memcpy(&v12, &v24, 16);
    *((int128_t *)&v11) = *((int128_t *)&v22);
    v10 = v49;
    v6 = v48;
    v7 = 11;
    if (v5 != 11)
    {
        v40 = v12;
        v50 = (int128_t)(&v6)[1];
        v51 = (int128_t)(&v10)[1];
        *((int128_t *)&v39) = (int128_t)(&v11)[1];
        v38 = v51;
        v37 = v50;
        v36 = v5;
        if (v5 == 10)
            goto LABEL_49399c;
    }
    else
    {
        v36.next(&v13);
        if (v36 == 10)
        {
LABEL_49399c:
            v7.collect(v1, 0 + v1);
            *((long long *)&a0[16]) = (long long)v10;
            *((int128_t *)a0) = (int128_t)v6;
            v54 = (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<std::path::Component>>(v0, v1);
            if (!v47)
                return v54;
            return (unsigned long long)core::mem::drop(v3, v4);
        }
    }
    v52 = v36;
    v53 = v52 - 5;
    if (4 <= (v52 - 6 & 255))
        v53 = 0;
    goto (long long)(g_419324[v53] + (char *)&g_419324[0]);
}
