long long uu_ls::list(struct_1 *a0, struct_2 *a1)
{
    char v0;  // [sp-0x4f9]
    char v1;  // [bp-0x4f0]
    unsigned long v2;  // [bp-0x4f0]
    char v3;  // [bp-0x4f0]
    void* v4;  // [bp-0x4e8]
    unsigned long long v5;  // [bp-0x4e0]
    void* v6;  // [bp-0x4d8]
    void* v7;  // [bp-0x4d0]
    unsigned long long v8;  // [bp-0x4c8]
    void* v9;  // [bp-0x4c0]
    int v10;  // [sp-0x4b8]
    unsigned long v11;  // [bp-0x4b0]
    int v12;  // [bp-0x4ab]
    void* v13;  // [bp-0x4a8]
    char *v14;  // [bp-0x498], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [sp-0x490]
    char *v16;  // [bp-0x488], Other Possible Types: char
    unsigned long long v17;  // [bp-0x480]
    unsigned long long v18;  // [bp-0x478]
    unsigned long long v19;  // [sp-0x468]
    unsigned long long v20;  // [bp-0x460]
    char v21;  // [bp-0x458]
    unsigned long long v22;  // [bp-0x450]
    int v23;  // [bp-0x448], Other Possible Types: unsigned long long
    struct_0 *v24;  // [bp-0x440]
    unsigned long long v25;  // [bp-0x438]
    void* v26;  // [bp-0x430]
    unsigned long long v27;  // [bp-0x428]
    uint128_t v28;  // [bp-0x420]
    unsigned long long v29;  // [bp-0x410]
    int v30;  // [bp-0x408]
    unsigned long long v31;  // [bp-0x400]
    unsigned long long v32;  // [bp-0x3f8]
    unsigned long long v33;  // [bp-0x3f0]
    char v34;  // [bp-0x3e8]
    char v35;  // [bp-0x3d8]
    unsigned long long v36;  // [bp-0x3c8]
    int v37;  // [bp-0x3c0]
    char v38;  // [bp-0x3b8]
    char v39;  // [sp-0x3a3]
    unsigned short v40;  // [bp-0x3a2]
    char v41;  // [bp-0x3a0]
    char v42;  // [bp-0x390]
    char v43;  // [bp-0x380]
    char v44;  // [bp-0x370]
    char v45;  // [bp-0x360]
    char v46;  // [bp-0x350]
    unsigned long long v47;  // [bp-0x340]
    unsigned int v48;  // [bp-0x338]
    void* v49;  // [sp-0x328], Other Possible Types: char, unsigned long long
    int v50;  // [bp-0x328]
    unsigned long long v51;  // [bp-0x320]
    int v52;  // [bp-0x31b]
    unsigned long long v53;  // [sp-0x318]
    int v54;  // [bp-0x318]
    int v55;  // [bp-0x310], Other Possible Types: unsigned long long
    unsigned short v56;  // [bp-0x30a]
    void* v57;  // [bp-0x308]
    struct_0 *v58;  // [bp-0x300]
    int v59;  // [bp-0x1f8]
    char *v60;  // [bp-0x1f8]
    unsigned long long v61;  // [bp-0x1f8]
    unsigned long long v62;  // [bp-0x1f0]
    int v63;  // [bp-0x1f0]
    int v64;  // [bp-0x1e8]
    unsigned long long v65;  // [bp-0x1e0]
    int v66;  // [bp-0x1d8]
    unsigned long long v67;  // [bp-0x1d8]
    struct_0 *v68;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v69;  // [bp-0xc0]
    char v70;  // [bp-0xb8]
    char v73;  // r14b
    int v74;  // xmm0
    unsigned short v75;  // r15w
    unsigned long long v76;  // rax
    struct_0 *v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    struct_2 *v83;  // rcx
    unsigned int v84;  // ebp
    unsigned int v85;  // r15d
    unsigned long long v86;  // rdx
    unsigned int *v87;  // rax
    unsigned long long v88;  // rax
    unsigned long long v89;  // r12
    unsigned long long v90;  // rax
    unsigned long long v91;  // r14
    struct_0 *v92;  // r13
    struct_2 *v93;  // rax
    char *v94;  // r12
    unsigned long v95;  // rbx
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // rax
    unsigned long long v99;  // rax
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    int v102;  // xmm0
    int v103;  // xmm1
    struct_2 *v104;  // rdi
    unsigned long long v105;  // rax
    unsigned long long v106;  // [bp-0x4b8]

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v26 = 0;
    v27 = 8;
    v28 = 0;
    v29 = 8;
    *((uint128_t *)&v30) = 0;
    v14.with_capacity(0x2000, std::io::stdio::stdout());
    v2 = a0->field_10;
    if ((char)(((0 ^ a1->field_18) & (0 ^ -(a1->field_18))) >> 63))
    {
        v73 = 2;
    }
    else
    {
        v49.call_once(&a1->field_18);
        v74 = *((int128_t *)&v49);
        *((int128_t *)&v12) = (int128_t)v52;
        v10 = v74;
        v75 = v56;
    }
    v49.try_with();
    v76 = v49.expect();
    *((uint128_t *)&v59) = g_69f3d0;
    *((uint128_t *)&v64) = g_69f3e0;
    v67 = v76;
    v68 = v77;
    v49.try_with();
    v78 = v49.expect();
    *((uint128_t *)&v50) = g_69f3d0;
    *((uint128_t *)&v54) = g_69f3e0;
    v57 = v78;
    v58 = v77;
    v79 = jiff::timestamp::Timestamp::now();
    (char)v23.checked_sub(v79, (unsigned int)v77, 15778476.new(0), (unsigned int)v77);
    v81 = (char)v23.expect();
    v19 = 0x8000000000000000;
    memcpy(&v34, &v14, 16);
    memcpy(&v35, &v16, 16);
    v36 = v18;
    *((int128_t *)&v37) = (int128_t)v10;
    memcpy(&(char)v37, &(char)v10, 16);
    v39 = v73;
    v40 = v75;
    memcpy(&v41, &v59, 16);
    memcpy(&v42, &v64, 16);
    memcpy(&v43, &v67, 16);
    memcpy(&v46, &v57, 16);
    memcpy(&v45, &v54, 16);
    memcpy(&v44, &v50, 16);
    v47 = v81;
    v48 = (unsigned int)v77;
    v14.into_iter(a0);
    if (v14.next())
    {
        v83 = a1;
        v0 = v83->field_f0;
        v84 = v83->field_f3;
        v85 = v83->field_fa;
        do
        {
            v49.to_owned(v82, v86);
            v25 = v53;
            *((int128_t *)&v23) = *((int128_t *)&v49);
            v49 = 0;
            v106 = 0x8000000000000000;
            (char)v59.new(&(char)v23, &v49, &v106, v84, v85, 1);
            if (!(char)v59.get_metadata(&v34))
            {
                ::0x51c810::core::ptr::drop_in_place<uu_ls::PathData>(&(char)v59);
            }
            else
            {
                v87 = (char)v59.file_type(&v34);
                if (!v87)
                {
                    uucore::mods::error::set_exit_code(1);
                }
                else if (!(v0 & 1) && ((unsigned short)*(v87) & 0xf000) == 0x4000)
                {
                    memcpy(&v49, &(char)v59, 304);
                    v7.push(&v49, &g_69f408);
                    continue;
                }
                memcpy(&v49, &(char)v59, 304);
                v4.push(&v49, &g_69f420);
            }
            v82 = v14.next();
        } while (v82);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::path::Path>>(&v14);
    uu_ls::sort_entries(v5, v6, a1);
    uu_ls::sort_entries(v8, v9, a1);
    if (v39 != 2 && (char)v37.get_normal_style())
    {
        v39 = 1;
        v38 = 2;
        v14 = &g_4263c0;
        v15 = 4;
        v60 = &v14;
        v62 = <&T as core::fmt::Display>::fmt;
        v49 = &g_4259a0;
        v51 = 1;
        v57 = 0;
        v53 = &v60;
        v55 = 1;
        v88 = v34.write_fmt(&v49);
        if (!v88)
            goto LABEL_52b8b6;
        v89 = v88.from();
    }
    else
    {
LABEL_52b8b6:
        v89 = uu_ls::display_items(v5, v6, a1, &v34, &v26);
        if (!v89)
        {
            v106 = v8;
            v11 = v9 * 304 + v8;
            v13 = 0;
            v90 = v106.next();
            if (v77)
            {
                v91 = v90;
                v92 = v77;
                v93 = a1;
                v3 = v93->field_f6;
                v0 = 2 <= v2 | v93->field_ee;
                v19 = 9223372036854775810;
                v94 = &v106;
                do
                {
                    v95 = &v92->padding_18;
                    std::fs::read_dir(&v32, v95);
                    if ((char)v33 == 2)
                    {
                        v22 = v32;
                        v96 = v34.flush();
                        if (!v96)
                        {
                            v49.clone(v95);
                            v65 = v53;
                            *((int128_t *)&v63) = *((int128_t *)&v49);
                            v67 = v22;
                            v68 = v92->field_129;
                            v61 = 9223372036854775810;
                            uucore::mods::error::set_exit_code(v68 + 1);
                            v23 = uucore::util_name();
                            v24 = v77;
                            v14 = &v23;
                            v15 = <&T as core::fmt::Display>::fmt;
                            v16 = &v61;
                            v17 = <uu_ls::LsError as core::fmt::Display>::fmt;
                            v49 = &g_69f378;
                            v51 = 3;
                            v57 = 0;
                            v53 = &v14;
                            v55 = 2;
                            std::io::stdio::_eprint(&v49);
                            ::0x51c730::core::ptr::drop_in_place<uu_ls::LsError>(&v61);
                            goto LABEL_52b9b0;
                        }
                        else
                        {
                            v89 = v96.from();
                            ::0x51ca00::core::ptr::drop_in_place<std::io::error::Error>(&v22);
                            goto LABEL_52b8e3;
                        }
                    }
                    v20 = v32;
                    v21 = v33;
                    if ((v0 & 1))
                    {
                        if (v91 || v6)
                        {
                            v49 = &g_69f3a8;
                            v51 = 1;
                            v53 = 8;
                            *((uint128_t *)&v55) = 0;
                            v99 = v34.write_fmt(&v49);
                            if (!v99)
                            {
                                v100 = uu_ls::show_dir_name(v92, &v34, a1);
                                if (!v100)
                                {
                                    v49 = &g_69f3a8;
                                    v51 = 1;
                                    v53 = 8;
                                    *((uint128_t *)&v55) = 0;
                                    v101 = v34.write_fmt(&v49);
                                    if (!v101)
                                        goto LABEL_52bc14;
                                    v105 = v101.from();
                                }
                                else
                                {
                                    v105 = v100.from();
                                }
                            }
                            else
                            {
                                v105 = v99.from();
                            }
                        }
                        else
                        {
                            if ((v1 & 1))
                            {
                                v89 = uu_ls::dired::indent(&v34);
                                if (!(!v89))
                                    goto LABEL_52bef4;
                            }
                            v97 = uu_ls::show_dir_name(v92, &v34, a1);
                            if (!v97)
                            {
                                v49 = &g_69f3a8;
                                v51 = 1;
                                v53 = 8;
                                *((uint128_t *)&v55) = 0;
                                v98 = v34.write_fmt(&v49);
                                if (v98)
                                {
                                    v105 = v98.from();
                                }
                                else if ((v1 & 1))
                                {
                                    uu_ls::dired::calculate_subdired(&v26, v92->field_10);
                                    v31 = v31 + v92->field_10 + 2 + 1;
                                    goto LABEL_52bc14;
                                }
                            }
                            else
                            {
                                v105 = v97.from();
                            }
                        }
                        v89 = v105;
LABEL_52bef4:
LABEL_52bef7:
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v20);
                        goto LABEL_52b8e3;
                    }
                    else
                    {
LABEL_52bc14:
                        v49.default();
                        v102 = (int128_t)v50;
                        v103 = (int128_t)v54;
                        *((int128_t *)&v66) = *((int128_t *)&v57);
                        v64 = v103;
                        v59 = v102;
                        v49.from_path(v95, v92->field_128);
                        if (!((char)v49 & 1))
                        {
                            memcpy(&v70, &v53, 136);
                            v69 = (long long)(&v50)[8];
                            (char)v59.insert(&v69);
                            v89 = uu_ls::enter_directory(v92, v20, v21, a1, &v34, &(char)v59, &v26);
                            if (!v89)
                            {
                                core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(&(char)v59);
                                v94 = &v106;
                            }
                            else
                            {
LABEL_52beb1:
                                core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(&(char)v59);
                                if (0)
                                    goto LABEL_52b8e3;
                                goto LABEL_52bef7;
                            }
                        }
                        else
                        {
                            v89 = (long long)(&v50)[8].from();
                            goto LABEL_52beb1;
                        }
                    }
LABEL_52b9b0:
                    v91 = v94.next();
                    v92 = v77;
                } while (v77);
                v104 = a1;
            }
            else
            {
                v104 = a1;
                if ((a1->field_f6 & 1) && !v104->field_f7)
                {
                    v89 = uu_ls::dired::print_dired_output(v104, &v26, &v34);
                    if (!(!v89))
                        goto LABEL_52b8e0;
                }
            }
            core::ptr::drop_in_place<uu_ls::ListState>(&v34);
            core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(&v26);
            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            v4.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            return 0;
        }
    }
LABEL_52b8e0:
LABEL_52b8e3:
    core::ptr::drop_in_place<uu_ls::ListState>(&v34);
    core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(&v26);
    v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
    v4.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
    return v89;
}
