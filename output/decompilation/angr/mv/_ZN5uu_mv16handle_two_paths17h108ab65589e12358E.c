long long uu_mv::handle_two_paths(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    unsigned long long v0;  // [bp-0x218]
    unsigned long long v1;  // [bp-0x210]
    char *v2;  // [bp-0x208], Other Possible Types: int, char, unsigned long long
    unsigned long long v3;  // [bp-0x200]
    char *v4;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x1f0], Other Possible Types: unsigned long long, char
    int v6;  // [bp-0x1e8]
    unsigned long long v7;  // [bp-0x1e0]
    char v8;  // [bp-0x1d8]
    char v9;  // [bp-0x1c8]
    char *v10;  // [bp-0x1b8], Other Possible Types: int, unsigned long long
    unsigned long long v11;  // [bp-0x1b0]
    int v12;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v13;  // [bp-0x1a0], Other Possible Types: char
    char v14;  // [bp-0x198]
    unsigned long long v15;  // [bp-0x190]
    int v16;  // [bp-0x188], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [bp-0x180]
    int v18;  // [bp-0x178], Other Possible Types: char *, unsigned long long
    int v19;  // [bp-0x170], Other Possible Types: unsigned long long
    int v20;  // [bp-0x168], Other Possible Types: void*
    int v21;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x148]
    unsigned long long v23;  // [bp-0x140]
    unsigned long long v24;  // [bp-0x138]
    unsigned long long v25;  // [bp-0x130]
    char v26;  // [bp-0x128]
    char v27;  // [bp-0x118]
    char *v28;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0xc8]
    unsigned long long v30;  // [bp-0xc0]
    char v31;  // [bp-0xb8]
    unsigned long long v32;  // [bp-0xb0]
    unsigned long long v33;  // [bp-0xa8]
    unsigned long long v34;  // [bp-0xa0]
    unsigned long long v35;  // [bp-0x98]
    char v36;  // [bp-0x90]
    int v37;  // [bp-0x88], Other Possible Types: char
    unsigned long long v38;  // [bp-0x78]
    char v39;  // [bp-0x68]
    unsigned long long v40;  // [bp-0x58]
    char v41;  // [bp-0x50]
    char *v42;  // [bp-0x40]
    int v44;  // xmm2
    int v45;  // xmm3
    unsigned long long v46;  // rax
    unsigned int v47;  // eax
    unsigned long v48;  // rbx
    char v49;  // al
    unsigned long long v50;  // rbp
    unsigned long long v51;  // rbp
    unsigned long long v52;  // rbx
    unsigned long long v53;  // r15
    int v54;  // xmm0
    unsigned long long v55;  // rbp
    unsigned long long v56;  // rbp
    unsigned long long v57;  // r14
    unsigned long long v58;  // rbx
    unsigned int v59;  // eax
    unsigned long long v60;  // r14
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rax
    char *v63;  // rax
    int v65;  // xmm0
    unsigned long long v66;  // rax
    unsigned long v67;  // rbp

    if (a4->field_36 == 1 && (char)uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, a4->field_8, a4->field_10))
    {
        (char)v2.to_vec("targetsource:  \n", 6);
        v33 = 1;
        v34 = a2;
        v35 = a3;
        v36 = 1;
        v16.spec_to_string(&v33);
        v12 = v4;
        *((int128_t *)&v10) = *((int128_t *)&v2);
        *((int128_t *)&v13) = *((int128_t *)&v16);
        v15 = v18;
        v16.to_vec("source:  \n", 6);
        v38 = v18;
        memcpy(&v37, &v16, 16);
        v28 = 1;
        v29 = a0;
        v30 = a1;
        v31 = 1;
        v16.spec_to_string(&v28);
        v4 = v38;
        v2 = v37;
        *((int128_t *)&v5) = *((int128_t *)&v16);
        v7 = v18;
        v44 = *((int128_t *)&v12);
        v45 = (int128_t)(&v13)[8];
        *((int128_t *)&v16) = (int128_t)v10;
        v18 = v44;
        v20 = v45;
        v24 = (long long)(&v5)[8];
        v25 = v7;
        v22 = v4;
        v23 = v5;
        v21 = v37;
        (char)v2.from_iter(&v16);
        uucore::mods::locale::get_message_with_args(&v16, "mv-error-backup-might-destroy-source./.operandsrc/uu/mv/src/mv.rs", 36, &(char)v2);
        v46 = 0.new(&v16);
        goto LABEL_4ca3bd;
    }
    std::fs::symlink_metadata(&(char)v16, a0, a1);
    if (v16 == 2)
    {
        ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v17);
        if (a1)
        {
            v47 = *((char *)(a0 + a1 - 1));
            if (!(v47 == 47 || v47 == 92))
                goto LABEL_4ca4b2;
            v2 = 1;
            v3 = a0;
            v4 = a1;
            v5 = 1;
            v17.spec_to_string(&v2);
            v16 = 1;
        }
        else
        {
LABEL_4ca4b2:
            v2 = 1;
            v3 = a0;
            v4 = a1;
            v5 = 1;
            v17.spec_to_string(&v2);
            v16 = 0;
        }
    }
    else
    {
        ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v16, v17);
        v0 = a2;
        v48 = (unsigned int)a2.is_dir(a3);
        v32 = a1;
        v49 = a0.is_dir(a1);
        v1 = a3;
        if (!a3)
        {
LABEL_4ca54b:
            v50 = uu_mv::assert_not_same_file(a0, v32, v0, v1, v48 & 4294967295, a4->field_30, a4->field_36);
            if (v50)
                return v50;
            v51 = a0;
            if ((char)v48)
            {
                v52 = v32;
                if (!(a4->field_30 & 1))
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v16, v51, v52);
                    v56 = uu_mv::move_files_into_dir(&(char)v16, 1, v0, v1, a4);
                    core::ptr::drop_in_place<[std::path::PathBuf; 1]>(&(char)v16);
                    return v56;
                }
                v53 = v1;
                if ((char)v51.is_dir(v52))
                {
                    uu_mv::hardlink::create_hardlink_context(&(char)v16);
                    v54 = (int128_t)v16;
                    memcpy(&v14, &v20, 16);
                    *((int128_t *)&v12) = (int128_t)v18;
                    v10 = v54;
                    memcpy(&v9, &v27, 16);
                    memcpy(&v8, &v26, 16);
                    *((int128_t *)&v6) = *((int128_t *)&v24);
                    memcpy(&(char)v4, &(char)v22, 16);
                    v2 = v21;
                    v16 = v51;
                    v17 = v52;
                    v18 = v0;
                    v19 = v53;
                    v55 = uu_mv::rename(v51, v52, v18, v53, a4, 0, &(char)v10, &(char)v2).map_err_context(&v16);
                    ::0x4c7b50::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkGroupScanner>(&(char)v2);
                    ::0x4c7a70::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkTracker>(&(char)v10);
                    return v55;
                }
                v2 = 1;
                v3 = v0;
                v4 = v53;
                v5 = 1;
                v17.spec_to_string(&v2);
                v16 = 4;
            }
            else
            {
                std::fs::metadata(&(char)v16, v0, v1);
                ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v16, v17);
                v57 = v51;
                v58 = v32;
                if (v16 == 2 || !(char)v57.is_dir(v58))
                {
                    uu_mv::hardlink::create_hardlink_context(&(char)v16);
                    v65 = (int128_t)v16;
                    memcpy(&v14, &v20, 16);
                    *((int128_t *)&v12) = (int128_t)v18;
                    v10 = v65;
                    memcpy(&v9, &v27, 16);
                    memcpy(&v8, &v26, 16);
                    *((int128_t *)&v6) = *((int128_t *)&v24);
                    memcpy(&(char)v4, &(char)v22, 16);
                    v2 = v21;
                    v66 = uu_mv::rename(v57, v58, v0, v1, a4, 0, &(char)v10, &(char)v2);
                    v67 = (!v66 ? 0 : uu_mv::handle_two_paths::{{closure}}(v66));
                    ::0x4c7b50::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkGroupScanner>(&(char)v2);
                    ::0x4c7a70::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkTracker>(&(char)v10);
                    return v67;
                }
                v59 = a4->field_35;
                if (!v59)
                    return 0;
                v60 = v57;
                if (v59 == 1)
                {
                    v2 = uucore::util_name();
                    v3 = v61;
                    v10 = &v2;
                    v11 = <&T as core::fmt::Display>::fmt;
                    v16 = &g_5d99b8;
                    v17 = 2;
                    v20 = 0;
                    v18 = &v10;
                    v19 = 1;
                    std::io::stdio::_eprint(&v16);
                    v10.to_vec("targetsource:  \n", 6);
                    v2 = 1;
                    v3 = v0;
                    v4 = v1;
                    v5 = 1;
                    v16.spec_to_string(&v2);
                    v40 = v12;
                    memcpy(&v39, &v10, 16);
                    memcpy(&v41, &v16, 16);
                    v42 = v18;
                    v16.from_iter(&v39);
                    uucore::mods::locale::get_message_with_args(&v10, "mv-prompt-overwritemv-error-backup-might-destroy-source./.operandsrc/uu/mv/src/mv.rs", 19, &v16);
                    v28 = &v10;
                    v29 = <alloc::string::String as core::fmt::Display>::fmt;
                    v16 = &g_437700;
                    v17 = 1;
                    v20 = 0;
                    v18 = &v28;
                    v19 = 1;
                    std::io::stdio::_eprint(&v16);
                    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v10);
                    v16 = &g_5d99d8;
                    v17 = 1;
                    v18 = 8;
                    *((uint128_t *)&v19) = 0;
                    std::io::stdio::_eprint(&v16);
                    v16 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
                    v62 = v16.flush();
                    if (v62)
                    {
                        v63 = uu_mv::handle_two_paths::{{closure}}(v62);
                        if (v63)
                        {
                            v28 = v63;
                            v29 = &g_5d9b38;
                            uucore::mods::error::set_exit_code((unsigned int)v63.code());
                            v10 = uucore::util_name();
                            v11 = v61;
                            v2 = &v10;
                            v3 = <&T as core::fmt::Display>::fmt;
                            v4 = &v28;
                            v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v16 = &g_5d99e8;
                            v17 = 3;
                            v20 = 0;
                            v18 = &v2;
                            v19 = 2;
                            std::io::stdio::_eprint(&v16);
                            ::0x4c7180::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v28, &g_5d9b38);
                        }
                    }
                    v60 = v51;
                    if (!(!(char)uucore::read_yes()))
                        goto LABEL_4ca9ff;
                    v16.to_vec(1, 0);
                    v46 = 40._new(v16.new(), &g_5d9ac0);
LABEL_4ca3bd:
                    return v46.from();
                }
LABEL_4ca9ff:
                v10 = 1;
                v11 = v60;
                v12 = v58;
                v13 = 1;
                (char)v33.spec_to_string(&v10);
                v2 = 1;
                v3 = v0;
                v4 = v1;
                v5 = 1;
                v28.spec_to_string(&v2);
                v19 = v35;
                memcpy(&v17, &(char)v33, 16);
                memcpy(&v20, &v28, 16);
                v21 = v30;
                v16 = 5;
            }
        }
        else if (*((char *)(v0 + v1 - 1)) == 47)
        {
            goto LABEL_4ca54b;
        }
        else
        {
            if (v49 || (char)v48 || *((char *)(v0 + v1 - 1)) != 92 || a4->field_30 || a4->field_37 == 2)
                goto LABEL_4ca54b;
            v2 = 1;
            v3 = v0;
            v4 = v1;
            v5 = 1;
            v17.spec_to_string(&v2);
            v16 = 8;
        }
    }
    v56 = v16.new();
    return v56;
}
