long long uu_tail::follow::watch::follow(struct_4 *a0, struct_5 *a1)
{
    char v0;  // [bp-0x382]
    char v1;  // [bp-0x381]
    struct_0 *v2;  // [bp-0x380]
    void* v3;  // [bp-0x378], Other Possible Types: char *, int
    int v4;  // [bp-0x378]
    int v5;  // [bp-0x378]
    unsigned long long v6[3];  // [bp-0x370]
    int v7;  // [bp-0x370]
    char *v8;  // [bp-0x368], Other Possible Types: unsigned long long
    char v9;  // [sp-0x360], Other Possible Types: unsigned int
    int v10;  // [bp-0x360]
    unsigned long long v11;  // [bp-0x358]
    unsigned long long v12;  // [bp-0x350]
    void* v13;  // [bp-0x348]
    int v14;  // [bp-0x348]
    unsigned long long v15[3];  // [bp-0x340], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x338], Other Possible Types: char *, unsigned long long
    unsigned long long v17;  // [bp-0x328]
    int v18;  // [bp-0x328]
    unsigned long long v19[3];  // [bp-0x320]
    unsigned long long v20;  // [bp-0x318]
    unsigned long long v21;  // [bp-0x310]
    int v22;  // [bp-0x308]
    unsigned long long v23;  // [bp-0x300]
    unsigned long long v24;  // [bp-0x2f8]
    unsigned int v25;  // [bp-0x2f0]
    unsigned int v26;  // [bp-0x2ec]
    int v27;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v28;  // [bp-0x2e8]
    unsigned long long v29[3];  // [bp-0x2e8]
    int v30;  // [bp-0x2e8]
    int v31;  // [bp-0x2e8]
    unsigned long long v32;  // [bp-0x2e0]
    int v33;  // [bp-0x2d8], Other Possible Types: char *, unsigned long long
    int v34;  // [bp-0x2d8]
    unsigned long long v35;  // [bp-0x2d0], Other Possible Types: unsigned int
    int v36;  // [bp-0x2d0]
    int v37;  // [bp-0x2c8], Other Possible Types: void*
    unsigned long long v38;  // [bp-0x2c0]
    unsigned long long v39;  // [bp-0x2b8]
    char v40;  // [bp-0x238]
    char *v41;  // [bp-0x238]
    int v42;  // [bp-0x238]
    unsigned long long v43;  // [bp-0x230]
    unsigned long long v44;  // [sp-0x228]
    unsigned long long v45;  // [bp-0x220]
    unsigned long long v46;  // [bp-0x218]
    unsigned long long v47;  // [bp-0x210]
    unsigned long long v48;  // [bp-0x208]
    int v49;  // [bp-0x208]
    unsigned long long v50[3];  // [bp-0x200]
    unsigned long long v51;  // [bp-0x1f8]
    unsigned long long v52;  // [bp-0x1e8]
    unsigned long v53;  // [bp-0x1d8]
    unsigned long v54;  // [bp-0x1d0]
    int v55;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v56;  // [bp-0x1b8]
    int v57;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v58;  // [bp-0x1a0]
    int v59;  // [bp-0x198], Other Possible Types: char
    unsigned long long v60;  // [bp-0x188]
    int v61;  // [bp-0x180], Other Possible Types: char
    unsigned long long v62;  // [bp-0x170]
    char v63;  // [bp-0x168]
    char *v64;  // [bp-0x158]
    char v65;  // [bp-0x150]
    char *v66;  // [bp-0x140]
    char v67;  // [bp-0x138]
    char *v68;  // [bp-0x128]
    char v69;  // [bp-0x120]
    char *v70;  // [bp-0x110]
    char v71;  // [bp-0x108]
    char v72;  // [bp-0xf8]
    unsigned long long v73;  // [bp-0xe8]
    int v74;  // [bp-0xe0]
    char v75;  // [bp-0xa8]
    unsigned long v77;  // r13
    unsigned long long v78[3];  // r12
    struct_4 *v79;  // r12
    unsigned int v80;  // eax
    char v81;  // r15b
    unsigned int v82;  // ebp
    unsigned long long v83[3];  // rdx
    unsigned long long v84[3];  // r15
    struct_1 *v85;  // rbx
    unsigned int v86;  // eax
    int v87;  // xmm1
    int v88;  // xmm0
    unsigned long long v89[3];  // rax
    char v90;  // bpl
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm0
    unsigned long long v94[3];  // rax

    v77 = &a0->padding_20[24];
    if (!(char)v77.no_files_remaining(a1) || (char)v77.only_stdin_remaining())
    {
        v79 = a0;
        v80 = v79->field_88;
        v26 = v80;
        v53 = &v79->padding_20;
        v1 = a1->field_4a;
        v54 = a1->field_30;
        v25 = a1->field_38;
        v52 = &g_636b98;
        v0 = a1->field_4c;
        if (a1->field_4c == 2)
            goto LABEL_4f9d1d;
        while (true)
        {
            if (v80 && (char)v26.is_dead())
            {
                ::0x4f5bb0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                return 0;
            }
LABEL_4f9d1d:
            v82 = v1;
            if ((v79->field_8e & 1))
            {
                if (v79->field_8c != 1)
                    goto LABEL_4fa085;
                v48 = v53.into_iter();
                v50[0] = v83;
                while (true)
                {
                    v84 = v48.next();
                    if (!v84)
                    {
                        v79 = a0;
                        goto LABEL_4fa085;
                    }
                    std::fs::metadata(&v29, v84[1], v84[2]);
                    ::0x4f5eb0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v29);
                    if ((unsigned int)v29 == 2)
                        continue;
                    v85 = v77.get(v84[1], v84[2]);
                    std::fs::metadata(&v29, v84[1], v84[2]);
                    v74.unwrap(&v29);
                    v86 = *((int *)&v75) & 0xf000;
                    if (!((v86 == 0x1000 || v86 == 0x8000 || v86 == 0x2000) && !*((long long *)((char *)&v85->field_b8 + 8))))
                        continue;
                    v17 = uucore::util_name();
                    v19[0] = v83;
                    v3 = &v17;
                    v6[0] = <&T as core::fmt::Display>::fmt;
                    v27 = &g_6368f0;
                    v32 = 2;
                    v37 = 0;
                    v33 = &v3;
                    v35 = 1;
                    std::io::stdio::_eprint(&v27);
                    v17.to_vec("filesizei128", 4);
                    v44 = v20;
                    *((int128_t *)&v42) = *((int128_t *)&v17);
                    v3 = 0;
                    *((int128_t *)&v7) = *((int128_t *)&(&v85->padding_0)[1]);
                    v9 = 1;
                    v17.spec_to_string(&v3);
                    v33 = v44;
                    memcpy(&v27, &v41, 16);
                    v38 = v20;
                    *((int128_t *)&v36) = *((int128_t *)&v17);
                    v87 = (int128_t)(&v36)[8];
                    *((int128_t *)&v18) = *((int128_t *)&v27);
                    v20 = v33;
                    v21 = v35;
                    v22 = v87;
                    v27.from_iter(&v17);
                    uucore::mods::locale::get_message_with_args(&v17, "tail-status-has-appeared-following-new-filetail-status-replaced-with-untailable-file-giving-uptail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-director", 43, &v27);
                    v41 = &v17;
                    v43 = <alloc::string::String as core::fmt::Display>::fmt;
                    v29[0] = &g_636910[0];
                    v32 = 2;
                    v37 = 0;
                    v33 = &v41;
                    v35 = 1;
                    std::io::stdio::_eprint(&v29);
                    ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v17);
                    v77.update_metadata(v84[1], v84[2], &v74);
                    v78 = v77.update_reader(v84[1], v84[2]);
                    if (v78)
                    {
LABEL_4fa441:
                        ::0x4f5bb0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                        return v78;
                    }
                    v29.tail_file(v77, v84[1], v84[2], v82 & 1);
                    if (v29)
                    {
                        ::0x4f5bb0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                        return v29;
                    }
                    if (v2->field_0 == 3)
                    {
                        v52 = &g_636b98;
                        core::option::unwrap_failed(&g_636b98); /* do not return */
                    }
                    if (!(!v2->field_10.watch_with_parent(v2->field_18, v84[1], v84[2])))
                        goto LABEL_4fa441;
                }
            }
            else
            {
LABEL_4fa085:
                if (v79->field_0 == 3)
                {
                    v52 = &g_636b38;
                    core::option::unwrap_failed(0x636b38); /* do not return */
                }
                v17.recv_timeout(v79, v54, v25);
                v13 = 0;
                v15 = 8;
                v16 = 0;
                switch (v17)
                {
                case 1:
                    if (!(!(char)v19.kind()))
                        goto LABEL_4fa446;
                    v8 = v24;
                    *((int128_t *)&v4) = (int128_t)v22;
                    if (v24 && v77.contains_key(v6[1], v6[2]))
                    {
                        if (v79->field_0 != 3)
                        {
                            v79->field_18->field_20(&v29, v79->field_10, v6[1], v6[2]);
                            core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(&v29);
                        }
                        else
                        {
                            core::option::unwrap_failed(&g_636b50); /* do not return */
                        }
                    }
                    ::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v3);
                    goto LABEL_4fa252;
                case 5:
                    v29.to_vec("backendinotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
                    v8 = v33;
                    *((int128_t *)&v3) = *((int128_t *)&v29);
                    v29.to_vec("inotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
                    v66 = v33;
                    memcpy(&v65, v29, 16);
                    memcpy(&v63, &v3, 16);
                    v64 = v8;
                    v29.from_iter(&v63);
                    uucore::mods::locale::get_message_with_args(&v57, "tail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 38, &v29);
                    v35 = 1;
                    v27 = v57;
                    v33 = v58;
                    v94 = v29.new();
                    goto LABEL_4fa7ed;
                case 6:
                    v88 = *((int128_t *)&v19);
                    *((int128_t *)&v34) = *((int128_t *)&v21);
                    v37 = v23;
                    v30 = v88;
                    if (v33 && v77.contains_key(*((long long *)(v32 + 8)), *((long long *)(v32 + 16))))
                    {
                        v3.handle_event(v79, &v29, a1);
                        v78 = v6;
                        if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)))
                        {
                            ::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v13);
                            v13 = v3;
                            v15[0] = v78;
                            v16 = v8;
                            v79 = a0;
                            goto LABEL_4fa220;
                        }
                        else
                        {
                            ::0x4f5a90::core::ptr::drop_in_place<notify_types::event::Event>(&v29);
                            v90 = 1;
                            v81 = 1;
                            ::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v13);
                            if (((char)~((int)v17) & 6))
                            {
                                if (v90)
                                    ::0x4f59b0::core::ptr::drop_in_place<notify::error::ErrorKind>(&v17);
                                if (v81)
                                {
                                    ::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&(char)v22);
                                    ::0x4f5bb0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                                    return v78;
                                }
                                goto LABEL_4fa41f;
                            }
                        }
                    }
                    else
                    {
LABEL_4fa220:
                        ::0x4f5a90::core::ptr::drop_in_place<notify_types::event::Event>(&v29);
                        v81 = 1;
                        goto LABEL_4fa252;
                    }
                case 7:
                    v81 = 1;
                    if ((char)v19)
                    {
                        v40 = (char)v19;
                        v29.to_vec("errortail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
                        v8 = v33;
                        *((int128_t *)&v3) = *((int128_t *)&v29);
                        v29.spec_to_string(&v40);
                        v68 = v8;
                        memcpy(&v67, &v3, 16);
                        memcpy(&v69, v29, 16);
                        v70 = v33;
                        v29.from_iter(&v67);
                        uucore::mods::locale::get_message_with_args(&v61, "tail-error-recv-timeout-errorcapacity overflow/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/arg.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs", 29, &v29);
                        v35 = 1;
                        v28 = v61;
                        v33 = v62;
                        v94 = v29.new();
LABEL_4fa7ed:
                        v78 = v94;
                        v90 = 1;
                        v81 = 1;
                        break;
                    }
LABEL_4fa252:
                    if (v0 != 2 && v79->field_8d)
                    {
                        v29.keys(v77);
                        v73 = v37;
                        memcpy(&v72, &v33, 16);
                        memcpy(&v71, v29, 16);
                        v29.from_iter(&v71, &g_636b68);
                        ::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v13);
                        v16 = v33;
                        *((int128_t *)&v14) = *((int128_t *)&v29);
                    }
                    v3 = v13.into_iter();
                    v6[0] = v83;
                    while (true)
                    {
                        v89 = v3.next();
                        if (!v89)
                            break;
                        v29.tail_file(v77, v89[1], v89[2], v82 & 1);
                        v78 = v29;
                        if (v29)
                        {
                            v90 = 1;
                            break;
                        }
                    }
                    ::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v13);
                    v79 = a0;
                    if (((char)~((int)v17) & 6))
                        ::0x4f59b0::core::ptr::drop_in_place<notify::error::ErrorKind>(&v17);
                    v80 = v79->field_88;
                    if (v0 == 2)
                        goto LABEL_4f9d1d;
                    continue;
                default:
