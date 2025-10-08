long long uu_cp::copy(void* a0, unsigned long long a1[3], unsigned long a2, unsigned long long a3, unsigned long long a4, char a5[104])
{
    char v0;  // [bp-0x357]
    char v1;  // [bp-0x356]
    char v2;  // [bp-0x355]
    unsigned int v3;  // [bp-0x354]
    void* v4;  // [bp-0x350]
    int v5;  // [bp-0x348], Other Possible Types: char
    char *v6;  // [bp-0x348]
    unsigned long long v7;  // [bp-0x340]
    char *v8;  // [bp-0x338]
    unsigned long long v9;  // [bp-0x330]
    char v10;  // [bp-0x320], Other Possible Types: unsigned long
    char v11;  // [bp-0x320]
    void* v12;  // [bp-0x318], Other Possible Types: char, unsigned long long
    int v13;  // [bp-0x318]
    unsigned long long v14;  // [bp-0x308]
    char v15;  // [bp-0x2f0], Other Possible Types: unsigned long
    unsigned long v16;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x2e0]
    int v18;  // [sp-0x2d8], Other Possible Types: char, unsigned long long
    unsigned long long v19;  // [bp-0x2d8]
    int v20;  // [bp-0x2d8]
    unsigned long long v21;  // [bp-0x2d8]
    unsigned long long v22;  // [sp-0x2d0]
    char *v23;  // [sp-0x2c8], Other Possible Types: char, unsigned long long
    int v24;  // [bp-0x2c8]
    char *v25;  // [bp-0x2c8]
    unsigned long long v26;  // [bp-0x2c0]
    int v27;  // [bp-0x2b8], Other Possible Types: void*, char
    void* v28;  // [bp-0x2b8]
    char v29;  // [bp-0x2b0]
    unsigned long long v30;  // [bp-0x2a8]
    int v31;  // [bp-0x2a0]
    unsigned long long v32;  // [bp-0x220]
    int v34;  // [bp-0x210]
    unsigned long long v35;  // [bp-0x200]
    unsigned long v36;  // [bp-0x1f8]
    unsigned long v37;  // [bp-0x1f0]
    int v38;  // [bp-0x1e8]
    unsigned long long v39;  // [bp-0x1e0]
    char v40;  // [bp-0x1d8]
    char v41;  // [bp-0x1c8]
    char v42;  // [bp-0x1b8]
    char v43;  // [bp-0x1a8]
    char v44;  // [bp-0x198]
    int v45;  // [sp-0x188], Other Possible Types: char *
    unsigned long long v46;  // [bp-0x188]
    unsigned long long v47;  // [bp-0x188]
    unsigned long v48;  // [bp-0x180], Other Possible Types: unsigned long long
    char *v49;  // [sp-0x178], Other Possible Types: unsigned long long
    char v50;  // [bp-0x170], Other Possible Types: unsigned long long
    int v51;  // [bp-0x168]
    int v52;  // [bp-0x158]
    char v53;  // [bp-0xf8]
    char v54;  // [bp-0xe8]
    char v55;  // [bp-0xd8]
    char v56;  // [bp-0xc8]
    char v57;  // [bp-0xb8]
    char v58;  // [bp-0xa8]
    int v59;  // [bp-0x90], Other Possible Types: char
    unsigned long v60;  // [bp-0x80]
    char v61;  // [bp-0x78]
    unsigned long long v62;  // [bp-0x68]
    int v63;  // [bp-0x60]
    char v64;  // [bp-0x50]
    unsigned long long v66[3];  // r13
    void* v67;  // r14
    unsigned long long v70;  // rdx
    unsigned long long v74;  // rbx
    unsigned long long v75;  // r15
    unsigned long long v76;  // r15
    unsigned long v77;  // r14
    unsigned long long v78;  // rbp
    int v80;  // xmm0
    int v81;  // xmm1
    unsigned long v83;  // r15
    int v84;  // xmm0
    int v85;  // xmm1

    v66 = a1;
    v67 = a0;
    v10 = a2.determine(a3, a4);
    v2 = a2.determine(a3, a4);
    uu_cp::verify_target_type(&(char)v18, a3, a4, &v2);
    v32 = 9223372036854775820;
    if (v19 != 9223372036854775820)
    {
        v84 = *((int128_t *)&v22);
        v85 = *((int128_t *)&v26);
        *((int128_t *)&a0[40]) = *((int128_t *)&v29);
        a0[24] = v85;
        a0[8] = v84;
        *((unsigned long long *)a0) = v19;
        return v67;
    }
    (char)v18.with_capacity_and_hasher(a2, std::thread::local::LocalKey<T>::with(), v70);
    memcpy(&v55, &v27, 16);
    memcpy(&v54, &v23, 16);
    memcpy(&v53, &v18, 16);
    (char)v18.default();
    memcpy(&v41, &v27, 16);
    memcpy(&v40, &v23, 16);
    *((int128_t *)&v38) = *((int128_t *)&v19);
    (char)v18.with_capacity_and_hasher(a2, std::thread::local::LocalKey<T>::with(), v70);
    memcpy(&v58, &v27, 16);
    memcpy(&v57, &v23, 16);
    memcpy(&v56, &v18, 16);
    (char)v18.with_capacity_and_hasher(a2, std::thread::local::LocalKey<T>::with(), v70);
    memcpy(&v44, &v27, 16);
    memcpy(&v43, &v23, 16);
    memcpy(&v42, &v18, 16);
    if (a5[97])
    {
        if (((char)uu_cp::disk_usage(a1, a2, a5[94]) & 1))
        {
            *((unsigned long long *)a0) = 9223372036854775809;
            *((unsigned long long *)&a0[8]) = v70;
            goto LABEL_4a0a12;
        }
        v5.new(v70);
        (char)v18.with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}directorycannot overwrite directory  with non-directory", 64);
        (char)v46.unwrap(&(char)v18);
        (char)v34.with_style(&v5, &(char)v46);
        v15.with_message(&(char)v34, uucore::util_name(), v70);
        v15.tick();
        v14 = v17;
        memcpy(&v12, &v15, 16);
        if (a2)
            goto LABEL_4a034c;
