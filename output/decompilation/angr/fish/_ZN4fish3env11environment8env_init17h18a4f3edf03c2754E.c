void fish::env::environment::env_init(struct_3 *a0, unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x315]
    unsigned int v1;  // [bp-0x314], Other Possible Types: char
    char v2;  // [bp-0x314]
    unsigned int v3;  // [bp-0x314]
    unsigned int v4;  // [bp-0x310], Other Possible Types: unsigned long long
    int v5;  // [bp-0x308], Other Possible Types: unsigned int
    int v6;  // [bp-0x308]
    unsigned int v7;  // [bp-0x308]
    char *v8;  // [bp-0x300], Other Possible Types: unsigned long long
    int v9;  // [bp-0x2f8], Other Possible Types: void*
    unsigned long long v10;  // [bp-0x2f8]
    char v11;  // [bp-0x2e8], Other Possible Types: unsigned long long
    struct_3 *v12;  // [bp-0x2d0], Other Possible Types: unsigned int
    unsigned long long v13;  // [bp-0x2d0]
    void* v14;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v15;  // [bp-0x2c8]
    unsigned long long v16;  // [bp-0x2c0]
    void* v17;  // [bp-0x2b8], Other Possible Types: unsigned long long
    void* v18;  // [bp-0x2a8]
    int v19;  // [bp-0x2a8]
    unsigned long long v20;  // [bp-0x2a0]
    void* v21;  // [bp-0x298], Other Possible Types: unsigned long long
    int v22;  // [bp-0x290], Other Possible Types: char
    unsigned long long v23;  // [bp-0x288]
    char v24;  // [bp-0x280], Other Possible Types: unsigned long long
    void* v25;  // [bp-0x278]
    unsigned long long v26;  // [bp-0x270]
    void* v27;  // [bp-0x268]
    int v28;  // [bp-0x260]
    unsigned long long v29;  // [bp-0x250]
    unsigned long long v30;  // [bp-0x248]
    void* v31;  // [bp-0x230]
    unsigned short v32;  // [bp-0x228]
    char v33;  // [bp-0x226]
    int v34;  // [bp-0x218]
    struct_1 *v35;  // [bp-0x210]
    void* v36;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x208]
    char v38;  // [bp-0x1f8]
    int v39;  // [bp-0x1e8]
    unsigned long long v40[3];  // [bp-0x1e0]
    void* v41;  // [bp-0x1d8], Other Possible Types: unsigned long long
    void* v42;  // [bp-0x1c8]
    int v43;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v44;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v45;  // [bp-0x1b0]
    int v46;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long long v47;  // [bp-0x1a0]
    void* v48;  // [bp-0x198]
    int v49;  // [bp-0x188]
    unsigned long long v50;  // [bp-0x180]
    unsigned long v51;  // [bp-0x178]
    unsigned long long v52;  // [bp-0x168]
    int v53;  // [bp-0x158], Other Possible Types: char
    void* v54;  // [bp-0x148], Other Possible Types: unsigned long long
    char v55;  // [bp-0x138]
    void* v56;  // [bp-0x128]
    char v57;  // [bp-0x120]
    unsigned long long v58;  // [bp-0x118]
    unsigned long long v59;  // [bp-0x110]
    int v60;  // [bp-0x108]
    int v61;  // [bp-0xf8]
    unsigned long long v62;  // [bp-0xe8]
    struct_2 *v63;  // [bp-0xe0]
    int v64;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v65;  // [bp-0xc8]
    int v66;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v67;  // [bp-0xb0]
    int v68;  // [bp-0xa8], Other Possible Types: char
    void* v69;  // [bp-0x98]
    char v70;  // [bp-0x90]
    char v71;  // [bp-0x78]
    int v72;  // [bp-0x60]
    unsigned long long v73;  // [bp-0x50]
    char v74;  // [bp-0x48]
    void* v76;  // r13
    unsigned long long v77;  // rax
    struct_2 *v78;  // rdx
    struct_0 *v79;  // rbx
    struct_1 *v80;  // rax
    struct_1 *v81;  // r12
    int v82;  // xmm0
    unsigned long v83;  // cc_ndep
    void* v84;  // rax
    unsigned long long v85;  // rbx
    unsigned long long v86;  // r14
    unsigned long long v87;  // rax
    unsigned long long v88[3];  // r13
    struct_2 *v89;  // rbp
    unsigned long long v90;  // rax
    unsigned long long v91[3];  // r12
    unsigned long long v92[3];  // rbx
    unsigned long v93;  // r13
    void* v94;  // rax
    unsigned long long v95[3];  // rax
    unsigned long long v96[3];  // r14
    struct_2 *v97;  // rbp
    unsigned int v99;  // r8d
    unsigned long long v100;  // [bp-0x218]

    v4 = a2;
    v3 = a1;
    v12 = a0;
    v76 = fish::env::environment::EnvStack::globals();
    std::env::vars_os();
    v70.collect(&(char)v18);
    v77 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v61) = g_14bd820;
    *((uint128_t *)&v60) = g_14bd810;
    v62 = v77;
    v63 = v78;
    (char)v5.into_iter(&v70);
    (char)v18.next_back(&(char)v5);
    if (!((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63)))
    {
        v79 = &v22;
        do
        {
            v41 = v21;
            *((int128_t *)&v39) = *((int128_t *)&v18);
            *((char [16])&v49) = v79->field_0;
            v51 = v79->field_10;
            if (!v40.for_name(v21) && !v40.eq(v21, "fish_user_paths\n \tdefaultenv_init is being called multiple times", 15))
            {
                v80 = 8.alloc_impl(24, 0);
                if (!v80)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v81 = v80;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v100, v50, v51);
                v17 = v36;
                v82 = *((int128_t *)&v100);
                v15 = v82;
                v81->field_10 = v36;
                *((void*)&v81->field_0) = v82;
                v100 = 1;
                v35 = v81;
                v36 = 1;
                v76.set(v40, v21, 20, &v100);
            }
            v36 = v41;
            *((int128_t *)&v34) = (int128_t)v39;
            v14.insert(&v60, &(unsigned long long)v34, &(char)v49);
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v14);
            (char)v18.next_back(&(char)v5);
        } while (v18 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<(widestring::utfstring::Utf32String,widestring::utfstring::Utf32String)>>>(&(char)v5);
    memcpy(&v11, &v62, 16);
    v9 = v61;
    v5 = v60;
    (char)v18.try_insert(&(char)v5);
    if (v18)
    {
        memcpy(&v38, &v24, 16);
        memcpy(&v36, &v22, 16);
        *((int128_t *)&v34) = *((int128_t *)&v20);
    }
    else
    {
        v100 = 0;
    }
    v100.expect();
    v5 = fish::nix::geteuid();
    (char)v18.to_wstring(&v5);
    v76.set_one("E", 4, 4, &(char)v18);
    fish::env::environment::setup_user(v76);
    if (v12)
    {
        v76.set_empty("_", 15, 4);
        fish::common::str2wcstring(&(char)v18, v12->field_8, v12->field_10);
        v76.set_one("_", 18, 4, &(char)v18);
        v76.set_empty("_", 15, 4);
        if (v12->field_18 == 0x8000000000000000)
        {
            v76.set_empty("_", 14, 4);
            goto LABEL_139551f;
        }
        else
        {
            fish::common::str2wcstring(&(char)v18, v12->field_20, v12->field_28);
            v76.set_one("_", 14, 4, &(char)v18);
            fish::path::path_get_config(&v64);
            if (*((long long *)&v64) == 0x8000000000000000)
                goto LABEL_1395537;
LABEL_13955a2:
            v21 = v65;
            v19 = v64;
        }
    }
    else
    {
LABEL_139551f:
        fish::path::path_get_config(&v64);
        if (*((long long *)&v64) != 0x8000000000000000)
            goto LABEL_13955a2;
LABEL_1395537:
        v18 = 0;
        v20 = 4;
        v21 = 0;
    }
    v76.set_one("_", 17, 4, &v18);
    fish::path::path_get_data(&v66);
    if (*((long long *)&v66) == 0x8000000000000000)
    {
        v18 = 0;
        v20 = 4;
        v21 = 0;
    }
    else
    {
        v21 = v67;
        v19 = v66;
    }
    v76.set_one("_", 20, 4, &v18);
    fish::path::path_get_cache(&v68);
    if (*((long long *)&v68) == 0x8000000000000000)
    {
        v18 = 0;
        v20 = 4;
        v21 = 0;
    }
    else
    {
        v21 = v69;
        v19 = v68;
    }
    v76.set_one("_", 16, 4, &v18);
    fish::env::environment::setup_path();
    v18.from_str("\n \tdefaultenv_init is being called multiple times", 3);
    v76.set_one("I", 3, 4, &v18);
    v18.from_str("0", 1);
    v76.set_one("C", 12, 32, &v18);
    fish::common::str2wcstring(&v57, "4.1.0-48-gdb6a7d26c", 19);
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v18, v58, v59);
    v9 = v21;
    memcpy(&v5, &v18, 16);
    v76.set_one("v", 7, 4, &v5);
    v76.set_one("F", 12, 4, &v57);
    v7 = fish::nix::getpid();
    v18.to_wstring(&v7);
    v76.set_one("f", 8, 4, &v18);
    fish::env::environment::get_hostname_identifier(&v7);
    v18.from_str("fish%ls\n ", 4);
    if (*((long long *)&v7) == 0x8000000000000000)
    {
        v54 = v21;
        memcpy(&v53, &v18, 16);
    }
    else
    {
        v54 = v10;
        memcpy(&v53, &v7, 16);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
    }
    v76.set_one("h", 8, 4, &v53);
    if (fish::proc::is_interactive_session())
    {
        std::env::var_os(&v100, "SHLVL", 5);
        if (v100 == 0x8000000000000000)
        {
            v55.to_vec("1", 1);
        }
        else
        {
            fish::common::str2wcstring(&v7, v35, v37);
            fish::wutil::wcstoi::fish_wcstol(&v14, v8, v10);
            if (!((char)v14 != 1 && v16 >= 0))
            {
                v18.to_vec("1", 1);
                v56 = v21;
                memcpy(&v55, &v18, 16);
            }
            else if (!((char)_ccall(0, 24, v16 + 1, 0, _ccall(20, v16, 0, v83))))
            {
                v18 = v16 + 1;
                v55.to_wstring(&v18);
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14d6838); /* do not return */
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v100, v35);
        }
        v76.set_one("S", 5, 20, &v55);
    }
    else
    {
        std::env::var_os(&v7, "SHLVL", 5);
        if (*((long long *)&v7) != 0x8000000000000000)
        {
            fish::common::str2wcstring(&v18, v8, v10);
            v76.set_one("S", 5, 20, &v18);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>((long long)v5, v8);
        }
    }
    v84 = std::env::var_os(&v71, "PWDsrc/env/environment.rsCDPATH", 3);
    if (*((long long *)&v71) != 0x8000000000000000)
    {
        fish::env::environment::env_init::{{closure}}(&v18, &v71);
        v84 = v18;
        *((int128_t *)&v5) = *((int128_t *)&v20);
        if (v84 == 0x8000000000000000)
            goto LABEL_1395a55;
        *((int128_t *)&v43) = *((int128_t *)&v7);
        v42 = v84;
        v85 = v44;
        if (!v85)
            goto LABEL_1395a79;
        v12 = (unsigned int)v84 & 0xffffff00 | 1;
        v86 = v43;
        v84 = v86.char_at(v85, 0);
        if ((unsigned int)v84 != 47)
            goto LABEL_1395a79;
        v84 = fish::path::paths_are_same_file(v86, v85, ".", 1);
        if (!(v84 & 255))
            goto LABEL_1395a79;
        v12 = 0;
        v76.set_one("P", 3, 20, &v42);
    }
    else
    {
LABEL_1395a55:
        v42 = 0;
        v43 = 4;
        v44 = 0;
LABEL_1395a79:
        v12 = (unsigned int)v84 & 0xffffff00 | 1;
        v76.set_pwd_from_getcwd();
    }
    v52 = _ZN4fish8termsize16SHARED_CONTAINER17h8242f69b8c8dea36E.initialize(v76, &g_14c7518);
    v18.getf_unless_empty(v76, "C", 7, 0);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v18);
    if (!v18)
    {
        v18.to_wstring(&v52);
        v76.set_one("C", 7, 4, &v18);
    }
    v18.getf_unless_empty(v76, "L", 5, 0);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v18);
    if (!v18)
    {
        v18.to_wstring(&vvar_927{reg 32});
        v76.set_one("L", 5, 4, &v18);
    }
    v18.from_str("defaultenv_init is being called multiple times", 7);
    v76.set_one("f", 14, 4, &v18);
    fish::env_dispatch::env_dispatch_init(v76);
    fish::input::init_input();
    if (!(char)v4)
        fish::path::path_emit_config_directory_messages(v76);
    if (v1)
    {
        v87 = fish::env::environment_impl::uvars();
        v18.initialize(v87 + 8);
        if (v18 == 0x8000000000000000)
        {
            v46 = 0;
            v47 = 8;
            v48 = 0;
        }
        else
        {
            v48 = v21;
            *((int128_t *)&v46) = *((int128_t *)&v18);
        }
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v87, (char)v78 & 1);
        (unsigned int)v6.into_iter(&v46);
        v18.next(&(unsigned int)v6);
        if (v18 != 0x8000000000000000)
        {
            do
            {
                fish::env_dispatch::env_dispatch_var_change(v20, v21, v76);
                core::ptr::drop_in_place<fish::env_universal_common::CallbackData>(&v18);
                v18.next(&(unsigned int)v6);
            } while (v18 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::env_universal_common::CallbackData>>(&(unsigned int)v6);
        v14 = 0;
        v16 = 8;
        v17 = 0;
        v4 = fish::env::environment_impl::uvars();
        v18.iter(v4 + 48);
        v11 = v23;
        memcpy(&v9, &v21, 16);
        *((int128_t *)&v5) = *((int128_t *)&v18);
        v1 = (char)v78 & 1;
        if ((unsigned int)v6.next())
        {
            v89 = v78;
            do
            {
                if ((v89->field_10 & 1))
                {
                    v90 = fish::env::environment::EnvStack::globals();
                    v74.getf(v90, v88[1], v88[2], 20);
                    if (*((long long *)&v74) && (char)fish::env::environment::env_init::{{closure}}(v89, &v74))
                    {
                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v18, v88[1], v88[2]);
                        v36 = v21;
                        *((int128_t *)&v34) = *((int128_t *)&v18);
                        v14.push(&(unsigned long long)v34, &g_14d6850);
                    }
                }
                v88 = (unsigned int)v6.next();
                v89 = v78;
            } while (v88);
        }
        *((int128_t *)&v39) = *((int128_t *)&v14);
        v41 = v17;
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v1);
        v92 = (char *)v40 + 0x18 * v41;
        while (true)
        {
            v93 = v91 + 1;
            if (v91 == v92)
            {
                v93 = v91;
                if (v91 == v92)
                    break;
            }
            else if (v91 == v92)
            {
                break;
            }
            v94 = fish::env::environment::EnvStack::globals();
            v94.remove(v91[1], v91[2], 20);
            v91 = v93;
        }
        v4 = fish::abbrs::abbrs_get_set();
        v1 = (char)v78 & 1;
        v0 = (char)v78 & 1;
        v45 = fish::env::environment_impl::uvars();
        v18.iter(v45 + 48);
        v11 = v23;
        memcpy(&v9, &v21, 16);
        *((int128_t *)&v6) = *((int128_t *)&v18);
        v95 = (unsigned int)v6.next();
        if (v95)
        {
            v96 = v95;
            v97 = v78;
            do
            {
                if (v96[1].starts_with(v96[2], "_", 11))
                {
                    fish::common::unescape_string(&v14, v96[1].slice_from(v96[2], 11), a2, 2, v99);
                    if (v14 != 0x8000000000000000)
                    {
                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v18, 8, v17);
                        v36 = v21;
                        *((int128_t *)&v34) = *((int128_t *)&v18);
                        fish::wcstringutil::join_strings(&v72, v97->field_0 + 16, v97->field_8, 32);
                        v21 = v17;
                        memcpy(&v18, &v14, 16);
                        v24 = v37;
                        *((int128_t *)&v22) = *((int128_t *)&v100);
                        v31 = 0;
                        v25 = 0;
                        v26 = 8;
                        v27 = 0;
                        v29 = v73;
                        v28 = v72;
                        v32 = 0;
                        v30 = 0x8000000000000000;
                        v33 = 1;
                        v4 + 8.add(&v18);
                    }
                }
                v96 = (unsigned int)v6.next();
                v97 = v78;
            } while (v96);
        }
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v45, v0);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v2);
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&(char)v39);
        if (!(char)v13)
            return;
    }
    else
    {
        _ZN4fish3env16environment_impl20UVAR_SCOPE_IS_GLOBAL17h1620f19708d430dbE.store(1);
        if (!(char)v13)
            return;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v42);
    return;
}
