long long uu_mv::assert_not_same_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4, unsigned int a5, char a6)
{
    unsigned int v0;  // [bp-0x1dc]
    unsigned long long v1;  // [bp-0x1c8]
    int v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    unsigned long long v4;  // [bp-0x1b8]
    char v5;  // [bp-0x1b0]
    unsigned long long v6;  // [bp-0x1b0]
    unsigned long long v7;  // [bp-0x1a8]
    unsigned long long v8;  // [bp-0x1a0]
    unsigned long long v9;  // [sp-0x198]
    unsigned long long v11;  // [bp-0x198]
    unsigned long long v12;  // [bp-0x190]
    unsigned long long v13;  // [bp-0x190]
    unsigned long long v14;  // [bp-0x188]
    unsigned long long v15;  // [bp-0x188]
    char v16;  // [bp-0x180]
    int v17;  // [bp-0x158]
    unsigned long long v18;  // [bp-0x158]
    unsigned long long v19;  // [bp-0x150]
    unsigned long long v20;  // [bp-0x148]
    char v21;  // [bp-0x140]
    int v22;  // [bp-0x140]
    unsigned long long v23;  // [bp-0x130]
    char v24;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x128]
    int v26;  // [bp-0x128]
    unsigned long long v27;  // [bp-0x120]
    int v28;  // [bp-0x120]
    unsigned long long v29;  // [bp-0x118]
    char v30;  // [bp-0x110], Other Possible Types: unsigned long long
    int v31;  // [bp-0x108]
    unsigned long long v32;  // [bp-0xf8]
    unsigned long long v33;  // [bp-0x70]
    unsigned long long v34;  // [bp-0x68]
    unsigned long long v35;  // [bp-0x60]
    unsigned long long v36;  // [bp-0x58]
    unsigned long long v37;  // [bp-0x50]
    unsigned long long v38;  // [bp-0x48]
    unsigned long long v39;  // [bp-0x40]
    unsigned long long v40;  // [bp-0x38]
    unsigned long v41;  // rbp
    unsigned long long v42;  // rax
    unsigned long long v43;  // rbx
    unsigned long long v44;  // r15
    char v45;  // r15b
    unsigned int v46;  // r15d
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    void* v49;  // r8
    unsigned int v50;  // eax
    unsigned long long v51;  // rdi
    unsigned long long v52;  // rbx
    unsigned long long v53;  // r13
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rcx
    unsigned long long v58;  // r8
    char v59;  // r12b
    unsigned long long v60;  // rax
    unsigned int v62;  // r15d

    v41 = a5;
    std::path::absolute(&v24, a0, a1);
    if ((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63))
        return v36.from();
    v35 = v24;
    v36 = v27;
    v37 = v29;
    uucore::features::fs::canonicalize(&(char)v11, &v35, 0, 2);
    if (v11 != 0x8000000000000000)
    {
        std::fs::metadata(&v24, v12, v14);
        ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v24, v27);
        if ((unsigned int)v24 == 2)
            goto LABEL_4caef2;
        v42 = v11;
        v20 = v14;
        *((int128_t *)&v17) = *((int128_t *)&v11);
        if (v42 == 0x8000000000000000)
        {
LABEL_4caf92:
            v0 = (unsigned int)v42 & 0xffffff00 | 1;
            v42 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v11);
        }
    }
    else
    {
LABEL_4caef2:
        std::path::absolute(&v24, a0, a1);
        v42 = v24;
        if (v42 == 0x8000000000000000)
        {
            v43 = v19.from();
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v11);
            return v43;
        }
        v18 = v42;
        v19 = v27;
        v20 = v29;
        if (v11 == 0x8000000000000000)
            goto LABEL_4caf92;
        v0 = (unsigned int)v42 & 0xffffff00 | 1;
        v42 = (unsigned long long)::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v11);
    }
    if (a4)
    {
        v44 = v41 & 4294967295;
        v45 = (char)v44 ^ 1;
        v46 = (unsigned int)v44 & 0xffffff00 | v45;
        if (!(!((char)v41 & 1)))
            goto LABEL_4caff5;
        v0 = (unsigned int)v42 & 0xffffff00 | 1;
        std::path::absolute(&v24, a2, a3);
        if (v24 == 0x8000000000000000)
        {
            v47 = v39.from();
        }
        else
        {
            v38 = v24;
            v39 = v27;
            v40 = v29;
            uucore::features::fs::canonicalize(&(char)v11, &v38, 0, 2);
            if (v11 == 0x8000000000000000)
            {
                v47 = v3.from();
            }
            else
            {
                v1 = v11;
                v3 = v12;
                v4 = v14;
                v48 = a0.file_name(a1);
                if (!v48)
                    v49 = 0;
                v5.join(v3, v14, (v48 ? v48 : 1), v49);
                v50 = (unsigned int)::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v1);
LABEL_4cb245:
                v0 = v50 & 0xffffff00 | 1;
                if (v19.eq(v20, v7, v8) || (char)uucore::features::fs::are_hardlinks_to_same_file(a0, a1, a2, a3) || (char)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(a0, a1, a2, a3))
                    v59 = !a6;
                v60 = a0.file_name(a1);
                if (v60 && (v45 & 1))
                {
                    v33 = a2;
                    v34 = a3;
                    (char)v11.spec_to_string(&v33);
                    v24.to_vec(core::str::<impl str>::trim_end_matches(v12, v14, 47), a2);
                    v4 = v29;
                    *((int128_t *)&v2) = *((int128_t *)&v24);
                    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&(char)v11);
                    v1.push(47);
                    v24.to_string_lossy(v60, v54);
                    v1.append_elements(v27, v29, &g_5d9868);
                    ::0x4c7640::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v24);
                    v25 = 0;
                    *((int128_t *)&v28) = (int128_t)(&v2)[8];
                    v30 = 1;
                    v21.spec_to_string(&v25);
                    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v1);
                }
                else
                {
                    v25 = 1;
                    v27 = a2;
                    v29 = a3;
                    v30 = 1;
                    v21.spec_to_string(&v25);
                }
                if (v59)
                {
                    if (!v19.eq(v20, v7, v8))
                    {
                        (char)v11.components(a0, a1);
                        v25.components("./.operandsrc/uu/mv/src/mv.rs", 1);
                        if (!(char)v11.eq(&v25) && !a0.ends_with(a1, "/.operandsrc/uu/mv/src/mv.rs", 2))
                        {
                            v62 = v46 & 0xffffff00 | 1;
                            if (!(char)a0.is_file(a1))
                                goto LABEL_4cb58e;
                        }
                    }
                    v9 = 1;
                    v13 = a0;
                    v15 = a1;
                    v16 = 1;
                    v1.spec_to_string(&v9);
                    v32 = v23;
                    v31 = v22;
                    *((int128_t *)&v28) = (int128_t)v2;
                    v30 = v4;
                    v24 = 2;
                    v52 = v24.new();
                    v0 = (unsigned int)v52 & 0xffffff00 | 1;
                }
                else
                {
                    v29 = v20;
                    *((int128_t *)&v26) = (int128_t)v17;
                    if (!(char)v7.starts_with(v8, &v25))
                    {
                        v0 = 0;
                        ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v21);
                        v0 = 0;
                        ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                        return 0;
                    }
                    v62 = 0;
