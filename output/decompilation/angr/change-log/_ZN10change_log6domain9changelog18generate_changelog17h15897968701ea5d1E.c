long long change_log::domain::changelog::generate_changelog(unsigned long a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x200]
    unsigned long long v1;  // [bp-0x1f8]
    char *v2;  // [bp-0x1f0]
    int v3;  // [bp-0x1e8]
    unsigned long long v4;  // [bp-0x1e0]
    char *v5;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x1c8]
    unsigned long long v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c8]
    char v9;  // [bp-0x1c8]
    unsigned long long v10;  // [bp-0x1c8]
    int v11;  // [bp-0x1c8]
    unsigned long long v12;  // [bp-0x1c8]
    unsigned long long v13;  // [bp-0x1c0]
    char *v14;  // [bp-0x1b8], Other Possible Types: char
    char *v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b0]
    void* v17;  // [bp-0x1a8], Other Possible Types: char
    int v18;  // [bp-0x188], Other Possible Types: char *
    char *v19;  // [bp-0x188], Other Possible Types: int, unsigned long long
    unsigned long long v20;  // [bp-0x180]
    char *v21;  // [bp-0x178], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x168]
    unsigned long long v23;  // [bp-0x160]
    void* v24;  // [bp-0x158]
    char *v25;  // [bp-0x150]
    char *v26;  // [bp-0x148]
    unsigned long long v27;  // [bp-0x140]
    void* v28;  // [bp-0x138], Other Possible Types: unsigned long long
    int v29;  // [bp-0x138]
    int v30;  // [bp-0x138]
    int v31;  // [bp-0x130]
    int v32;  // [bp-0x130]
    int v33;  // [bp-0x128]
    int v34;  // [bp-0x128]
    unsigned long long v35;  // [bp-0x120]
    int v36;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x110]
    struct_0 *v38;  // [bp-0xf8]
    void* v39;  // [bp-0xf0]
    unsigned long long v40;  // [bp-0xe8]
    void* v41;  // [bp-0xe0]
    int v42;  // [bp-0xd8]
    int v43;  // [bp-0xc8]
    unsigned long v44;  // [bp-0xc0]
    unsigned long long v45;  // [bp-0xb8]
    unsigned long long v46;  // [bp-0xb0]
    int v47;  // [bp-0xa8]
    int v48;  // [bp-0x98]
    unsigned long long v49;  // [bp-0x88]
    unsigned long long v50;  // [bp-0x80]
    int v51;  // [bp-0x78]
    int v52;  // [bp-0x68]
    unsigned long v53;  // [bp-0x60]
    int v54;  // [bp-0x58], Other Possible Types: char
    char v55;  // [bp-0x48]
    unsigned long long v56;  // [bp-0x40]
    char v57;  // [bp-0x38]
    unsigned long long v59;  // rax
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rax
    int v62;  // xmm0
    unsigned long long v63;  // rax
    unsigned long long v64;  // r12
    void* v65;  // r13
    unsigned long long v66;  // rax
    int v67;  // xmm0
    unsigned long long v68;  // rax
    int v69;  // xmm0
    unsigned long long v70;  // rax
    int v71;  // xmm1
    char v72;  // bpl
    unsigned long long v73[5];  // rbx
    unsigned long long v74[5];  // rbx
    unsigned long long v75[5];  // rbx
    unsigned long long v76[5];  // rax
    unsigned long long v77[5];  // rax
    unsigned long long v78[5];  // rax
    unsigned long long v80;  // [bp-0x130]
    int v81;  // [bp-0x128], Other Possible Types: unsigned long long

    v22 = 0;
    v23 = 1;
    v24 = 0;
    v59 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v48) = g_aa5b58;
    *((uint128_t *)&v47) = g_aa5b48;
    v49 = v59;
    v50 = v60;
    v61 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v43) = g_aa5b58;
    *((uint128_t *)&v42) = g_aa5b48;
    v45 = v61;
    v46 = v60;
    v39 = 0;
    v40 = 8;
    v41 = 0;
    (char)v10.default();
    v62 = *((int128_t *)&v9);
    memcpy(&v54, &v17, 16);
    *((int128_t *)&v52) = *((int128_t *)&v14);
    v51 = v62;
    v63 = a1[2];
    if (a1[2])
    {
        v64 = a1[1];
        v65 = 0;
        do
        {
            if (*((long long *)(88 + v64 + (char *)v65)))
            {
                (char)v10.clone(v64 + v65 + 72);
                v51.insert(&(char)v10);
            }
            v66 = change_log::domain::changelog::category_from_pr_type(*((long long *)(8 + v64 + (char *)v65)), *((long long *)(16 + v64 + (char *)v65)));
            if (v66)
            {
                if (*(96 + v64 + (char *)v65))
                {
                    (char)v10.rustc_entry(&v42, v66);
                    if (v10)
                    {
                        v67 = *((int128_t *)&v10);
                        *((int128_t *)&v33) = *((int128_t *)&v15);
                        v29 = v67;
                    }
                    else
                    {
                        *((int128_t *)&v31) = *((int128_t *)&v13);
                        v28 = 0;
                    }
                    v68 = v28.or_default();
                    (char)v10.clone(v64 + v65 + 24);
                    v68.push(&(char)v10, &g_aa5bf8);
                    (char)v10.clone(v64 + v65 + 48);
                    v39.push(&(char)v10, &g_aa5c10);
                }
                else
                {
                    (char)v10.rustc_entry(&v47, v66);
                    if (v10)
                    {
                        v69 = *((int128_t *)&v10);
                        *((int128_t *)&v34) = *((int128_t *)&v15);
                        v30 = v69;
                    }
                    else
                    {
                        *((int128_t *)&v32) = *((int128_t *)&v13);
                        v28 = 0;
                    }
                    v70 = v28.or_default();
                    (char)v10.clone(v64 + v65 + 24);
                    v70.push(&(char)v10, &g_aa5be0);
                }
            }
            v65 += 104;
        } while (v63 * 104 != v65);
    }
    if (v53)
    {
        v22.spec_extend("# Summary\n\nIn this release, we:\n", &g_4c54f0);
        v71 = (int128_t)v52;
        v36 = v54;
        v81 = v71;
        v29 = v51;
        (char)v10.into_iter(&(unsigned long long)v29);
        v55.collect(&(char)v10);
        alloc::slice::stable_sort(v56, *((long long *)&v57));
        (unsigned long long)v29.into_iter(&v55);
        (char)v19.next(&(unsigned long long)v29);
        if (!((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63)))
        {
            do
            {
                v5 = v21;
                *((int128_t *)&v3) = *((int128_t *)&v19);
                v26 = &(char)v3;
                v27 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_aa5b80;
                v13 = 2;
                v17 = 0;
                v14 = &v26;
                v16 = 1;
                v0.map_or_else(&v7);
                *((int128_t *)&v11) = *((int128_t *)&v0);
                v15 = v2;
                v22.spec_extend(2, v2 + 2);
                core::ptr::drop_in_place<alloc::string::String>(&v7);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
                (char)v19.next(&(unsigned long long)v29);
            } while (v19 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(unsigned long long)v29);
        v22.push(10);
    }
    else
    {
        v72 = 1;
    }
    v28 = "FeaturesS";
    v80 = 8;
    v81 = "Fixes\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ";
    v35 = 5;
    v36 = "ChoresFixes\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ";
    v37 = 6;
    if (v44)
    {
        v22.spec_extend("# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ", "- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ");
        v25 = &v28;
        v73 = v42.get_inner(&v28);
        if (v73)
        {
            v18 = &v25;
            v20 = <&T as core::fmt::Display>::fmt;
            v7 = &g_aa5ba0;
            v13 = 2;
            v17 = 0;
            v14 = &v18;
            v16 = 1;
            v0.map_or_else(&v7);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v5 = v2;
            v22.spec_extend(v4, &v2[v4]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            v0.collect(v73[3], v73[3] + v73[4] * 24);
            alloc::str::join_generic_copy(&v7, v1, v2, "\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ", 1);
            v21 = v14;
            *((int128_t *)&v19) = *((int128_t *)&v7);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
            v26 = &v18;
            v27 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &g_aa5bc0;
            v13 = 2;
            v17 = 0;
            v15 = &v26;
            v16 = 1;
            v0.map_or_else(&v12);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v5 = v2;
            v22.spec_extend(v4, &v2[v4]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            core::ptr::drop_in_place<alloc::string::String>(&v18);
        }
        v25 = &v81;
        v74 = v42.get_inner(&v81);
        if (v74)
        {
            v19 = &v25;
            v20 = <&T as core::fmt::Display>::fmt;
            v7 = &g_aa5ba0;
            v13 = 2;
            v17 = 0;
            v14 = &v19;
            v16 = 1;
            v0.map_or_else(&v7);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v5 = v2;
            v22.spec_extend(v4, &v2[v4]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            v0.collect(v74[3], v74[3] + v74[4] * 24);
            alloc::str::join_generic_copy(&v7, v1, v2, "\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ", 1);
            v21 = v14;
            *((int128_t *)&v18) = *((int128_t *)&v7);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
            v26 = &v19;
            v27 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &g_aa5bc0;
            v13 = 2;
            v17 = 0;
            v15 = &v26;
            v16 = 1;
            v0.map_or_else(&v6);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v5 = v2;
            v22.spec_extend(v4, &v2[v4]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            core::ptr::drop_in_place<alloc::string::String>(&v19);
        }
        v25 = &v36;
        v75 = v42.get_inner(&v36);
        if (v75)
        {
            v18 = &v25;
            v20 = <&T as core::fmt::Display>::fmt;
            v7 = &g_aa5ba0;
            v13 = 2;
            v17 = 0;
            v14 = &v18;
            v16 = 1;
            v0.map_or_else(&v7);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v5 = v2;
            v22.spec_extend(v4, &v2[v4]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            v0.collect(v75[3], v75[3] + v75[4] * 24);
            alloc::str::join_generic_copy(&v7, v1, v2, "\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ", 1);
            v21 = v14;
            *((int128_t *)&v19) = *((int128_t *)&v7);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
            v26 = &v18;
            v27 = <alloc::string::String as core::fmt::Display>::fmt;
            v8 = &g_aa5bc0;
            v13 = 2;
            v17 = 0;
            v15 = &v26;
            v16 = 1;
            v0.map_or_else(&v8);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v5 = v2;
            v22.spec_extend(v4, &v2[v4]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            core::ptr::drop_in_place<alloc::string::String>(&v18);
        }
    }
    v76 = v47.get_inner(&v28);
    if (v76)
        change_log::domain::changelog::generate_changelog::{{closure}}(&v22, v28, 8, v76[3], v76[4]);
    v77 = v47.get_inner(&v81);
    if (v77)
        change_log::domain::changelog::generate_changelog::{{closure}}(&v22, v81, 5, v77[3], v77[4]);
    v78 = v47.get_inner(&v36);
    if (v78)
        change_log::domain::changelog::generate_changelog::{{closure}}(&v22, v36, 6, v78[3], v78[4]);
    if (v41)
        change_log::domain::changelog::generate_changelog::{{closure}}(&v22, "Migration Notesscripts/change-log/src/domain/changelog.rs\t# ", 15, 8, v41);
    (char)v10.to_vec(core::str::<impl str>::trim_matches(1, 0), v60);
    v38->field_10 = v15;
    v38->field_0 = (int128_t)v11;
    if (v72)
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v51);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v39);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,alloc::vec::Vec<alloc::string::String>>>(&v42);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,alloc::vec::Vec<alloc::string::String>>>(&v47);
    core::ptr::drop_in_place<alloc::string::String>(&v22);
    core::ptr::drop_in_place<alloc::vec::Vec<change_log::domain::models::ChangelogInfo>>(a1);
    return a0;
}
