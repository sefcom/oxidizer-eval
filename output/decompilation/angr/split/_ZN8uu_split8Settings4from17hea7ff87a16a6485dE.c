long long uu_split::Settings::from(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x318]
    unsigned int v1;  // [bp-0x1ec]
    int v2;  // [bp-0x1e8], Other Possible Types: char
    unsigned long long v3;  // [bp-0x1d8]
    int v4;  // [bp-0x1c8]
    int v5;  // [bp-0x1b8]
    int v6;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v7;  // [bp-0x1a8]
    char v8;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x188]
    struct_0 *v10;  // [bp-0x180]
    int v11;  // [bp-0x178], Other Possible Types: char, unsigned long long
    char v12;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x170]
    int v14;  // [bp-0x168], Other Possible Types: char
    unsigned long long v15;  // [bp-0x160]
    int v16;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    int v17;  // [bp-0x148]
    unsigned long long v18;  // [bp-0x140]
    unsigned long long v19;  // [bp-0x138]
    unsigned long long v20;  // [bp-0x130]
    int v21;  // [bp-0x128]
    int v22;  // [bp-0x118]
    char v23;  // [bp-0x108]
    unsigned long long v24;  // [bp-0xf8]
    int v25;  // [bp-0xf0]
    unsigned long long v26;  // [bp-0xe0]
    char v27;  // [bp-0xd8]
    char v28;  // [bp-0xd7]
    char v29;  // [bp-0xd6]
    unsigned long long v30;  // [bp-0xd0]
    char v31;  // [bp-0xc8]
    unsigned long long v32;  // [bp-0xb8]
    char v33;  // [bp-0xb0]
    unsigned long long v34;  // [bp-0xa0]
    int v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x88]
    unsigned long long v37[2];  // [bp-0x78]
    unsigned long long v38;  // [bp-0x68]
    int v39;  // [bp-0x58], Other Possible Types: char
    int v40;  // [bp-0x48]
    unsigned int v42;  // eax
    int v43;  // xmm1
    struct_0 *v44;  // rax
    unsigned long long v45;  // rcx
    char *v46;  // r13
    unsigned long long v47;  // rbp
    unsigned int v48;  // eax
    unsigned long long v50[3];  // r13
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    char v54;  // al
    char v55;  // al
    unsigned long long v56;  // rax
    unsigned long v57;  // cc_ndep

    v11.from(a1, a2);
    memcpy(&v2, &v12, 16);
    v3 = v15;
    if (v11 != 4)
    {
        v6 = v2;
        v8 = v3;
        *((unsigned long long *)&a0[32]) = v3;
        a0[16] = v2;
        *((unsigned long long *)&a0[8]) = v11;
        *((unsigned long *)&a0[40]) = v16;
        *((unsigned long long *)a0) = 2;
        return a0;
    }
    v35 = v2;
    v36 = v3;
    *((void*)v37) = v35;
    v38 = v36;
    v11.from(a1, &v37);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        memcpy(&v6, &v12, 16);
        memcpy(&v8, &v15, 16);
        *((int128_t *)&a0[32]) = *((int128_t *)&v15);
        a0[16] = v6;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)a0) = 2;
        return a0;
    }
    memcpy(&v39, &v14, 16);
    v40 = v16;
    v11.try_get_many(a1);
    v42 = (int)v2.unwrap(&v11);
    if ((long long)v2)
    {
        v43 = *((int128_t *)&v3);
        v17 = v5;
        v16 = v4;
        v14 = v43;
        v11 = v2;
        v44 = v11.next();
        if (!v44)
            core::option::unwrap_failed(&g_50ae60); /* do not return */
        v10 = v44;
        v45 = 6;
        if (v11.try_fold(&v10).eq(0))
        {
            v46 = v10->field_8;
            v47 = v10->field_10;
            if ((char)v46.equal(v47, "\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 2))
            {
                v1 = 0;
                v13 = v12;
                goto LABEL_46eaa9;
            }
            if (v47 == 1)
            {
                v48 = *(v46);
                v13 = v12;
LABEL_46eaa5:
                v1 = v48;
LABEL_46eaa9:
                v11.try_get_one(a1, "-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 11);
                v50 = "-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(11, &v11);
                if (v50)
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v11, v50[1], v50[2]);
                    if ((int)v11 != 4)
                    {
LABEL_46eb40:
                        v2.clone(v50);
                    }
                    else if (v13)
                    {
                        if (v13 >= 536870913)
                            goto LABEL_46eb40;
                        v30 = v13;
                        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v11);
                        v9 = 1;
                        goto LABEL_46eb5c;
                    }
                    else
                    {
                        v2.clone(v50);
                    }
                    *((unsigned long long *)&a0[32]) = v3;
                    a0[16] = v2;
                    *((unsigned long long *)&a0[8]) = 8;
                    *((unsigned long long *)a0) = 2;
                    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v11);
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v12);
                    return a0;
                }
                else
                {
                    v9 = 0;
LABEL_46eb5c:
                    v2.try_get_one(a1, "prefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
                    v51 = "prefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(6, &v2);
                    if (!v51)
                        core::option::unwrap_failed(&g_50ae78); /* do not return */
                    v31.clone(v51);
                    v2.try_get_one(a1, "inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
                    v52 = "inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(5, &v2);
                    if (!v52)
                        core::option::unwrap_failed(&g_50ae90); /* do not return */
                    v33.clone(v52);
                    v2.try_get_one(a1, "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
                    v53 = "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(6, &v2);
                    if (v53)
                    {
                        v2.clone(v53);
                        v8 = v3;
                        v6 = v2;
                    }
                    else
                    {
                        v7 = 0x8000000000000000;
                    }
                    v54 = a1.value_source("verboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 7);
                    v55 = a1.get_flag("elide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
                    v18 = v32;
                    memcpy(&(char)v16, &v31, 16);
                    v19 = v11;
                    v20 = v12;
                    v21 = v39;
                    v22 = v40;
                    memcpy(&v23, &v33, 16);
                    v24 = v34;
                    v25 = v6;
                    v26 = v8;
                    v16 = v36;
                    memcpy(&v14, &v35, 16);
                    v27 = v54 == 2;
                    v29 = v1;
                    v28 = v55;
                    v11 = v9;
                    v12 = v30;
                    v56 = (long long)v14;
                    if (v56 <= 5 && (char)_ccall(6, 8, v56, 5, v57))
                    {
                        v0 = 42;
                        if ((*((char *)&v0 + ((v56 & 63) >> 3)) >> ((char)v56 & 63 & 7) & 1) && (long long)v25 != 0x8000000000000000)
                        {
                            *((unsigned long long *)&a0[8]) = 7;
                            *((unsigned long long *)a0) = 2;
                            core::ptr::drop_in_place<uu_split::Settings>(&v11);
                            return a0;
                        }
                    }
                    memcpy(a0, &v11, 168);
                    return a0;
                }
            }
            (char)v6.to_vec(v46, v47);
            *((unsigned long long *)&a0[32]) = v8;
            a0[16] = v6;
            v45 = 5;
        }
        *((unsigned long long *)&a0[8]) = v45;
        *((unsigned long long *)a0) = 2;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v12);
        return a0;
    }
    v48 = v42 & 0xffffff00 | 10;
    v13 = v12;
    goto LABEL_46eaa5;
}