LABEL_4cb58e:
                    v0 = v62;
                    if ((char)a0.is_symlink(a1))
                    {
                        ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v21);
                        ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                        if (!(char)v0)
                            return 0;
                        ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
                        return 0;
                    }
                    v9 = 1;
                    v13 = a0;
                    v15 = a1;
                    v16 = 1;
                    v1.spec_to_string(&v9);
                    v32 = v23;
                    v31 = v22;
                    *((int128_t *)&v28) = (int128_t)v2;
                    v30 = v4;
                    v24 = 3;
                    v52 = v24.new();
                }
                ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                if (!(char)v0)
                    return v52;
                ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
                return v52;
            }
        }
    }
    else
    {
        v46 = 0;
LABEL_4caff5:
        v0 = (unsigned int)v42 & 0xffffff00 | 1;
        std::path::absolute(&v24, a2, a3);
        v51 = v27;
        if (v24 == 0x8000000000000000)
        {
            v47 = v51.from();
        }
        else
        {
            v1 = v24;
            v3 = v51;
            v4 = v29;
            v53 = v51.parent(v4);
            if (v53)
            {
                v24.try_from(v53, a2);
                if (!(v24 & 1) && (char)v27.equal(v29, 1, 0))
                    goto LABEL_4cb09b;
                uucore::features::fs::canonicalize(&v24, v53, v54, 0, 2);
                if (v24 == 0x8000000000000000)
                {
                    v55 = v13.from();
                }
                else
                {
                    v9 = v24;
                    v13 = v27;
                    v14 = v29;
                    v56 = a2.file_name(a3);
                    if (v56)
                    {
                        v57 = v56;
                        if (!(!v56))
                            goto LABEL_4cb1d0;
LABEL_4cb1cf:
                        v58 = v56;
                    }
                    else
                    {
                        v57 = 1;
                        if (!v56)
                            goto LABEL_4cb1cf;
LABEL_4cb1d0:
                    }
                    v5.join(v13, v29, v57, v58);
                    ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v9);
                    v12 = v13;
LABEL_4cb1ec:
                    v50 = (unsigned int)::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v1);
                    goto LABEL_4cb245;
                }
            }
            else
            {
LABEL_4cb09b:
                std::path::absolute(&v24, a2, a3);
                if (v24 == 0x8000000000000000)
                {
                    v55 = v7.from();
                }
                else
                {
                    v6 = v24;
                    v7 = v27;
                    v8 = v29;
                    goto LABEL_4cb1ec;
                }
            }
            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v1);
            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
            return v55;
        }
    }
    ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
    return v47;
}
