long long starship::context::DirContents::from_path_with_timeout(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x304]
    unsigned int v1;  // [bp-0x300], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x2f8]
    char v3;  // [bp-0x2f8]
    unsigned long long v4;  // [bp-0x2f0]
    unsigned long long v5;  // [bp-0x2e8]
    unsigned long long v6;  // [bp-0x2e0]
    unsigned int v7;  // [bp-0x2cc]
    int v8;  // [bp-0x2c8], Other Possible Types: char
    void* v9;  // [bp-0x2c8]
    unsigned long long v10;  // [bp-0x2c8]
    char v11;  // [bp-0x2c0], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v12;  // [bp-0x2c0]
    int v13;  // [bp-0x2b8], Other Possible Types: char, unsigned long long
    char *v14;  // [bp-0x2b8], Other Possible Types: unsigned long long
    int v15;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x2b0]
    int v17;  // [bp-0x2a8], Other Possible Types: void*
    char v18;  // [bp-0x2a8]
    char v19;  // [bp-0x2a0]
    char v20;  // [bp-0x298]
    unsigned long long v21;  // [bp-0x290]
    int v22;  // [bp-0x288]
    int v23;  // [bp-0x278]
    int v24;  // [bp-0x268]
    int v25;  // [bp-0x258]
    int v26;  // [bp-0x248]
    int v27;  // [bp-0x238]
    int v28;  // [bp-0x228]
    char v29;  // [bp-0x218]
    unsigned long long v30;  // [bp-0x208]
    unsigned long long v31;  // [bp-0x200]
    unsigned long long v32;  // [bp-0x1f8]
    unsigned long long v33;  // [bp-0x1d8]
    unsigned long long v34;  // [bp-0x1d0]
    void* v35;  // [bp-0x1c8]
    unsigned long long v36;  // [bp-0x1c0]
    unsigned long long v37;  // [bp-0x1b0]
    unsigned long long v38;  // [bp-0x1a8]
    void* v39;  // [bp-0x1a0], Other Possible Types: char *
    unsigned long long v40;  // [bp-0x198]
    unsigned long long v41;  // [bp-0x190]
    unsigned long long v42;  // [bp-0x180]
    int v43;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned int v44;  // [bp-0x170]
    unsigned long long v45;  // [bp-0x168]
    unsigned long long v46;  // [bp-0x158]
    unsigned long long v47;  // [bp-0x140]
    int v48;  // [bp-0x138], Other Possible Types: char
    int v49;  // [bp-0x128], Other Possible Types: char
    char v50;  // [bp-0x118]
    int v51;  // [bp-0x108], Other Possible Types: char
    int v52;  // [bp-0xf8], Other Possible Types: char
    int v53;  // [bp-0xe8], Other Possible Types: char
    int v54;  // [bp-0xd8], Other Possible Types: char
    int v55;  // [bp-0xc8], Other Possible Types: char
    int v56;  // [bp-0xb8], Other Possible Types: char
    char v57;  // [bp-0xa8]
    int v58;  // [bp-0x98], Other Possible Types: char
    int v59;  // [bp-0x88], Other Possible Types: char
    unsigned long long v60;  // [bp-0x70]
    unsigned long long v61;  // [bp-0x68]
    char v62;  // [bp-0x60]
    unsigned long long v63;  // [bp-0x58]
    char v64;  // [bp-0x50]
    unsigned long long v65;  // [bp-0x40]
    unsigned long long v66;  // [bp-0x38]
    char v68;  // al
    unsigned long long v69;  // rdx
    int v70;  // ymm0
    uint256_t v71;  // ymm0
    char *v72;  // r12
    char *v73;  // r15
    char *v74;  // r14
    void* v75;  // rax
    unsigned int v76;  // r8d
    int v77;  // xmm0
    uint256_t v79;  // ymm0
    char v80;  // al
    char *v81;  // rbp
    char v82;  // al
    unsigned long long v83;  // rbx
    unsigned long long v84;  // r14
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax

    v7 = a5;
    std::fs::read_dir(&v8, a1, a2);
    v68 = v11;
    if (v68 == 2)
    {
        a0->field_8 = v10;
        a0->field_0 = 0;
        return v3;
    }
    v1 = v10;
    v3 = v68;
    core::ptr::drop_in_place<std::fs::ReadDir>(&v1);
    v36 = std::time::Instant::now();
    v8.default();
    memcpy(&v53, &v18, 16);
    memcpy(&v52, &v13, 16);
    memcpy(&v51, &v8, 16);
    v8.default();
    memcpy(&v56, &v18, 16);
    memcpy(&v55, &v13, 16);
    memcpy(&v54, &v8, 16);
    v8.default();
    memcpy(&v59, &v18, 16);
    memcpy(&v58, &v13, 16);
    memcpy(&v57, &v8, 16);
    v8.default();
    memcpy(&v50, &v18, 16);
    memcpy(&v49, &v13, 16);
    memcpy(&v48, &v8, 16);
    v60 = a1.from(a2) + 16.from_raw_in(v69);
    v61 = v69;
    std::sync::mpmc::channel(&v8);
    v34 = v13;
    v37 = v34;
    v33 = v15;
    v38 = v33;
    v65 = v60;
    v66 = v69;
    memcpy(&v64, &v8, 16);
    v14 = 0x8000000000000000;
    v9 = 0;
    v19 = 0;
    v1.to_vec("from_path_with_timeout workerfrom_path_with_timeout has timed-out!Building HashSets of directory files, folders and extensions took ", 29);
    v45 = v4;
    v71 = (((((v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v1);
    *((int128_t *)&v43) = *((int128_t *)&v1);
    v1.name(&v9, &(char)v43);
    v9.spawn_unchecked(&v1, &v64);
    if (!v9)
    {
        a0->field_8 = v11;
        a0->field_0 = 0;
        core::ptr::drop_in_place<std::sync::mpsc::Receiver<std::fs::DirEntry>>(&v37);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v48);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v57);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v54);
        return (unsigned long long)core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v51);
    }
    v39 = v9;
    v40 = v11;
    v41 = v14;
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v39);
    v72 = &v1;
    v73 = &(char)v43;
    v74 = &v9;
    v75 = a3;
    v76 = a4;
    while (true)
    {
        v35 = v75;
        v0 = v76;
        v39.recv_timeout(v34, v33, v75, v76);
        if (!v39)
            break;
        v46 = v42;
        v77 = *((int128_t *)&v39);
        memcpy(&v45, &v41, 16);
        v43 = v77;
        v72.path(v73);
        v74.to_vec(v2.strip_prefix(v4, a1, a2).unwrap(v69, &g_11f3628), a2);
        v32 = v14;
        v79 = (v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v9);
        memcpy(&v30, &v9, 16);
        core::ptr::drop_in_place<std::path::PathBuf>(v72);
        if ((char)v7)
        {
            v74.path(v73);
            v80 = v11.is_dir(v14);
            v81 = &v9;
            core::ptr::drop_in_place<std::path::PathBuf>(&v9);
            if (!v80)
                goto LABEL_b6f2e0;
            goto LABEL_b6f2a7;
        }
        else
        {
            v72.path(v73);
            std::fs::symlink_metadata(&v9, v72);
            if ((int)v9 == 2)
            {
                v63 = v11;
                v62 = 1;
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&v62);
                v81 = &v9;
LABEL_b6f2e0:
                v81.from_utf8_lossy(v31, v32);
                v47 = v31;
                v1 = 0;
                v82 = core::slice::<impl [T]>::starts_with(v11, v14, ::0xa7eb90::core::char::methods::encode_utf8_raw(46, v72, 4), v69);
                core::ptr::drop_in_place<versions::Chunk>(&v9);
                v83 = v32;
                v84 = v47;
                if (!v82)
                {
                    v85 = std::path::Path::extension();
                    if (v85)
                        starship::context::DirContents::from_path_with_timeout::{{closure}}(&v48, v85, a2);
                    v86 = v84.file_name(v83);
                    if (v86)
                        starship::context::DirContents::from_path_with_timeout::{{closure}}(&v48, v86, a2);
                }
                v87 = v84.file_name(v83);
                v74 = &v9;
                if (v87)
                {
                    v9.from_utf8_lossy(v87, a2);
                    v72.spec_to_string(v11, v14);
                    v57.insert(v72);
                    v74 = &v9;
                    core::ptr::drop_in_place<versions::Chunk>(&v9);
                }
                v14 = v32;
                v71 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v30);
                *((int128_t *)&v8) = *((int128_t *)&v30);
                v54.insert(&v9);
LABEL_b6f42b:
                if (!v35 && !v0)
                {
                    v74.try_recv(v34, v33);
                    if (v9)
                    {
                        core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::sync::mpsc::RecvTimeoutError>>(v74);
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::sync::mpsc::RecvTimeoutError>>(&v9);
                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                        {
                            v9 = &g_11f3608;
                            v11 = 1;
                            v14 = 8;
                            *((uint128_t *)&v15) = 0;
                            v1 = "starship::contextFailed to find git repo: , (trust: ";
                            v2 = 17;
                            v4 = "starship::contextFailed to find git repo: , (trust: ";
                            v5 = 17;
                            v6 = log::__private_api::loc(&g_11f3640);
                            log::__private_api::log(&v9, 2, &v1);
                        }
                        core::ptr::drop_in_place<std::fs::DirEntry>(&(char)v43);
                        break;
                    }
                }
                v9 = std::time::Instant::now();
                v11 = v69;
                v88 = v74.duration_since(v36, (unsigned int)v69);
                core::ptr::drop_in_place<std::fs::DirEntry>(v73);
                v75 = a3.checked_sub(a4, v88, (unsigned int)v69);
                if ((unsigned int)v69 != 0x3b9aca00)
                {
                    v76 = v69;
                    v11 = v12;
                }
                else
                {
                    v75 = 0;
                    v76 = 0;
                    v11 = v12;
                }
            }
            else
            {
                v81 = &v9;
                if (((int)v21 & 0xf000) != 0x4000)
                    goto LABEL_b6f2e0;
LABEL_b6f2a7:
                v14 = v32;
                v71 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v30);
                *((int128_t *)&v8) = *((int128_t *)&v30);
                v51.insert(v81);
                v74 = v81;
                goto LABEL_b6f42b;
            }
        }
    }
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v43 = v36.elapsed();
        v44 = v69;
        v39 = v73;
        v40 = <core::time::Duration as core::fmt::Debug>::fmt;
        v9 = &g_11f3618;
        v11 = 1;
        v17 = 0;
        v14 = &v39;
        v16 = 1;
        v1 = "starship::contextFailed to find git repo: , (trust: ";
        v2 = 17;
        v4 = "starship::contextFailed to find git repo: , (trust: ";
        v5 = 17;
        v6 = log::__private_api::loc(&g_11f3658);
        log::__private_api::log(&v9, 5, &v1);
    }
    v17 = v56;
    v13 = v55;
    v8 = v54;
    memcpy(&v20, &v57, 16);
    v22 = v58;
    v23 = v59;
    v24 = v51;
    v25 = v52;
    v26 = v53;
    memcpy(&v29, &v50, 16);
    v28 = v49;
    v27 = v48;
    memcpy(a0, &(unsigned long long)v8, 192);
    return core::ptr::drop_in_place<std::sync::mpsc::Receiver<std::fs::DirEntry>>(&v37);
}
