long long uu_tail::follow::watch::Observer::handle_event(struct_0 *a0, struct_3 *a1, struct_4 *a2, struct_7 *a3)
{
    unsigned int v0;  // [bp-0x544]
    unsigned int v1;  // [bp-0x544]
    unsigned long v2;  // [bp-0x540]
    int v3;  // [bp-0x538], Other Possible Types: void*, char *, unsigned long long
    char *v4;  // [bp-0x538], Other Possible Types: int
    int v5;  // [bp-0x530], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x528], Other Possible Types: unsigned long long
    int v7;  // [bp-0x520], Other Possible Types: unsigned long long, char
    void* v8;  // [bp-0x518]
    char *v9;  // [bp-0x510], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x508], Other Possible Types: int, char *
    int v11;  // [bp-0x508]
    int v12;  // [bp-0x500], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x4f8]
    int v14;  // [bp-0x4f0], Other Possible Types: char
    char *v15;  // [bp-0x4e0]
    unsigned long long v16;  // [bp-0x4d8]
    int v17;  // [bp-0x4d8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x4d8]
    unsigned long long v19;  // [bp-0x4d8]
    unsigned long long v20;  // [bp-0x4d8]
    unsigned long long v21;  // [bp-0x4d0]
    int v22;  // [bp-0x4c8], Other Possible Types: char *, unsigned long long
    int v23;  // [bp-0x4c0], Other Possible Types: unsigned int, unsigned long long
    int v24;  // [bp-0x4b8], Other Possible Types: void*
    unsigned long long v25;  // [bp-0x4b0]
    int v26;  // [bp-0x4a8]
    int v27;  // [bp-0x498], Other Possible Types: char *
    unsigned long long v28;  // [bp-0x490]
    int v29;  // [bp-0x488], Other Possible Types: unsigned long long
    char *v30;  // [bp-0x480]
    char v31;  // [bp-0x478]
    char v32;  // [bp-0x468]
    unsigned long long v33;  // [bp-0x458]
    char *v34;  // [bp-0x450]
    int v35;  // [bp-0x3f8], Other Possible Types: void*, char *
    int v36;  // [bp-0x3f0], Other Possible Types: unsigned long long
    char *v37;  // [bp-0x3e8]
    char v38;  // [bp-0x3e0]
    char v39;  // [bp-0x3d0]
    char v40;  // [bp-0x3c8]
    unsigned long long v41;  // [bp-0x3c0]
    void* v42;  // [bp-0x3b8]
    unsigned long long v43;  // [bp-0x3b0]
    void* v44;  // [bp-0x3a8]
    struct_0 *v45;  // [bp-0x3a0]
    char *v46;  // [bp-0x398], Other Possible Types: int, unsigned long long
    int v47;  // [bp-0x398], Other Possible Types: unsigned long long
    int v48;  // [bp-0x398]
    unsigned long long v49;  // [bp-0x390]
    char *v50;  // [bp-0x388], Other Possible Types: unsigned long long
    int v51;  // [bp-0x380]
    unsigned long long v52;  // [bp-0x378]
    char *v53;  // [bp-0x370]
    char v54;  // [bp-0x2b8]
    char *v55;  // [bp-0x2a8]
    int v56;  // [bp-0x298], Other Possible Types: char
    unsigned long long v57;  // [bp-0x288]
    int v58;  // [bp-0x280], Other Possible Types: char
    unsigned long long v59;  // [bp-0x270]
    char v60;  // [bp-0x268]
    char *v61;  // [bp-0x258]
    char v62;  // [bp-0x250]
    char *v63;  // [bp-0x240]
    char v64;  // [bp-0x238]
    char *v65;  // [bp-0x228]
    char v66;  // [bp-0x220]
    char *v67;  // [bp-0x210]
    char v68;  // [bp-0x208]
    char *v69;  // [bp-0x1f8]
    char v70;  // [bp-0x1f0]
    char *v71;  // [bp-0x1e0]
    char v72;  // [bp-0x1d8]
    char *v73;  // [bp-0x1c8]
    char v74;  // [bp-0x1c0]
    unsigned long long v75;  // [bp-0x1b0]
    char v76;  // [bp-0x1a8]
    char *v77;  // [bp-0x198]
    char v78;  // [bp-0x190]
    char *v79;  // [bp-0x180]
    char v80;  // [bp-0x178]
    char *v81;  // [bp-0x168]
    char v82;  // [bp-0x160]
    char *v83;  // [bp-0x150]
    char v84;  // [bp-0x148]
    char *v85;  // [bp-0x138]
    char v86;  // [bp-0x130]
    char *v87;  // [bp-0x120]
    char v88;  // [bp-0x118]
    char *v89;  // [bp-0x108]
    char v90;  // [bp-0x100]
    char *v91;  // [bp-0xf0]
    char v92;  // [bp-0xe0]
    char v93;  // [bp-0xb8]
    char v94;  // [bp-0xa8]
    struct_0 *v96;  // rbx
    unsigned long long v97[3];  // r15
    unsigned long v99;  // rax
    unsigned long long v100;  // rax
    struct_8 *v101;  // rax
    unsigned long long v103;  // rdx
    int v104;  // xmm2
    int v105;  // xmm0
    int v106;  // xmm1
    unsigned long long v107;  // rax
    unsigned int v108;  // ecx
    unsigned long long v109;  // rax
    unsigned long long v112;  // rdx
    int v113;  // xmm0
    int v114;  // xmm2
    int v115;  // xmm3
    void* v118;  // rbp
    void* v119;  // rsi
    unsigned long long v120;  // rax
    unsigned long v121;  // rdx
    unsigned int v122;  // eax
    unsigned int v123;  // ecx
    struct_6 *v124;  // r14
    unsigned long long v125;  // rdx
    unsigned long long v126;  // rax
    unsigned int v127;  // eax
    unsigned long long v128;  // rdx
    int v129;  // xmm0
    unsigned long long v130;  // rax
    unsigned long long v131;  // rdx
    unsigned long long v132;  // rdx
    unsigned int v133;  // eax
    unsigned long long v134;  // rdx
    unsigned long long v135;  // rdx
    unsigned int v136;  // eax
    unsigned long long v137;  // rdx
    unsigned long long v138;  // rdx
    unsigned long long v140;  // rcx
    unsigned long long v146;  // rdx

    if (!a2->field_10)
        core::option::unwrap_failed(&g_636a18); /* do not return */
    v96 = a0;
    v97 = a2->field_8;
    v42 = 0;
    v43 = 8;
    v44 = 0;
    v2 = &a1->field_38;
    v39.clone(a1->field_38.get(v97[1], v97[2]) + 176);
    v99 = a2->field_20;
    if ((unsigned int)v99 != 2)
    {
        if ((unsigned int)v99 == 3)
        {
            v99 = a2->field_21;
            if ((unsigned int)v99 != 1)
            {
                if ((unsigned int)v99 != 2)
                {
                    if ((unsigned int)v99 == 3)
                    {
                        v99 = a2->field_22;
                        if ((unsigned int)v99 == 1)
                            goto LABEL_4f838f;
                        if ((unsigned int)v99 != 3)
                        {
                            if ((unsigned int)v99 == 2)
                            {
LABEL_4f7bc8:
                                v100 = a1->field_8e;
                                if (((char)v100 & 1))
                                {
                                    if (a3->field_48)
                                    {
                                        v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                        v101 = v2.get_mut_metadata(v97[1], v97[2]);
                                        if (v101 && ((0xf000 & v101->field_38) == 0x1000 || (0xf000 & v101->field_38) == 0x8000 || (0xf000 & v101->field_38) == 0x2000) && *((long long *)(v2.get(v97[1], v97[2]) + 200)))
                                        {
                                            *((long long *)&v47) = uucore::util_name();
                                            v49 = v103;
                                            v4 = &(unsigned long long)v47;
                                            v5 = <&T as core::fmt::Display>::fmt;
                                            v16 = &g_6368f0;
                                            v21 = 2;
                                            v24 = 0;
                                            v22 = &v4;
                                            v23 = 1;
                                            std::io::stdio::_eprint(&v16);
                                            v16.to_vec("filesizei128", 4);
                                            v50 = v22;
                                            *((int128_t *)&v46) = *((int128_t *)&v16);
                                            v35 = 0;
                                            *((int128_t *)&v36) = *((int128_t *)&v40);
                                            v38 = 1;
                                            v16.spec_to_string(&v35);
                                            v13 = v50;
                                            *((int128_t *)&v10) = (int128_t)v46;
                                            *((int128_t *)&v14) = *((int128_t *)&v16);
                                            v15 = v22;
                                            v16.to_vec("become_inaccessibleno_such_filetail-status-replaced-with-untailable-filetail-status-has-become-accessible", 19);
                                            v50 = v22;
                                            *((int128_t *)&v47) = *((int128_t *)&v16);
                                            uucore::mods::locale::get_message(&v16, "tail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchai", 24);
                                            v6 = v50;
                                            *((int128_t *)&v3) = (int128_t)v47;
                                            *((int128_t *)&v7) = *((int128_t *)&v16);
                                            v9 = v22;
                                            v16.to_vec("no_such_filetail-status-replaced-with-untailable-filetail-status-has-become-accessible", 12);
                                            v55 = v22;
                                            memcpy(&v54, &v16, 16);
                                            uucore::mods::locale::get_message(&v16, "tail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resou", 30);
                                            v50 = v55;
                                            memcpy(&(unsigned long long)v47, &v54, 16);
                                            *((int128_t *)&v51) = *((int128_t *)&v16);
                                            v53 = v22;
                                            v104 = (int128_t)(&v14)[8];
                                            memcpy(&v16, &(char)v10, 16);
                                            *((int128_t *)&v22) = *((int128_t *)&v13);
                                            v24 = v104;
                                            v105 = (int128_t)v3;
                                            v106 = *((int128_t *)&v6);
                                            *((int128_t *)&v29) = (int128_t)(&v7)[8];
                                            v27 = v106;
                                            v26 = v105;
                                            v33 = v52;
                                            v34 = v53;
                                            memcpy(&v32, &v50, 16);
                                            memcpy(&v31, &v47, 16);
                                            (unsigned long long)v47.from_iter(&v16);
                                            uucore::mods::locale::get_message_with_args(&v4, "tail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x8", 36, &(unsigned long long)v47);
                                            v46 = &v4;
                                            v49 = <alloc::string::String as core::fmt::Display>::fmt;
                                            v16 = &g_636910;
                                            v21 = 2;
                                            v24 = 0;
                                            v22 = &v46;
                                            v23 = 1;
                                            std::io::stdio::_eprint(&v16);
                                            ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v4);
                                        }
                                        v107 = v97[1].is_orphan(v97[2]);
                                        v1 = v108 & 0xffffff00 | 1;
                                        if ((char)v107)
                                        {
                                            v0 = (unsigned int)v107 & 0xffffff00 | 1;
                                            v109 = v97.slice_contains(a1->field_28, a1->field_30);
                                            v1 = v108 & 0xffffff00 | 1;
                                            if (!(char)v109)
                                            {
                                                v0 = (unsigned int)v109 & 0xffffff00 | 1;
                                                v46 = uucore::util_name();
                                                v49 = v103;
                                                v3 = &v46;
                                                v5 = <&T as core::fmt::Display>::fmt;
                                                v16 = &g_6368f0;
                                                v21 = 2;
                                                v24 = 0;
                                                v22 = &v3;
                                                v23 = 1;
                                                std::io::stdio::_eprint(&v16);
                                                uucore::mods::locale::get_message(&v46, "tail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/s", 53);
                                                v3 = &v46;
                                                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                                                v16 = &g_636910;
                                                v21 = 2;
                                                v24 = 0;
                                                v22 = &v3;
                                                v23 = 1;
                                                std::io::stdio::_eprint(&v16);
                                                ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v46);
                                                v47 = uucore::util_name();
                                                v49 = v103;
                                                v3 = &v47;
                                                v5 = <&T as core::fmt::Display>::fmt;
                                                v16 = &g_6368f0;
                                                v21 = 2;
                                                v24 = 0;
                                                v22 = &v3;
                                                v23 = 1;
                                                std::io::stdio::_eprint(&v16);
                                                v16.to_vec("backendinotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
                                                v50 = v22;
                                                *((int128_t *)&v48) = *((int128_t *)&v16);
                                                v16.to_vec("inotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
                                                v91 = v22;
                                                memcpy(&v90, &v16, 16);
                                                memcpy(&v88, &v47, 16);
                                                v89 = v50;
                                                v16.from_iter(&v88);
                                                uucore::mods::locale::get_message_with_args(&v47, "tail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resources-exhaustedtail-error-notify-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 55, &v16);
                                                v3 = &v47;
                                                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                                                v16 = &g_636910;
                                                v21 = 2;
                                                v24 = 0;
                                                v22 = &v3;
                                                v23 = 1;
                                                std::io::stdio::_eprint(&v16);
                                                ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v47);
                                                v16.clone(v97);
                                                v50 = v22;
                                                *((int128_t *)&v46) = *((int128_t *)&v16);
                                                v100 = a1->padding_20.push(&v47, &g_636b08);
                                                if (a1->field_0 == 3)
                                                {
                                                    v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                                    core::option::unwrap_failed(&g_636b20); /* do not return */
                                                }
                                                v1 = v108 & 0xffffff00 | 1;
                                                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a1->field_10.unwatch(a1->field_18), &g_636888);
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                        v46 = uucore::util_name();
                                        v49 = v112;
                                        v3 = &v46;
                                        v5 = <&T as core::fmt::Display>::fmt;
                                        v16 = &g_6368f0;
                                        v21 = 2;
                                        v24 = 0;
                                        v22 = &v3;
                                        v23 = 1;
                                        std::io::stdio::_eprint(&v16);
                                        v16.to_vec("filesizei128", 4);
                                        v6 = v22;
                                        *((int128_t *)&v4) = *((int128_t *)&v16);
                                        *((int128_t *)&v7) = *((int128_t *)&v39);
                                        v9 = v41;
                                        v16.to_vec("no_such_filetail-status-replaced-with-untailable-filetail-status-has-become-accessible", 12);
                                        v13 = v22;
                                        *((int128_t *)&v10) = *((int128_t *)&v16);
                                        uucore::mods::locale::get_message(&v16, "tail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resou", 30);
                                        v50 = v13;
                                        v113 = (int128_t)v10;
                                        v47 = v113;
                                        *((int128_t *)&v51) = *((int128_t *)&v16);
                                        v53 = v22;
                                        v114 = *((int128_t *)&v6);
                                        v115 = (int128_t)(&v7)[8];
                                        *((int128_t *)&v17) = (int128_t)v4;
                                        v22 = v114;
                                        v24 = v115;
                                        v29 = v52;
                                        v30 = v53;
                                        v27 = v50;
                                        v28 = (long long)v51;
                                        v26 = v113;
                                        v0 = 0;
                                        v46.from_iter(&v16);
                                        v0 = 0;
                                        uucore::mods::locale::get_message_with_args(&v3, "tail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrortail-error-backend-resources-exhaustedtail-error-notif", 29, &v46);
                                        v46 = &v3;
                                        v49 = <alloc::string::String as core::fmt::Display>::fmt;
                                        *((unsigned long long **)&v17) = &g_636910;
                                        v21 = 2;
                                        v24 = 0;
                                        v22 = &v46;
                                        v23 = 1;
                                        std::io::stdio::_eprint(&(unsigned long long)v17);
                                        v0 = 0;
                                        ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v3);
                                        v0 = 0;
                                        if (!v2.files_remaining() && a1->field_8d == 1)
                                        {
                                            v0 = 0;
                                            uucore::mods::locale::get_message(&v58, "tail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrort", 23);
                                            v23 = 1;
                                            v17 = v58;
                                            v22 = v59;
                                            v0 = 0;
                                            *((double *)&a0->padding_1[7]) = (unsigned long long)v17.new();
                                            a0->field_10 = &g_636888;
                                            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                                            return (unsigned long long)::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v42);
                                        }
                                        v1 = 0;
                                    }
                                    v2.reset_reader(v97[1], v97[2]);
                                    goto LABEL_4f9797;
                                }
                                else
                                {
                                    if ((char)v100 != 2 && a1->field_8c == 1)
                                    {
                                        if (a1->field_0 != 3)
                                        {
                                            v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a1->field_10.unwatch(a1->field_18), &g_636888);
                                            (char)v17.remove(v2, v97[1], v97[2]);
                                            ::0x4f5b60::core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&(char)v17);
                                        }
                                        else
                                        {
                                            v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                            core::option::unwrap_failed(&g_636af0); /* do not return */
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (((a1->field_8e != 2 ^ a1->field_8e) & 1))
                            {
                                v100 = a2->field_10 * 3;
                                v118 = &v97[v100];
                                v119 = v118;
                                if (v119 == 24)
                                {
                                    v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                    core::option::unwrap_failed(&g_636a78); /* do not return */
                                }
                                v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                (char)v17.clone(v119 - 24);
                                v50 = v22;
                                *((int128_t *)&v46) = (int128_t)v17;
                                v42.push(&(char)v46, &g_636a90);
                                (char)v17.remove(v2, v97[1], v97[2]);
                                (char)v46.from_other_with_path(&(char)v17, (long long)v118[16], (long long)v118[8]);
                                memcpy(&(char)v17, &(char)v46, 216);
                                if ((char)(((0 ^ *((long long *)v2)) & (0 ^ -(*((long long *)v2)))) >> 63))
                                    core::option::unwrap_failed(&g_636aa8); /* do not return */
                                v100 = (unsigned long long)v2.insert((long long)v118[16], (long long)v118[8], &(char)v17, a1->field_40.eq(a1->field_48, v97[1], v97[2]));
                                if (a1->field_0 == 3)
                                {
                                    v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                    core::option::unwrap_failed(&g_636ac0); /* do not return */
                                }
                                v100 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a1->field_10.unwatch(a1->field_18), &g_636888);
                                if (a1->field_0 == 3)
                                {
                                    v0 = (unsigned int)v100 & 0xffffff00 | 1;
                                    core::option::unwrap_failed(&g_636ad8); /* do not return */
                                }
                                v120 = a1->field_10.watch_with_parent(a1->field_18, (long long)v118[16], (long long)v118[8]);
                                if (v120)
                                {
                                    *((unsigned long long *)&a0->padding_1[7]) = v120;
                                    a0->field_10 = v121;
                                    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                                    ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v39);
                                    return (unsigned long long)::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v42);
                                }
                            }
                        }
                    }
                }
                else
                {
                    v99 = a2->field_22;
                    if (!((char)v99 & 5))
                        goto LABEL_4f838f;
                }
            }
            else
            {
                if (!a2->field_22)
                {
LABEL_4f838f:
                    v0 = (unsigned int)v99 & 0xffffff00 | 1;
                    std::fs::metadata(&(char)v46, v97[1], v97[2]);
                    if ((int)v46 == 2)
                    {
                        ::0x4f5eb0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v46);
                    }
                    else
                    {
                        v45 = a0;
                        memcpy(&v92, &(char)v46, 176);
                        v122 = 0xf000 & *((int *)&v94);
                        v0 = v123 & 0xffffff00 | 1;
                        v124 = v2.get(v97[1], v97[2]);
                        if (v124->field_0 == 2)
                        {
                            if (true)
                            {
                                v3 = uucore::util_name();
                                v5 = v125;
                                v10 = &v3;
                                v12 = <&T as core::fmt::Display>::fmt;
                                v16 = &g_6368f0;
                                v21 = 2;
                                v24 = 0;
                                v22 = &v10;
                                v23 = 1;
                                std::io::stdio::_eprint(&v16);
                                v16.to_vec("filesizei128", 4);
                                v13 = v22;
                                *((int128_t *)&v11) = *((int128_t *)&v16);
                                *((unsigned long long *)&v4) = 0;
                                *((int128_t *)&v5) = *((int128_t *)&v40);
                                v7 = 1;
                                v16.spec_to_string(&(unsigned long long)v4);
                                v81 = v13;
                                memcpy(&v80, &v11, 16);
                                memcpy(&v82, &v16, 16);
                                v83 = v22;
                                v16.from_iter(&v80);
                                uucore::mods::locale::get_message_with_args(&v10, "tail-status-has-appeared-following-new-filetail-status-replaced-with-untailable-file-giving-uptail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-director", 43, &v16);
                                v35 = &v10;
                                v36 = <alloc::string::String as core::fmt::Display>::fmt;
                                v16 = &g_636910;
                                v21 = 2;
                                v24 = 0;
                                v22 = &v35;
                                v23 = 1;
                                std::io::stdio::_eprint(&v16);
                                ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v10);
                                v126 = v2.update_reader(v97[1], v97[2]);
                                if (!v126)
                                {
                                    v16.clone(v97);
                                    v6 = v22;
                                    *((int128_t *)&v4) = *((int128_t *)&v16);
                                    v127 = v42.push(&(unsigned long long)v4, &g_636a60);
                                    goto LABEL_4f94f7;
                                }
                            }
                            else
                            {
                                v1 = (unsigned int)v124 & 0xffffff00 | 1;
                                if (a3->field_48)
                                {
                                    if (((a1->field_8e != 2 ^ a1->field_8e) & 1))
                                    {
                                        v0 = 1;
                                        v3 = uucore::util_name();
                                        v5 = v128;
                                        v10 = &v3;
                                        v12 = <&T as core::fmt::Display>::fmt;
                                        v16 = &g_6368f0;
                                        v21 = 2;
                                        v24 = 0;
                                        v22 = &v10;
                                        v23 = 1;
                                        std::io::stdio::_eprint(&v16);
                                        v16.to_vec("filesizei128", 4);
                                        v37 = v22;
                                        *((int128_t *)&v35) = *((int128_t *)&v16);
                                        v10 = 0;
                                        *((int128_t *)&v12) = *((int128_t *)&v40);
                                        v14 = 1;
                                        v3.spec_to_string(&v10);
                                        v22 = v37;
                                        v129 = (int128_t)v35;
                                        *((int128_t *)&v23) = *((int128_t *)&v3);
                                        v25 = v6;
                                        v4 = v129;
                                        v6 = v22;
                                        v7 = v23;
                                        v8 = 0;
                                        v9 = v25;
                                        v16.from_iter(&v3);
                                        uucore::mods::locale::get_message_with_args(&v3, "tail-status-replaced-with-untailable-file-giving-uptail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-statu", 51, &v16);
                                        v35 = &v3;
                                        v36 = <alloc::string::String as core::fmt::Display>::fmt;
                                        v16 = &g_636910;
                                        v21 = 2;
                                        v24 = 0;
                                        v22 = &v35;
                                        v23 = 1;
                                        std::io::stdio::_eprint(&v16);
                                        ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v3);
                                        if (a1->field_0 == 3)
                                            core::option::unwrap_failed(&g_636a48); /* do not return */
                                        a1->field_18->field_20(&v16, a1->field_10, v97[1], v97[2]);
                                        core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(&v16);
                                        v16.remove(v2, v97[1], v97[2]);
                                        ::0x4f5b60::core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&v16);
                                        v130 = v2.no_files_remaining(a3);
                                        v1 = v123 & 0xffffff00 | 1;
                                        if ((char)v130)
                                        {
                                            v0 = (unsigned int)v130 & 0xffffff00 | 1;
                                            uucore::mods::locale::get_message(&v56, "tail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-directory-containing-watched-file-removedtail-status-backend-cannot-be-used-reverting-to-pollingerrort", 23);
                                            v23 = 1;
                                            v17 = v56;
                                            v22 = v57;
                                            v126 = v16.new();
                                            v0 = v123 & 0xffffff00 | 1;
                                            v131 = &g_636888;
                                            goto LABEL_4f96b2;
                                        }
                                    }
                                    else
                                    {
                                        v0 = 1;
                                        v3 = uucore::util_name();
                                        v5 = v132;
                                        v10 = &v3;
                                        v12 = <&T as core::fmt::Display>::fmt;
                                        v17 = &g_6368f0;
                                        v21 = 2;
                                        v24 = 0;
                                        v22 = &v10;
                                        v23 = 1;
                                        std::io::stdio::_eprint(&v17);
                                        v17.to_vec("filesizei128", 4);
                                        v13 = v22;
                                        *((int128_t *)&v11) = *((int128_t *)&v17);
                                        v3 = 0;
                                        *((int128_t *)&v5) = *((int128_t *)&v40);
                                        v7 = 1;
                                        v17.spec_to_string(&v3);
                                        v85 = v13;
                                        memcpy(&v84, &v11, 16);
                                        memcpy(&v86, &v16, 16);
                                        v87 = v22;
                                        v17.from_iter(&v84);
                                        uucore::mods::locale::get_message_with_args(&v10, "tail-status-replaced-with-untailable-filetail-status-has-become-accessible", 41, &v17);
                                        v35 = &v10;
                                        v36 = <alloc::string::String as core::fmt::Display>::fmt;
                                        v16 = &g_636910;
                                        v21 = 2;
                                        v24 = 0;
                                        v22 = &v35;
                                        v23 = 1;
                                        std::io::stdio::_eprint(&v16);
                                        v127 = (unsigned long long)::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v10);
LABEL_4f94f7:
                                        v1 = v127 & 0xffffff00 | 1;
                                        goto LABEL_4f974c;
                                    }
                                }
                            }
                        }
                        v133 = v124->field_38 & 0xf000;
                        if (false)
                        {
                            if (v133 != 0x1000 && v133 != 0x8000)
                            {
                                v1 = v123 & 0xffffff00 | 1;
                                if (v133 == 0x2000)
                                    goto LABEL_4f8e68;
                                goto LABEL_4f974c;
                            }
                            else
                            {
LABEL_4f8e68:
                                if (v124->field_c8)
                                {
                                    v1 = v133 & 0xff00 | 1;
                                    v2.reset_reader(v97[1], v97[2]);
                                    goto LABEL_4f974c;
                                }
                                else
                                {
                                    v0 = v133 & 0xff00 | 1;
                                    v3 = uucore::util_name();
                                    v5 = v146;
                                    v10 = &v3;
                                    v12 = <&T as core::fmt::Display>::fmt;
                                    v16 = &g_6368f0;
                                    v21 = 2;
                                    v24 = 0;
                                    v22 = &v10;
                                    v23 = 1;
                                    std::io::stdio::_eprint(&v16);
                                    v16.to_vec("filesizei128", 4);
                                    v13 = v22;
                                    *((int128_t *)&v11) = *((int128_t *)&v16);
                                    v3 = 0;
                                    *((int128_t *)&v5) = *((int128_t *)&v40);
                                    v7 = 1;
                                    v16.spec_to_string(&v3);
                                    v77 = v13;
                                    memcpy(&v76, &v11, 16);
                                    memcpy(&v78, &v16, 16);
                                    v79 = v22;
                                    v16.from_iter(&v76);
                                    uucore::mods::locale::get_message_with_args(&v10, "tail-status-replaced-with-untailable-filetail-status-has-become-accessible", 41, &v16);
                                    v35 = &v10;
                                    v36 = <alloc::string::String as core::fmt::Display>::fmt;
                                    v16 = &g_636910;
                                    v21 = 2;
                                    v24 = 0;
                                    v22 = &v35;
                                    v23 = 1;
                                    std::io::stdio::_eprint(&v16);
                                    v127 = (unsigned long long)::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v10);
                                    goto LABEL_4f94f7;
                                }
                            }
                        }
                        if (v133 == 0x1000 || v133 == 0x2000 || v133 == 0x8000)
                        {
                            if (v124->field_c8)
                            {
                                if ((char)a2->field_20.eq(&g_41f88c) || a1->field_8d && v124->field_28 != *((long long *)&v93))
                                {
                                    v3 = uucore::util_name();
                                    v5 = v135;
                                    v10 = &v3;
                                    v12 = <&T as core::fmt::Display>::fmt;
                                    v19 = &g_6368f0;
                                    v21 = 2;
                                    v24 = 0;
                                    v22 = &v10;
                                    v23 = 1;
                                    std::io::stdio::_eprint(&v19);
                                    v19.to_vec("filesizei128", 4);
                                    v13 = v22;
                                    *((int128_t *)&v11) = *((int128_t *)&v19);
                                    v3 = 0;
                                    *((int128_t *)&v5) = *((int128_t *)&v40);
                                    v7 = 1;
                                    v19.spec_to_string(&v3);
                                    v69 = v13;
                                    memcpy(&v68, &v11, 16);
                                    memcpy(&v70, &v16, 16);
                                    v71 = v22;
                                    v19.from_iter(&v68);
                                    uucore::mods::locale::get_message_with_args(&v10, "tail-status-has-been-replaced-following-new-filetail-status-has-appeared-following-new-filetail-status-replaced-with-untailable-file-giving-uptail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-sta", 48, &v19);
                                    v35 = &v10;
                                    v36 = <alloc::string::String as core::fmt::Display>::fmt;
                                    v16 = &g_636910;
                                    v21 = 2;
                                    v24 = 0;
                                    v22 = &v35;
                                    v23 = 1;
                                    std::io::stdio::_eprint(&v16);
                                    ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v10);
                                    v126 = v2.update_reader(v97[1], v97[2]);
                                }
                                else
                                {
                                    (char)v16.got_truncated(v124, &v92);
                                    v126 = v16;
                                    if (v16)
                                    {
                                        v131 = v21;
                                    }
                                    else
                                    {
                                        v136 = 1;
                                        if (!((char)v21 & 1))
                                        {
LABEL_4f9704:
                                            v1 = v136;
                                            (char)v16.clone(v97);
                                            v6 = v22;
                                            *((int128_t *)&v4) = *((int128_t *)&v16);
                                            v42.push(&(unsigned long long)v4, &g_636a30);
                                        }
                                        else
                                        {
                                            v0 = 1;
                                            v3 = uucore::util_name();
                                            v5 = v137;
                                            v10 = &v3;
                                            v12 = <&T as core::fmt::Display>::fmt;
                                            v20 = &g_6368f0;
                                            v21 = 2;
                                            v24 = 0;
                                            v22 = &v10;
                                            v23 = 1;
                                            std::io::stdio::_eprint(&v20);
                                            v20.to_vec("filesizei128", 4);
                                            v73 = v22;
                                            memcpy(&v72, &v16, 16);
                                            memcpy(&v74, &v39, 16);
                                            v75 = v41;
                                            v0 = 0;
                                            v20.from_iter(&v72);
                                            v0 = 0;
                                            uucore::mods::locale::get_message_with_args(&v3, "tail-status-file-truncatedtail-status-has-been-replaced-following-new-filetail-status-has-appeared-following-new-filetail-status-replaced-with-untailable-file-giving-uptail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-b", 26, &v20);
                                            v10 = &v3;
                                            v12 = <alloc::string::String as core::fmt::Display>::fmt;
                                            v16 = &g_636910;
                                            v21 = 2;
                                            v24 = 0;
                                            v22 = &v10;
                                            v23 = 1;
                                            std::io::stdio::_eprint(&v16);
                                            v0 = 0;
                                            ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v3);
                                            v0 = 0;
                                            v126 = v2.update_reader(v97[1], v97[2]);
                                            if (v126)
                                            {
                                                v0 = 0;
                                            }
                                            else
                                            {
                                                v136 = 0;
                                                goto LABEL_4f9704;
                                            }
LABEL_4f96b2:
                                            *((unsigned long long *)&v45->padding_1[7]) = v126;
                                            v45->field_10 = v131;
                                            *((unsigned long long *)&v45->field_0) = 0x8000000000000000;
                                            ::0x4f5eb0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v46);
                                            if (!(char)v0)
                                                return (unsigned long long)::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v42);
                                            ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v39);
                                            return (unsigned long long)::0x4f5cf0::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v42);
                                        }
