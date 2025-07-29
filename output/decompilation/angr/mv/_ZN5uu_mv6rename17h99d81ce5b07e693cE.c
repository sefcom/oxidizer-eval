long long uu_mv::rename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56], unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0x418]
    unsigned int v1;  // [bp-0x40c]
    unsigned int v2;  // [sp-0x40c]
    int v3;  // [bp-0x408], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x400]
    int v5;  // [sp-0x3f8], Other Possible Types: char *, unsigned long long
    unsigned long long v6;  // [bp-0x3f0]
    int v7;  // [sp-0x3e8], Other Possible Types: void*
    int v8;  // [sp-0x3d8]
    unsigned long long v9;  // [bp-0x3c8]
    unsigned long long v10;  // [bp-0x3c0]
    unsigned long long v11;  // [bp-0x3b8]
    unsigned long long v12;  // [bp-0x3b0]
    unsigned long long v17;  // [bp-0x358]
    unsigned long long v18;  // [bp-0x350]
    unsigned long long v19;  // [sp-0x348]
    char v20;  // [bp-0x340]
    unsigned long long v22;  // [bp-0x318]
    unsigned long v24;  // [bp-0x2f8]
    char *v25;  // [sp-0x2e8], Other Possible Types: int, char
    unsigned long long v26;  // [bp-0x2e0]
    unsigned long long v27;  // [sp-0x2d8]
    int v28;  // [sp-0x2d0]
    unsigned long long v29;  // [bp-0x2c8]
    unsigned long long v30;  // [sp-0x2c0]
    int v31;  // [bp-0x238]
    char v32;  // [bp-0x238]
    unsigned long long v33;  // [sp-0x228]
    int v34;  // [sp-0x220]
    unsigned long long v35;  // [sp-0x210]
    int v36;  // [bp-0x188]
    unsigned long long v38;  // [sp-0x178]
    unsigned long long v40;  // [sp-0x160]
    unsigned long long v41;  // [bp-0x158]
    unsigned long long v42;  // [bp-0x150]
    char v43;  // [sp-0x148]
    unsigned int v52;  // eax
    unsigned long long v53;  // rbx
    int v54;  // xmm0
    int v55;  // xmm2
    int v56;  // xmm3
    unsigned long long v57;  // rdi
    char v60;  // cl

    v22 = 0x8000000000000000;
    v2 = v52 & 0xffffff00 | 1;
    std::fs::metadata(&(char)v3, a2, a3);
    ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v3, v4);
    if ((unsigned int)v3 == 2)
    {
        std::fs::metadata(&(char)v3, a2, a3);
        ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v3, v4);
        if (!((unsigned int)v3 != 2 && (char)a2.is_dir(a3) && (char)a0.is_dir(a1)))
        {
LABEL_4ccb36:
            v0 = a7;
            v53 = uu_mv::rename_with_fallback(a0, a1, a2, a3, a5, a6);
            if (!v53)
            {
                if (a4[49])
                {
                    (char)v3.to_vec("fromkindAuto/", 4);
                    v27 = v5;
                    *((int128_t *)&v25) = (int128_t)v3;
                    v40 = 1;
                    v41 = a0;
                    v42 = a1;
                    v43 = 1;
                    (char)v3.spec_to_string(&v40);
                    v33 = v27;
                    memcpy(&v32, &v25, 16);
                    *((int128_t *)&v34) = (int128_t)v3;
                    v35 = v5;
                    (char)v3.to_vec("tobackupmv-error-directory-not-emptymv-verbose-renamedmv-verbose-renamed-with-backupmv-error-not-replacing{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}errmv-error-inter-device-move-failedmv-error-permission-deniedNoSuchFileCannotStatNotA", 2);
                    v38 = v5;
                    *((int128_t *)&v36) = (int128_t)v3;
                    v17 = 1;
                    v18 = a2;
                    v19 = a3;
                    v20 = 1;
                    (char)v3.spec_to_string(&v17);
                    v27 = v38;
                    v54 = (int128_t)v36;
                    v25 = v54;
                    *((int128_t *)&v28) = (int128_t)v3;
                    v30 = v5;
                    v55 = *((int128_t *)&v33);
                    v56 = (int128_t)(&v34)[8];
                    v3 = v31;
                    v5 = v55;
                    v7 = v56;
                    v11 = v29;
                    v12 = v30;
                    v9 = v27;
                    v10 = (long long)v28;
                    v8 = v54;
                    (char)v25.from_iter(&(char)v3);
                    v57 = a5;
                    v1 = (int)uucore::mods::locale::get_message_with_args(&v32, "mv-verbose-renamedmv-verbose-renamed-with-backupmv-error-not-replacing{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}errmv-error-inter-device-move-failedmv-error-permission-deniedNoSuchFileCannotStatNotADirectorySelfTargetSubdirectoryDirec", 18, &(char)v25) & 0xffffff00 | 1;
                    if (v24)
                    {
                        v57.suspend(&v31);
                    }
                    else
                    {
                        v25 = &v31;
                        v26 = <alloc::string::String as core::fmt::Display>::fmt;
                        v3 = &g_5d9d38;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v25;
                        v6 = 1;
                        std::io::stdio::_print(&v3);
                    }
                    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v31);
                    v60 = (char)v1 ^ 1;
                }
                if (!((1 | v60) & 1))
                {
                    ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v22);
                    return 0;
                }
                return 0;
            }
        }
        else if ((char)uu_mv::is_empty_dir(a2, a3))
        {
            v53 = std::fs::remove_dir(a2, a3);
            if (!v53)
                goto LABEL_4ccb36;
        }
        else
        {
            uucore::mods::locale::get_message(&v25, "mv-error-directory-not-emptymv-verbose-renamedmv-verbose-renamed-with-backupmv-error-not-replacing{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}errmv-error-inter-device-move-failedmv-error-permission-deniedNoSuchFileCannotStatNotADirector", 28);
            v5 = v27;
            *((int128_t *)&v3) = *((int128_t *)&v25);
            v53 = 40._new((char)v3.new(), &g_5d9ac0);
        }
        ::0x4c7ea0::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v22);
        return v53;
    }
    goto (long long)(*((int *)(4428872 + 4 * a4[55])) + (char *)&g_439448[0]);
}
