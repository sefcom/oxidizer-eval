long long uu_shred::wipe_name(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    char *v0;  // [bp-0x2a8], Other Possible Types: unsigned long long
    int v1;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x2a8]
    unsigned int v3;  // [bp-0x2a8], Other Possible Types: unsigned long long
    int v4;  // [bp-0x2a8]
    unsigned long long v5;  // [bp-0x2a0]
    char *v6;  // [bp-0x298]
    int v7;  // [bp-0x290], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x288]
    char *v9;  // [bp-0x280]
    int v10;  // [sp-0x278]
    unsigned long long v12;  // [bp-0x270]
    char *v13;  // [bp-0x268]
    unsigned int v14;  // [bp-0x260]
    unsigned int v15;  // [bp-0x25c]
    char *v16;  // [bp-0x258], Other Possible Types: unsigned long long
    int v17;  // [bp-0x258]
    int v18;  // [bp-0x250], Other Possible Types: unsigned int, unsigned long long
    char v19;  // [bp-0x24f]
    unsigned short v20;  // [bp-0x24c]
    char *v21;  // [bp-0x248]
    char v22;  // [bp-0x240]
    int v23;  // [bp-0x240]
    char *v24;  // [bp-0x230]
    char *v25;  // [bp-0x228], Other Possible Types: unsigned long long
    int v26;  // [bp-0x228], Other Possible Types: char
    unsigned long long v27;  // [bp-0x228]
    unsigned long long v28;  // [bp-0x220]
    int v29;  // [bp-0x218], Other Possible Types: char *
    unsigned long long v30;  // [bp-0x210]
    int v31;  // [bp-0x208], Other Possible Types: char *, void*
    unsigned long long v32;  // [bp-0x200]
    char v33;  // [bp-0x1f8]
    char v34;  // [bp-0x1e8]
    char v35;  // [bp-0x1d8]
    char v36;  // [bp-0x1c8]
    char v37;  // [bp-0x1b8]
    unsigned long long v38;  // [bp-0x1a8]
    char *v39;  // [bp-0x1a0]
    unsigned long long v40;  // [bp-0x178]
    unsigned long long v41;  // [bp-0x170]
    unsigned long long v42;  // [bp-0x168]
    char *v43;  // [bp-0x160]
    char v44;  // [bp-0x158]
    char *v45;  // [bp-0x148]
    int v46;  // [bp-0x138], Other Possible Types: char *
    unsigned long long v47;  // [bp-0x130]
    char *v48;  // [bp-0x128]
    int v49;  // [bp-0x120]
    char *v50;  // [bp-0x110]
    struct_0 *v51;  // [bp-0x100]
    unsigned long long v52;  // [bp-0xf8]
    char v53;  // [bp-0xf0]
    char v54;  // [bp-0xe0]
    unsigned long long v55;  // [bp-0xd8]
    char v56;  // [bp-0xd0]
    char v57;  // [bp-0xc0]
    unsigned long long v58;  // [bp-0xb8]
    char *v59;  // [bp-0xb0]
    char v60;  // [bp-0xa8]
    int v61;  // [bp-0xa0]
    unsigned long long v62;  // [bp-0x90]
    int v63;  // [bp-0x88]
    char v64;  // [bp-0x78]
    int v65;  // [bp-0x68]
    unsigned long long v66;  // [bp-0x58]
    int v67;  // [bp-0x50]
    char v68;  // [bp-0x40]
    unsigned long long v70;  // rax
    char *v71;  // rbp
    unsigned long long v72;  // rdx
    char *v73;  // r15
    unsigned long long v74;  // rax
    unsigned long long v75;  // rdx
    int v77;  // xmm2
    unsigned long long v78;  // rdx

    v14 = a4;
    v15 = a3;
    v70 = a1.file_name(a2);
    if (!v70)
        core::option::unwrap_failed(&g_595300); /* do not return */
    (char)v25.try_from(v70, a2);
    if (*((int *)&v26) == 1)
        core::option::unwrap_failed(&g_595318); /* do not return */
    (char)v25.to_owned(a1, a2);
    v13 = v29;
    *((int128_t *)&v10) = *((int128_t *)&v26);
    v58 = 1;
    v59 = v29;
    v60 = 0;
    if (v58.spec_next_back())
    {
        v71 = &(char)v46;
        do
        {
            v67.new(v72);
            memcpy(&v64, &v68, 16);
            v63 = v67;
            while (true)
            {
                v61.next(&v63);
                if ((char)(((0 ^ (long long)v61) & (0 ^ -((long long)v61))) >> 63))
                    break;
                v66 = v62;
                v65 = v61;
                v41.with_file_name(a1, a2, &v65);
                v73 = v71;
                std::fs::metadata(&(char)v25, v42, v43);
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v25);
                if ((unsigned int)v25 != 2)
                {
                    ::0x4aa170::core::ptr::drop_in_place<std::path::PathBuf>(&v41);
                    v71 = v73;
                }
                else
                {
                    v74 = std::fs::rename(&(char)v10, &v41);
                    if (v74)
                    {
                        v40 = v74;
                        (char)v25.to_vec("filesizei128", 4);
                        v6 = v29;
                        *((int128_t *)&v1) = *((int128_t *)&v25);
                        v52 = 1;
                        memcpy(&v53, &v12, 16);
                        v54 = 0;
                        (char)v25.spec_to_string(&v52);
                        v48 = v6;
                        *((int128_t *)&v46) = *((int128_t *)&(unsigned long long)v4);
                        *((int128_t *)&v49) = *((int128_t *)&v25);
                        v50 = v29;
                        (char)v25.to_vec("new_name", 8);
                        v6 = v29;
                        *((int128_t *)&v4) = *((int128_t *)&v25);
                        v55 = 1;
                        memcpy(&v56, &v42, 16);
                        v57 = 1;
                        (char)v25.spec_to_string(&v55);
                        v21 = v6;
                        *((int128_t *)&v17) = *((int128_t *)&(unsigned long long)v4);
                        *((int128_t *)&v23) = *((int128_t *)&v25);
                        v24 = v29;
                        (char)v25.to_vec("error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 5);
                        v45 = v29;
                        memcpy(&v44, &v25, 16);
                        (char)v25.spec_to_string(&v40);
                        v6 = v45;
                        memcpy(&(unsigned long long)v4, &v44, 16);
                        *((int128_t *)&v7) = *((int128_t *)&v25);
                        v9 = v29;
                        v77 = (int128_t)(&v49)[8];
                        memcpy(&(char)v25, &(char)v46, 16);
                        *((int128_t *)&v29) = *((int128_t *)&v48);
                        v31 = v77;
                        memcpy(&v35, &(char)v23, 16);
                        memcpy(&v34, &v21, 16);
                        memcpy(&v33, &v17, 16);
                        v38 = v8;
                        v39 = v9;
                        memcpy(&v37, &v6, 16);
                        memcpy(&v36, &v4, 16);
                        (unsigned long long)v4.from_iter(&(char)v25);
                        uucore::mods::locale::get_message_with_args(&(unsigned long long)v17, "shred-couldnt-renameshred-removingshred-removed", 20, &(unsigned long long)v4);
                        v0 = uucore::util_name();
                        v5 = v78;
                        v46 = &v0;
                        v47 = <&T as core::fmt::Display>::fmt;
                        v25 = &g_5950b8;
                        v28 = 2;
                        v31 = 0;
                        v29 = v73;
                        v30 = 1;
                        std::io::stdio::_eprint(&v25);
                        v0 = &(unsigned long long)v17;
                        v5 = <alloc::string::String as core::fmt::Display>::fmt;
                        v25 = &g_5950d8;
                        v28 = 2;
                        v31 = 0;
                        v29 = &v0;
                        v30 = 1;
                        std::io::stdio::_eprint(&v25);
                        std::process::exit(1); /* do not return */
                    }
                    v71 = v73;
                    if ((char)v15)
                    {
                        v0 = uucore::util_name();
                        v5 = v75;
                        v16 = &v0;
                        v18 = <&T as core::fmt::Display>::fmt;
                        v27 = &g_5950b8;
                        v28 = 2;
                        v31 = 0;
                        v29 = &v16;
                        v30 = 1;
                        std::io::stdio::_eprint(&v27);
                        v16 = 1;
                        *((int128_t *)&v18) = *((int128_t *)&v12);
                        v22 = 0;
                        v52.spec_to_string(&v16);
                        uucore::mods::locale::get_message(&v55, "shred-renamed-to", 16);
                        memcpy(&v44, &v42, 16);
                        v71.spec_to_string(&v44);
                        v25 = &v52;
                        v28 = <alloc::string::String as core::fmt::Display>::fmt;
                        v29 = &v55;
                        v30 = <alloc::string::String as core::fmt::Display>::fmt;
                        v31 = v71;
                        v32 = <alloc::string::String as core::fmt::Display>::fmt;
                        v0 = &g_5952c0;
                        v5 = 4;
                        v8 = 0;
                        v6 = &v25;
                        v7 = 3;
                        std::io::stdio::_eprint(&v0);
                        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(v71);
                        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v55);
                        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v52);
                    }
                    v1 = v0;
                    if ((char)v14 == 3)
                    {
                        v16 = 0x1b600000000;
                        v20 = 0;
                        v18 = 0;
                        v19 = 1;
                        (char)v25.clone(&v41);
                        v6 = v29;
                        memcpy(&v1, &(char)v25, 16);
                        (char)v25.open(&v16, &v1);
                        v2 = (char)v25.expect();
                        v2.sync_all().expect();
                        core::ptr::drop_in_place<std::fs::File>(v3);
                        v1 = v3;
                    }
                    v0 = v1;
                    v29 = v43;
                    *((int128_t *)&v26) = *((int128_t *)&v41);
                    ::0x4aa170::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v10);
                    v13 = v29;
                    *((int128_t *)&v10) = (int128_t)v26;
                    break;
                }
            }
            core::ptr::drop_in_place<uu_shred::FilenameIter>(&v63);
        } while (v58.spec_next_back());
    }
    v51->field_10 = v13;
    v51->field_0 = (int128_t)v10;
    return v13;
}
