long long uu_ls::list(struct_1 *a0, struct_2 *a1)
{
    char v0;  // [sp-0x539]
    char v1;  // [bp-0x530]
    unsigned long v2;  // [bp-0x530]
    char v3;  // [bp-0x530]
    int v4;  // [bp-0x528], Other Possible Types: char *, unsigned long long
    unsigned long long v5;  // [bp-0x520]
    int v6;  // [bp-0x518], Other Possible Types: char *
    unsigned long long v7;  // [bp-0x510]
    unsigned long long v8;  // [bp-0x508]
    struct_0 *v9;  // [bp-0x500]
    unsigned long long v10;  // [sp-0x4f0]
    void* v11;  // [bp-0x4e8]
    unsigned long long v12;  // [bp-0x4e0]
    void* v13;  // [bp-0x4d8]
    void* v14;  // [bp-0x4d0]
    unsigned long long v15;  // [bp-0x4c8]
    void* v16;  // [bp-0x4c0]
    unsigned long long v17;  // [bp-0x4b8]
    char v18;  // [bp-0x4b0]
    unsigned long long v19;  // [bp-0x4a8]
    char v20;  // [bp-0x4a0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x498]
    void* v22;  // [bp-0x490], Other Possible Types: char
    unsigned long long v23;  // [bp-0x480]
    int v24;  // [bp-0x478]
    struct_0 *v25;  // [bp-0x470]
    unsigned long long v26;  // [bp-0x468]
    void* v27;  // [bp-0x460]
    unsigned long long v28;  // [bp-0x458]
    uint128_t v29;  // [bp-0x450]
    unsigned long long v30;  // [bp-0x440]
    int v31;  // [bp-0x438]
    unsigned long long v32;  // [bp-0x430]
    unsigned long long v33;  // [bp-0x428]
    unsigned long long v34;  // [bp-0x420]
    char v35;  // [bp-0x418]
    char v36;  // [bp-0x408]
    unsigned long long v37;  // [bp-0x3f8]
    char v38;  // [bp-0x3f0]
    char v39;  // [bp-0x3e0]
    char v40;  // [bp-0x3d0]
    char v41;  // [bp-0x3c0]
    unsigned long v42;  // [bp-0x3b0]
    char v43;  // [sp-0x3a8]
    char v44;  // [sp-0x393]
    char v45;  // [bp-0x390]
    char v46;  // [bp-0x380]
    char v47;  // [bp-0x370]
    char v48;  // [bp-0x360]
    char v49;  // [bp-0x350]
    char v50;  // [bp-0x340]
    char v51;  // [bp-0x328]
    void* v52;  // [bp-0x328]
    unsigned long long v53;  // [bp-0x328]
    unsigned long long v54;  // [bp-0x328]
    unsigned long long v55;  // [bp-0x328]
    unsigned long long v56;  // [bp-0x328]
    unsigned long long v57;  // [sp-0x320]
    char v58;  // [sp-0x318], Other Possible Types: unsigned long long
    unsigned long long v59;  // [bp-0x318]
    int v60;  // [bp-0x310]
    unsigned long long v61;  // [bp-0x310]
    int v62;  // [bp-0x310]
    int v63;  // [bp-0x310]
    char v64;  // [sp-0x308]
    void* v65;  // [bp-0x308]
    void* v66;  // [bp-0x308]
    char v67;  // [bp-0x2f8]
    int v68;  // [bp-0x1f8]
    unsigned long long v69;  // [bp-0x1f8]
    unsigned long long v70;  // [bp-0x1f0]
    int v71;  // [bp-0x1f0]
    int v72;  // [bp-0x1e8]
    unsigned long long v73;  // [bp-0x1e0]
    int v74;  // [bp-0x1d8]
    unsigned long long v75;  // [bp-0x1d8]
    struct_0 *v76;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v77;  // [bp-0xc0]
    char v78;  // [bp-0xb8]
    unsigned long v81;  // 4100
    unsigned long v82;  // r14
    unsigned long long v83;  // rax
    struct_0 *v84;  // rdx
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    struct_2 *v87;  // rcx
    unsigned int v88;  // ebp
    unsigned int v89;  // r15d
    unsigned long long v90;  // rdx
    unsigned int *v91;  // rax
    struct_2 *v92;  // r13
    unsigned long long v93;  // rax
    void* v94;  // r15
    unsigned long long v95;  // rax
    unsigned long long v96;  // r14
    struct_0 *v97;  // r12
    unsigned long v98;  // r13
    unsigned long long v99;  // rax
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    unsigned long long v102;  // rax
    unsigned long long v103;  // rax
    unsigned long long v104;  // rax
    int v105;  // xmm0
    int v106;  // xmm1
    unsigned long long v107;  // r14
    void* v108;  // rax
    unsigned long long v109;  // [bp-0x478]

    v11 = 0;
    v12 = 8;
    v13 = 0;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v30 = 8;
    *((uint128_t *)&v31) = 0;
    v2 = a0->field_10;
    v20.with_capacity(std::io::stdio::stdout());
    v81 = a1->field_18;
    v82 = &a1->field_18;
    if ((char)(((0 ^ v81) & (0 ^ -(v81))) >> 63))
        v82 = 0;
    v83 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v6) = g_6865a8;
    *((uint128_t *)&v4) = g_686598;
    v8 = v83;
    v9 = v84;
    v85 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v72) = g_6865a8;
    *((uint128_t *)&v68) = g_686598;
    v75 = v85;
    v76 = v84;
    v51.new(&a1->padding_20[152]);
    v10 = 0x8000000000000000;
    v37 = v23;
    memcpy(&v36, &v22, 16);
    memcpy(&v35, &v20, 16);
    v42 = v82;
    v43 = 2;
    v44 = (char)(((0 ^ v81) & (0 ^ -(v81))) >> 63) * 2;
    memcpy(&v45, &(char)v4, 16);
    memcpy(&v46, &v6, 16);
    memcpy(&v47, &v8, 16);
    memcpy(&v48, &v68, 16);
    memcpy(&v49, &v72, 16);
    memcpy(&v50, &v75, 16);
    memcpy(&v41, &v67, 16);
    memcpy(&v40, &v64, 16);
    memcpy(&v39, &v58, 16);
    memcpy(&v38, &v51, 16);
    (char)v4.into_iter(a0);
    if ((char)v4.next())
    {
        v87 = a1;
        v0 = v87->field_f0;
        v88 = v87->field_f3;
        v89 = v87->field_fa;
        do
        {
            v51.to_vec(v86, v90);
            v26 = v58;
            *((int128_t *)&v24) = *((int128_t *)&v52);
            v52 = 0;
            v20 = 0x8000000000000000;
            (char)v68.new(&(unsigned long long)v24, &v52, &v20, v88, v89, 1);
            if (!(char)v68.get_metadata(&v35))
            {
                core::ptr::drop_in_place<uu_ls::PathData>(&(char)v68);
            }
            else
            {
                v91 = (char)v68.file_type(&v35);
                if (!v91)
                {
                    uucore::mods::error::set_exit_code(1);
                }
                else if (!(v0 & 1) && ((unsigned short)*(v91) & 0xf000) == 0x4000)
                {
                    memcpy(&v52, &(char)v68, 304);
                    v14.push(&v52, &g_686b68);
                    continue;
                }
                memcpy(&v52, &(char)v68, 304);
                v11.push(&v52, &g_686b80);
            }
            v86 = (char)v4.next();
        } while (v86);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::path::Path>>(&(char)v4);
    v92 = a1;
    uu_ls::sort_entries(8, v13, v92);
    uu_ls::sort_entries(8, 0, v92);
    if (v44 != 2 && v42.get_normal_style())
    {
        v44 = 1;
        v43 = 2;
        v4 = &g_4cfea8;
        v5 = 4;
        v69 = &v4;
        v70 = <&T as core::fmt::Display>::fmt;
        v53 = &g_4cf290;
        v57 = 1;
        v65 = 0;
        v58 = &v69;
        v61 = 1;
        v93 = v35.write_fmt(&v53);
        if (!v93)
            goto LABEL_59a0ba;
        v94 = v93.from();
LABEL_59a0e0:
LABEL_59a0e3:
        core::ptr::drop_in_place<uu_ls::ListState>(&v35);
        core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(&v27);
        v14.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
    }
    else
    {
LABEL_59a0ba:
        v94 = uu_ls::display_items(8, v13, v92, &v35, &v27);
        if (v94)
            goto LABEL_59a0e0;
        v20 = 8;
        v21 = 8;
        v22 = 0;
        v95 = v20.next();
        if (v84)
        {
            v96 = v95;
            v97 = v84;
            v3 = v92->field_f6;
            v0 = 2 <= v2 | v92->field_ee;
            v10 = 9223372036854775810;
            do
            {
                v98 = &v97->padding_14[4];
                std::fs::read_dir(&v33, v98);
                if ((char)v34 == 2)
                {
                    v19 = v33;
                    v99 = v35.flush();
                    v92 = a1;
                    if (!v99)
                    {
                        v51.clone(v97->field_20, v97->field_28);
                        v73 = v58;
                        *((int128_t *)&v71) = *((int128_t *)&v56);
                        v75 = v19;
                        v76 = v97->field_129;
                        v69 = 9223372036854775810;
                        uucore::mods::error::set_exit_code(v76 + 1);
                        v109 = uucore::util_name();
                        v25 = v84;
                        v4 = &v109;
                        v5 = <&T as core::fmt::Display>::fmt;
                        v6 = &v69;
                        v7 = <uu_ls::LsError as core::fmt::Display>::fmt;
                        v54 = &g_686b10;
                        v57 = 3;
                        v66 = 0;
                        v58 = &v4;
                        v61 = 2;
                        std::io::stdio::_eprint(&v54);
                        core::ptr::drop_in_place<uu_ls::LsError>(&v69);
                        continue;
                    }
                    else
                    {
                        v94 = v99.from();
                        core::ptr::drop_in_place<std::io::error::Error>(&v19);
                        goto LABEL_59a0e3;
                    }
                }
                v17 = v33;
                v18 = v34;
                if ((v0 & 1))
                {
                    if (v96 || v13)
                    {
                        v54 = &g_6866e0;
                        v57 = 1;
                        v59 = 8;
                        *((uint128_t *)&v63) = 0;
                        v102 = v35.write_fmt(&v54);
                        if (!v102)
                        {
                            v103 = uu_ls::show_dir_name(v97, &v35, a1);
                            if (!v103)
                            {
                                v56 = &g_6866e0;
                                v57 = 1;
                                v58 = 8;
                                *((uint128_t *)&v60) = 0;
                                v104 = v35.write_fmt(&v56);
                                if (!v104)
                                    goto LABEL_59a411;
                                v108 = v104.from();
                            }
                            else
                            {
                                v108 = v103.from();
                            }
                        }
                        else
                        {
                            v108 = v102.from();
                        }
                    }
                    else
                    {
                        if ((v1 & 1))
                        {
                            v94 = uu_ls::dired::indent(&v35);
                            if (v94)
                                goto LABEL_59a6c5;
                        }
                        v100 = uu_ls::show_dir_name(v97, &v35, a1);
                        if (!v100)
                        {
                            v55 = &g_6866e0;
                            v57 = 1;
                            v58 = 8;
                            *((uint128_t *)&v62) = 0;
                            v101 = v35.write_fmt(&v55);
                            if (!v101)
                            {
                                if ((v1 & 1))
                                {
                                    uu_ls::dired::calculate_subdired(&v27, *((long long *)&v97->field_10));
                                    v32 = v32 + *((long long *)&v97->field_10) + 3;
                                    goto LABEL_59a411;
                                }
                            }
                            else
                            {
                                v108 = v101.from();
                            }
                        }
                        else
                        {
                            v108 = v100.from();
                        }
                    }
                    v94 = v108;
LABEL_59a6c5:
LABEL_59a6c8:
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v17);
                    goto LABEL_59a0e3;
                }
                else
                {
LABEL_59a411:
                    v51.default();
                    v105 = *((int128_t *)&v56);
                    v106 = *((int128_t *)&v58);
                    *((int128_t *)&v74) = *((int128_t *)&v66);
                    v72 = v106;
                    v68 = v105;
                    v51.from_path(v98, v97->field_128);
                    v92 = a1;
                    v107 = v57;
                    if ((int)v56 != 1)
                    {
                        memcpy(&v78, &(char)v58, 136);
                        v77 = v107;
                        (char)v68.insert(&v77);
                        v94 = uu_ls::enter_directory(v97, v17, v18, v92, &v35, &(char)v68, &v27);
                        core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(v69, v70);
                        if (!v94)
                            goto LABEL_59a1a0;
                        else
                            goto LABEL_59a0e3;
                    }
                    else
                    {
                        v94 = v107.from();
                        core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(v69, v70);
                        goto LABEL_59a6c8;
                    }
                }
LABEL_59a1a0:
                v96 = v20.next();
                v97 = v84;
            } while (v84);
        }
        else if ((v92->field_f6 & 1) && !v92->field_f7)
        {
            v94 = uu_ls::dired::print_dired_output(v92, &v27, &v35);
            if (v94)
                goto LABEL_59a0e0;
        }
        core::ptr::drop_in_place<uu_ls::ListState>(&v35);
        core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(&v27);
        v14.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
        v94 = 0;
    }
    v11.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
    return v94;
}