LABEL_4fa446:
                    v39 = v24;
                    v91 = *((int128_t *)&v17);
                    v92 = *((int128_t *)&v20);
                    *((int128_t *)&v37) = (int128_t)v22;
                    v33 = v92;
                    v31 = v91;
                    v3.to_vec("errortail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
                    v51 = v8;
                    *((int128_t *)&v49) = *((int128_t *)&v3);
                    (unsigned long long)v42.spec_to_string(&v29);
                    v8 = v51;
                    v93 = (int128_t)v49;
                    *((int128_t *)&v10) = *((int128_t *)&v41);
                    v12 = v44;
                    v42 = v93;
                    v44 = v8;
                    v45 = (long long)v10;
                    v46 = v11;
                    v47 = v12;
                    v3.from_iter(&(unsigned long long)v42);
                    uucore::mods::locale::get_message_with_args(&v59, "tail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 23, &v3);
                    v9 = 1;
                    v5 = v59;
                    v8 = v60;
                    v78 = v3.new();
                    ::0x4f5940::core::ptr::drop_in_place<notify::error::Error>(&v29);
                    break;
                }
            }
        }
    }
    else
    {
        uucore::mods::locale::get_message(&v55, "tail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrort", 23);
        v35 = 1;
        v27 = v55;
        v33 = v56;
        (char)v27.new();
    }
LABEL_4fa41f:
    ::0x4f5bb0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
    return v78;
}
