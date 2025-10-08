long long uu_mv::assert_not_same_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4, unsigned int a5, char a6)
{
    unsigned long long v0;  // [bp-0x1e0]
    unsigned long long v1;  // [bp-0x1e0]
    unsigned long long v2;  // [bp-0x1c0]
    unsigned int v3;  // [bp-0x1b4]
    unsigned long long v4;  // [bp-0x1b0]
    int v6;  // [bp-0x1a8]
    unsigned long long v7;  // [bp-0x198]
    char v8;  // [bp-0x190]
    unsigned long long v9;  // [bp-0x190]
    unsigned long long v10;  // [bp-0x188]
    unsigned long long v12;  // [bp-0x180]
    char v13;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x170]
    unsigned long long v15;  // [sp-0x170]
    unsigned long long v16;  // [bp-0x168]
    unsigned long long v17;  // [sp-0x168]
    char v18;  // [bp-0x160]
    char v19;  // [bp-0x138]
    int v20;  // [bp-0x138]
    unsigned long long v21;  // [bp-0x128]
    char v22;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x120]
    int v24;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x118]
    unsigned long long v26;  // [bp-0x110]
    char v27;  // [bp-0x108], Other Possible Types: unsigned long long
    int v28;  // [bp-0x100]
    unsigned long long v29;  // [bp-0xf0]
    unsigned long long v30;  // [bp-0x70]
    unsigned long long v31;  // [bp-0x68]
    unsigned long long v32;  // [bp-0x60]
    unsigned long long v33;  // [bp-0x58]
    unsigned long long v34;  // [bp-0x50]
    unsigned long long v35;  // [bp-0x48]
    unsigned long long v36;  // [bp-0x40]
    unsigned long long v37;  // [bp-0x38]
    unsigned long v38;  // rbx
    unsigned long long v39;  // 4096
    unsigned long long v40;  // rax
    unsigned int v41;  // ebp
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax
    void* v46;  // r8
    unsigned long long v47;  // r15
    unsigned long long v48;  // r12
    unsigned long long v49;  // rbp
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rax
    char v54;  // bpl
    unsigned long long v55;  // rax
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rsi

    v38 = a5;
    std::path::absolute(&v22, a0, a1);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
        return v33.from();
    v1 = a1;
    v32 = v23;
    v33 = v25;
    v34 = v26;
    uucore::features::fs::canonicalize(&v13, &v32);
    v39 = a0;
    if (v23 != 0x8000000000000000)
    {
        v4 = v16;
        std::fs::metadata(&v22, v14, v16);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v22);
        v39 = a0;
        if ((unsigned int)v23 == 2)
            goto LABEL_48b3d6;
        v47 = v14;
        v48 = v23;
        if (!a4)
            goto LABEL_48b49a;
    }
    else
    {
LABEL_48b3d6:
        std::path::absolute(&v22, v39, v1);
        v48 = v23;
        v47 = v25;
        if (v48 == 0x8000000000000000)
        {
            v40 = v47.from();
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v13);
            return v40;
        }
        v4 = v26;
        if (v23 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v13);
            if (!a4)
                goto LABEL_48b49a;
        }
        else
        {
            core::ptr::drop_in_place<std::path::PathBuf>(v23, v14);
            if (!a4)
            {
LABEL_48b49a:
                v41 = 0;
                std::path::absolute(&v22, a2, a3);
                v3 = v41;
                v43 = v25;
                if (v23 != 0x8000000000000000)
                {
                    v44 = v43;
                    v49 = v43.parent(v26);
                    if (v49)
                    {
                        core::str::converts::from_utf8(&v22, v49, a2);
                        if ((v22 & 1) || !(char)v25.equal(v26, 1, 0))
                        {
                            uucore::features::fs::canonicalize(&v22, v49, v50);
                            v24 = v25;
                            if (v23 == 0x8000000000000000)
                            {
LABEL_48b5c3:
                                v42 = v24.from();
                                core::ptr::drop_in_place<std::path::PathBuf>(v23, v44);
                                core::ptr::drop_in_place<std::path::PathBuf>(v48, v47);
                                return v42;
                            }
                            v51 = a2.file_name(a3);
                            if (v51)
                            {
                                v52 = v51;
                                if (v51)
                                    goto LABEL_48b6a5;
LABEL_48b6a4:
                                v53 = v51;
                            }
                            else
                            {
                                v52 = 1;
                                if (!v51)
                                    goto LABEL_48b6a4;
LABEL_48b6a5:
                                v53 = v50;
                            }
                            v8.join(v25, v26, v52, v53);
                            core::ptr::drop_in_place<std::path::PathBuf>(v23, v25);
LABEL_48b6c2:
LABEL_48b6cf:
                            core::ptr::drop_in_place<std::path::PathBuf>(v23, v44);
                            v0 = v10;
                            v2 = v12;
                            if (v47.eq(v4, v10, v2) || (char)uucore::features::fs::are_hardlinks_to_same_file(a0, v1, a2, a3) || (char)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(a0, v1, a2, a3))
                                v54 = !a6;
                            v55 = a0.file_name(v1);
                            if (v55 && ((char)v3 & 1))
                            {
                                v30 = a2;
                                v31 = a3;
                                v13.spec_to_string(&v30);
                                v22.to_vec(core::str::<impl str>::trim_end_matches(v14, v16), a2);
                                v7 = v26;
                                *((int128_t *)&v6) = *((int128_t *)&v23);
                                core::ptr::drop_in_place<alloc::string::String>(&v13);
                                (char)v6.push(47);
                                v22.from_utf8_lossy(v55, v50);
                                (char)v6.spec_extend(v25, v26 + v25);
                                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v22);
                                v22 = 0;
                                *((int128_t *)&v24) = (int128_t)(&v6)[8];
                                v27 = 1;
                                v19.spec_to_string(&v22);
                                core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
                            }
                            else
                            {
                                v22 = 1;
                                v25 = a2;
                                v26 = a3;
                                v27 = 1;
                                v19.spec_to_string(&v22);
                            }
                            if (v54)
                            {
                                if (!v47.eq(v4, v0, v2))
                                {
                                    v13.components(a0, v1);
                                    v22.components(".//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 1);
                                    if (!v13.eq(&v22) && !a0.ends_with(v1))
                                    {
                                        v54 = 1;
                                        if (!(char)a0.is_file(v1))
                                            goto LABEL_48ba49;
                                    }
                                }
                                v13 = 1;
                                v15 = a0;
                                v17 = v1;
                                v18 = 1;
                                (char)v6.spec_to_string(&v13);
                                v29 = v21;
                                v28 = v20;
                                *((int128_t *)&v24) = (int128_t)v6;
                                v27 = v7;
                                v22 = 2;
                                v42 = v22.new();
                                core::ptr::drop_in_place<std::path::PathBuf>(v9, v0);
                                core::ptr::drop_in_place<std::path::PathBuf>(v48, v47);
                                return v42;
                            }
                            else
                            {
                                v22 = v48;
                                v25 = v47;
                                v26 = v4;
                                if (!(char)v0.starts_with(v2, &v22))
                                {
                                    core::ptr::drop_in_place<alloc::string::String>(&v19);
                                    core::ptr::drop_in_place<std::path::PathBuf>(v57, v58);
                                    return 0;
                                }
LABEL_48ba49:
                                if ((char)a0.is_symlink(v1))
                                {
                                    core::ptr::drop_in_place<alloc::string::String>(&v19);
                                    core::ptr::drop_in_place<std::path::PathBuf>(v9, v0);
                                    if (!v54)
                                        return 0;
                                    core::ptr::drop_in_place<std::path::PathBuf>(v48, v47);
                                    return 0;
                                }
                                else
                                {
                                    v13 = 1;
                                    v15 = a0;
                                    v17 = v1;
                                    v18 = 1;
                                    (char)v6.spec_to_string(&v13);
                                    v29 = v21;
                                    v28 = v20;
                                    *((int128_t *)&v24) = (int128_t)v6;
                                    v27 = v7;
                                    v22 = 3;
                                    v42 = v22.new();
                                    core::ptr::drop_in_place<std::path::PathBuf>(v9, v0);
                                    if (!v54)
                                        return v42;
                                    core::ptr::drop_in_place<std::path::PathBuf>(v48, v47);
                                    return v42;
                                }
                            }
                        }
                    }
                    std::path::absolute(&v22, a2, a3);
                    v24 = v10;
                    if (v23 == 0x8000000000000000)
                        goto LABEL_48b5c3;
                    v9 = v23;
                    v10 = v25;
                    v12 = v26;
                    goto LABEL_48b6c2;
                }
                v42 = v43.from();
                core::ptr::drop_in_place<std::path::PathBuf>(v48, v47);
                return v42;
            }
        }
    }
    v41 = (unsigned int)v38 & 0xffffff00 | (char)v38 ^ 1;
    if (!((char)v38 & 1))
    {
        std::path::absolute(&v22, a2, a3);
        if (v23 == 0x8000000000000000)
        {
            v42 = v36.from();
            core::ptr::drop_in_place<std::path::PathBuf>(v48, v47);
            return v42;
        }
        v35 = v23;
        v36 = v25;
        v37 = v26;
        uucore::features::fs::canonicalize(&v13, &v35);
        v43 = v14;
        if (v23 != 0x8000000000000000)
        {
            v3 = v41;
            v44 = v43;
            v45 = a0.file_name(v1);
            if (!v45)
                v46 = 0;
            if (!v45)
                v45 = 1;
            v8.join(v44, v16, v45, v46);
            goto LABEL_48b6cf;
        }
    }
}