LABEL_4f974c:
                                        memcpy(&v16, &v92, 176);
                                        v2.update_metadata(v97[1], v97[2], &v16);
                                        ::0x4f5eb0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v46);
                                        v96 = v45;
LABEL_4f9797:
                                        v96->field_10 = v44;
                                        *((int128_t *)&v96->field_0) = *((int128_t *)&v42);
                                        if (!(char)v1)
                                            return v44;
                                        return (unsigned long long)::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v39);
                                    }
                                    v0 = (unsigned int)v140 & 0xffffff00 | 1;
                                    goto LABEL_4f96b2;
                                }
                            }
                            else
                            {
                                v3 = uucore::util_name();
                                v5 = v138;
                                v10 = &v3;
                                v12 = <&T as core::fmt::Display>::fmt;
                                v20 = &g_6368f0;
                                v21 = 2;
                                v24 = 0;
                                v22 = &v10;
                                v23 = 1;
                                std::io::stdio::_eprint(&v20);
                                v20.to_vec("filesizei128", 4);
                                v13 = v22;
                                *((int128_t *)&v11) = *((int128_t *)&v20);
                                v3 = 0;
                                *((int128_t *)&v5) = *((int128_t *)&v40);
                                v7 = 1;
                                v20.spec_to_string(&v3);
                                v65 = v13;
                                memcpy(&v64, &v11, 16);
                                memcpy(&v66, &v16, 16);
                                v67 = v22;
                                v20.from_iter(&v64);
                                uucore::mods::locale::get_message_with_args(&v10, "tail-status-has-appeared-following-new-filetail-status-replaced-with-untailable-file-giving-uptail-no-files-remainingtail-no-such-file-or-directorytail-status-file-no-such-filetail-become-inaccessibletail-status-file-became-inaccessibletail-status-director", 43, &v20);
                                v35 = &v10;
                                v36 = <alloc::string::String as core::fmt::Display>::fmt;
                                v16 = &g_636910;
                                v21 = 2;
                                v24 = 0;
                                v22 = &v35;
                                v23 = 1;
                                std::io::stdio::_eprint(&v16);
                                ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v10);
                                v126 = v2.update_reader(v97[1], v97[2]);
                            }
                        }
                        else
                        {
                            v3 = uucore::util_name();
                            v5 = v134;
                            v10 = &v3;
                            v12 = <&T as core::fmt::Display>::fmt;
                            v18 = &g_6368f0;
                            v21 = 2;
                            v24 = 0;
                            v22 = &v10;
                            v23 = 1;
                            std::io::stdio::_eprint(&v18);
                            v18.to_vec("filesizei128", 4);
                            v13 = v22;
                            *((int128_t *)&v11) = *((int128_t *)&v18);
                            v3 = 0;
                            *((int128_t *)&v5) = *((int128_t *)&v40);
                            v7 = 1;
                            v18.spec_to_string(&v3);
                            v61 = v13;
                            memcpy(&v60, &v11, 16);
                            memcpy(&v62, &v16, 16);
                            v63 = v22;
                            v18.from_iter(&v60);
                            uucore::mods::locale::get_message_with_args(&v10, "tail-status-has-become-accessible", 33, &v18);
                            v35 = &v10;
                            v36 = <alloc::string::String as core::fmt::Display>::fmt;
                            v16 = &g_636910;
                            v21 = 2;
                            v24 = 0;
                            v22 = &v35;
                            v23 = 1;
                            std::io::stdio::_eprint(&v16);
                            ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v10);
                            v126 = v2.update_reader(v97[1], v97[2]);
                        }
                        if (!v126)
                        {
                            v136 = 1;
                            goto LABEL_4f9704;
                        }
                    }
                }
            }
        }
        else if ((unsigned int)v99 == 4 && a2->field_21 < 2)
        {
            goto LABEL_4f7bc8;
        }
    }
    else
    {
        if (!(a2->field_21 == 3))
            goto LABEL_4f838f;
    }
    a0->field_10 = v44;
    *((int128_t *)&a0->field_0) = *((int128_t *)&v42);
    return (unsigned long long)::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v39);
}
