long long uu_split::filenames::Suffix::from(void* a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x94]
    char v2;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long *v6;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned int v7;  // [bp-0x6c]
    char v8;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x68]
    char v10;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x40]
    unsigned long v12;  // [bp-0x38]
    char v14;  // al
    char v15;  // al
    char v16;  // al
    char v17;  // al
    unsigned long long v18[3];  // rax
    unsigned int v19;  // r15d
    char v20;  // bpl
    unsigned long long v22;  // r13
    void* v23;  // rbp
    unsigned long long *v24;  // rdx
    unsigned long v25;  // xmm0lq
    uint256_t v26;  // ymm0
    unsigned long long v27;  // xmm0lq
    unsigned long long v28;  // xmm0lq
    unsigned long long v29;  // rcx
    unsigned long long v30;  // r13
    unsigned long long v33;  // rax
    unsigned long long v35;  // cc_ndep

    v6 = a2;
    v14 = a1.contains_id("numeric-suffixesentity not found", 16);
    v15 = a1.contains_id("hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 12);
    v16 = a1.get_flag("-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2);
    v17 = a1.get_flag("-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2);
    if (v14)
    {
        (char)v9.try_get_one(a1, "numeric-suffixesentity not found", 16);
        v18 = "numeric-suffixesentity not found".unwrap(16, &(char)v9);
        v19 = &g_4a3c01;
        if (v18)
        {
            ::0x465f00::core::num::<impl usize>::from_ascii_radix(&v2, v18[1], v18[2], 10);
            if (v2 == 1)
            {
                (char)v9.clone(v18);
                *((int128_t *)&a0[24]) = *((int128_t *)&v10);
                *((unsigned long long *)&a0[8]) = 0;
                *((unsigned long long *)&a0[16]) = v9;
                *((unsigned long long *)a0) = 0x8000000000000000;
                return 0x8000000000000000;
            }
            goto LABEL_46b15e;
        }
        else
        {
            v0 = 0;
            v20 = 1;
        }
    }
    else if (v15)
    {
        v8.try_get_one(a1, "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 12);
        v18 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(12, &v8);
        v19 = &g_4a3c02;
        if (!v18)
            goto LABEL_46b17e;
        ::0x465f00::core::num::<impl usize>::from_ascii_radix(&v2, v18[1], v18[2], 16);
        if (v2 == 1)
        {
            (char)v9.clone(v18);
            *((int128_t *)&a0[24]) = *((int128_t *)&v10);
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned long long *)&a0[16]) = v9;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
LABEL_46b15e:
        v0 = v4;
    }
    else
    {
        if (!v16)
            v19 = v17 * 2;
        else
            v19 = 1;
LABEL_46b17e:
        v20 = 1;
        v0 = 0;
        goto LABEL_46b17e;
    }
    (char)v9.try_get_one(a1, "suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 13);
    v18 = "suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(13, &(char)v9);
    if (v18)
    {
        ::0x465f00::core::num::<impl usize>::from_ascii_radix(&v2, v18[1], v18[2], 10);
        if ((char)v2 == 1)
        {
            (char)v9.clone(v18);
            *((int128_t *)&a0[24]) = *((int128_t *)&v10);
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned long long *)&a0[16]) = v9;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
        v1 = v19;
        v3 = v4;
    }
    else
    {
        v1 = v19;
        v3 = 2;
    }
    v22 = v3;
    v23 = ((v22 & v18) ? 0 : v20);
    v24 = v6;
    if (*(v24) < 6)
    {
        v7 = (unsigned int)v23;
        v6 = *((long long *)((char *)v24 + g_41d418[*(v24)]));
        v25 = AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v0 + *((long long *)((char *)v24 + g_41d418[*(v24)]))) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v0 + *((long long *)((char *)v24 + g_41d418[*(v24)]))) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v0 + *((long long *)((char *)v24 + g_41d418[*(v24)]))) - 0x45300000000000004330000000000000);
        v12 = g_41d448[(char)v1];
        log(v25);
        v11 = v25;
        v26 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v12;
        log((unsigned long long)v26);
        v27 = DivV(v11, (uint128_t)v26);
        v28 = v27;
        ceil();
        v29 = ((char)_ccall(3, 0, (unsigned long long)(CmpF(v28, 0) & 69), 0, v35) ? (unsigned long long)(SubV(v27, 0x43e0000000000000)) & v28 >> 63 | v28 : 0);
        if (((CmpF(v28, 4895412794951729151) & 69 | (char)((CmpF(v28, 4895412794951729151) & 69) >> 6)) & 1) != 1)
            v29 = 18446744073709551615;
        if (v0 >= v6)
        {
            v23 = v7;
            if (v22 < v29)
            {
                *((unsigned long long *)&a0[8]) = 2;
                *((unsigned long long *)&a0[16]) = v29;
                *((unsigned long long *)a0) = 0x8000000000000000;
                return 0x8000000000000000;
            }
        }
        else if (!(v22 & v18))
        {
            if (v22 <= v29)
                v22 = v29;
            else
                v22 = v22;
            v23 = 0;
        }
        else if (v22 >= v29)
        {
            v23 = 0;
            goto LABEL_46b377;
        }
        else
        {
            *((unsigned long long *)&a0[8]) = 2;
            *((unsigned long long *)&a0[16]) = v29;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    if (v22)
        v30 = v22;
    else
        v30 = 2;
    if (v18)
        v22 = v30;
    else
        v22 = v22;
LABEL_46b377:
    (char)v9.try_get_one(a1, "additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v33 = "additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(17, &(char)v9);
    if (!v33)
        core::option::unwrap_failed(&g_50ab08); /* do not return */
    v2.clone(v33);
    v8 = v4;
    v10 = v5 + v4;
    if (!v8.try_fold().eq(1))
    {
        *((unsigned long long *)&a0[16]) = v5;
        *((int128_t *)a0) = *((int128_t *)&v2);
        *((unsigned long long *)&a0[24]) = v22;
        *((unsigned long long *)&a0[32]) = v0;
        *((char *)&a0[40]) = (char)v23;
        *((char *)&a0[41]) = v1;
        return v1;
    }
    *((unsigned long long *)&a0[32]) = v5;
    *((int128_t *)&a0[16]) = *((int128_t *)&v2);
    *((unsigned long long *)&a0[8]) = 1;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