LABEL_4a029b:
        v74 = v12;
        if (v74)
            goto LABEL_4a089c;
    }
    else
    {
        v12 = 0;
        if (!a2)
            goto LABEL_4a029b;
LABEL_4a034c:
        v4 = a0;
        v1 = a5[101];
        v0 = a5[103];
        v75 = a2 * 24;
        v3 = 0;
        v10 = v11;
        v37 = a5[92];
        v36 = a5[90];
        do
        {
            v76 = v75;
            v77 = v66[1];
            v78 = v66[2];
            uucore::features::fs::normalize_path(&(char)v34, v77, v78);
            if (v1 || !v53.get_inner(&(char)v34))
            {
                uu_cp::construct_dest_path(&v62, v77, v78, a3, a4, v10, v36, v37);
                if (v62 == 9223372036854775820)
                {
                    v8 = *((long long *)&v64);
                    v5 = v63;
                }
                else
                {
                    uu_cp::copy::{{closure}}(&v5, a3, a4, &v62);
                }
                std::fs::metadata(&(char)v18, &v5);
                if ((int)v19 == 2)
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v18);
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v18);
                    std::fs::symlink_metadata(&(char)v18, &v5);
                    if ((int)v19 == 2)
                        goto LABEL_4a08f8;
                    if (((int)v31 & 0xf000) != 0xa000)
                        goto LABEL_4a06b1;
                }
                std::fs::metadata(&(char)v18, v66);
                if ((int)v19 == 2)
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v18);
                    if (v0 != 1)
                        goto LABEL_4a06d3;
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v18);
                    std::fs::symlink_metadata(&(char)v18, v66);
                    if ((int)v19 == 2)
                    {
LABEL_4a08f8:
                        v67 = v4;
                        *((unsigned long long *)v4) = 9223372036854775809;
                        *((unsigned long long *)&v4[8]) = v22;
                        goto LABEL_4a09f1;
                    }
                    if (!((int)v31 & 0xf000) == 0xa000 && !v0 == 1)
                        goto LABEL_4a06d3;
                }
