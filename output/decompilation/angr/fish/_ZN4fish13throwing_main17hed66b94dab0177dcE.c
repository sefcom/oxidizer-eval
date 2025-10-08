long long fish::throwing_main()
{
    unsigned int v0;  // [bp-0x51c]
    int v1;  // [bp-0x518], Other Possible Types: void*, unsigned long long
    unsigned int v2;  // [bp-0x518]
    unsigned long long v3;  // [bp-0x510]
    void* v4;  // [bp-0x508], Other Possible Types: unsigned long long
    int v5;  // [bp-0x4f8]
    int v6;  // [bp-0x4f8]
    void* v7;  // [bp-0x4f8]
    unsigned long long v8;  // [bp-0x4f0]
    unsigned long long v9;  // [bp-0x4f0]
    void* v10;  // [bp-0x4e8], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x4e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [bp-0x4e8]
    unsigned long long v13;  // [bp-0x4d8]
    void* v14;  // [bp-0x4d8], Other Possible Types: char, unsigned long long
    int v15;  // [bp-0x4d8], Other Possible Types: char
    unsigned long long v16;  // [bp-0x4d0]
    struct_0 *v17;  // [bp-0x4d0], Other Possible Types: int, unsigned long long
    void* v18;  // [bp-0x4c8], Other Possible Types: int, unsigned long long
    unsigned long long v19;  // [bp-0x4c8]
    int v20;  // [bp-0x4c0]
    unsigned long long v21;  // [bp-0x4b8]
    unsigned int v22;  // [sp-0x49c]
    void* v23;  // [bp-0x498], Other Possible Types: char
    unsigned int v24;  // [bp-0x494]
    unsigned long long v25;  // [bp-0x490]
    void* v26;  // [bp-0x488]
    void* v27;  // [bp-0x480], Other Possible Types: unsigned long long
    unsigned int v28;  // [bp-0x478], Other Possible Types: unsigned long long
    char v29;  // [bp-0x477]
    char v30;  // [bp-0x475]
    char v31;  // [bp-0x474], Other Possible Types: unsigned short
    void* v32;  // [bp-0x470]
    unsigned long long v33[3];  // [bp-0x468]
    void* v34;  // [bp-0x460], Other Possible Types: char, unsigned long long
    unsigned long long v35;  // [bp-0x458]
    int v36;  // [bp-0x450], Other Possible Types: char
    unsigned long long v37;  // [bp-0x440]
    int v38;  // [bp-0x438]
    unsigned long long v39;  // [bp-0x428]
    void* v40;  // [bp-0x420]
    int v41;  // [bp-0x418], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0x410]
    unsigned long long v43;  // [bp-0x408]
    unsigned long long v44;  // [bp-0x400]
    unsigned long long v45;  // [bp-0x3f8]
    unsigned long long v46;  // [bp-0x3f0]
    unsigned long long v47;  // [bp-0x3e8]
    unsigned long long v48;  // [bp-0x3e0]
    unsigned long long v49;  // [bp-0x3d8]
    unsigned int v50;  // [bp-0x3d0]
    char v51;  // [bp-0x3cf]
    char v52;  // [bp-0x3ce]
    char v53;  // [bp-0x3cd]
    unsigned short v54;  // [bp-0x3cc]
    unsigned long long v55;  // [bp-0x3c8]
    unsigned long long v56;  // [bp-0x3c0]
    int v57;  // [bp-0x3b8], Other Possible Types: void*, char *, unsigned long long
    unsigned long long v58;  // [bp-0x3b0]
    void* v59;  // [bp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v60;  // [bp-0x3a8]
    char v61;  // [bp-0x398]
    unsigned long long v62;  // [bp-0x388]
    unsigned long long v63;  // [bp-0x380]
    unsigned long long v64;  // [bp-0x378]
    char v65;  // [bp-0x370], Other Possible Types: unsigned int
    unsigned int v66;  // [bp-0x36c]
    unsigned long long v67;  // [bp-0x368]
    char v68;  // [bp-0x360]
    char v69;  // [bp-0x350]
    unsigned long long v70[3];  // [bp-0x348]
    unsigned long long v71;  // [bp-0x340]
    unsigned long long v72;  // [bp-0x338]
    unsigned long long v73;  // [bp-0x338]
    unsigned long long v74;  // [bp-0x338]
    unsigned long long v75;  // [bp-0x338]
    unsigned int v76;  // [bp-0x334]
    unsigned long long v77;  // [bp-0x330]
    void* v78;  // [bp-0x328], Other Possible Types: char *, unsigned long long
    unsigned long long v79;  // [bp-0x320]
    void* v80;  // [bp-0x318]
    unsigned long long v81[43];  // [bp-0x2b8]
    int v82;  // [bp-0x160], Other Possible Types: char
    char v83;  // [bp-0xd0]
    char v84;  // [bp-0xb8]
    char *v86;  // rax
    unsigned long long v87;  // rdx
    unsigned int v88;  // eax
    unsigned long long v89;  // rbx
    unsigned int v90;  // ebx
    char v91;  // bpl
    unsigned long long v92;  // r14
    unsigned int v93;  // ecx
    unsigned int v94;  // ecx
    int v95;  // xmm0
    char v96;  // r14b
    unsigned long v99;  // rax
    unsigned long long v100;  // r15
    unsigned int v103;  // eax
    unsigned long long v104;  // rax
    unsigned int v105;  // ebp
    unsigned long long v106;  // rcx
    unsigned int v108;  // eax
    unsigned int v109;  // eax
    unsigned int v110;  // eax
    unsigned long v111;  // cc_ndep
    unsigned long long v112;  // r12
    unsigned long long v113;  // rax
    unsigned long long v114[3];  // rbp
    unsigned long long v115;  // rax
    unsigned int v116;  // eax
    struct_0 *v117;  // rax
    struct_0 *v118;  // r14

    fish::signal::signal_unblock_all();
    fish::topic_monitor::topic_monitor_init();
    fish::threads::init();
    v72.spec_new_impl(1, 0);
    v86 = v72.unwrap();
    setlocale(6, v86);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v86, v87);
    fish::wutil::gettext::initialize_gettext();
    std::env::var_os(&v34, "FISH_DEBUGFISH_DEBUG_OUTPUTC", 10);
    if (!((char)(((0 ^ v34) & (0 ^ -(v34))) >> 63)))
    {
        fish::common::str2wcstring(&v72, v35, *((long long *)&v36));
        fish::flog::activate_flog_categories_by_pattern(v77, v78);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v72);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v34, v35);
    }
    std::env::args_os(&v72);
    v88 = v69.collect(&v72);
    v34 = 0;
    v35 = 4;
    *((uint128_t *)&v36) = 0;
    v41 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 0x8000000000000000;
    v37 = 8;
    *((uint128_t *)&v38) = 0;
    v39 = 8;
    v40 = 0;
    v50 = 0;
    v54 = 0;
    v89 = v71;
    v0 = v88 & 0xffffff00 | 1;
    v22 = v0 & 0xffffff00 | 1;
    v33[0] = v70;
    fish::fish_parse_opt(&v72, v70, v89, &v34);
    if ((int)v72 == 1)
    {
        v90 = v76;
        v91 = 1;
    }
    else
    {
        v92 = v77;
        v22 = 1;
        std::env::var_os(&v72, "FISH_DEBUG_OUTPUTC", 17);
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, v42);
        v43 = v78;
        *((int128_t *)&v41) = *((int128_t *)&v72);
        v94 = v93 & 0xffffff00 | 1;
        if (1)
            goto LABEL_1265161;
        v4 = v43;
        *((int128_t *)&v1) = *((int128_t *)&v41);
        v27 = 0x1b600000000;
        v28 = 0;
        v31 = 0;
        v29 = 1;
        v30 = 1;
        v31 = 1;
        v23.open(&v27, &(char)v1);
        if (*((int *)&v23) == 1)
        {
            v62 = v25;
            v57 = &(char)v1;
            v58 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v72 = &g_549050;
            v77 = 1;
            v80 = 0;
            v78 = &v57;
            v79 = 1;
            v14.map_or_else(&v73);
            v10 = v18;
            *((int128_t *)&v5) = *((int128_t *)&v14);
            v14 = 0;
            v17 = 4;
            v18 = 0;
            *((char *)&v72) = 0;
            v77 = v9;
            v78 = v12;
            fish_printf::printf_impl::sprintf_locale(&v57, &v14, "Could not open file %s\n%s\nPid must be at least zero", 23, &v72, 1);
            v57.unwrap(&g_149b060);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v72);
            v78 = v18;
            *((int128_t *)&v74) = *((int128_t *)&v14);
            fish::wutil::wwrite_to_fd(v77, v18, 2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v72);
            v57 = 0;
            v58 = 4;
            v59 = 0;
            v72.to_arg(&v62);
            v95 = *((int128_t *)&v74);
            *((int128_t *)&v18) = *((int128_t *)&v78);
            v15 = v95;
            fish_printf::printf_impl::sprintf_locale(&v72, &v57, "%s\nPid must be at least zero", 3, &v14, 1);
            v72.unwrap(&g_149b078);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v14);
            v78 = v60;
            *((int128_t *)&v75) = *((int128_t *)&v57);
            fish::wutil::wwrite_to_fd(v77, v60, 2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v72);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
            core::ptr::drop_in_place<std::io::error::Error>(v62);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v3);
            v90 = 1;
            v91 = 1;
            v96 = 1;
        }
        else
        {
            fish::flog::set_flog_file_fd(v24);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v3);
            v94 = 0;
