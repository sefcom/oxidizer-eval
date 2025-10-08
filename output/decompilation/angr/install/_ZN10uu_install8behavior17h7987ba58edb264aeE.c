long long uu_install::behavior(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x154]
    char v1;  // [bp-0x153]
    char v2;  // [bp-0x152]
    char v3;  // [bp-0x151]
    char *v4;  // [bp-0x150], Other Possible Types: unsigned int
    unsigned int v5;  // [sp-0x14c]
    unsigned long long v6;  // [bp-0x148]
    unsigned long long v7;  // [bp-0x140]
    int v8;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x128]
    unsigned int v11;  // [bp-0x120]
    unsigned int v12;  // [bp-0x11c]
    int v13;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x118]
    int v15;  // [bp-0x110], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x108], Other Possible Types: unsigned long long
    int v17;  // [bp-0x100], Other Possible Types: unsigned long long
    int v18;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v19;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v20;  // [bp-0xf0]
    int v21;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v22;  // [bp-0xd8]
    char v23;  // [bp-0xa0]
    unsigned int v24;  // [bp-0x94]
    unsigned int v25;  // [bp-0x90]
    unsigned int v26;  // [bp-0x8c]
    char v27;  // [bp-0x88]
    unsigned long long v28;  // [bp-0x80]
    unsigned long long v29;  // [bp-0x78]
    char v30;  // [bp-0x68]
    unsigned long long v31;  // [bp-0x60]
    unsigned long long v32;  // [bp-0x58]
    unsigned long long v34;  // [bp-0x50]
    unsigned long long v35;  // [bp-0x40]
    unsigned long long v36;  // [bp-0x38]
    unsigned int v38;  // r13d
    unsigned long v39;  // rbp
    unsigned long long v40[3];  // rax
    unsigned int v41;  // eax
    unsigned int v42;  // r15d
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rax
    char v45;  // r15b
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rdx
    unsigned long long v52;  // rdx
    struct_1 *v53;  // rax
    unsigned long long v54;  // rcx
    void* v55;  // rdx
    struct_0 *v56;  // rax
    unsigned long long v57;  // rcx
    void* v58;  // rdx
    unsigned long long v59;  // rax
    unsigned long v60;  // rcx
    unsigned long v61;  // rcx
    char v63;  // al
    int v64;  // xmm1

    v38 = 0;
    v39 = (unsigned int)a1.get_flag("directoryignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]..", 9);
    if ((char)a1.contains_id("modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4))
    {
        (char)v14.try_get_one(a1, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
        v40 = "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG".unwrap(4, &(char)v14);
        if (v40)
        {
            v41 = uucore::features::mode::get_umask();
            uu_install::mode::parse(&(char)v8, v40[1], v40[2], v39, v41);
            if (v8 == 0x8000000000000000)
            {
                v25 = *((int *)&v9);
                v42 = 1;
                goto LABEL_46680f;
            }
            else
            {
                v16 = v10;
                *((int128_t *)&v13) = *((int128_t *)&v8);
                uu_install::behavior::{{closure}}(&(char)v14);
            }
        }
        *((long long *)&a0[8]) = 1.from();
        *((unsigned long long *)&a0[16]) = v43;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    else
    {
        v42 = 0;
LABEL_46680f:
        uucore::features::backup_control::determine_backup_mode(&(char)v14, a1);
        if (v14)
        {
            *((unsigned long long *)&a0[8]) = v14;
            *((unsigned long long *)&a0[16]) = v15;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return a0;
        }
        v36 = v15;
        v26 = v42;
        (char)v14.try_get_one(a1, "target-directoryfailed to chmod ", 16);
        v44 = "target-directoryfailed to chmod ".unwrap(16, &(char)v14);
        if (v44)
            (char)v34.clone(v44);
        else
            v34 = 0x8000000000000000;
        v45 = a1.get_flag("no-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in som", 19);
        if ((v34 != 0x8000000000000000 & v45))
        {
            v8 = uucore::util_name();
            v9 = v46;
            v4 = &v8;
            v6 = <&T as core::fmt::Display>::fmt;
            v13 = &g_502188;
            v15 = 2;
            v19 = 0;
            v16 = &(char)v4;
            v17 = 1;
            std::io::stdio::_eprint(&v13);
            v13 = &g_502270;
            v15 = 1;
            v16 = 8;
            *((uint128_t *)&v17) = 0;
            std::io::stdio::_eprint(&v13);
            v47 = 1.from();
        }
        else
        {
            v2 = a1.get_flag("preserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of sou", 19);
            v0 = a1.get_flag("comparedirectoryignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OP", 7);
            v1 = a1.get_flag("stripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination", 5);
            if (v2)
            {
                if (!v0)
                    goto LABEL_466b84;
                v8 = uucore::util_name();
                v9 = v49;
                v4 = &v8;
                v6 = <&T as core::fmt::Display>::fmt;
                v13 = &g_502188;
                v15 = 2;
                v19 = 0;
                v16 = &(char)v4;
                v17 = 1;
                std::io::stdio::_eprint(&v13);
                v13 = &g_502280;
                v15 = 1;
                v16 = 8;
                *((uint128_t *)&v17) = 0;
                std::io::stdio::_eprint(&v13);
                v47 = 1.from();
            }
            else if ((v1 & v0))
            {
                v8 = uucore::util_name();
                v9 = v50;
                v4 = &v8;
                v6 = <&T as core::fmt::Display>::fmt;
                v13 = &g_502188;
                v15 = 2;
                v19 = 0;
                v16 = &(char)v4;
                v17 = 1;
                std::io::stdio::_eprint(&v13);
                v13 = &g_502290;
                v15 = 1;
                v16 = 8;
                *((uint128_t *)&v18) = 0;
                std::io::stdio::_eprint(&v13);
                v47 = 1.from();
            }
            else
            {
LABEL_466b84:
                (char)v14.try_get_one(a1, "ownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair o", 5);
                v53 = "ownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair o".unwrap(5, &(char)v14);
                if (v53)
                {
                    v54 = *((long long *)&v53->padding_0[8]);
                    v55 = v53->field_10;
                }
                else
                {
                    v54 = 0;
                }
                if (!v54)
                    v55 = 0;
                if (!v54)
                    v54 = 1;
                (char)v14.to_vec(v54, v55);
                v29 = v16;
                memcpy(&v27, &(char)v14, 16);
                if (v16)
                {
                    (char)v14.locate(v28, v16);
                    if (v14 == 0x8000000000000000)
                    {
                        v6 = v15;
                        v4 = 1;
                        (char)v8.clone(&v27);
                        v18 = v10;
                        *((int128_t *)&v15) = *((int128_t *)&v8);
                        v13 = 11;
                        *((double *)&a0[8]) = v13.new();
                        *((unsigned long long **)&a0[16]) = &g_502208;
                        *((unsigned long long *)a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v4);
                    }
                    else
                    {
                        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&(char)v14);
                        v24 = *((int *)&v23);
                        v5 = *((int *)&v23);
                        v4 = 0;
                        core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v4);
                        v12 = 1;
LABEL_466cd2:
                        (char)v14.try_get_one(a1, "group/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/perms.rsunexpected end of data/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/pipes.rsunexpected end of pipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/buf_copy/linux.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs: chmod failed with error \n", 5);
                        v56 = "group/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/perms.rsunexpected end of data/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/pipes.rsunexpected end of pipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/buf_copy/linux.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs: chmod failed with error \n".unwrap(5, &(char)v14);
                        if (v56)
                        {
                            v57 = *((long long *)&v56->padding_0[8]);
                            v58 = v56->field_10;
                        }
                        else
                        {
                            v57 = 0;
                        }
                        if (!v57)
                            v58 = 0;
                        if (!v57)
                            v57 = 1;
                        (char)v14.to_vec(v57, v58);
                        v32 = v16;
                        memcpy(&v30, &(char)v14, 16);
                        if (v16)
                        {
                            (char)v14.locate(v31, v16);
                            if (v14 == 0x8000000000000000)
                            {
                                v6 = v15;
                                v4 = 1;
                                (char)v8.clone(&v30);
                                v18 = v10;
                                *((int128_t *)&v15) = *((int128_t *)&v8);
                                v13 = 12;
                                *((double *)&a0[8]) = v13.new();
                                *((unsigned long long **)&a0[16]) = &g_502208;
                                *((unsigned long long *)a0) = 0x8000000000000000;
                                core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v4);
                                core::ptr::drop_in_place<alloc::string::String>(&v30);
                            }
                            else
                            {
                                v38 = (int)v18;
                                core::ptr::drop_in_place<uucore::features::entries::Group>(&(char)v14);
                                v5 = (int)v18;
                                v4 = 0;
                                core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v4);
                                v11 = 1;
LABEL_466e2c:
                                uucore::features::backup_control::determine_backup_suffix(&v4, a1);
                                v3 = a1.get_flag("verbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in some cases, do not mod", 7);
                                (char)v14.try_get_one(a1, "strip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination file", 13);
                                v59 = "strip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination file".unwrap(13, &(char)v14);
                                if (v59)
                                {
                                    v60 = *((long long *)(v59 + 8));
                                    v59 = *((long long *)(v59 + 16));
                                }
                                else
                                {
                                    v60 = 0;
                                }
                                if (v60)
                                    v61 = v60;
                                else
                                    v61 = "stripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination";
                                if (!v60)
                                    v59 = 5;
                                (char)v14.to_vec(v61, v59);
                                v10 = v16;
                                *((int128_t *)&v8) = (int128_t)v13;
                                v63 = a1.get_flag("create-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compa", 14);
                                v22 = v35;
                                memcpy(&v21, &v34, 16);
                                v64 = *((int128_t *)&v4);
                                v13 = v64;
                                v16 = v7;
                                memcpy(&(char)v17, &(char)v8, 16);
                                v20 = v10;
                                *((unsigned long long *)&a0[64]) = v35;
                                a0[48] = v21;
                                *((unsigned long *)&a0[32]) = v19;
                                *((unsigned long long *)&a0[40]) = v20;
                                *((unsigned long long *)&a0[16]) = v16;
                                *((unsigned long long *)&a0[24]) = v17;
                                *(a0) = v64;
                                *((unsigned int *)&a0[72]) = v26;
                                *((unsigned int *)&a0[76]) = v25;
                                *((unsigned int *)&a0[80]) = v12;
                                *((unsigned int *)&a0[84]) = v24;
                                *((unsigned int *)&a0[88]) = v11;
                                *((unsigned int *)&a0[92]) = v38;
                                *((char *)&a0[96]) = (char)v39 ^ 1;
                                *((char *)&a0[97]) = v3;
                                *((char *)&a0[98]) = v2;
                                *((char *)&a0[99]) = v0;
                                *((char *)&a0[100]) = v1;
                                *((char *)&a0[101]) = v63;
                                *((char *)&a0[102]) = v45;
                                *((char *)&a0[103]) = v36;
                                core::ptr::drop_in_place<alloc::string::String>(&v30);
                                core::ptr::drop_in_place<alloc::string::String>(&v27);
                                return a0;
                            }
                        }
                        else
                        {
                            v11 = 0;
                            goto LABEL_466e2c;
                        }
                    }
                    core::ptr::drop_in_place<alloc::string::String>(&v27);
                    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v34);
                    return a0;
                }
                v12 = 0;
                goto LABEL_466cd2;
            }
        }
        *((unsigned long long *)&a0[8]) = v47;
        *((unsigned long long *)&a0[16]) = v52;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v34);
        return a0;
    }
}
