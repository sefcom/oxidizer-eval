long long uu_cp::copy(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5[104])
{
    char v0;  // [bp-0x34a]
    char v1;  // [bp-0x349]
    char v2;  // [bp-0x348]
    char v3;  // [bp-0x347]
    char v4;  // [bp-0x346]
    char v5;  // [bp-0x345]
    unsigned int v6;  // [bp-0x344]
    char *v7;  // [bp-0x338], Other Possible Types: unsigned long long
    char v8;  // [bp-0x338]
    int v9;  // [bp-0x330], Other Possible Types: unsigned long long
    int v10;  // [bp-0x330]
    unsigned long long v11;  // [bp-0x328]
    char v12;  // [bp-0x320]
    int v13;  // [bp-0x318], Other Possible Types: char
    unsigned long long v14;  // [bp-0x318]
    int v15;  // [bp-0x318]
    unsigned long long v16;  // [bp-0x318]
    unsigned long long v17;  // [bp-0x310]
    int v18;  // [bp-0x308], Other Possible Types: char, unsigned long long
    int v19;  // [bp-0x308]
    char *v20;  // [bp-0x308]
    unsigned long long v21;  // [bp-0x300]
    int v22;  // [bp-0x2f8], Other Possible Types: char
    void* v23;  // [bp-0x2f8]
    void* v24;  // [bp-0x2f8]
    char v25;  // [bp-0x2f0]
    int v26;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v27;  // [bp-0x2e8]
    unsigned long long v28;  // [bp-0x2e0]
    unsigned long long v29;  // [bp-0x2d8]
    unsigned long long v30;  // [bp-0x2d0]
    unsigned long long v31;  // [bp-0x2c8]
    int v32;  // [bp-0x2c8]
    unsigned long long v33;  // [bp-0x2c0]
    void* v34;  // [bp-0x268], Other Possible Types: char, unsigned long long
    int v35;  // [bp-0x268]
    unsigned long long v36;  // [bp-0x258]
    int v37;  // [bp-0x248]
    unsigned long long v38;  // [bp-0x240]
    unsigned long long v39;  // [bp-0x238]
    int v40;  // [bp-0x228]
    int v41;  // [bp-0x228]
    unsigned long long v42;  // [bp-0x218]
    int v43;  // [bp-0x210]
    int v44;  // [bp-0x210]
    unsigned long long v45;  // [bp-0x200]
    int v46;  // [bp-0x1f8]
    int v47;  // [bp-0x1f8]
    unsigned long long v48;  // [bp-0x1e8]
    int v49;  // [bp-0x1d8]
    char *v50;  // [bp-0x1d8]
    unsigned long long v51;  // [bp-0x1d8]
    unsigned long long v52;  // [bp-0x1d0]
    unsigned long long v53;  // [bp-0x1c8]
    unsigned long long v54;  // [bp-0x1c8]
    int v55;  // [bp-0x1c0], Other Possible Types: char
    unsigned long long v57;  // [bp-0x1b8]
    unsigned long long v58;  // [bp-0x1b0]
    int v59;  // [bp-0x1a8]
    unsigned long long v60;  // [bp-0x150]
    unsigned long long v61;  // [bp-0x140]
    char v62;  // [bp-0x140]
    int v63;  // [bp-0x138]
    unsigned long long v64;  // [bp-0x130]
    char v65;  // [bp-0x128]
    unsigned long long v66;  // [bp-0x120]
    unsigned long long v67;  // [bp-0x118]
    int v68;  // [bp-0x110]
    unsigned long long v69;  // [bp-0x100]
    char v70;  // [bp-0xf8]
    char v71;  // [bp-0xe8]
    char v72;  // [bp-0xd8]
    char v73;  // [bp-0xc8]
    char v74;  // [bp-0xb8]
    char v75;  // [bp-0xa8]
    char v76;  // [bp-0x98]
    char v77;  // [bp-0x88]
    char v78;  // [bp-0x78]
    char v79;  // [bp-0x68]
    char v80;  // [bp-0x58]
    char v81;  // [bp-0x48]
    struct_0 *v84;  // r13
    unsigned long long v86;  // rdx
    int v89;  // ymm0
    uint256_t v90;  // ymm0
    struct_1 *v92;  // rax
    struct_1 *v93;  // r14
    uint256_t v94;  // ymm0
    int v95;  // xmm0
    int v96;  // xmm1
    uint256_t v98;  // ymm0
    int v99;  // xmm0
    int v100;  // xmm1
    uint256_t v101;  // ymm0
    int v102;  // xmm0
    int v103;  // xmm0
    int v104;  // xmm0
    int v105;  // xmm0
    int v106;  // xmm0
    int v107;  // xmm1
    int v108;  // xmm2
    int v109;  // xmm0
    unsigned long long v110;  // rcx
    int v111;  // xmm2
    int v112;  // xmm3
    int v113;  // xmm0
    int v114;  // xmm1

    v4 = a2.determine(a3, a4);
    v5 = a2.determine(a3, a4);
    uu_cp::verify_target_type(&v13, a3, a4, &v5);
    v60 = 9223372036854775820;
    if (v14 != 9223372036854775820)
    {
        v113 = *((int128_t *)&v17);
        v114 = *((int128_t *)&v21);
        *((int128_t *)&(&a0->padding_19)[1]) = *((int128_t *)&v25);
        *((void*)&a0->field_18) = v114;
        *((void*)&a0->field_8) = v113;
        a0->field_0 = v14;
        return a0;
    }
    v13.try_with();
    v84 = a0;
    v13.with_capacity_and_hasher(a2, v13.expect(), v86);
    memcpy(&v75, &v22, 16);
    memcpy(&v74, &v18, 16);
    memcpy(&v73, &v13, 16);
    v13.default();
    memcpy(&v78, &v22, 16);
    memcpy(&v77, &v18, 16);
    memcpy(&v76, &v13, 16);
    v13.try_with();
    v13.with_capacity_and_hasher(a2, v13.expect(), v86);
    memcpy(&v81, &v22, 16);
    memcpy(&v80, &v18, 16);
    memcpy(&v79, &v13, 16);
    v13.try_with();
    v13.with_capacity_and_hasher(a2, v13.expect(), v86);
    v90 = (((v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14);
    memcpy(&v72, &v22, 16);
    memcpy(&v71, &v18, 16);
    memcpy(&v70, &v13, 16);
    if (!a5[97])
    {
        v34 = 0;
        goto LABEL_4dbe90;
    }
    else if (uu_cp::disk_usage(a1, a2, a5[94]))
    {
        v84->field_0 = 9223372036854775809;
        *((unsigned long long *)&v84->field_8) = v86;
LABEL_4dc83e:
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v70);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>(&v79);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(&v76);
    }
    else
    {
        (char)v41.new(v86);
        v13.with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}directorycp-warning-source-specified-more-than-oncecp-error-will-not-overwrite-just-createddir/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?", 64);
        (char)v50.unwrap(&v13);
        v8.with_style(&(char)v41, &(char)v50);
        v62.with_message(&v8, uucore::util_name(), v86);
        v62.tick();
        v36 = v64;
        v90 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v62);
        memcpy(&v34, &v62, 16);
LABEL_4dbe90:
        v66 = a1;
        v67 = a1 + a2 * 24;
        v92 = v66.next();
        v84 = v84;
        if (v92)
        {
            v93 = v92;
            v1 = a5[101];
            v3 = a5[90];
            v2 = a5[92];
            v0 = a5[103];
            v6 = 0;
            do
            {
                uucore::features::fs::normalize_path(&v68, *((long long *)&v93->field_8), *((long long *)&v93[1].padding_0[7]));
                if (v1 || !v73.get_inner(&v68))
                {
                    uu_cp::construct_dest_path(&(char)v50, *((long long *)&v93->field_8), *((long long *)&v93[1].padding_0[7]), a3, a4, v4, v3, v2);
                    if (v50 == 9223372036854775820)
                    {
                        v39 = *((long long *)&v55);
                        v94 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v52);
                        *((int128_t *)&v37) = *((int128_t *)&v52);
                    }
                    else
                    {
                        v26 = (long long)v59;
                        v95 = *((int128_t *)&v50);
                        v94 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                        v96 = *((int128_t *)&v54);
                        *((int128_t *)&v22) = *((int128_t *)&v57);
                        v19 = v96;
                        v13 = v95;
                        uu_cp::copy::{{closure}}(&(char)v37, a3, a4, &v13);
                    }
                    std::fs::metadata(&v13, &(char)v37);
                    if ((int)v14 == 2)
                    {
                        ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v13);
                    }
                    else
                    {
                        ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v13);
                        std::fs::symlink_metadata(&v13, &(char)v37);
                        if ((int)v14 == 2)
                            goto LABEL_4dc5f8;
                        if (!(((int)v28 & 0xf000) == 0xa000))
                            goto LABEL_4dc38b;
                    }
                    std::fs::metadata(&v13, v93);
                    if ((int)v14 == 2)
                    {
                        ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v13);
                        if (!(v0 == 1))
                            goto LABEL_4dc3b0;
                    }
                    else
                    {
                        ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v13);
                        std::fs::symlink_metadata(&v13, v93);
                        if ((int)v14 == 2)
                        {
LABEL_4dc5f8:
                            v84 = a0;
                            a0->field_0 = 9223372036854775809;
                            *((unsigned long long *)&a0->field_8) = v17;
                            goto LABEL_4dc815;
                        }
                        if (!((int)v28 & 0xf000) == 0xa000 && !v0 == 1)
                            goto LABEL_4dc3b0;
                    }