LABEL_1265161:
            v22 = v94;
            if ((char)v54 && v52 == 1)
            {
                if ((char)core::sync::atomic::atomic_load(&g_15a93e0))
                {
                    v7 = 0;
                    v8 = 1;
                    v10 = 0;
                    (char)v15.to_flog_str(&g_15a93d0);
                    v73.into_iter(&(char)v15);
                    v7.spec_extend(&v73);
                    v7.push(58, &g_149b090);
                    v7.push(32, &g_149b090);
                    v16 = "C";
                    v19 = 67;
                    v13 = 0x8000000000000000;
                    v1 = v13.localize();
                    v3 = v87;
                    (char)v57.to_flog_str(&v1);
                    v73.into_iter(&(char)v57);
                    v7.spec_extend(&v73);
                    core::ptr::drop_in_place<fish::wutil::gettext::LocalizableString>(&v13);
                    v7.push(10, &g_149b090);
                    fish::flog::flog_impl(v8, v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, v8);
                }
                v52 = 0;
            }
            if (v53)
                fish::proc::mark_login();
            if (v52)
                fish::proc::mark_no_exec();
            if ((char)v54)
                fish::proc::set_interactive_session(1);
            if (*((char *)&v54 + 1))
                fish::history::start_private_mode(fish::env::environment::EnvStack::globals());
            if (fish::proc::is_interactive_session())
                fish::common::save_term_foreground_process_group();
            if (v52)
            {
                v57 = 0x8000000000000000;
            }
            else if (v89)
            {
                v73.new(v33[1], v33[2]);
                fish::env::environment::env_init(&v73, v51 ^ 1, v51);
                memcpy(&v61, &v80, 16);
                memcpy(&v60, &v78, 16);
                *((int128_t *)&v57) = *((int128_t *)&v72);
            }
            else
            {
                core::panicking::panic_bounds_check(0, 0, &g_149b0a8); /* do not return */
            }
            v13.getf(fish::env::environment::EnvStack::globals(), "f", 13, 0);
            if (v13)
            {
                *((int128_t *)&v72) = *((int128_t *)&v13);
                v78 = v19;
                v99 = v72 + 16;
                for (v100 = v77 * 24; v100; v99 += 24)
                {
                    v100 -= 24;
                    _ZN4fish20future_feature_flags8FEATURES17hafcf865b0d05b1c5E.set_from_string(*((long long *)(v99 + 8)), *((long long *)(v99 + 16)));
                }
                core::ptr::drop_in_place<fish::env::var::EnvVar>(&v73);
            }
            _ZN4fish20future_feature_flags8FEATURES17hafcf865b0d05b1c5E.set_from_string(4, (long long)v36);
            fish::env_dispatch::read_terminfo_database(fish::env::environment::EnvStack::globals());
            fish::proc::proc_init();
            fish::env::environment::misc_init();
            fish::reader::reader_init(1);
            v84.create_child(fish::env::environment::EnvStack::globals(), 1);
            v0 = (int)v72.new(&v84, 1) & 0xffffff00 | 1;
            v103 = (unsigned int)v72.set_syncs_uvars(v51 ^ 1);
            if (!v52 && v51 != 1)
            {
                if (v57 != 0x8000000000000000)
                {
                    v0 = 1;
                    v103 = fish::read_init(&v72, v58, v59);
                }
                else
                {
                    v0 = 1;
                    core::option::unwrap_failed(&g_149b0c0); /* do not return */
                }
            }
            v0 = v103 & 0xffffff00 | 1;
            v104 = fish::proc::is_interactive_session();
            if ((char)v104 && v51 == 1 && !v52)
            {
                v0 = (unsigned int)v104 & 0xffffff00 | 1;
                v13.to_vec("f", 25);
                v10 = v19;
                *((int128_t *)&v5) = *((int128_t *)&v13);
                v0 = (unsigned int)v10 & 0xffffff00 | 1;
                v0 = (int)v82.set_one("f", 17, 32, &(unsigned long long)v5) & 0xffffff00 | 1;
                v104 = fish::function::exists("f", 25, &v72);
                if ((char)v104)
                {
                    v0 = (unsigned int)v104 & 0xffffff00 | 1;
                    v13.to_vec("fish_default_key_bindings", 25);
                    v10 = v19;
                    *((int128_t *)&v6) = *((int128_t *)&v13);
                    fish::run_command_list(&v72, &(unsigned long long)v5, 1);
                    v104 = (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v7, v8);
                }
            }
            v0 = (unsigned int)v104 & 0xffffff00 | 1;
            v0 = (int)fish::reader::term_copy_modes() & 0xffffff00 | 1;
            v0 = (int)v13.just(0) & 0xffffff00 | 1;
            v0 = (int)v72.set_last_statuses(&v13) & 0xffffff00 | 1;
            if (v47 != 0x8000000000000000)
            {
                if (false)
                {
                    v0 = v93 & 0xffffff00 | 1;
                    if ((char)v48.eq(v49, v45, v46))
                        goto LABEL_126576b;
                }
                v72.emit_profiling(v48, v49);
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v47, v48);
                v0 = 0;
                v72.clear_profiling();
                v0 = 0;
            }
