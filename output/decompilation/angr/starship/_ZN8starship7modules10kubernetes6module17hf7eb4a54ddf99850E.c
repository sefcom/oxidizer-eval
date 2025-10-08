void starship::modules::kubernetes::module(void* a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x44c]
    int v1;  // [bp-0x448], Other Possible Types: void*, unsigned long long
    unsigned long long v2;  // [bp-0x448]
    unsigned long long v3;  // [bp-0x440]
    int v4;  // [bp-0x438], Other Possible Types: char *
    char *v5;  // [bp-0x430], Other Possible Types: unsigned long long
    int v6;  // [bp-0x428], Other Possible Types: void*, char *, char
    int v7;  // [bp-0x428]
    int v8;  // [bp-0x418]
    unsigned long long v9;  // [bp-0x408]
    int v10;  // [bp-0x3f8], Other Possible Types: void*, char *, unsigned long long
    int v11;  // [bp-0x3f0], Other Possible Types: char *, unsigned long long
    int v12;  // [bp-0x3e8], Other Possible Types: char *, unsigned long long
    struct_0 *v13;  // [bp-0x3e0], Other Possible Types: unsigned long long
    int v14;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x3c8]
    char v16;  // [bp-0x3b8]
    int v17;  // [bp-0x3a8]
    unsigned long long v18;  // [bp-0x3a0]
    char *v19;  // [bp-0x398]
    int v20;  // [bp-0x388], Other Possible Types: char
    unsigned long long v21;  // [bp-0x380]
    int v22;  // [bp-0x378], Other Possible Types: char
    unsigned long long v23;  // [bp-0x370]
    int v24;  // [bp-0x368]
    int v25;  // [bp-0x358]
    unsigned long long v26;  // [bp-0x348]
    unsigned long long v27;  // [bp-0x338]
    unsigned long long v28;  // [bp-0x330]
    struct_0 *v29;  // [bp-0x320]
    char v30;  // [bp-0x318]
    char *v31;  // [bp-0x308]
    char v32;  // [bp-0x300]
    unsigned long long v33;  // [bp-0x2f8]
    unsigned long long v34;  // [bp-0x2f0]
    char v35;  // [bp-0x2e8]
    unsigned long long v36;  // [bp-0x2e0]
    unsigned long v37;  // [bp-0x2d8]
    unsigned long long v38;  // [bp-0x2d0]
    int v39;  // [bp-0x2b8], Other Possible Types: unsigned long
    unsigned long v40;  // [bp-0x2b0]
    int v41;  // [bp-0x2a8]
    unsigned long long v42;  // [bp-0x298]
    char v43;  // [bp-0x288]
    struct_0 *v44;  // [bp-0x278]
    unsigned long long v45;  // [bp-0x268]
    unsigned long long v46;  // [bp-0x260]
    char *v47;  // [bp-0x258]
    unsigned long long v48;  // [bp-0x250]
    char v49;  // [bp-0x248]
    unsigned long long v50;  // [bp-0x238]
    unsigned long long v51;  // [bp-0x230]
    unsigned long long v52;  // [bp-0x228]
    unsigned long long v53;  // [bp-0x218]
    unsigned long long v54;  // [bp-0x210]
    char *v55;  // [bp-0x208]
    char *v56;  // [bp-0x200]
    char *v57;  // [bp-0x1f8]
    char *v58;  // [bp-0x1f0]
    char *v59;  // [bp-0x1e8]
    unsigned long v60;  // [bp-0x1e0]
    char v61;  // [bp-0x1d8]
    char *v62;  // [bp-0x1c8]
    unsigned long long v63;  // [bp-0x1b8]
    char v64;  // [bp-0x1b0]
    int v65;  // [bp-0x1a0], Other Possible Types: char
    int v66;  // [bp-0x190]
    int v67;  // [bp-0x180]
    int v68;  // [bp-0x170]
    int v69;  // [bp-0x160]
    char v70;  // [bp-0x150]
    unsigned long long v71;  // [bp-0x148]
    char v72;  // [bp-0x140]
    char v73;  // [bp-0x128]
    char v74;  // [bp-0x110]
    unsigned long long v75;  // [bp-0xf0]
    char v76;  // [bp-0xe8]
    unsigned long long v77;  // [bp-0xd8]
    unsigned long v78;  // [bp-0xd0]
    unsigned long long v79;  // [bp-0xc8]
    unsigned long long v80;  // [bp-0xc0]
    unsigned long long v81;  // [bp-0xb8]
    unsigned long long v82;  // [bp-0xb0]
    unsigned long v83;  // [bp-0xa8]
    unsigned long v84;  // [bp-0xa0]
    char v85;  // [bp-0x98]
    char v86;  // [bp-0x68]
    char v87;  // [bp-0x38]
    char v89;  // bpl
    unsigned long long v90;  // rbp
    unsigned long long v91;  // r12
    unsigned long long v92;  // rdx
    unsigned long long v93;  // r13
    int v94;  // xmm0
    int v95;  // xmm0
    struct_0 *v96;  // r15
    unsigned long v97;  // rax
    unsigned long v98;  // rcx
    void* v99;  // r12
    void* v100;  // rbp, Other Possible Types: unsigned long long
    int v101;  // xmm0

    v65.new_module(a1, "kubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmak", 10);
    v72.try_load(v71);
    if (!v87)
    {
        if (*((long long *)&v76))
            a0.detect_env_vars(v75, *((long long *)&v76));
        else
            v89 = 2;
        v1 = 0;
        v3 = 3;
        v4 = &v73;
        v5 = &v74;
        v6 = &v72;
        if (v1.try_fold(&(char)v4).eq(1))
        {
            v1.try_begin_scan(a1);
            v10 = &v72;
            v11 = &v73;
            v12 = &v74;
            if (v1)
            {
                if (((char)starship::modules::kubernetes::module::{{closure}}::{{closure}}(&v10, v1) & 1))
                    goto LABEL_ba5eac;
            }
            else
            {
                if (!(1))
                    goto LABEL_ba5eac;
            }
        }
        else if (v89 == 2 || (v89 & 1))
        {
LABEL_ba5eac:
            v1.get_home();
            if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::configs::kubernetes::KubernetesConfig>(&v72);
                core::ptr::drop_in_place<starship::module::Module>(&v65);
                return;
            }
            *((int128_t *)&v11) = *((int128_t *)&v3);
            v10 = v1;
            v20.join(v11, v12, ".kubeconfigInvalid KUBECONFIG: identified current-context ``, but couldn't find the context in any config file(s): ``.\nUsage of '_aliases' is deprecated and will be removed in 2.0; Use 'contexts' with '_alias' instead. (`` -> ``)", 5);
            v32.join(v21, *((long long *)&v22), "configInvalid KUBECONFIG: identified current-context ``, but couldn't find the context in any config file(s): ``.\nUsage of '_aliases' is deprecated and will be removed in 2.0; Use 'contexts' with '_alias' instead. (`` -> ``)", 6);
            core::ptr::drop_in_place<std::path::PathBuf>(&v20);
            core::ptr::drop_in_place<std::path::PathBuf>(&v10);
            v20.get_env("KUBECONFIG.kubeconfigInvalid KUBECONFIG: identified current-context ``, but couldn't find the context in any config file(s): ``.\nUsage of '_aliases' is deprecated and will be removed in 2.0; Use 'contexts' with '_alias' instead. (`` -> ``)", 10);
            core::str::converts::from_utf8(&v1, v33, v34);
            if ((int)v1 == 1)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<regex::error::Error>(&v20);
            }
            else
            {
                v1.to_vec(v3, v4);
                v12 = v4;
                memcpy(&v10, &v1, 16);
                if (*((long long *)&v20) == 0x8000000000000000)
                {
                    v19 = v12;
                    *((int128_t *)&v17) = *((int128_t *)&v10);
                }
                else
                {
                    v19 = *((long long *)&v22);
                    *((int128_t *)&v17) = *((int128_t *)&v20);
                    core::ptr::drop_in_place<alloc::string::String>(&v10);
                }
                v1 = std::path::Path::to_path_buf;
                v3 = v18;
                v4 = v19;
                v5 = std::sys::pal::unix::os::split_paths::is_separator;
                v6 = 0;
                *((unsigned int **)&v0) = &g_a50601;
                v35.collect(&v1);
                v90 = v36;
                *((unsigned long long *)&v1) = v90;
                v3 = v37 * 64 + v90;
                v91 = (unsigned long long)v1.find_map();
                if (v91)
                {
                    v93 = v92;
                    v45 = v91;
                    v46 = v92;
                    v10 = v90;
                    v11 = v3;
                    (unsigned long long)v1.find_map(&v10, v91, v92);
                    if (v2 == 9223372036854775809)
                    {
                        starship::modules::kubernetes::module::{{closure}}(&v20, &v45, &(char)v17);
                    }
                    else
                    {
                        v26 = v9;
                        v94 = *((int128_t *)&v2);
                        v25 = v8;
                        v24 = v7;
                        *((int128_t *)&v22) = *((int128_t *)&v4);
                        v20 = v94;
                    }
                    v27 = v77;
                    v28 = v78 * 96 + v77;
                    v10 = v91;
                    v11 = v92;
                    v12 = &v20;
                    (unsigned long long)v1.find_map(&v27, &v10);
                    v51 = v91;
                    v52 = v92;
                    memcpy(&v49, &v20, 16);
                    v50 = (long long)v22;
                    if (v2 == 0x8000000000000000)
                    {
                        starship::modules::kubernetes::module::{{closure}}(&v10, &v49);
                    }
                    else
                    {
                        v15 = (long long)v8;
                        v95 = *((int128_t *)&v2);
                        v14 = v7;
                        *((int128_t *)&v12) = *((int128_t *)&v4);
                        v10 = v95;
                        core::ptr::drop_in_place<toml::ser::value::map::SerializeTable>(&v49);
                    }
                    v96 = v13;
                    memcpy(&v61, &v10, 16);
                    v62 = v12;
                    v42 = v15;
                    v41 = v14;
                    starship::modules::kubernetes::deprecated::get_alias(&(unsigned long long)v1, &v61, &v85, "contextError in module `dotnet`:\nsrc/modules/dotnet.rs", 7);
                    if (v2 == 0x8000000000000000)
                        core::option::unwrap_failed(&g_11f5208); /* do not return */
                    v31 = v4;
                    memcpy(&v30, &v2, 16);
                    if ((long long)v41 == 0x8000000000000000)
                    {
                        v38 = 0x8000000000000000;
                    }
                    else
                    {
                        v63 = (long long)v41;
                        memcpy(&v64, &v41, 16);
                        starship::modules::kubernetes::deprecated::get_alias(&(char)v38, &v63, &v86, "user", 4);
                    }
                    if (v96)
                    {
                        v97 = v96->field_30;
                        if (v96->field_30)
                        {
                            v98 = v96->field_38;
                        }
                        else
                        {
                            v97 = v83;
                            v98 = v84;
                        }
                        v39 = v97;
                        v40 = v98;
                        v99 = v96->field_20;
                        v93 = v96->field_28;
                    }
                    else
                    {
                        *((int128_t *)&v39) = *((int128_t *)&v83);
                        v99 = 0;
                    }
                    v10.new(v81, v82);
                    if (v99)
                    {
                        v100 = v99;
                        if (v99)
                            goto LABEL_ba63e3;
LABEL_ba63e2:
                        v93 = v80;
                    }
                    else
                    {
                        v100 = v79;
                        if (!v99)
                            goto LABEL_ba63e2;
LABEL_ba63e3:
                    }
                    v53 = v100;
                    v54 = v93;
                    v55 = &v39;
                    v56 = &v30;
                    v57 = &v23;
                    v58 = &v25;
                    v59 = &v38;
                    v60 = a1;
                    if (v10 == 0x8000000000000000)
                    {
                        v29 = v13;
                        memcpy(&v28, &v11, 16);
                    }
                    else
                    {
                        v9 = *((long long *)&v16);
                        v101 = *((int128_t *)&v10);
                        memcpy(&v8, &v15, 16);
                        v6 = v14;
                        *((int128_t *)&v4) = *((int128_t *)&v12);
                        v1 = v101;
                        starship::modules::kubernetes::module::{{closure}}(&v27, &v53, &(unsigned long long)v1);
                        if (!((char)v27 & 1))
                        {
                            v65.set_segments(&v28);
                            *((int128_t *)&a0[80]) = *((int128_t *)&v70);
                            a0[64] = v69;
                            a0[48] = v68;
                            a0[32] = v67;
                            a0[16] = v66;
                            *(a0) = v65;
                            core::ptr::drop_in_place<regex::error::Error>(&v38);
                            core::ptr::drop_in_place<alloc::string::String>(&v30);
                            core::ptr::drop_in_place<regex::error::Error>(&v23);
                            core::ptr::drop_in_place<regex::error::Error>(&v25);
                            v0 = 0;
                            core::ptr::drop_in_place<alloc::vec::Vec<starship::modules::kubernetes::Document>>(&v35);
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v17);
                            core::ptr::drop_in_place<std::path::PathBuf>(&v32);
                            core::ptr::drop_in_place<starship::configs::kubernetes::KubernetesConfig>(&v72);
                            return;
                        }
                    }
                    v44 = v29;
                    memcpy(&v43, &v28, 16);
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                    {
                        v47 = &v43;
                        v48 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v1 = &g_11f51f8;
                        v3 = 1;
                        v6 = 0;
                        v4 = &v47;
                        v5 = 1;
                        v10 = "starship::modules::kubernetesError in module `kubernetes`: \n";
                        v11 = 29;
                        v12 = "starship::modules::kubernetesError in module `kubernetes`: \n";
                        v13 = 29;
                        v14 = log::__private_api::loc(&g_11f5220);
                        log::__private_api::log(&v1, 2, &v10);
                    }
                    *((long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v43);
                    core::ptr::drop_in_place<regex::error::Error>(&v38);
                    core::ptr::drop_in_place<alloc::string::String>(&v30);
                    core::ptr::drop_in_place<regex::error::Error>(&v23);
                    core::ptr::drop_in_place<regex::error::Error>(&v25);
                }
                else
                {
                    *((unsigned long long *)a0) = 0x8000000000000000;
                }
                core::ptr::drop_in_place<alloc::vec::Vec<starship::modules::kubernetes::Document>>(&v35);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v17);
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&v32);
            core::ptr::drop_in_place<starship::configs::kubernetes::KubernetesConfig>(&v72);
            core::ptr::drop_in_place<starship::module::Module>(&v65);
            return;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<starship::configs::kubernetes::KubernetesConfig>(&v72);
    core::ptr::drop_in_place<starship::module::Module>(&v65);
    return;
}
