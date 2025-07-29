long long uu_split::Settings::from(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x368]
    int v1;  // [bp-0x248], Other Possible Types: char
    int v2;  // [sp-0x238], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x238]
    int v4;  // [bp-0x238]
    int v5;  // [bp-0x228], Other Possible Types: char
    int v6;  // [bp-0x218]
    unsigned long long v7;  // [bp-0x208]
    unsigned long long v8[3];  // [bp-0x200]
    int v9;  // [bp-0x1f8]
    int v10;  // [bp-0x1e8]
    unsigned long long v11;  // [bp-0x1d8]
    char v12;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v13;  // [bp-0x1c8]
    unsigned long long v14;  // [bp-0x1c0]
    char v15;  // [bp-0x1c0]
    int v16;  // [bp-0x1b8]
    unsigned long long v17;  // [bp-0x1b0]
    int v18;  // [bp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [bp-0x1a0]
    int v20;  // [bp-0x198]
    unsigned long long v21;  // [bp-0x190]
    int v22;  // [bp-0x188]
    int v23;  // [bp-0x178]
    int v24;  // [bp-0x168]
    char v25;  // [bp-0x158]
    unsigned long long v26;  // [bp-0x148]
    int v27;  // [bp-0x140]
    unsigned long long v28;  // [bp-0x130]
    char v29;  // [bp-0x128]
    char v30;  // [bp-0x127]
    char v31;  // [bp-0x126]
    int v32;  // [bp-0x118]
    unsigned long long v33;  // [bp-0x118]
    unsigned long long v34;  // [bp-0x108]
    int v35;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v36;  // [bp-0xf0]
    unsigned long long v37;  // [bp-0xe8]
    int v38;  // [bp-0xe0]
    unsigned long long v39;  // [bp-0xd0]
    int v40;  // [bp-0xc8]
    unsigned long long v41;  // [bp-0xb8]
    char v42;  // [bp-0xa8]
    unsigned long long v43;  // [bp-0x98]
    char v44;  // [bp-0x90]
    unsigned long long v45;  // [bp-0x80]
    int v46;  // [bp-0x78]
    unsigned long long v47;  // [bp-0x68]
    char v48;  // [bp-0x58]
    char v49;  // [bp-0x50]
    char v50;  // [bp-0x40]
    unsigned long long v52[3];  // rax
    unsigned long long v54;  // r12
    char v56;  // r12b
    unsigned long long v57[3];  // r15
    unsigned long long v58;  // r13
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    char v62;  // al
    char v63;  // al
    unsigned long long v64;  // rax
    unsigned long v65;  // cc_ndep

    v48.from(a1, a2);
    if (*((int *)&v48) == 4)
    {
        v3 = *((long long *)&v50);
        memcpy(&(char)v1, &v49, 16);
    }
    else
    {
        v12.call_once(&v48);
        memcpy(&v1, &v15, 16);
        v3 = v17;
        if (v12 != 9)
        {
            v37 = v2;
            v35 = v1;
            *((unsigned long *)&a0->field_10[16]) = v2;
            *((void*)&a0->field_10[0]) = v1;
            *((unsigned long long *)&a0->field_8) = v12;
            a0->field_18[0] = v18;
            a0->field_0 = 2;
            return a0;
        }
    }
    v40 = v1;
    v41 = v3;
    v46 = v40;
    v47 = v41;
    v12.from(a1, &v46);
    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
    {
        (char)v1.call_once(&v14);
        v11 = *((long long *)&v5);
        v10 = v2;
        v9 = v1;
        a0->field_18[0] = *((long long *)&v5);
        *((void*)&a0->field_10[8]) = v2;
        *((void*)&a0->field_8) = v1;
        a0->field_0 = 2;
        return a0;
    }
    memcpy(&v10, &v17, 16);
    *((int128_t *)&v36) = *((int128_t *)&v14);
    v38 = v10;
    v39 = v19;
    v35 = v12;
    v12.try_get_many(a1, "separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9);
    (char)v1.unwrap("separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9, &v12);
    if ((long long)v1)
    {
        v20 = v6;
        v18 = v5;
        v16 = v2;
        v13 = v1;
        v52 = v12.next();
        if (!v52)
            core::option::unwrap_failed(&g_5a6df8); /* do not return */
        v8[0] = v52;
        if (!v12.try_fold(&v8).eq())
        {
            *((unsigned long long *)&a0->field_8) = 6;
            a0->field_0 = 2;
            core::ptr::drop_in_place<uu_split::filenames::Suffix>(&v35);
            return a0;
        }
        v54 = v8[2];
        if (!(char)v8[1].equal(v54, "\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 2) && v54 != 1)
        {
            (char)v9.to_vec(v8[1], v54);
            *((long long *)&a0->field_10[16]) = (long long)v10;
            *((void*)&a0->field_10[0]) = v9;
            *((unsigned long long *)&a0->field_8) = 5;
            a0->field_0 = 2;
            core::ptr::drop_in_place<uu_split::filenames::Suffix>(&v35);
            return a0;
        }
    }
    else
    {
        v56 = 10;
    }
    v12.try_get_one(a1, "-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 11);
    v57 = "-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(11, &v12);
    if (v57)
    {
        uucore::features::parser::parse_size::parse_size_u64(&v12, v57[1], v57[2]);
        if ((int)v12 == 4)
        {
            v58 = v14;
            if (v14)
            {
                if (!(v14 < 536870913))
                    goto LABEL_4b0b58;
                core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v12);
                v7 = 1;
                goto LABEL_4b0b72;
            }
            else
            {
                (char)v1.clone(v57);
            }
        }
        else
        {
LABEL_4b0b58:
            (char)v1.clone(v57);
        }
        *((unsigned long long *)&a0->field_10[16]) = v3;
        *((void*)&a0->field_10[0]) = v1;
        *((unsigned long long *)&a0->field_8) = 8;
        a0->field_0 = 2;
        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v12);
        core::ptr::drop_in_place<uu_split::filenames::Suffix>(&v35);
        return a0;
    }
    else
    {
        v7 = 0;
LABEL_4b0b72:
        (char)v1.try_get_one(a1, "prefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
        v59 = "prefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(6, &(char)v1);
        if (!v59)
            core::option::unwrap_failed(&g_5a6e10); /* do not return */
        v42.clone(v59);
        memcpy(&v5, &v38, 16);
        memcpy(&v3, &v36, 16);
        memcpy(&v1, &v35, 16);
        (char)v9.try_get_one(a1, "inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
        v60 = "inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(5, &(char)v9);
        if (!v60)
            core::option::unwrap_failed(&g_5a6e28); /* do not return */
        v44.clone(v60);
        (char)v9.try_get_one(a1, "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
        v61 = "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(6, &(char)v9);
        if (v61)
        {
            (char)v9.clone(v61);
            v34 = (long long)v10;
            v32 = v9;
        }
        else
        {
            v33 = 0x8000000000000000;
        }
        v62 = a1.value_source("verboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 7);
        v63 = a1.get_flag("elide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
        v21 = v43;
        memcpy(&v19, &v42, 16);
        v22 = v1;
        v23 = v4;
        v24 = v5;
        memcpy(&v25, &v44, 16);
        v26 = v45;
        v27 = v32;
        v28 = v34;
        v18 = v41;
        memcpy(&(char)v16, &v40, 16);
        v29 = v62 == 2;
        v31 = v56;
        v30 = v63;
        v12 = v7;
        v14 = v58;
        v64 = *((long long *)&(&v15)[8]);
        if (v64 <= 5 && (char)amd64g_calculate_condition(6, 8, v64, 5, v65))
        {
            v0 = 42;
            if (((char)(*((char *)&v0 + ((v64 & 63) >> 3)) >> ((char)v64 & 63 & 7)) & 1) && (long long)v27 != 0x8000000000000000)
            {
                *((unsigned long long *)&a0->field_8) = 7;
                a0->field_0 = 2;
                core::ptr::drop_in_place<uu_split::Settings>(&v12);
                return a0;
            }
        }
        memcpy(a0, &v12, 168);
        return a0;
    }
}