LABEL_4dc38b:
                    if (v1 != 2 && v70.get_inner(&(char)v37))
                    {
                        v13.to_vec("destcyanSome of bolddumb", 4);
                        v84 = a0;
                        v53 = v18;
                        *((int128_t *)&v49) = *((int128_t *)&v14);
                        v61 = 1;
                        *((int128_t *)&v63) = *((int128_t *)&v38);
                        v65 = 1;
                        v13.spec_to_string(&v61);
                        v42 = v53;
                        memcpy(&v41, &v49, 16);
                        *((int128_t *)&v43) = *((int128_t *)&v14);
                        v45 = v18;
                        v13.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
                        v48 = v18;
                        memcpy(&v47, &v13, 16);
                        v7 = 1;
                        *((int128_t *)&v9) = *((int128_t *)&v93->field_8);
                        v12 = 1;
                        v13.spec_to_string(&v7);
                        v53 = v48;
                        v49 = v46;
                        *((int128_t *)&v55) = *((int128_t *)&v14);
                        v58 = v18;
                        v111 = *((int128_t *)&v42);
                        v112 = (int128_t)(&v43)[8];
                        v13 = v40;
                        v18 = v111;
                        v22 = v112;
                        v31 = v57;
                        v33 = v58;
                        v29 = v53;
                        v30 = (long long)v55;
                        v26 = v46;
                        (char)v50.from_iter(&v13);
                        uucore::mods::locale::get_message_with_args(&v13, "cp-error-will-not-overwrite-just-createddir/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?", 40, &(char)v50);
                        *((unsigned long long *)&a0->field_18) = v18;
                        *((int128_t *)&a0->field_8) = (int128_t)v13;
                        a0->field_0 = 9223372036854775811;
LABEL_4dc815:
                        ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v37);
                        goto LABEL_4dc822;
                    }
