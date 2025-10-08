long long fish::env_dispatch::init_locale(unsigned long long a0)
{
    char v0;  // [bp-0x319]
    void* v1;  // [bp-0x318]
    int v2;  // [bp-0x318]
    unsigned long long v3;  // [bp-0x310]
    void* v4;  // [sp-0x308], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x300]
    unsigned long long v6;  // [sp-0x2f8]
    void* v7;  // [sp-0x2f0]
    unsigned long long v8;  // [bp-0x2e8]
    int v9;  // [bp-0x2e8]
    int v10;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x2d8]
    unsigned long long v12;  // [bp-0x2c0]
    int v13;  // [bp-0x2a8], Other Possible Types: char, unsigned long
    unsigned long long v14;  // [bp-0x2a8]
    unsigned long long v15;  // [bp-0x298]
    unsigned long long v16;  // [bp-0x290]
    unsigned long long v17;  // [bp-0x288]
    unsigned long long v18;  // [bp-0x280]
    void* v19;  // [bp-0x278], Other Possible Types: char, unsigned long long
    int v20;  // [sp-0x270], Other Possible Types: unsigned long long
    char v21;  // [bp-0x268], Other Possible Types: unsigned long long
    char *v22;  // [bp-0x1c8]
    char *v23;  // [bp-0x1c0]
    unsigned long long v24;  // [bp-0x1b8]
    unsigned long long v25;  // [bp-0x1b0]
    unsigned long long v26;  // [bp-0x1a8]
    char *v27;  // [bp-0x1a0]
    int v28;  // [bp-0x198]
    unsigned long long v29;  // [bp-0x188]
    int v30;  // [bp-0x180]
    char v31;  // [bp-0x168]
    int v32;  // [bp-0x150]
    int v33;  // [bp-0x138]
    int v34;  // [bp-0x120]
    int v35;  // [bp-0x108]
    char v36;  // [bp-0xf0]
    char v37;  // [bp-0xd8]
    char v38;  // [bp-0xc0]
    char v39;  // [bp-0xa8]
    char v40;  // [bp-0x90]
    char v41;  // [bp-0x78]
    char v42;  // [bp-0x60]
    char v43;  // [bp-0x48]
    char v45;  // dl
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48;  // r15
    unsigned long long v49;  // r15
    char *v50;  // rbx
    char *v51;  // r14
    char *v52;  // rax
    unsigned long long v53[2];  // rbp
    char *v54;  // rax
    char *v55;  // rax
    char *v56;  // rax
    char *v57;  // rax
    char *v58;  // rax
    char *v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // r8
    char *v62;  // rsi

    v19.lock(&_ZN4fish6locale11LOCALE_LOCK17h1a92918ed7e88021E);
    v16 = v19.unwrap(&g_14d70c8);
    v0 = v45 & 1;
    v23 = setlocale(5, NULL);
    if (!v23)
    {
        v19 = 0;
        core::panicking::assert_failed(1, &v23, &g_54a578, &v19, &g_14d7260); /* do not return */
    }
    v12 = v23.from(strlen(v23) + 1);
    v19 = 0;
    v20 = 10;
    memcpy(&v21, &g_14d6e38, 160);
    v22 = &v19;
    if (v19.next())
    {
        v18 = &g_15a9710;
        v17 = &g_15a9700;
        do
        {
            v49 = v48;
            v24 = v46;
            v25 = v49;
            v30.getf_unless_empty(a0, v46, v49, 16);
            if ((long long)v30)
            {
                fish::env_dispatch::init_locale::{{closure}}(&v8, &v30);
                v15 = v11;
                memcpy(&v13, &v8, 16);
                if (v13 != 0x8000000000000000)
                {
                    v29 = v15;
                    v28 = v13;
                    if ((char)core::sync::atomic::atomic_load(v18, 0))
                    {
                        v5 = 0;
                        v6 = 1;
                        v7 = 0;
                        v1.to_flog_str(v17);
                        v8.into_iter(&v1);
                        v5.spec_extend(&v8);
                        v5.push(58, &g_14d7230);
                        v5.push(32, &g_14d7230);
                        v32.to_vec("locale varsrc/env_universal_common.rsAlready initialized", 10);
                        v8.into_iter(&v32);
                        v5.spec_extend(&v8);
                        v5.push(32, &g_14d7230);
                        v1.to_flog_str(&v24);
                        v8.into_iter(&v1);
                        v5.spec_extend(&v8);
                        v5.push(32, &g_14d7230);
                        v33.to_vec("=", 1);
                        v8.into_iter(&v33);
                        v5.spec_extend(&v8);
                        v5.push(32, &g_14d7230);
                        v1.to_flog_str(&v13);
                        v8.into_iter(&v1);
                        v5.spec_extend(&v8);
                        v5.push(10, &g_14d7230);
                        fish::flog::flog_impl(v6, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
                    }
                    fish::env::setenv_lock(v46, v49, &v13);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                    continue;
                }
            }
            else
            {
                v14 = 0x8000000000000000;
            }
            if ((char)core::sync::atomic::atomic_load(v18, 0))
            {
                v5 = 0;
                v6 = 1;
                v7 = 0;
                v1.to_flog_str(v17);
                v8.into_iter(&v1);
                v5.spec_extend(&v8);
                v5.push(58, &g_14d7248);
                v5.push(32, &g_14d7248);
                v34.to_vec("locale varsrc/env_universal_common.rsAlready initialized", 10);
                v8.into_iter(&v34);
                v5.spec_extend(&v8);
                v5.push(32, &g_14d7248);
                v1.to_flog_str(&v24);
                v8.into_iter(&v1);
                v5.spec_extend(&v8);
                v5.push(32, &g_14d7248);
                v35.to_vec("is missing or emptyuser has an invalid locale configuredHave singlebyte locale, trying to fix.C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale", 19);
                v8.into_iter(&v35);
                v5.spec_extend(&v8);
                v5.push(10, &g_14d7248);
                fish::flog::flog_impl(v6, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
            }
            fish::env::unsetenv_lock(v46, v49);
            v46 = v19.next();
            v47 = v47;
        } while (v46);
    }
    v50 = setlocale(6, &g_9f6b7a);
    if (v50)
    {
        v51 = strlen(v50) + 1;
    }
    else
    {
        v51 = &_ZN4fish4flog10categories10env_locale17h333eedb72d6b0aa5E;
        if ((char)core::sync::atomic::atomic_load(&g_15a9710, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v8.to_flog_str(&g_15a9700);
            v19.into_iter(&v8);
            v1.spec_extend(&v19);
            v1.push(58, &g_14d70e0);
            v1.push(32, &g_14d70e0);
            v36.to_vec("user has an invalid locale configuredHave singlebyte locale, trying to fix.C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_", 37);
            v51 = &v19;
            v19.into_iter(&v36);
            v1.spec_extend(&v19);
            v1.push(10, &g_14d70e0);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
    }
    v31.getf_unless_empty(a0, "f", 28, 0);
    if (*((long long *)&v31))
    {
        fish::env_dispatch::init_locale::{{closure}}(&v19, &v31);
        *((int128_t *)&v9) = *((int128_t *)&v20);
        if (v19 != 0x8000000000000000)
        {
            *((int128_t *)&v20) = *((int128_t *)&v8);
            if (!(char)fish::env_dispatch::init_locale::{{closure}}(&v19))
                goto LABEL_139de30;
        }
    }
    if ((unsigned long long)fish::libc::MB_CUR_MAX() == 1)
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a9710, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v8.to_flog_str(&g_15a9700);
            v19.into_iter(&v8);
            v1.spec_extend(&v19);
            v1.push(58, &g_14d70f8);
            v1.push(32, &g_14d70f8);
            v37.to_vec("Have singlebyte locale, trying to fix.C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialize", 38);
            v19.into_iter(&v37);
            v1.spec_extend(&v19);
            v1.push(10, &g_14d70f8);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
        v19.spec_new_impl("C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 7);
        v52 = v19.unwrap(&g_14d7170);
        setlocale(0, v52);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v52, v47);
        if ((unsigned long long)fish::libc::MB_CUR_MAX() > 1)
        {
            v53 = &g_14d7110[0];
        }
        else
        {
            v19.spec_new_impl("en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 11);
            v54 = v19.unwrap(&g_14d7170);
            setlocale(0, v54);
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v54, v47);
            if ((unsigned long long)fish::libc::MB_CUR_MAX() > 1)
            {
                v53 = &g_14d7120[0];
            }
            else
            {
                v19.spec_new_impl("en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 11);
                v55 = v19.unwrap(&g_14d7170);
                setlocale(0, v55);
                core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v55, v47);
                if ((unsigned long long)fish::libc::MB_CUR_MAX() > 1)
                {
                    v53 = &g_14d7130[0];
                }
                else
                {
                    v19.spec_new_impl("de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 11);
                    v56 = v19.unwrap(&g_14d7170);
                    setlocale(0, v56);
                    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v56, v47);
                    if ((unsigned long long)fish::libc::MB_CUR_MAX() > 1)
                    {
                        v53 = &g_14d7140[0];
                    }
                    else
                    {
                        v19.spec_new_impl("C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 6);
                        v57 = v19.unwrap(&g_14d7170);
                        setlocale(0, v57);
                        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v57, v47);
                        if ((unsigned long long)fish::libc::MB_CUR_MAX() > 1)
                        {
                            v53 = &g_14d7150[0];
                        }
                        else
                        {
                            v19.spec_new_impl("UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 5);
                            v58 = v19.unwrap(&g_14d7170);
                            setlocale(0, v58);
                            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v58, v47);
                            if ((unsigned long long)fish::libc::MB_CUR_MAX() < 2)
                                goto LABEL_139dd20;
                            v53 = &g_14d7160[0];
                        }
                    }
                }
            }
        }
        if ((char)core::sync::atomic::atomic_load(&g_15a9710, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v8.to_flog_str(&g_15a9700);
            v19.into_iter(&v8);
            v1.spec_extend(&v19);
            v1.push(58, &g_14d7188);
            v1.push(32, &g_14d7188);
            v38.to_vec("Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 13);
            v19.into_iter(&v38);
            v1.spec_extend(&v19);
            v1.push(32, &g_14d7188);
            v39.to_vec(v53[0], v53[1]);
            v19.into_iter(&v39);
            v1.spec_extend(&v19);
            v1.push(10, &g_14d7188);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
LABEL_139dd20:
        if ((unsigned long long)fish::libc::MB_CUR_MAX() == 1 && (char)core::sync::atomic::atomic_load(&g_15a9710, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v8.to_flog_str(&g_15a9700);
            v19.into_iter(&v8);
            v1.spec_extend(&v19);
            v1.push(58, &g_14d71a0);
            v1.push(32, &g_14d71a0);
            v40.to_vec("Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 21);
            v19.into_iter(&v40);
            v1.spec_extend(&v19);
            v1.push(10, &g_14d71a0);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
    }
LABEL_139de30:
    v26 = setlocale(1, "C");
    if (v26)
    {
        fish::locale::invalidate_numeric_locale();
        fish::common::fish_setlocale();
        if ((char)core::sync::atomic::atomic_load(&g_15a9710, 0))
        {
            v5 = 0;
            v6 = 1;
            v7 = 0;
            v8.to_flog_str(&g_15a9700);
            v19.into_iter(&v8);
            v5.spec_extend(&v19);
            v5.push(58, &g_14d71b8);
            v5.push(32, &g_14d71b8);
            v41.to_vec("init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 26);
            v19.into_iter(&v41);
            v5.spec_extend(&v19);
            v5.push(32, &g_14d71b8);
            if (v50)
            {
                v19.to_string_lossy(v50, v51);
                *((int128_t *)&v2) = *((int128_t *)&v20);
                v20 = "(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized";
                v21 = 6;
                v19 = 0x8000000000000000;
                if (v19 == 9223372036854775809)
                    goto LABEL_139dff6;
                *((int128_t *)&v10) = *((int128_t *)&v1);
                v8 = v19;
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v19);
            }
            else
            {
                v20 = "(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized";
                v21 = 6;
                v19 = 0x8000000000000000;
LABEL_139dff6:
                v11 = v21;
                v8 = v19;
                v10 = "(null)Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized";
            }
            v19.clone(v10, v11);
            v4 = v21;
            *((int128_t *)&v2) = *((int128_t *)&v19);
            v19.into_iter(&(unsigned long long)v2);
            v5.spec_extend(&v19);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
            v5.push(10, &g_14d71b8);
            fish::flog::flog_impl(v6, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
        }
        v59 = setlocale(5, NULL);
        v27 = v59;
        if (v27)
        {
            v60 = strlen(v27);
            if ((char)core::sync::atomic::atomic_load(&g_15a9710, 0))
            {
                v5 = 0;
                v6 = 1;
                v7 = 0;
                v8.to_flog_str(&g_15a9700);
                v19.into_iter(&v8);
                v5.spec_extend(&v19);
                v5.push(58, &g_14d71d0);
                v5.push(32, &g_14d71d0);
                v42.to_vec("Old LC_MESSAGES locale:New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 23);
                v19.into_iter(&v42);
                v5.spec_extend(&v19);
                v5.push(32, &g_14d71d0);
                v8.to_string_lossy(v12, v47);
                v19.clone(v10, v11);
                v4 = v21;
                *((int128_t *)&v2) = *((int128_t *)&v19);
                v19.into_iter(&(unsigned long long)v2);
                v5.spec_extend(&v19);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
                v5.push(10, &g_14d71d0);
                fish::flog::flog_impl(v6, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
            }
            if ((char)core::sync::atomic::atomic_load(&g_15a9710, 0))
            {
                v5 = 0;
                v6 = 1;
                v7 = 0;
                v8.to_flog_str(&g_15a9700);
                v19.into_iter(&v8);
                v5.spec_extend(&v19);
                v5.push(58, &g_14d71e8);
                v5.push(32, &g_14d71e8);
                v43.to_vec("New LC_MESSAGES locale:locale varsrc/env_universal_common.rsAlready initialized", 23);
                v19.into_iter(&v43);
                v5.spec_extend(&v19);
                v5.push(32, &g_14d71e8);
                v8.to_string_lossy(v59, v60 + 1);
                v19.clone(v10, v11);
                v4 = v21;
                *((int128_t *)&v2) = *((int128_t *)&v19);
                v19.into_iter(&v1);
                v5.spec_extend(&v19);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
                v5.push(10, &g_14d71e8);
                fish::flog::flog_impl(v6, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
            }
            fish::wutil::gettext::update_locale_from_env(a0);
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v12, v47);
            return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v16, v0);
        }
        v61 = &g_14d7200;
        v62 = &v27;
    }
    else
    {
        v61 = &g_14d7218;
        v62 = &v26;
    }
    v19 = 0;
    core::panicking::assert_failed(1, v62, &g_54a578, v22, v61); /* do not return */
}
