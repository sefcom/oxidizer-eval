long long uu_ln::link_files_in_dir(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55])
{
    char v0;  // [bp-0x1d9]
    int v1;  // [bp-0x1d8], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x1d8], Other Possible Types: int
    unsigned long long v3;  // [bp-0x1d0]
    char *v4;  // [sp-0x1c8]
    unsigned long long v5;  // [bp-0x1c0]
    int v6;  // [bp-0x1b8], Other Possible Types: char
    char *v7;  // [sp-0x1b0]
    unsigned long long v8;  // [bp-0x198]
    int v9;  // [bp-0x198]
    unsigned long long v10;  // [bp-0x190]
    char *v11;  // [sp-0x188], Other Possible Types: unsigned long long
    char v12;  // [bp-0x180]
    char *v13;  // [bp-0x178], Other Possible Types: unsigned long long
    int v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x170]
    int v16;  // [bp-0x170]
    char *v17;  // [bp-0x168]
    char v18;  // [bp-0x160]
    int v19;  // [bp-0x160]
    unsigned long long v20;  // [bp-0x158]
    char *v21;  // [sp-0x150]
    void* v22;  // [bp-0x148], Other Possible Types: char, unsigned long long
    unsigned long long v23;  // [bp-0x148]
    unsigned long long v24;  // [bp-0x148]
    int v25;  // [bp-0x148]
    unsigned long long v26;  // [bp-0x140]
    char *v27;  // [bp-0x138], Other Possible Types: char
    int v28;  // [bp-0x138]
    unsigned long long v29;  // [bp-0x130]
    int v30;  // [bp-0x130]
    void* v31;  // [bp-0x128], Other Possible Types: char
    int v32;  // [bp-0x128]
    char *v33;  // [bp-0x120]
    char v34;  // [bp-0x118]
    char *v35;  // [sp-0x108]
    unsigned long long v36;  // [bp-0x100]
    char v37;  // [bp-0xf8]
    int v38;  // [bp-0xe8]
    int v39;  // [bp-0xe8]
    char *v40;  // [sp-0xd8]
    unsigned long long v41;  // [bp-0xc8]
    unsigned long long v42;  // [bp-0xc0]
    unsigned long long v43;  // [bp-0xb8]
    unsigned long long v44;  // [bp-0xa8]
    unsigned long long v45;  // [bp-0x98]
    unsigned long long v46;  // [bp-0x90]
    int v47;  // [bp-0x88]
    char *v48;  // [bp-0x78]
    char v49;  // [bp-0x68]
    char v50;  // [bp-0x58]
    char v51;  // [bp-0x48]
    unsigned long long v54;  // rdx
    int v55;  // ymm0
    uint256_t v56;  // ymm0
    struct_0 *v57;  // rax
    struct_0 *v58;  // r15
    char v59;  // r14b
    unsigned long long v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm2
    int v66;  // xmm0
    int v67;  // xmm0
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm1
    unsigned long long v71;  // rax
    int v72;  // xmm0
    uint256_t v73;  // ymm0
    int v74;  // xmm0
    uint256_t v75;  // ymm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2
    unsigned long long v80;  // rax
    void* v81;  // rbx

    if (!(char)a2.is_dir(a3))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v26, a2, a3);
        v22 = 0;
        return v22.new();
    }
    v22.try_with();
    v22.with_capacity_and_hasher(a1, v22.expect(), v54);
    v56 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v22);
    memcpy(&v51, &v31, 16);
    memcpy(&v50, &v27, 16);
    memcpy(&v49, &v22, 16);
    v45 = a0;
    v46 = a0 + a1 * 24;
    v57 = v45.next();
    if (v57)
    {
        v58 = v57;
        v0 = a4[54] == 2 & a4[52];
        v59 = 1;
        while (true)
        {
            if (v0 && (char)a2.is_symlink(a3))
            {
                if ((char)a2.is_file(a3))
                {
                    v60 = std::fs::remove_file(a2, a3);
                    if (v60)
                    {
                        v44 = v60;
                        *((long long *)&v2) = uucore::util_name();
                        v3 = v54;
                        v13 = &(unsigned long long)v2;
                        v15 = <&T as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v25) = &g_588170;
                        v26 = 2;
                        v31 = 0;
                        v27 = &v13;
                        v29 = 1;
                        std::io::stdio::_eprint(&(unsigned long long)v25);
                        (unsigned long long)v2.to_vec("targeterror\n", 6);
                        v40 = v4;
                        v61 = *((int128_t *)&v1);
                        v38 = v61;
                        v8 = 1;
                        v10 = a2;
                        v11 = a3;
                        v12 = 1;
                        (unsigned long long)v2.spec_to_string(&v8);
                        v17 = v40;
                        v14 = v38;
                        v21 = v4;
                        v62 = *((int128_t *)&v1);
                        v19 = v62;
                        v38.to_vec("error\n", 5);
                        v48 = v40;
                        memcpy(&v47, &v38, 16);
                        v38.spec_to_string(&v44);
                        v4 = v48;
                        v2 = v47;
                        v7 = v40;
                        memcpy(&v5, &v38, 16);
                        v63 = (int128_t)v14;
                        v64 = *((int128_t *)&v17);
                        v65 = (int128_t)(&v19)[8];
                        v25 = v63;
                        v28 = v64;
                        v32 = v65;
                        v56 = (((((((v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v2;
                        memcpy(&v37, &v6, 16);
                        v35 = v4;
                        v36 = v5;
                        memcpy(&v34, &v2, 16);
                        (unsigned long long)v2.from_iter(&(unsigned long long)v25);
                        uucore::mods::locale::get_message_with_args(&v13, "ln-error-could-not-updateln-error-cannot-statln-error-will-not-overwrite ", 25, &(unsigned long long)v2);
                        v2 = &v13;
                        v3 = <alloc::string::String as core::fmt::Display>::fmt;
                        v23 = &g_588190;
                        v26 = 2;
                        v31 = 0;
                        v27 = &v2;
                        v29 = 1;
                        std::io::stdio::_eprint(&v23);
                        ::0x4a2ed0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                        ::0x4a2ee0::core::ptr::drop_in_place<std::io::error::Error>(v44);
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                    }
                }
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v41, a2, a3);
            }
            else
            {
                v22.try_from(*((long long *)&v58->field_8), *((long long *)&v58[1].padding_0[7]));
                if ((int)v23 == 1)
                {
                    v2 = uucore::util_name();
                    v3 = v54;
                    v13 = &v2;
                    v15 = <&T as core::fmt::Display>::fmt;
                    v24 = &g_588170;
                    v26 = 2;
                    v31 = 0;
                    v27 = &v13;
                    v29 = 1;
                    std::io::stdio::_eprint(&v24);
                    v2.to_vec("pathzeroAnsi -- ", 4);
                    v11 = v4;
                    v66 = *((int128_t *)&v2);
                    v9 = v66;
                    v67 = *((int128_t *)&v58->field_8);
                    v13 = 1;
                    v16 = v67;
                    v18 = 1;
                    v2.spec_to_string(&v13);
                    v27 = v11;
                    v68 = (int128_t)v9;
                    memcpy(&v24, &(unsigned long long)v9, 16);
                    v33 = v4;
                    v69 = *((int128_t *)&v2);
                    v30 = v69;
                    v56 = ((((v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v24);
                    v70 = (int128_t)(&v30)[8];
                    *((int128_t *)&v1) = *((int128_t *)&v24);
                    v4 = v27;
                    v5 = v29;
                    v6 = v70;
                    v24.from_iter(&v2);
                    uucore::mods::locale::get_message_with_args(&v2, "ln-error-cannot-statln-error-will-not-overwrite ", 20, &v24);
                    v8 = &v2;
                    v10 = <alloc::string::String as core::fmt::Display>::fmt;
                    v23 = &g_588190;
                    v26 = 2;
                    v31 = 0;
                    v27 = &v8;
                    v29 = 1;
                    std::io::stdio::_eprint(&v23);
                    ::0x4a2ed0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                    v58 = v45.next();
                    v59 = 0;
                    if (!v58)
                    {
                        v22 = 1;
                        v81 = v22.new();
                        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v49);
                        return v81;
                    }
                    continue;
                }
                else
                {
                    v71 = v26.file_name(v27);
                    if (v71)
                        v41.join(a2, a3, v71, v54);
                    else
                        v41.join(a2, a3, v26, v27);
                }
            }
            if (v49.get_inner(&v41))
            {
                *((long long *)&v2) = uucore::util_name();
                v3 = v54;
                v13 = &(unsigned long long)v2;
                v15 = <&T as core::fmt::Display>::fmt;
                *((unsigned long long **)&v25) = &g_588170;
                v26 = 2;
                v31 = 0;
                v27 = &v13;
                v29 = 1;
                std::io::stdio::_eprint(&(unsigned long long)v25);
                (unsigned long long)v2.to_vec("targeterror\n", 6);
                v11 = v4;
                v72 = *((int128_t *)&v1);
                v9 = v72;
                v73 = (v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v42);
                memcpy(&v44, &v42, 16);
                (unsigned long long)v2.spec_to_string(&v44);
                v17 = v11;
                v74 = (int128_t)v9;
                v14 = v74;
                v21 = v4;
                memcpy(&v18, &(unsigned long long)v2, 16);
                (unsigned long long)v9.to_vec("sourcecannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 6);
                v40 = v11;
                memcpy(&v38, &v9, 16);
                v75 = (((v73 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v1)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v9) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v58->field_8);
                *((int128_t *)&v47) = *((int128_t *)&v58->field_8);
                (unsigned long long)v9.spec_to_string(&v47);
                v4 = v40;
                v2 = v39;
                v7 = v11;
                v76 = (int128_t)v9;
                memcpy(&v5, &(unsigned long long)v9, 16);
                v77 = (int128_t)v14;
                v78 = *((int128_t *)&v17);
                v79 = *((int128_t *)&v20);
                v25 = v77;
                v28 = v78;
                v32 = v79;
                v56 = (((v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v2;
                memcpy(&v37, &v6, 16);
                v35 = v4;
                v36 = v5;
                memcpy(&v34, &v2, 16);
                (unsigned long long)v2.from_iter(&(unsigned long long)v25);
                uucore::mods::locale::get_message_with_args(&v13, "ln-error-will-not-overwrite ", 27, &(unsigned long long)v2);
                v2 = &v13;
                v3 = <alloc::string::String as core::fmt::Display>::fmt;
                v23 = &g_588190;
                v26 = 2;
                v31 = 0;
                v27 = &v2;
                v29 = 1;
                std::io::stdio::_eprint(&v23);
                ::0x4a2ed0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                goto LABEL_4a5b7b;
            }
            else
            {
                v80 = uu_ln::link(*((long long *)&v58->field_8), *((long long *)&v58[1].padding_0[7]), v42, v43, a4);
                if (v80)
                {
                    v8 = v80;
                    v10 = v54;
                    v1 = uucore::util_name();
                    v3 = v54;
                    v13 = &v1;
                    v15 = <&T as core::fmt::Display>::fmt;
                    v24 = &g_588170;
                    v26 = 2;
                    v31 = 0;
                    v27 = &v13;
                    v29 = 1;
                    std::io::stdio::_eprint(&v24);
                    v2 = &v8;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v23 = &g_588190;
                    v26 = 2;
                    v31 = 0;
                    v27 = &v2;
                    v29 = 1;
                    std::io::stdio::_eprint(&v23);
                    ::0x4a2c50::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v8, v10);
LABEL_4a5b7b:
                    v59 = 0;
                    goto LABEL_4a5b7e;
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v54);
LABEL_4a5b7e:
                    v23.clone(&v41);
                    v4 = v27;
                    v56 = v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v23);
                    *((int128_t *)&v1) = *((int128_t *)&v23);
                    v49.insert(&v2);
                    ::0x4a2ec0::core::ptr::drop_in_place<std::path::PathBuf>(&v41);
                    v58 = v45.next();
                    if (!v58)
                        break;
                }
            }
        }
        if (!(v59 & 1))
        {
            v22 = 1;
            v81 = v22.new();
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v49);
            return v81;
        }
    }
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v49);
    return 0;
}