LABEL_4dc3b0:
                    uu_cp::copy_source(&(char)v50, (v34 ? &v34 : 0), *((long long *)&v93->field_8), *((long long *)&v93[1].padding_0[7]), a3, a4, v4, a5, &v76, &v70, &v79);
                    if (v50 == 9223372036854775820)
                    {
                        (char)v50.drop_in_place<core::result::Result<(),uu_cp::CpError>>();
                        v13.clone(&(char)v37);
                        v54 = v18;
                        v98 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14);
                        *((int128_t *)&v49) = *((int128_t *)&v14);
                        v70.insert(&(char)v50);
                    }
                    else
                    {
                        v26 = (long long)v59;
                        v99 = *((int128_t *)&v50);
                        v98 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                        v100 = *((int128_t *)&v54);
                        *((int128_t *)&v22) = *((int128_t *)&v57);
                        v19 = v100;
                        v15 = v99;
                        uu_cp::show_error_if_needed(&v13);
                        ::0x4d37f0::core::ptr::drop_in_place<uu_cp::CpError>(&v13);
                        v6 = (char)(&v15)[8] | (char)v6 | v14 != 9223372036854775815;
                    }
                    ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v37);
                }
                else
                {
                    std::fs::symlink_metadata(&v13, *((long long *)&v93->field_8), *((long long *)&v93[1].padding_0[7]));
                    if ((int)v14 != 2)
                    {
                        (char)v50.to_vec("file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 9);
                        v11 = v54;
                        v101 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v50);
                        memcpy(&v8, &(char)v50, 16);
                        (char)v50.to_vec(a1, a2);
                        v45 = v54;
                        v102 = *((int128_t *)&v50);
                        v44 = v102;
                        v103 = *((int128_t *)&v8);
                        memcpy(&(char)v41, &v8, 16);
                        v42 = v11;
                        v8.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
                        v48 = v11;
                        v104 = *((int128_t *)&v8);
                        v47 = v104;
                        v105 = *((int128_t *)&v93->field_8);
                        v7 = 1;
                        v10 = v105;
                        v12 = 1;
                        v62.spec_to_string(&v7);
                        v54 = v48;
                        v49 = v47;
                        v57 = v64;
                        v106 = *((int128_t *)&v62);
                        memcpy(&v55, &v62, 16);
                        v107 = *((int128_t *)&v42);
                        v108 = (int128_t)(&v44)[8];
                        v13 = v41;
                        v19 = v107;
                        v22 = v108;
                        v109 = (int128_t)v49;
                        v98 = (((((((v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
                        v110 = *((long long *)&v55);
                        *((int128_t *)&v32) = *((int128_t *)&v57);
                        v29 = v54;
                        v30 = v110;
                        v27 = v109;
                        (char)v50.from_iter(&v13);
                        uucore::mods::locale::get_message_with_args(&(char)v41, "cp-warning-source-specified-more-than-oncecp-error-will-not-overwrite-just-createddir/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?", 42, &(char)v50);
                        v51 = uucore::util_name();
                        v52 = v86;
                        v7 = &v51;
                        v9 = <&T as core::fmt::Display>::fmt;
                        v16 = &g_5fb740;
                        v17 = 2;
                        v23 = 0;
                        v20 = &v7;
                        v21 = 1;
                        std::io::stdio::_eprint(&v16);
                        v50 = &(char)v41;
                        v52 = <alloc::string::String as core::fmt::Display>::fmt;
                        v14 = &g_5fb580;
                        v17 = 2;
                        v24 = 0;
                        v20 = &v50;
                        v21 = 1;
                        std::io::stdio::_eprint(&v14);
                        ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v41);
                    }
                    else
                    {
                        v84 = a0;
                        a0->field_0 = 9223372036854775809;
                        *((unsigned long long *)&a0->field_8) = v17;
LABEL_4dc822:
                        ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&v68);
                        core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v34);
                        goto LABEL_4dc83e;
                    }
                }
                v18 = v69;
                v90 = v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                v13 = v68;
                v73.insert(&v13);
                v93 = v66.next();
            } while (v93);
            *((int *)&v60) = (((char)v6 & 1) ? 9223372036854775812 : 9223372036854775820);
            v84 = a0;
        }
        if (v34)
        {
            v18 = v36;
            v13 = v35;
            v13.finish();
            ::0x4d3d70::core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v13);
        }
        v84->field_0 = v60;
        if (!v34 && v34)
            ::0x4d3d70::core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v34);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v70);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>(&v79);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(&v76);
    }
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v73);
    return v84;
}
