long long uu_mv::move_files_into_dir(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_2 *a4)
{
    char v0;  // [bp-0x371]
    void* v1;  // [bp-0x370]
    int v2;  // [bp-0x368]
    char *v3;  // [bp-0x368]
    struct_1 *v4;  // [bp-0x360], Other Possible Types: unsigned long long
    int v5;  // [bp-0x358], Other Possible Types: char *, char
    char *v6;  // [bp-0x358]
    int v7;  // [bp-0x348], Other Possible Types: char
    char *v8;  // [bp-0x338], Other Possible Types: unsigned long long
    int v9;  // [bp-0x338], Other Possible Types: char
    struct_1 *v10;  // [bp-0x330], Other Possible Types: unsigned long long, unsigned long
    char *v11;  // [bp-0x328], Other Possible Types: char
    int v12;  // [bp-0x320]
    unsigned long long v13;  // [bp-0x320]
    char v14;  // [bp-0x318]
    char *v15;  // [bp-0x310]
    char v16;  // [bp-0x308], Other Possible Types: unsigned long long
    int v17;  // [bp-0x308], Other Possible Types: unsigned long long
    char v18;  // [bp-0x308]
    char *v19;  // [bp-0x2f8]
    unsigned int v20;  // [bp-0x2cc]
    char *v21;  // [bp-0x2c8]
    char *v22;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v23;  // [bp-0x2c8]
    unsigned long long v24;  // [bp-0x2c8]
    int v25;  // [bp-0x2c0], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x2c0]
    int v27;  // [bp-0x2c0]
    char *v28;  // [bp-0x2b8], Other Possible Types: char, unsigned long long
    char *v29;  // [bp-0x2b8]
    int v30;  // [bp-0x2b0], Other Possible Types: char
    unsigned long long v31;  // [bp-0x2b0], Other Possible Types: char
    int v32;  // [bp-0x2a8], Other Possible Types: void*
    char *v33;  // [bp-0x2a0]
    char v34;  // [bp-0x298]
    int v35;  // [bp-0x288], Other Possible Types: char
    int v36;  // [bp-0x238], Other Possible Types: char, unsigned long long
    int v37;  // [bp-0x238]
    void* v38;  // [bp-0x238], Other Possible Types: unsigned long long
    int v39;  // [bp-0x230], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x230]
    int v41;  // [bp-0x228], Other Possible Types: char *, char, unsigned long long
    unsigned long long v42;  // [bp-0x228]
    int v43;  // [bp-0x220], Other Possible Types: char *, unsigned int, unsigned long long
    int v44;  // [bp-0x218], Other Possible Types: void*, char
    int v45;  // [bp-0x208]
    char *v46;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v47;  // [bp-0x1f0]
    int v48;  // [bp-0x1e8]
    char v49;  // [bp-0x1d8]
    char v50;  // [bp-0x1c8]
    void* v51;  // [bp-0x188], Other Possible Types: char, unsigned long long
    char *v52;  // [bp-0x178]
    unsigned long long v53;  // [bp-0x168]
    unsigned long long v54;  // [bp-0x160]
    unsigned long long v55;  // [bp-0x158]
    unsigned long v56;  // [bp-0x150]
    unsigned long long v57;  // [bp-0x148]
    unsigned long long v58;  // [bp-0x140]
    char *v59;  // [bp-0x138]
    int v60;  // [bp-0x138]
    unsigned long long v61;  // [bp-0x130]
    int v62;  // [bp-0x128]
    int v63;  // [bp-0x118]
    char v64;  // [bp-0x108]
    char v65;  // [bp-0xf8]
    char v66;  // [bp-0xe8]
    char v67;  // [bp-0xd8]
    int v68;  // [bp-0xc8]
    char v69;  // [bp-0xb8]
    char *v70;  // [bp-0xa8]
    char v71;  // [bp-0x98]
    int v72;  // [bp-0x68]
    unsigned long long v73;  // [bp-0x58]
    char v74;  // [bp-0x50]
    int v75;  // [bp-0x40]
    struct_1 *v78;  // rdx
    char v79;  // al
    struct_3 *v80;  // rax
    struct_3 *v81;  // rbx
    unsigned long long v82;  // rax
    char *v83;  // rax
    char *v85;  // rax
    int v86;  // xmm1
    int v87;  // xmm2
    unsigned long long v89;  // rbx

    v36.try_with();
    v71.with_capacity_and_hasher(a1, v36.expect(), v78);
    uu_mv::hardlink::create_hardlink_context(&v36);
    memcpy(&v7, &v44, 16);
    memcpy(&v5, &v41, 16);
    *((int128_t *)&v2) = *((int128_t *)&v36);
    memcpy(&v35, &v50, 16);
    memcpy(&v34, &v49, 16);
    v32 = v48;
    memcpy(&v28, &v46, 16);
    v23 = v45;
    v79 = 1;
    if (!a4->field_31)
        v79 = *((int *)&a4->field_34);
    v18 = v79;
    v9.scan_files(&(char)v23, a0, a1, &v18);
    if (v10 == 9223372036854775812)
    {
        core::ptr::drop_in_place<core::result::Result<(),uu_mv::hardlink::HardlinkError>>(&v9);
    }
    else
    {
        memcpy(&v66, &v14, 16);
        memcpy(&v65, &v11, 16);
        memcpy(&v64, &v9, 16);
        if (v16)
        {
            v59 = &v64;
            v61 = <uu_mv::hardlink::HardlinkError as core::fmt::Display>::fmt;
            v36 = &g_5d9c70;
            v39 = 2;
            v44 = 0;
            v41 = &v59;
            v43 = 1;
            std::io::stdio::_eprint(&v36);
            v38 = &g_5d9c90;
            v40 = 1;
            v42 = 8;
            *((uint128_t *)&v43) = 0;
            std::io::stdio::_eprint(&v38);
        }
        else
        {
            v38 = &g_5d9ca0;
            v40 = 1;
            v42 = 8;
            *((uint128_t *)&v43) = 0;
            std::io::stdio::_eprint(&v38);
        }
        core::ptr::drop_in_place<uu_mv::hardlink::HardlinkError>(&v64);
    }
    v63 = v7;
    v62 = v5;
    *((int128_t *)&v60) = (int128_t)v2;
    v68 = v35;
    memcpy(&v67, &v34, 16);
    memcpy(&v66, &v32, 16);
    memcpy(&v65, &v28, 16);
    memcpy(&v64, &v23, 16);
    if (!(char)a2.is_dir(a3))
    {
        v22 = 1;
        v25 = a2;
        v28 = a3;
        v30 = 1;
        v9.spec_to_string(&v22);
        v43 = v11;
        memcpy(&v40, &v9, 16);
        v36 = 6;
        v89 = v36.new();
        ::0x4c7b50::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkGroupScanner>(&v64);
        ::0x4c7a70::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkTracker>(&(unsigned long long)v60);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v71);
        return v89;
    }
    if (a4->field_33)
    {
        v1 = core::ops::function::FnOnce::call_once();
        if (a1 <= 1)
            goto LABEL_4cbf1e;
        v18.new(a1);
        uucore::mods::locale::get_message(&(char)v23, "mv-progress-movingmv-error-will-not-overwrite-just-created/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 18);
        *((char **)&v2) = &(char)v23;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v38 = &g_5d9cb0;
        v40 = 2;
        v44 = 0;
        v42 = &(unsigned long long)v2;
        v43 = 1;
        v9.map_or_else(&v38);
        ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&(char)v23);
        *((int128_t *)&v2) = *((int128_t *)&v10);
        v5 = v11;
        v38.with_template(<alloc::string::String as core::fmt::Display>::fmt, v11);
        (char)v23.unwrap(&v38, &g_5d9d08);
        v38.with_style(&v18, &(char)v23);
        (char)v23.add(&v1, &v38, a3);
        memcpy(&v51, &v23, 16);
        v52 = v29;
        ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v2);
    }
    else
    {
        v1 = 0;
LABEL_4cbf1e:
        v51 = 0;
    }
    v57 = a0;
    v58 = a0 + a1 * 24;
    v80 = v57.next();
    if (v80)
    {
        v81 = v80;
        v0 = a4[1].padding_0[1];
        v56 = a4[1].padding_0[1];
        v20 = a4->field_30;
        do
        {
            std::fs::symlink_metadata(&v38, *((long long *)&v81->field_8), *((long long *)&v81[1].padding_0[7]));
            if (v38 == 2)
            {
                ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v40);
                v24 = 1;
                *((int128_t *)&v27) = *((int128_t *)&v81->field_8);
                v31 = 1;
                v9.spec_to_string(&v24);
                v43 = v11;
                *((int128_t *)&v39) = *((int128_t *)&v10);
                v38 = 0;
                uucore::mods::error::set_exit_code(1);
                v3 = uucore::util_name();
                v4 = v78;
                v8 = &v3;
                v10 = <&T as core::fmt::Display>::fmt;
                v11 = &v38;
                v13 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
                v24 = &g_5d99e8;
                v26 = 3;
                v32 = 0;
                v29 = &v8;
                v31 = 2;
                std::io::stdio::_eprint(&v24);
                core::ptr::drop_in_place<uu_mv::error::MvError>(&v38);
                continue;
            }
            else
            {
                ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v38, v40);
                if (v51)
                {
                    (char)v23.to_string_lossy(*((long long *)&v81->field_8), *((long long *)&v81[1].padding_0[7]));
                    v3 = &(char)v23;
                    v4 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v38 = &g_5d9cd0;
                    v40 = 2;
                    v44 = 0;
                    v42 = &v3;
                    v43 = 1;
                    v9.map_or_else(&v38);
                    ::0x4c7640::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v23);
                    memcpy(&v69, &v9, 16);
                    v70 = v11;
                    v51.set_message(&v69);
                }
                v82 = *((long long *)&v81->field_8).file_name(*((long long *)&v81[1].padding_0[7]));
                if (v82)
                {
                    v53.join(a2, a3, v82, v78);
                    if (!v71.get_inner(&v53) || v0 == 2)
                    {
                        v83 = uu_mv::assert_not_same_file(*((long long *)&v81->field_8), *((long long *)&v81[1].padding_0[7]), a2, a3, 1, v20, v56);
                        if (v83)
                        {
                            v3 = v83;
                            v4 = v78;
                            uucore::mods::error::set_exit_code(v78->field_58(v83));
                            v8 = uucore::util_name();
                            v10 = v78;
                            v21 = &v8;
                            v26 = <&T as core::fmt::Display>::fmt;
                            v29 = &v3;
                            v31 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v38 = &g_5d99e8;
                            v40 = 3;
                            v44 = 0;
                            v42 = &v21;
                            v43 = 2;
                            std::io::stdio::_eprint(&v38);
                            ::0x4c7180::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v3, v4);
                        }
                        else
                        {
                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v78);
                            v16 = uu_mv::rename(*((long long *)&v81->field_8), *((long long *)&v81[1].padding_0[7]), v54, v55, a4, (v1 ? &v1 : 0), &(unsigned long long)v60, &v64);
                            if (v16)
                            {
                                (unsigned long long)v36.spec_to_string(&v16);
                                if (v42)
                                {
                                    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v36);
                                    v85 = v17.map_err_context(v81, &v53);
                                    if (v1)
                                    {
                                        v1.suspend(v85);
                                    }
                                    else
                                    {
                                        v3 = v85;
                                        uucore::mods::error::set_exit_code(1);
                                        v8 = uucore::util_name();
                                        v10 = v78;
                                        v22 = &v8;
                                        v26 = <&T as core::fmt::Display>::fmt;
                                        v28 = &v3;
                                        v31 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                        v38 = &g_5d99e8;
                                        v40 = 3;
                                        v44 = 0;
                                        v42 = &v22;
                                        v43 = 2;
                                        std::io::stdio::_eprint(&v38);
                                        ::0x4c8080::core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v3);
                                    }
                                }
                                else
                                {
                                    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v36);
                                    uucore::mods::error::set_exit_code(1);
                                    ::0x4c7470::core::ptr::drop_in_place<std::io::error::Error>(v17);
                                }
                            }
                            if (v51)
                                v51.inc(1);
                            v38.clone(&v53);
                            v29 = v42;
                            *((int128_t *)&v23) = *((int128_t *)&v38);
                            v71.insert(&(char)v23);
                            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v53);
                            continue;
                        }
                    }
                    else
                    {
                        (char)v23.to_vec("targetsource:  \n", 6);
                        v5 = v29;
                        *((int128_t *)&v2) = (int128_t)v23;
                        memcpy(&v74, &v54, 16);
                        (char)v23.spec_to_string(&v74);
                        v11 = v6;
                        *((int128_t *)&v9) = *((int128_t *)&(unsigned long long)v2);
                        v15 = v29;
                        *((int128_t *)&v12) = (int128_t)v23;
                        (unsigned long long)v2.to_vec("source:  \n", 6);
                        v19 = v6;
                        memcpy(&v18, &v2, 16);
                        *((int128_t *)&v75) = *((int128_t *)&v81->field_8);
                        (unsigned long long)v2.spec_to_string(&v75);
                        v28 = v19;
                        v23 = v17;
                        v33 = v6;
                        *((int128_t *)&v30) = *((int128_t *)&(unsigned long long)v2);
                        v86 = *((int128_t *)&v11);
                        v87 = (int128_t)(&v12)[8];
                        *((int128_t *)&v36) = (int128_t)v9;
                        v41 = v86;
                        v44 = v87;
                        memcpy(&v48, &v32, 16);
                        v46 = v28;
                        v47 = v31;
                        memcpy(&v45, &v23, 16);
                        (char)v23.from_iter(&(unsigned long long)v36);
                        uucore::mods::locale::get_message_with_args(&v72, "mv-error-will-not-overwrite-just-created/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 40, &(char)v23);
                        v43 = 1;
                        v37 = v72;
                        v41 = v73;
                        *((double *)&v3) = (unsigned long long)v36.new();
                        v4 = &g_5d9b38;
                        uucore::mods::error::set_exit_code((unsigned int)v3.code());
                        v8 = uucore::util_name();
                        v10 = v78;
                        v21 = &v8;
                        v26 = <&T as core::fmt::Display>::fmt;
                        v29 = &v3;
                        v31 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v38 = &g_5d99e8;
                        v40 = 3;
                        v44 = 0;
                        v42 = &v21;
                        v43 = 2;
                        std::io::stdio::_eprint(&v38);
                        ::0x4c7180::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v3, &g_5d9b38);
                    }
                    ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v53);
                }
                else
                {
                    v24 = 1;
                    *((int128_t *)&v25) = *((int128_t *)&v81->field_8);
                    v31 = 1;
                    v9.spec_to_string(&v24);
                    v43 = v11;
                    *((int128_t *)&v39) = *((int128_t *)&v10);
                    v38 = 0;
                    uucore::mods::error::set_exit_code(1);
                    v3 = uucore::util_name();
                    v4 = v78;
                    v8 = &v3;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = &v38;
                    v13 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
                    v24 = &g_5d99e8;
                    v26 = 3;
                    v32 = 0;
                    v29 = &v8;
                    v31 = 2;
                    std::io::stdio::_eprint(&v24);
                    core::ptr::drop_in_place<uu_mv::error::MvError>(&v38);
                }
            }
            v81 = v57.next();
        } while (v81);
    }
    core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v51);
    core::ptr::drop_in_place<core::option::Option<indicatif::multi::MultiProgress>>(&v1);
    ::0x4c7b50::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkGroupScanner>(&v64);
    ::0x4c7a70::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkTracker>(&(unsigned long long)v60);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v71);
    return 0;
}
