void uu_tail::follow::watch::Observer::handle_event(unsigned long a0, struct_2 *a1, struct_4 *a2, unsigned int a3)
{
    unsigned long v0;  // [bp-0x3b0]
    char *v1;  // [bp-0x3a8]
    unsigned long long v2;  // [bp-0x3a0]
    int v3;  // [bp-0x398], Other Possible Types: void*, char *, unsigned long long
    int v4;  // [bp-0x398]
    char *v5;  // [bp-0x398]
    int v6;  // [bp-0x390], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x388], Other Possible Types: unsigned long long
    char v8;  // [bp-0x380]
    char *v9;  // [bp-0x378], Other Possible Types: unsigned long long
    int v10;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x378]
    unsigned long long v12;  // [bp-0x378]
    unsigned long long v13;  // [bp-0x378]
    unsigned long long v14;  // [bp-0x370]
    char *v15;  // [bp-0x368], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x368]
    int v17;  // [bp-0x360], Other Possible Types: unsigned int, unsigned long long
    void* v18;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x350]
    void* v20;  // [bp-0x2a0]
    char v21;  // [bp-0x298]
    int v22;  // [bp-0x290]
    void* v23;  // [bp-0x280]
    unsigned long long v24;  // [bp-0x278]
    void* v25;  // [bp-0x270]
    int v26;  // [bp-0x268], Other Possible Types: char *, unsigned long long
    int v27;  // [bp-0x268]
    unsigned long long v28;  // [bp-0x260]
    char *v29;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x250]
    void* v31;  // [bp-0x248]
    char v32;  // [bp-0x1b8]
    char v33;  // [bp-0x190]
    char v34;  // [bp-0x180]
    char v35;  // [bp-0x108]
    unsigned long v37;  // rbp
    unsigned long long v38[3];  // r15
    unsigned int v40;  // eax
    unsigned int v41;  // eax
    unsigned int v42;  // eax
    struct_6 *v43;  // rax
    unsigned long long v45;  // rdx
    unsigned long long v48;  // rdx
    void* v51;  // r13
    char v52;  // al
    unsigned long long v54;  // rax
    unsigned long long v55;  // rdx
    unsigned int v56;  // ebx
    struct_3 *v57;  // rax
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rax
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rdx
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rdx
    unsigned long long v66;  // rdx
    struct_3 *v67;  // rbx
    unsigned long long v68;  // rdx
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rdx

    if (!a2->field_10)
        core::option::unwrap_failed(&g_573710); /* do not return */
    v37 = a3;
    v38 = a2->field_8;
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v0 = &a1->field_38;
    v21.clone(a1->field_38.get(v38[1], v38[2]) + 176);
    v40 = a2->field_20;
    if (v40 != 2)
    {
        if (v40 == 3)
        {
            v41 = a2->field_21;
            if (v41 != 1)
            {
                if (v41 != 2)
                {
                    if (v41 == 3)
                    {
                        v42 = a2->field_22;
                        if (v42 == 1)
                            goto LABEL_4a43ab;
                        if (v42 != 3)
                        {
                            if (v42 == 2)
                            {
LABEL_4a3f61:
                                if ((a1->field_8e & 1))
                                {
                                    if (((char)v37 & 1))
                                    {
                                        v43 = v0.get_mut_metadata(v38[1], v38[2]);
                                        if (v43 && ((0xf000 & v43->field_38) == 0x1000 || (0xf000 & v43->field_38) == 0x8000 || (0xf000 & v43->field_38) == 0x2000) && *((long long *)(v0.get(v38[1], v38[2]) + 200)))
                                        {
                                            v26 = uucore::util_name();
                                            v28 = v45;
                                            v3 = &v26;
                                            v6 = <&T as core::fmt::Display>::fmt;
                                            v9 = &g_5734a0;
                                            v14 = 2;
                                            v18 = 0;
                                            v15 = &v3;
                                            v17 = 1;
                                            std::io::stdio::_eprint(&v9);
                                            v3 = 0;
                                            v6 = v22;
                                            v8 = 1;
                                            v9 = &v3;
                                            v14 = <os_display::Quoted as core::fmt::Display>::fmt;
                                            v15 = &g_573810;
                                            v17 = <&T as core::fmt::Display>::fmt;
                                            v18 = &g_573800;
                                            v19 = <&T as core::fmt::Display>::fmt;
                                            v26 = &g_573670;
                                            v28 = 4;
                                            v31 = 0;
                                            v29 = &v9;
                                            v30 = 3;
                                            std::io::stdio::_eprint(&v26);
                                        }
                                        if (v38[1].is_orphan(v38[2]) && !v38.slice_contains(a1->field_28, a1->field_30))
                                        {
                                            v26 = uucore::util_name();
                                            v28 = v45;
                                            v3 = &v26;
                                            v6 = <&T as core::fmt::Display>::fmt;
                                            v9 = &g_5734a0;
                                            v14 = 2;
                                            v18 = 0;
                                            v15 = &v3;
                                            v17 = 1;
                                            std::io::stdio::_eprint(&v9);
                                            v9 = &g_5736b0;
                                            v14 = 1;
                                            v15 = 8;
                                            *((uint128_t *)&v17) = 0;
                                            std::io::stdio::_eprint(&v9);
                                            v26 = uucore::util_name();
                                            v28 = v45;
                                            v3 = &v26;
                                            v6 = <&T as core::fmt::Display>::fmt;
                                            v9 = &g_5734a0;
                                            v14 = 2;
                                            v18 = 0;
                                            v15 = &v3;
                                            v17 = 1;
                                            std::io::stdio::_eprint(&v9);
                                            *((unsigned long long **)&v27) = &g_573510;
                                            v28 = <&T as core::fmt::Display>::fmt;
                                            v9 = &g_5736c0;
                                            v14 = 2;
                                            v18 = 0;
                                            v15 = &(unsigned long long)v27;
                                            v17 = 1;
                                            std::io::stdio::_eprint(&v9);
                                            v9.clone(v38[1], v38[2]);
                                            v29 = v15;
                                            *((int128_t *)&v27) = *((int128_t *)&v9);
                                            a1->padding_20.push(&(unsigned long long)v27, &g_573820);
                                            if (a1->field_0 == 3)
                                                core::option::unwrap_failed(&g_573838); /* do not return */
                                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a1->field_10.unwatch(a1->field_18), &g_572f18);
                                        }
                                    }
                                    else
                                    {
                                        v26 = uucore::util_name();
                                        v28 = v48;
                                        v3 = &v26;
                                        v6 = <&T as core::fmt::Display>::fmt;
                                        v9 = &g_5734a0;
                                        v14 = 2;
                                        v18 = 0;
                                        v15 = &v3;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v9);
                                        v26 = &v21;
                                        v28 = <alloc::string::String as core::fmt::Display>::fmt;
                                        v29 = &g_573800;
                                        v30 = <&T as core::fmt::Display>::fmt;
                                        *((unsigned long long **)&v10) = &g_5736e0;
                                        v14 = 3;
                                        v18 = 0;
                                        v15 = &v26;
                                        v17 = 2;
                                        std::io::stdio::_eprint(&(unsigned long long)v10);
                                        if (!v0.files_remaining() && a1->field_8d == 1)
                                        {
                                            v26.to_vec("no files remaining \ndirectory containing watched file was removed\n cannot be used, reverting to polling\n", 18);
                                            v15 = &g_573800;
                                            *((int128_t *)&v10) = *((int128_t *)&v26);
                                            v17 = 1;
                                            *((double *)&v20[8]) = (unsigned long long)v10.new();
                                            *((unsigned long long **)&v20[16]) = &g_572f18;
                                            *((unsigned long long *)v20) = 0x8000000000000000;
                                            core::ptr::drop_in_place<alloc::string::String>(&v21);
                                            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v23);
                                            return;
                                        }
                                    }
                                    v0.reset_reader(v38[1], v38[2]);
                                }
                                else
                                {
                                    if ((!(a1->field_8e & 1) & a1->field_8e != 2) && a1->field_8c == 1)
                                    {
                                        if (a1->field_0 != 3)
                                        {
                                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a1->field_10.unwatch(a1->field_18), &g_572f18);
                                            (char)v10.remove(v0, v38[1], v38[2]);
                                            core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&(char)v10);
                                        }
                                        else
                                        {
                                            core::option::unwrap_failed(&g_5737e8); /* do not return */
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (((a1->field_8e != 2 ^ a1->field_8e) & 1))
                            {
                                v51 = &v38[a2->field_10];
                                if (v51 == 24)
                                    core::option::unwrap_failed(&g_573770); /* do not return */
                                (char)v10.clone((long long)v51[16], (long long)v51[8]);
                                v29 = v15;
                                *((int128_t *)&v26) = (int128_t)v10;
                                v23.push(&(char)v26, &g_573788);
                                (char)v10.remove(v0, v38[1], v38[2]);
                                v35.from_other_with_path(&(char)v10, (long long)v51[16], (long long)v51[8]);
                                if ((char)(((0 ^ *((long long *)v0)) & (0 ^ -(*((long long *)v0)))) >> 63))
                                    core::option::unwrap_failed(&g_5737a0); /* do not return */
                                v52 = a1->field_40.eq(a1->field_48, v38[1], v38[2]);
                                v0.insert((long long)v51[16], (long long)v51[8], &v35, v52);
                                if (a1->field_0 == 3)
                                    core::option::unwrap_failed(&g_5737b8); /* do not return */
                                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a1->field_10.unwatch(a1->field_18), &g_572f18);
                                if (a1->field_0 == 3)
                                    core::option::unwrap_failed(&g_5737d0); /* do not return */
                                v54 = a1->field_10.watch_with_parent(a1->field_18, (long long)v51[16], (long long)v51[8]);
                                if (v54)
                                {
                                    *((unsigned long long *)&v20[8]) = v54;
                                    *((unsigned long long *)&v20[16]) = v55;
                                    *((unsigned long long *)v20) = 0x8000000000000000;
                                    core::ptr::drop_in_place<alloc::string::String>(&v21);
                                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v23);
                                    return;
                                }
                            }
                        }
                    }
                }
                else
                {
                    if (!(a2->field_22 & 5))
                        goto LABEL_4a43ab;
                }
            }
            else
            {
                if (!a2->field_22)
                {
LABEL_4a43ab:
                    std::fs::metadata(&(char)v26, v38[1], v38[2]);
                    if ((int)v26 == 2)
                    {
                        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v26);
                    }
                    else
                    {
                        memcpy(&v32, &(char)v26, 176);
                        v56 = 0xf000 & *((int *)&v34);
                        if (v56 == 0x8000 || v56 == 0x2000)
                        {
                            v57 = v0.get(v38[1], v38[2]);
                            if (v57->field_0 != 2)
                                goto LABEL_4a488d;
                            goto LABEL_4a4432;
                        }
                        v57 = v0.get(v38[1], v38[2]);
                        if (v57->field_0 == 2)
                        {
                            if (v56 == 0x1000)
                            {
LABEL_4a4432:
                                v3 = uucore::util_name();
                                v6 = v64;
                                v1 = &v3;
                                v2 = <&T as core::fmt::Display>::fmt;
                                v10 = &g_5734a0;
                                v14 = 2;
                                v18 = 0;
                                v15 = &v1;
                                v17 = 1;
                                std::io::stdio::_eprint(&v10);
                                *((unsigned long long *)&v4) = 0;
                                v6 = v22;
                                v8 = 1;
                                v1 = &(unsigned long long)v4;
                                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                v9 = &g_5735d0;
                                v14 = 2;
                                v18 = 0;
                                v15 = &v1;
                                v17 = 1;
                                std::io::stdio::_eprint(&v9);
                                v59 = v0.update_reader(v38[1], v38[2]);
                                if (v59)
                                    goto LABEL_4a4ce2;
                                v9.clone(v38[1], v38[2]);
                                v7 = v15;
                                *((int128_t *)&v4) = *((int128_t *)&v9);
                                v23.push(&(unsigned long long)v4, &g_573758);
                                goto LABEL_4a5053;
                            }
                            else
                            {
                                if (((char)v37 & 1))
                                {
                                    if (((a1->field_8e != 2 ^ a1->field_8e) & 1))
                                    {
                                        v3 = uucore::util_name();
                                        v6 = v58;
                                        v1 = &v3;
                                        v2 = <&T as core::fmt::Display>::fmt;
                                        v9 = &g_5734a0;
                                        v14 = 2;
                                        v18 = 0;
                                        v15 = &v1;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v9);
                                        v3 = 0;
                                        v6 = v22;
                                        v8 = 1;
                                        v1 = &v3;
                                        v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v9 = &g_573650;
                                        v14 = 2;
                                        v18 = 0;
                                        v15 = &v1;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v9);
                                        if (a1->field_0 == 3)
                                            core::option::unwrap_failed(&g_573740); /* do not return */
                                        a1->field_18->field_20(&v9, a1->field_10, v38[1], v38[2]);
                                        core::ptr::drop_in_place<core::result::Result<bool,notify::error::Error>>(&v9);
                                        v9.remove(v0, v38[1], v38[2]);
                                        core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&v9);
                                        if ((char)v0.no_files_remaining(v37))
                                        {
                                            v3.to_vec("no files remaining \ndirectory containing watched file was removed\n cannot be used, reverting to polling\n", 18);
                                            v15 = v7;
                                            *((int128_t *)&v10) = *((int128_t *)&v3);
                                            v17 = 1;
                                            v59 = v9.new();
                                            v60 = &g_572f18;
                                            goto LABEL_4a4ce2;
                                        }
                                    }
                                    else
                                    {
                                        v3 = uucore::util_name();
                                        v6 = v61;
                                        v1 = &v3;
                                        v2 = <&T as core::fmt::Display>::fmt;
                                        v10 = &g_5734a0;
                                        v14 = 2;
                                        v18 = 0;
                                        v15 = &v1;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v10);
                                        v3 = 0;
                                        v6 = v22;
                                        v8 = 1;
                                        v1 = &v3;
                                        v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v9 = &g_573630;
                                        v14 = 2;
                                        v18 = 0;
                                        v15 = &v1;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v9);
                                    }
                                }
                            }
                        }
                        if (v56 == 0x1000)
                        {
LABEL_4a488d:
                            if ((0xf000 & v57->field_38) == 0x1000 || (0xf000 & v57->field_38) == 0x2000 || (0xf000 & v57->field_38) == 0x8000)
                            {
                                if (v57->field_c8)
                                {
                                    v67 = v57;
                                    if ((char)a2->field_20.eq(&g_424e4b) || a1->field_8d && v67->field_28 != *((long long *)&v33))
                                    {
                                        v3 = uucore::util_name();
                                        v6 = v68;
                                        v1 = &v3;
                                        v2 = <&T as core::fmt::Display>::fmt;
                                        v12 = &g_5734a0;
                                        v14 = 2;
                                        v18 = 0;
                                        v15 = &v1;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v12);
                                        v5 = 0;
                                        v6 = v22;
                                        v8 = 1;
                                        v1 = &v5;
                                        v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v9 = &g_5735f0;
                                        v14 = 2;
                                        v18 = 0;
                                        v16 = &v1;
                                        v17 = 1;
                                        std::io::stdio::_eprint(&v9);
                                        v59 = v0.update_reader(v38[1], v38[2]);
                                    }
                                    else
                                    {
                                        (char)v9.got_truncated(v67, &v32);
                                        v59 = v9;
                                        v60 = v14;
                                        if (v9)
                                        {
LABEL_4a4ce2:
                                            *((unsigned long long *)&v20[8]) = v59;
                                            *((unsigned long long *)&v20[16]) = v60;
                                            *((unsigned long long *)v20) = 0x8000000000000000;
                                            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v26);
                                            core::ptr::drop_in_place<alloc::string::String>(&v21);
                                            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v23);
                                            return;
                                        }
                                        if (((char)v14 & 1))
                                        {
                                            v3 = uucore::util_name();
                                            v6 = v69;
                                            v1 = &v3;
                                            v2 = <&T as core::fmt::Display>::fmt;
                                            v13 = &g_5734a0;
                                            v14 = 2;
                                            v18 = 0;
                                            v15 = &v1;
                                            v17 = 1;
                                            std::io::stdio::_eprint(&v13);
                                            v5 = &v21;
                                            v6 = <alloc::string::String as core::fmt::Display>::fmt;
                                            v9 = &g_573610;
                                            v14 = 2;
                                            v18 = 0;
                                            v16 = &v5;
                                            v17 = 1;
                                            std::io::stdio::_eprint(&v9);
                                            v59 = v0.update_reader(v38[1], v38[2]);
                                        }
                                        else
                                        {
LABEL_4a4e3b:
                                            (char)v9.clone(v38[1], v38[2]);
                                            v7 = v16;
                                            *((int128_t *)&v3) = *((int128_t *)&v9);
                                            v23.push(&(unsigned long long)v3, &g_573728);
                                            goto LABEL_4a5053;
                                        }
                                    }
                                }
                                else
                                {
                                    v3 = uucore::util_name();
                                    v6 = v70;
                                    v1 = &v3;
                                    v2 = <&T as core::fmt::Display>::fmt;
                                    v13 = &g_5734a0;
                                    v14 = 2;
                                    v18 = 0;
                                    v15 = &v1;
                                    v17 = 1;
                                    std::io::stdio::_eprint(&v13);
                                    v5 = 0;
                                    v6 = v22;
                                    v8 = 1;
                                    v1 = &v5;
                                    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                    v9 = &g_5735d0;
                                    v14 = 2;
                                    v18 = 0;
                                    v16 = &v1;
                                    v17 = 1;
                                    std::io::stdio::_eprint(&v9);
                                    v59 = v0.update_reader(v38[1], v38[2]);
                                }
                            }
                            else
                            {
                                v3 = uucore::util_name();
                                v6 = v66;
                                v1 = &v3;
                                v2 = <&T as core::fmt::Display>::fmt;
                                v11 = &g_5734a0;
                                v14 = 2;
                                v18 = 0;
                                v15 = &v1;
                                v17 = 1;
                                std::io::stdio::_eprint(&v11);
                                v5 = 0;
                                v6 = v22;
                                v8 = 1;
                                v1 = &v5;
                                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                v9 = &g_5735b0;
                                v14 = 2;
                                v18 = 0;
                                v16 = &v1;
                                v17 = 1;
                                std::io::stdio::_eprint(&v9);
                                v59 = v0.update_reader(v38[1], v38[2]);
                            }
                            if (!v59)
                                goto LABEL_4a4e3b;
                            goto LABEL_4a4ce2;
                        }
                        else
                        {
                            if ((0xf000 & v57->field_38) == 0x1000 || (0xf000 & v57->field_38) == 0x8000 || (0xf000 & v57->field_38) == 0x2000)
                            {
                                if (v57->field_c8)
                                {
                                    v0.reset_reader(v38[1], v38[2]);
                                }
                                else
                                {
                                    v3 = uucore::util_name();
                                    v6 = v63;
                                    v1 = &v3;
                                    v2 = <&T as core::fmt::Display>::fmt;
                                    v10 = &g_5734a0;
                                    v14 = 2;
                                    v18 = 0;
                                    v15 = &v1;
                                    v17 = 1;
                                    std::io::stdio::_eprint(&v10);
                                    v3 = 0;
                                    v6 = v22;
                                    v8 = 1;
                                    v1 = &v3;
                                    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                                    v9 = &g_573630;
                                    v14 = 2;
                                    v18 = 0;
                                    v15 = &v1;
                                    v17 = 1;
                                    std::io::stdio::_eprint(&v9);
                                }
                            }
LABEL_4a5053:
                            memcpy(&v9, &v32, 176);
                            v0.update_metadata(v38[1], v38[2], &v9);
                            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v26);
                        }
                    }
                }
            }
        }
        else if (v40 == 4 && !(a2->field_21 >= 2))
        {
            goto LABEL_4a3f61;
        }
    }
    else
    {
        if (a2->field_21 != 3)
            goto LABEL_4a43ab;
    }
    *((unsigned long long *)&v20[16]) = 0;
    *((int128_t *)v20) = *((int128_t *)&v23);
    core::ptr::drop_in_place<alloc::string::String>(&v21);
    return;
}