LABEL_126576b:
            _ZN4fish6common16PROFILING_ACTIVE17h17c91187298e4d56E.store(0);
            v105 = (1 ? 1 : (int)fish::run_command_list(&v72, 8, 0));
            fish::signal::signal_clear_cancel();
            if ((long long)v38)
            {
                if (fish::proc::get_login())
                {
                    v106 = v89;
                    if (v106 < v92)
                        core::slice::index::slice_start_index_len_fail(v92, v89, &g_149b198); /* do not return */
                    fish::fish_xdm_login_hack_hack_hack_hack(v37, (long long)v38, &v33[v92], v106 - v92);
                }
                if (v89 < v92)
                    core::slice::index::slice_start_index_len_fail(v92, v89, &g_149b180); /* do not return */
                v13.collect(&v33[v92], &v33[v89]);
                v82.set("a", 4, 0, &v13);
                v108 = fish::run_command_list(&v72, v37, (long long)v38);
                *((char *)(v72.libdata_mut() + 128)) = 0;
                core::ptr::drop_in_place<core::cell::RefMut<fish::parser::LibraryData>>(v87);
                v109 = 127;
                if (!v108)
                    goto LABEL_1265da6;
                goto LABEL_12660ed;
            }
            if (v89 != v92)
            {
                if ((char)_ccall(6, 8, v89, v92, v111))
                    core::panicking::panic_bounds_check(v92, v89, &g_149b0d8); /* do not return */
                v112 = v92 * 3;
                fish::common::wcs2osstring(&(char)v62, v33[1 + v112], v33[2 + v112]);
                v65.open(v63, v64);
                if (v65 == 1)
                {
                    v55 = v67;
                    if ((char)core::sync::atomic::atomic_load(&g_15a9380))
                    {
                        v23 = 0;
                        v25 = 1;
                        v26 = 0;
                        v7.to_flog_str(&g_15a9370);
                        v13.into_iter(&v7);
                        (char)v23.spec_extend(&v13);
                        (char)v23.push(58, &g_149b108);
                        (char)v23.push(32, &g_149b108);
                        v27 = 0;
                        v28 = 4;
                        v32 = 0;
                        v3 = "E";
                        v4 = 31;
                        v1 = 0x8000000000000000;
                        v113 = v1.localize();
                        v7.from_utf8_lossy(v63, v64);
                        v14 = 0;
                        *((int128_t *)&v17) = *((int128_t *)&v8);
                        fish_printf::printf_impl::sprintf_locale(&v68, &v27, v113, v87, &v14, 1);
                        v68.unwrap(&g_149b108);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v14);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v7);
                        core::ptr::drop_in_place<fish::wutil::gettext::LocalizableString>(&v1);
                        *((int128_t *)&v5) = *((int128_t *)&v27);
                        v11 = 0;
                        v1.to_flog_str(&v7);
                        v14.into_iter(&v1);
                        (char)v23.spec_extend(&v14);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                        (char)v23.push(10, &g_149b108);
                        fish::flog::flog_impl(v25, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v23, v25);
                    }
                    v1 = 0;
                    v3 = 4;
                    v4 = 0;
                    v14.to_arg(&v55);
                    memcpy(&v11, &v19, 16);
                    *((int128_t *)&v5) = *((int128_t *)&v14);
                    fish_printf::printf_impl::sprintf_locale(&v14, &v1, "%s\nPid must be at least zero", 3, &v7, 1);
                    v14.unwrap(&g_149b120);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
                    v19 = v4;
                    *((int128_t *)&v15) = *((int128_t *)&v1);
                    fish::wutil::wwrite_to_fd(v16, v4, 2);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
                    core::ptr::drop_in_place<std::io::error::Error>(v55);
                }
                else
                {
                    v114 = &v33[v112];
                    v13.collect(v114 + 1, &v33[v89]);
                    v82.set("a", 4, 0, &v13);
                    v7.clone(v114[1], v114[2]);
                    v21 = v11;
                    *((int128_t *)&v18) = *((int128_t *)&(unsigned long long)v5);
                    v14 = 1;
                    v17 = 1;
                    v55 = v81.scoped_set(v14.new());
                    v56 = v87;
                    v14 = 0;
                    v17 = 8;
                    v19 = 0;
                    v105 = fish::reader::reader_read(&v72, v66, &v14);
                    core::ptr::drop_in_place<fish::io::IoChain>(&v14);
                    if (v105 && (char)core::sync::atomic::atomic_load(&g_15a93e0))
                    {
                        v23 = 0;
                        v25 = 1;
                        v26 = 0;
                        v7.to_flog_str(&g_15a93d0);
                        v14.into_iter(&v7);
                        (char)v23.spec_extend(&v14);
                        (char)v23.push(58, &g_149b0f0);
                        (char)v23.push(32, &g_149b0f0);
                        v27 = 0;
                        v28 = 4;
                        v32 = 0;
                        v3 = "E";
                        v4 = 29;
                        v1 = 0x8000000000000000;
                        v115 = v1.localize();
                        v7.from_utf8_lossy(v63, v64);
                        v15 = 0;
                        *((int128_t *)&v17) = *((int128_t *)&v8);
                        fish_printf::printf_impl::sprintf_locale(&v68, &v27, v115, v87, &v15, 1);
                        v68.unwrap(&g_149b0f0);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v15);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v7);
                        core::ptr::drop_in_place<fish::wutil::gettext::LocalizableString>(&v1);
                        *((int128_t *)&v6) = *((int128_t *)&v27);
                        v10 = 0;
                        v1.to_flog_str(&v7);
                        v15.into_iter(&v1);
                        (char)v23.spec_extend(&v15);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                        (char)v23.push(10, &g_149b0f0);
                        fish::flog::flog_impl(v25, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v23, v25);
                    }
                    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedRefCell<fish::parser::LibraryData>,fish::common::ScopedRefCell<fish::parser::LibraryData>::scoped_set<fish::throwing_main::{{closure}},core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>::{{closure}}>>(&v55);
                    core::ptr::drop_in_place<std::fs::File>(v66);
                }
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v62, v63);
                v109 = 127;
                if (!v105)
                    goto LABEL_1265da6;
                goto LABEL_12660ed;
            }
            else if (v52 && fish::nix::isatty(0))
            {
                if ((char)core::sync::atomic::atomic_load(&g_15a9380))
                {
                    v1 = 0;
                    v3 = 1;
                    v4 = 0;
                    v7.to_flog_str(&g_15a9370);
                    v13.into_iter(&v7);
                    v1.spec_extend(&v13);
                    v1.push(58, &g_149b138);
                    v1.push(32, &g_149b138);
                    v83.to_vec("no-execute mode enabled and no script given. Exiting/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/src/proc.rs", 52);
                    v13.into_iter(&v83);
                    v1.spec_extend(&v13);
                    v1.push(10, &g_149b138);
                    fish::flog::flog_impl(v3, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v1, v3);
                }
                core::ptr::drop_in_place<fish::parser::Parser>(&v72);
                core::ptr::drop_in_place<core::option::Option<fish::env::config_paths::ConfigPaths>>(&v57);
                v96 = (char)v22 ^ 1;
                v90 = 1;
            }
            else
            {
                v14 = 0;
                v17 = 8;
                v19 = 0;
                v110 = fish::reader::reader_read(&v72, 0, &v14);
                core::ptr::drop_in_place<fish::io::IoChain>(&v14);
                v109 = 127;
                if (!v110)
                {
LABEL_1265da6:
                    v109 = v72.get_last_status();
                }
LABEL_12660ed:
                v2 = v109;
                v116 = fish::nix::getpid();
                if (v116 < 0)
                {
                    v14 = &g_149b038;
                    v17 = 1;
                    v19 = 8;
                    *((uint128_t *)&v20) = 0;
                    core::panicking::panic_fmt(&v14, &g_149b150); /* do not return */
                }
                else if (v116)
                {
                    v14.process_exit(v116, v90);
                    fish::event::fire(&v72, &v14);
                    v14.to_vec("f", 9);
                    v10 = v19;
                    *((int128_t *)&v5) = *((int128_t *)&v14);
                    v117 = 8.alloc_impl(24);
                    if (!v117)
                        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                    v118 = v117;
                    v14.to_wstring(&v2);
                    v118->field_10 = v19;
                    v118->field_0 = *((int128_t *)&v14);
                    v14 = 1;
                    v17 = v118;
                    v18 = 1;
                    fish::event::fire_generic(&v72, &(unsigned long long)v5, &v14);
                    if (false)
                    {
                        v72.emit_profiling(v45, v46);
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(0x8000000000000000, v45);
                    }
                    fish::history::save_all();
                    if ((char)v50)
                        fish::print_rusage_self();
                    core::ptr::drop_in_place<fish::parser::Parser>(&v72);
                    core::ptr::drop_in_place<core::option::Option<fish::env::config_paths::ConfigPaths>>(&v57);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v34);
                    if (false && (char)v22)
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(0x8000000000000000, v42);
                    if (false)
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(0x8000000000000000, v45);
                }
                else
                {
                    core::option::unwrap_failed(&g_149b168); /* do not return */
                }
LABEL_12650eb:
                if (v91)
                    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v47, v48);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v36);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v38);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v69);
                return v90;
            }
        }
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v34);
    if (!((1 | v96) & 1))
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(0x8000000000000000, v42);
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, v45);
    goto LABEL_12650eb;
}
