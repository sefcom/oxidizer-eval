long long just::compiler::Compiler::find_module_file(unsigned long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0x288], Other Possible Types: int, unsigned long
    int v1;  // [bp-0x281]
    unsigned long long v2;  // [bp-0x280]
    int v3;  // [bp-0x278], Other Possible Types: char *, unsigned long, unsigned long long
    int v4;  // [bp-0x271]
    unsigned long long v5;  // [bp-0x270], Other Possible Types: char
    int v6;  // [bp-0x268], Other Possible Types: char *, void*
    int v7;  // [bp-0x261]
    int v8;  // [bp-0x251]
    unsigned long v9;  // [bp-0x249]
    unsigned long v10;  // [bp-0x241]
    void* v11;  // [bp-0x230]
    int v12;  // [bp-0x228], Other Possible Types: void*, struct_0 *
    int v13;  // [bp-0x221]
    unsigned long long v14;  // [bp-0x220]
    int v15;  // [bp-0x218], Other Possible Types: char *, char
    char *v16;  // [bp-0x211]
    char v17;  // [bp-0x210]
    int v18;  // [bp-0x208]
    unsigned long long v19;  // [bp-0x200]
    unsigned long long v20;  // [bp-0x1f8]
    int v21;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v22;  // [bp-0x1f0]
    char *v23;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x1d8]
    unsigned long long v25;  // [bp-0x1c8]
    void* v26;  // [bp-0x1c0]
    unsigned long long v27;  // [bp-0x1b8]
    unsigned long long v28;  // [bp-0x1b0]
    struct_1 *v29;  // [bp-0x1a0], Other Possible Types: unsigned long long
    struct_1 *v30;  // [bp-0x1a0]
    unsigned long long v31;  // [bp-0x198]
    void* v32;  // [bp-0x190]
    unsigned long long v33;  // [bp-0x188]
    void* v34;  // [bp-0x180]
    struct_0 *v35;  // [bp-0x178], Other Possible Types: unsigned long long
    char *v36;  // [bp-0x168]
    unsigned long long v37;  // [bp-0x160]
    unsigned long long v38;  // [bp-0x150]
    int v39;  // [bp-0x148]
    unsigned long long v40;  // [bp-0x140]
    char *v41;  // [bp-0x138]
    void* v42;  // [bp-0x130]
    unsigned long long v43;  // [bp-0x128]
    void* v44;  // [bp-0x120]
    unsigned long long v45;  // [bp-0x118]
    char v46;  // [bp-0x110]
    struct_1 *v47;  // [bp-0x108]
    struct_1 *v48;  // [bp-0x108]
    unsigned long long v49;  // [bp-0x100]
    unsigned long long v50;  // [bp-0x100]
    int v51;  // [bp-0xf8]
    struct_1 *v52;  // [bp-0xf0]
    unsigned long long v53;  // [bp-0xe8]
    char v54;  // [bp-0xd8]
    unsigned long long v55;  // [bp-0xd0]
    int v56;  // [bp-0xc8]
    void* v57;  // [bp-0xb8]
    void* v58;  // [bp-0xa8]
    unsigned long long v59;  // [bp-0xa0]
    unsigned long long v60;  // [bp-0x98]
    int v61;  // [bp-0x90], Other Possible Types: char
    unsigned long v62;  // [bp-0x80]
    char v63;  // [bp-0x78]
    unsigned long v64;  // [bp-0x68]
    int v65;  // [bp-0x60]
    unsigned long long v66;  // [bp-0x50]
    int v67;  // [bp-0x48], Other Possible Types: char
    unsigned long long v68;  // [bp-0x38]
    unsigned long long v70;  // rax
    unsigned long long v71;  // rdx
    unsigned long long v72;  // r8
    unsigned long long v73;  // rax
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    char *v77;  // r14
    char *v78;  // rdi
    char *v79;  // r12
    char *v80;  // r13
    unsigned long long v81;  // rcx
    unsigned long v82;  // rdx
    char v83;  // al
    char v84;  // cl
    void* v85;  // r13
    struct_1 *v87;  // r14
    struct_1 *v88;  // rbp
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax
    struct_0 *v94;  // rax
    int v95;  // xmm1
    int v96;  // xmm2
    int v97;  // xmm3
    int v98;  // xmm1
    int v99;  // xmm2
    int v100;  // xmm3
    unsigned long long v101;  // rax
    char *v102;  // rcx

    v59 = a1;
    v60 = a2;
    v32 = 0;
    v33 = 8;
    v34 = 0;
    v31 = a2;
    v29 = a1;
    if (a4)
    {
        v21.join(a1, a2, a4, a5);
        if ((char)v22.is_file(v23))
        {
            *((char **)&v11[24]) = v23;
            *((int128_t *)&v11[8]) = *((int128_t *)&v21);
            *((char *)v11) = 56;
            return core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v32);
        }
        (char)v12.join(a4, a5, &g_469630, 8);
        v3 = *((long long *)&v15);
        memcpy(&(char)v0, &(char)v12, 16);
        v5 = 1;
        v32.push(&(char)v0, &g_82e630);
        v0 = 0;
        v2 = 2;
        *((uint128_t *)&v3) = g_82e5b0;
        *((uint128_t *)&v6) = g_82e5c0;
        if ((char)v0.next())
        {
            v72 = v71;
            do
            {
                v35.join(a4, a5, v70, v72);
                v15 = v36;
                *((int128_t *)&v12) = *((int128_t *)&v35);
                v17 = 0;
                v32.push(&(char)v12, &g_82e648);
                v70 = (char)v0.next();
                v72 = v71;
            } while (v70);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&v21);
    }
    else
    {
        v12 = a3;
        v14 = <just::name::Name as core::fmt::Display>::fmt;
        v0 = &g_82e5d0;
        v2 = 2;
        v6 = 0;
        v3 = &(char)v12;
        v5 = 1;
        v61.map_or_else(0, a2, &(char)v0);
        v0 = v61;
        v3 = v62;
        v5 = 1;
        v32.push(&(char)v0, &g_82e660);
        v12 = a3;
        v14 = <just::name::Name as core::fmt::Display>::fmt;
        v0 = &g_82e5f0;
        v2 = 2;
        v6 = 0;
        v3 = &(char)v12;
        v5 = 1;
        v63.map_or_else(0, a2, &(char)v0);
        memcpy(&(char)v0, &v63, 16);
        v3 = v64;
        v5 = 1;
        v32.push(&(char)v0, &g_82e678);
        v12 = 0;
        v14 = 2;
        *((uint128_t *)&v15) = g_82e5b0;
        *((uint128_t *)&v18) = g_82e5c0;
        if ((char)v12.next())
        {
            do
            {
                v20 = v73;
                v22 = v74;
                v35 = a3;
                v35 = <just::name::Name as core::fmt::Display>::fmt;
                v36 = &v20;
                v37 = <&T as core::fmt::Display>::fmt;
                v0 = &g_82e610;
                v2 = 2;
                v6 = 0;
                v3 = &v35;
                v5 = 2;
                v65.map_or_else(0, v74, &(char)v0);
                v0 = v65;
                v3 = v66;
                v5 = 0;
                v32.push(&(char)v0, &g_82e720);
                v73 = (char)v12.next();
            } while (v73);
        }
    }
    v57 = 0;
    v58 = 0;
    v35.into_iter(&v32);
    (char)v12.next(&v35);
    if (!((char)(((0 ^ (long long)v12) & (0 ^ -((long long)v12))) >> 63)))
    {
        do
        {
            (char)v0.join(v29, v31, &(char)v12);
            v25.lexiclean(2, (long long)v3);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
            v75 = v26.parent(v27);
            if (!v75)
                core::option::unwrap_failed(&g_82e6f0); /* do not return */
            (char)v0.to_vec(v75, a2);
            v23 = (long long)v3;
            *((int128_t *)&v21) = (int128_t)v0;
            (char)v0.entry(&v57, &v21);
            v76 = (char)v0.or_default();
            v3 = v27;
            *((int128_t *)&v0) = *((int128_t *)&v25);
            v5 = v17;
            v76.push(&(char)v0, &g_82e708);
            (char)v12.next(&v35);
        } while ((long long)v12 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(std::path::PathBuf,bool)>>(&v35);
    v42 = 0;
    v43 = 8;
    v44 = 0;
    v77 = &(char)v0;
    (char)v0.into_iter(&v57);
    v78 = &v35;
    v79 = &v21;
    v80 = &v54;
    while (true)
    {
        v78.next(v77);
        if (v35 == 0x8000000000000000)
            break;
        v41 = v36;
        *((int128_t *)&v39) = *((int128_t *)&v35);
        v53 = v38;
        *((int128_t *)&v51) = *((int128_t *)&v37);
        std::fs::read_dir(v79, &(char)v39);
        if ((char)v22 == 2)
        {
            v25 = v20;
            if ((char)v25.kind())
            {
                v16 = v41;
                *((int128_t *)&v13) = (int128_t)v39;
                *((char *)v11) = 42;
                v101 = (long long)(&v13)[8];
                v102 = v16;
                *((int128_t *)&v11[1]) = (int128_t)v12;
                *((unsigned long long *)&v11[16]) = v101;
                *((char **)&v11[24]) = v102;
                *((unsigned long long *)&v11[32]) = v25;
                core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v37);
                core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<std::path::PathBuf,alloc::vec::Vec<(std::path::PathBuf,bool)>>>(&(char)v0);
                return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v42);
            }
            core::ptr::drop_in_place<std::io::error::Error>(&v25);
        }
        else
        {
            v45 = v20;
            v46 = v22;
            v81 = v53;
            v82 = (v81) * 32;
            v29 = v52;
            v47 = &v29->padding_0[v82];
            v31 = v81;
            v49 = v82 - v81 * 32;
            while (true)
            {
                (char)v12.next(&v45);
                if ((int)v12 != 1)
                {
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v45);
                    break;
                }
                if (!(long long)(&v12)[8])
                {
                    just::search::Search::find_global_justfile::{{closure}}(&v25, v40, v41, (long long)v15);
                    memcpy(&v67, &v26, 16);
                    v68 = v28;
                    *((unsigned long long *)&v11[32]) = v28;
                    v11[16] = v67;
                    *((char *)v11) = 42;
                    *((unsigned long long *)&v11[8]) = v25;
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v45);
                    core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v37);
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v39);
                    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<std::path::PathBuf,alloc::vec::Vec<(std::path::PathBuf,bool)>>>(&(char)v0);
                    return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v42);
                }
                v24 = v19;
                memcpy(&v23, &v17, 16);
                v20 = (long long)(&v12)[8];
                v22 = (long long)v15;
                v80.file_name(v79);
                core::str::converts::from_utf8(&v25, v55, (long long)v56);
                v83 = !v31;
                v84 = v25;
                if (!v84)
                {
                    v85 = v26;
                    if (!((v84 | v83) & 1))
                        goto LABEL_65bf90;
                }
                else
                {
                    v85 = 0;
                    if (!((v84 | v83) & 1))
                    {
LABEL_65bf90:
                        v30 = v29;
                        v50 = v49;
                        v48 = v47;
                        do
                        {
                            v87 = v30;
                            v88 = v48;
                            v89 = v87->field_8.file_name(v87->field_10);
                            if (!v89)
                                core::option::unwrap_failed(&g_82e690); /* do not return */
                            core::str::converts::from_utf8(&v25, v89, a2);
                            if (((char)v25 & 1))
                                core::option::unwrap_failed(&g_82e6a8); /* do not return */
                            if (v87->field_18)
                            {
                                if (!(char)v85.equal(v27, v26, v27))
                                    continue;
                            }
                            else
                            {
                                if (!(char)::0x60cdf0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v85, v27, v26, v27))
                                    continue;
                            }
                            v90 = v87->field_8.parent(v87->field_10);
                            if (!v90)
                                core::option::unwrap_failed(&g_82e6c0); /* do not return */
                            v25.join(v90, a2, v85, v27);
                            v42.push(&v25, &g_82e6d8);
                            v30 = v88;
                            v50 += 32;
                            v48 = &v88[1].padding_0[7];
                        } while (v50 != 32);
                    }
                }
                v79 = &v20;
                core::ptr::drop_in_place<std::fs::DirEntry>(&v20);
                v80 = &v54;
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v54);
                v77 = &(char)v0;
            }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v37);
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v39);
        v78 = &v35;
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<std::path::PathBuf,alloc::vec::Vec<(std::path::PathBuf,bool)>>>(&(char)v0);
    if (v44 <= 1)
    {
        (char)v0.into_iter(&v42);
        v11 + 8.next(&(char)v0);
        *((char *)v11) = 56;
        return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&(char)v0);
    }
    alloc::slice::stable_sort(8, v44);
    (char)v0.into_iter(&v42);
    v6 = &v59;
    v11 + 80.collect(&(char)v0);
    v94 = a3;
    v95 = v94->field_10;
    v96 = v94->field_20;
    v97 = v94->field_30;
    *((uint128_t *)&v1) = v94->field_0;
    v4 = v95;
    v7 = v96;
    v8 = v97;
    v10 = v94->field_40;
    *((char *)v11) = 0;
    v98 = (int128_t)(&v1)[9];
    v99 = (int128_t)(&v4)[9];
    v100 = (int128_t)(&v7)[9];
    *((int128_t *)&v11[1]) = (int128_t)v0;
    v11[17] = v98;
    v11[33] = v99;
    v11[49] = v100;
    *((unsigned long *)&v11[64]) = v9;
    *((unsigned long *)&v11[72]) = v10;
    return v10;
}
