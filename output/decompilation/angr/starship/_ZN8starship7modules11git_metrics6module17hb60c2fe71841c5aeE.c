long long starship::modules::git_metrics::module(void* a0, unsigned long a1)
{
    unsigned long long v0[9];  // [sp-0x5588]
    unsigned long v1;  // [bp-0x5588]
    unsigned long long v2[9];  // [bp-0x5580]
    int v3;  // [bp-0x5578], Other Possible Types: char
    unsigned long long v4;  // [bp-0x5568]
    int v5;  // [bp-0x5560], Other Possible Types: char
    unsigned long long v6;  // [bp-0x5550]
    int v7;  // [bp-0x5548], Other Possible Types: char
    int v8;  // [bp-0x5538]
    char v9;  // [bp-0x5528]
    int v10;  // [bp-0x5518]
    unsigned long long v11;  // [bp-0x5508]
    unsigned long long v12;  // [bp-0x5500]
    char v13;  // [bp-0x54f8]
    char v14;  // [bp-0x54f7]
    char v15;  // [bp-0x54f6]
    char *v16;  // [bp-0x54f0]
    int v17;  // [bp-0x54e8]
    char *v18;  // [bp-0x54d8]
    char *v19;  // [bp-0x54d0]
    char *v20;  // [bp-0x54c8]
    unsigned long v21;  // [bp-0x54c0]
    int v22;  // [bp-0x54b8], Other Possible Types: char
    int v23;  // [bp-0x54a8]
    int v24;  // [bp-0x5498]
    int v25;  // [bp-0x5488]
    int v26;  // [bp-0x5478]
    char v27;  // [bp-0x5468]
    unsigned long long v28;  // [bp-0x5460]
    char v29;  // [bp-0x5458]
    unsigned long long v30;  // [bp-0x5400]
    char v31;  // [bp-0x53f8], Other Possible Types: unsigned long
    char v32;  // [bp-0x53f0]
    char v33;  // [bp-0x53e0]
    char v34;  // [bp-0x53b0]
    char v35;  // [bp-0x52be]
    char *v36;  // [bp-0x52b8], Other Possible Types: char
    unsigned long long v37;  // [bp-0x52b0]
    void* v38;  // [bp-0x5030]
    unsigned long v39;  // [bp-0x4ec0]
    unsigned long long v40;  // [bp-0x4eb8]
    char v41;  // [bp-0x4eb0]
    unsigned long long v42;  // [bp-0x4e78]
    char v43;  // [bp-0x4e70]
    char v44;  // [bp-0x4e68]
    int v45;  // [bp-0x4b68]
    unsigned long long v46;  // [bp-0x4b68]
    unsigned long long v47[4];  // [bp-0x4b60], Other Possible Types: char
    unsigned long long v48;  // [bp-0x4b58]
    char v49;  // [bp-0x40a8]
    unsigned int v50;  // [bp-0x40a7]
    unsigned int v51;  // [bp-0x40a4]
    unsigned long long v52;  // [bp-0x4098]
    char v53;  // [bp-0x4090]
    unsigned long long v54;  // [bp-0x4090]
    unsigned long long v55;  // [bp-0x4088]
    unsigned long long v56;  // [bp-0x4080]
    void* v57;  // [bp-0x4030]
    char v58;  // [bp-0x35d8]
    unsigned int v59;  // [bp-0x35d7]
    unsigned int v60;  // [bp-0x35d4]
    char v61;  // [bp-0x35c8]
    char v62;  // [bp-0x32b8]
    char v63;  // [bp-0x31d0]
    char v64;  // [bp-0x3188], Other Possible Types: unsigned long long
    struct_0 *v65;  // [bp-0x3180], Other Possible Types: unsigned long long
    char *v66;  // [bp-0x3178], Other Possible Types: unsigned long long
    char v67;  // [bp-0x3170], Other Possible Types: unsigned long long
    void* v68;  // [bp-0x3168]
    char v69;  // [bp-0x3160]
    void* v70;  // [bp-0x3030]
    char v71;  // [bp-0x26c7]
    char v72;  // [bp-0x26c4]
    void* v73;  // [bp-0x2030]
    unsigned long v74;  // [bp-0x18e8]
    unsigned long v75;  // [bp-0x18e0]
    struct_0 *v76;  // [bp-0x18d8], Other Possible Types: unsigned long long
    int v77;  // [bp-0x18d8]
    int v78;  // [bp-0x18d0], Other Possible Types: unsigned long long
    unsigned long long v79;  // [bp-0x18c8]
    int v80;  // [bp-0x18c0], Other Possible Types: unsigned long long
    int v81;  // [bp-0x18b8], Other Possible Types: unsigned long long
    unsigned long long v82;  // [bp-0x18b0]
    char v83;  // [bp-0x15c8]
    void* v84;  // [bp-0x1030]
    char v85;  // [bp-0xb00]
    struct_1 *v87;  // rdx
    unsigned long long v88[9];  // rax
    unsigned int v89;  // ecx
    unsigned long long v90;  // rax
    unsigned int v91;  // ecx
    unsigned long long v94[4];  // rax
    int v95;  // xmm0
    unsigned long long v96;  // rax

    v84 = 0;
    v73 = 0;
    v70 = 0;
    v57 = 0;
    v38 = 0;
    v22.new_module(a1, "git_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredi", 11);
    v9.try_load(v28);
    if (!v14 && !((!v87 | (char)a1.get_repo()) & 1))
    {
        v61.open(v87);
        if (*((int *)&v62).is_bare(*((long long *)&v63)))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v29.new_module(a1, "git_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystal", 10);
            v34.try_load(v30);
            if (v87->field_388 || v35 == 1)
            {
LABEL_b980b9:
                v94 = 8.alloc_impl(32, 0);
                if (!v94)
                    alloc::alloc::handle_alloc_error(8, 32); /* do not return */
                v94[0] = "diffSEGVZBus]";
                v94[1] = 4;
                v94[2] = "--shortstat--ignore-submodulessrc/modules/git_metrics.rs";
                v94[3] = 11;
                v46 = 2;
                v47[0] = v94;
                v48 = 2;
                if (v15)
                {
                    v46.push("--ignore-submodulessrc/modules/git_metrics.rs", 19, &g_11f4838);
                    v94 = v47;
                }
                v64.exec_git(v87, a1, v94, 2);
                if (v64 == 0x8000000000000000)
                {
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v46, v47);
                    goto LABEL_b98491;
                }
                else
                {
                    v82 = *((long long *)&v69);
                    v95 = *((int128_t *)&v65);
                    *((int128_t *)&v80) = *((int128_t *)&v67);
                    v78 = v95;
                    v76 = v64;
                    v52 = v76;
                    v54 = v78;
                    v55 = v79;
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v80);
                    v3.parse(v54, v55);
                    core::ptr::drop_in_place<alloc::string::String>(&v52);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v46, v47);
                    goto LABEL_b9824c;
                }
            }
            else
            {
                v64.index_or_empty(&v61);
                if (*((int *)&v64) == 4)
                {
                    v76 = v65;
                    if (v65->field_230)
                    {
                        v76.drop_in_place<alloc::sync::Arc<gix_fs::snapshot::FileSnapshot<gix_index::File>>>();
                        goto LABEL_b980b9;
                    }
                    else
                    {
                        v76.drop_in_place<alloc::sync::Arc<gix_fs::snapshot::FileSnapshot<gix_index::File>>>();
                        v88 = starship::modules::git_status::get_static_repo_status(a1, v87, &v34);
                        if (v88)
                        {
                            v0[0] = v88;
                            v2[0] = v88;
                            memcpy(&v64, &v61, 1088);
                            v36.with_object_memory(&v64);
                            v64.write_blob(&v36);
                            if (!v64)
                            {
                                core::ptr::drop_in_place<core::result::Result<gix::types::Id,gix::object::errors::write::Error>>(&v64);
LABEL_b98657:
                                *((unsigned long long *)a0) = 0x8000000000000000;
                                goto LABEL_b9865a;
                            }
                            v76 = 0x8000000000000000;
                            v78 = v8;
                            v80 = 0x8000000000000000;
                            v81 = v8;
                            v64.diff_resource_cache(&v36, 2, &v76);
                            if (v64 == 2)
                            {
                                core::ptr::drop_in_place<core::result::Result<gix_diff::blob::Platform,gix::repository::diff_resource_cache::Error>>(&v64);
                                goto LABEL_b98657;
                            }
                            memcpy(&v47, &v65, 2744);
                            v89 = *((int *)&v72);
                            v50 = *((int *)&v71);
                            v51 = v89;
                            v46 = v64;
                            v49 = 0;
                            v42 = 0x8000000000000000;
                            memcpy(&v43, &v8, 16);
                            if (v39 == 0x8000000000000000)
                            {
                                memcpy(&v7, &v8, 16);
                                v90 = 0x8000000000000000;
                            }
                            else
                            {
                                v76.to_path_buf(v40, *((long long *)&v41));
                                v90 = v76;
                                memcpy(&v7, &(char)v78, 16);
                            }
                            v79 = *((long long *)&v44);
                            *((int128_t *)&v77) = *((int128_t *)&v42);
                            v80 = v90;
                            v81 = v7;
                            v64.diff_resource_cache(&v36, 2, &v76);
                            if (v64 == 2)
                            {
                                core::ptr::drop_in_place<core::result::Result<gix_diff::blob::Platform,gix::repository::diff_resource_cache::Error>>(&v64);
                                *((unsigned long long *)a0) = 0x8000000000000000;
                                core::ptr::drop_in_place<gix_diff::blob::Platform>(&v46);
LABEL_b9865a:
                                core::ptr::drop_in_place<gix::types::Repository>(&v36);
                                core::ptr::drop_in_place<alloc::sync::Arc<starship::modules::git_status::RepoStatus>>(&v2);
                            }
                            else
                            {
                                memcpy(&v53, &v65, 2744);
                                v91 = *((int *)&(&v71)[3]);
                                v59 = *((int *)&v71);
                                v60 = v91;
                                v52 = v64;
                                v58 = 0;
                                v1 = v0[8];
                                memcpy(&v64, &v36, 1088);
                                v42.into_sync(&v64);
                                memcpy(&v76, &v42, 784);
                                memcpy(&v83, &v46, 2760);
                                memcpy(&v85, &v52, 2760);
                                v74 = v0[7];
                                v75 = v1;
                                memcpy(&v64, &v76, 6304);
                                v64.to_vec(core::fmt::num::imp::<impl usize>::_fmt(rayon::iter::reduce::reduce(&v64), &v42, 20), v87);
                                v79 = v66;
                                memcpy(&v76, &v64, 16);
                                v64.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v87, &v42, 20), v87);
                                v6 = v66;
                                memcpy(&v5, &v64, 16);
                                memcpy(&v3, &v77, 16);
                                v4 = v79;
                                core::ptr::drop_in_place<alloc::sync::Arc<starship::modules::git_status::RepoStatus>>(&v2);
LABEL_b9824c:
                                v31.new(v11, v12);
                                v16 = &v9;
                                v17 = v10;
                                v18 = &v13;
                                v19 = &v3;
                                v20 = &v5;
                                v21 = a1;
                                if (v31 == 0x8000000000000000)
                                {
                                    v56 = *((long long *)&v33);
                                    memcpy(&v53, &v32, 16);
                                }
                                else
                                {
                                    starship::modules::git_metrics::module::{{closure}}(&v52, &v16, &v31);
                                    if (!((char)v52 & 1))
                                    {
                                        v22.set_segments(&v53);
                                        *((int128_t *)&a0[80]) = *((int128_t *)&v27);
                                        a0[64] = v26;
                                        a0[48] = v25;
                                        a0[32] = v24;
                                        a0[16] = v23;
                                        *(a0) = v22;
                                        core::ptr::drop_in_place<starship::utils::CommandOutput>(&v3);
                                        v96 = (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v29);
                                        return core::ptr::drop_in_place<gix::types::Repository>(&v61);
                                    }
                                }
                                v48 = v56;
                                *((int128_t *)&v45) = *((int128_t *)&v54);
                                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                                {
                                    v36 = &(unsigned long long)v45;
                                    v37 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                                    v64 = &g_11f4828;
                                    v65 = 1;
                                    v68 = 0;
                                    v66 = &v36;
                                    v67 = 1;
                                    v76 = "starship::modules::git_metricsinternal error: entered unreachable code: not activatedinternal error: entered unreachable code: we disabled that";
                                    v78 = 30;
                                    v79 = "starship::modules::git_metricsinternal error: entered unreachable code: not activatedinternal error: entered unreachable code: we disabled that";
                                    v80 = 30;
                                    v81 = log::__private_api::loc(&g_11f4850);
                                    log::__private_api::log(&v64, 2, &v76);
                                }
                                *((unsigned long long *)a0) = 0x8000000000000000;
                                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&(unsigned long long)v45);
                                core::ptr::drop_in_place<starship::utils::CommandOutput>(&v3);
                            }
                        }
                        else
                        {
                            *((unsigned long long *)a0) = 0x8000000000000000;
                        }
                        core::ptr::drop_in_place<starship::module::Module>(&v29);
                        if (false)
                            return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v22);
                    }
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<gix_fs::snapshot::FileSnapshot<gix_index::File>>,gix::worktree::open_index::Error>>(&v64);
                    *((unsigned long long *)a0) = 0x8000000000000000;
LABEL_b98491:
                    core::ptr::drop_in_place<starship::module::Module>(&v29);
                }
            }
        }
        core::ptr::drop_in_place<gix::types::Repository>(&v61);
        return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v22);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v22);
}