LABEL_4a06b1:
                if (v1 != 2 && v42.get_inner(&v5))
                {
                    memcpy(&v61, &v7, 16);
                    v15 = v77;
                    v16 = v78;
                    v45 = &v61;
                    v48 = <std::path::Display as core::fmt::Display>::fmt;
                    v49 = &v15;
                    v50 = <std::path::Display as core::fmt::Display>::fmt;
                    v18 = &g_55eaa0;
                    v22 = 3;
                    v27 = 0;
                    v23 = &v45;
                    v26 = 2;
                    v59.map_or_else(&v18);
                    v67 = v4;
                    *((unsigned long *)&v4[24]) = v60;
                    v4[8] = v59;
                    *((unsigned long long *)v4) = 9223372036854775811;
LABEL_4a09f1:
                    core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                    goto LABEL_4a09fb;
                }
LABEL_4a06d3:
                uu_cp::copy_source(&(char)v46, (v12 ? &v12 : 0), v77, v78, a3, a4, v10, a5, &(char)v38, &v42, &v56);
                if (v46 == 9223372036854775820)
                {
                    (char)v46.drop_in_place<core::result::Result<(),uu_cp::Error>>();
                    (char)v18.clone(v7, v8);
                    v49 = v23;
                    *((int128_t *)&v45) = *((int128_t *)&v19);
                    v42.insert(&(char)v46);
                }
                else
                {
                    v30 = (long long)v52;
                    v80 = (int128_t)v45;
                    v81 = *((int128_t *)&v49);
                    v27 = v51;
                    v24 = v81;
                    v20 = v80;
                    uu_cp::show_error_if_needed(&(char)v18);
                    core::ptr::drop_in_place<uu_cp::Error>(&(char)v18);
                    v3 = (char)(&v20)[8] | (char)v3 | 9223372036854775820 + v19 - 13 != 6;
                }
                core::ptr::drop_in_place<std::path::PathBuf>(&v5);
            }
            else
            {
                std::fs::symlink_metadata(&(char)v18, v77, v78);
                if ((int)v19 != 2)
                {
                    *((int *)&v15) = (((int)v31 & 0xf000) == 0x4000 ? "directorycannot overwrite directory  with non-directory" : "file");
                    v16 = (((int)v31 & 0xf000) == 0x4000) * 5 + 4;
                    v47 = uucore::util_name();
                    v48 = v70;
                    v6 = &v47;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v21 = &g_55ea50;
                    v22 = 2;
                    v28 = 0;
                    v25 = &v6;
                    v26 = 1;
                    std::io::stdio::_eprint(&v21);
                    v46 = 1;
                    v48 = v77;
                    v49 = v78;
                    v50 = 1;
                    v6 = &v15;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &v46;
                    v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v19 = &g_55ea70;
                    v22 = 3;
                    v28 = 0;
                    v25 = &v6;
                    v26 = 2;
                    std::io::stdio::_eprint(&v19);
                }
                else
                {
                    v67 = v4;
                    *((unsigned long long *)v4) = 9223372036854775809;
                    *((unsigned long long *)&v4[8]) = v22;
LABEL_4a09fb:
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v34);
                    core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v12);
                    goto LABEL_4a0a12;
                }
            }
            v23 = v35;
            v18 = v34;
            v53.insert(&(char)v18);
            v66 += 1;
            v83 = v76 - 24;
            v75 = v83;
        } while (v76 != 24);
        *((int *)&v32) = (((char)v3 & 1) ? 9223372036854775812 : 9223372036854775820);
        v67 = v4;
        v74 = v12;
        if (v74)
        {
LABEL_4a089c:
            v23 = v14;
            v18 = v13;
            (char)v18.finish();
            core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&(char)v18);
        }
    }
    *((unsigned long long *)v67) = v32;
    if (!v74 && v12)
        core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v12);
LABEL_4a0a12:
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v42);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>(&v56);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>((long long)v38, v39);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v53);
    return v67;
}
