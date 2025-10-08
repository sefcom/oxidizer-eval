long long bat::diff::get_git_diff(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x190]
    char v1;  // [bp-0x179]
    unsigned long long v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x170]
    int v4;  // [bp-0x168], Other Possible Types: char
    unsigned long long v5;  // [bp-0x160]
    int v6;  // [bp-0x158], Other Possible Types: char
    unsigned long long v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    unsigned long long v9;  // [bp-0x138]
    int v10;  // [bp-0x130]
    unsigned long long v11;  // [bp-0x128]
    unsigned long long v12;  // [bp-0x120]
    char v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x108]
    unsigned long long v15;  // [bp-0x100]
    char *v16;  // [bp-0xf8]
    char *v17;  // [bp-0xf0]
    char *v18;  // [bp-0xe8]
    char v19;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v20;  // [bp-0xd8]
    unsigned int v21;  // [bp-0x58]
    char v22;  // [bp-0x30]
    unsigned long long v24;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    int v28;  // xmm0

    v19.discover(a1, a2);
    if (v19)
    {
        core::ptr::drop_in_place<core::result::Result<git2::repo::Repository,git2::error::Error>>(&v19);
        *((unsigned long long *)a0) = 0;
        return a0;
    }
    v2 = *((long long *)&v20);
    v24 = v2.workdir();
    if (v24)
    {
        std::fs::canonicalize(&v19, v24, a2);
        if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
        {
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v19);
            goto LABEL_838e00;
        }
        else
        {
            memcpy(&v13, &v20, 16);
            v12 = v19;
            std::fs::canonicalize(&v19, a1, a2);
            if (v19 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v19);
                *((unsigned long long *)a0) = 0;
            }
            else
            {
                *((int128_t *)&v10) = *((int128_t *)&v20);
                v9 = v19;
                v25 = (long long)v10.strip_prefix(v11, &v12);
                if (!v25)
                {
                    *((unsigned long long *)a0) = 0;
                    goto LABEL_838f43;
                }
                v14 = v25;
                v15 = v26;
                v19.new();
                v4.into_c_string(v14, v26);
                if (*((long long *)&v4))
                {
                    core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,git2::error::Error>>(&v4);
                    goto LABEL_838f2f;
                }
                else
                {
                    v19.pathspec(v5, *((long long *)&v6));
                    v21 = 0;
                    v4.diff_index_to_workdir(&v2, 0, &v19);
                    if (*((long long *)&v4))
                    {
                        core::ptr::drop_in_place<core::result::Result<git2::diff::Diff,git2::error::Error>>(&v4);
LABEL_838f2f:
                        *((unsigned long long *)a0) = 0;
                        core::ptr::drop_in_place<git2::diff::DiffOptions>(&v19);
LABEL_838f43:
                        core::ptr::drop_in_place<std::path::PathBuf>(&v9);
                    }
                    else
                    {
                        v3 = v5;
                        v27 = std::thread::local::LocalKey<T>::with();
                        *((uint128_t *)&v6) = g_acbb90;
                        *((uint128_t *)&v4) = g_acbb80;
                        v7 = v27;
                        v8 = v26;
                        v16 = &v14;
                        v17 = &v1;
                        v18 = &v4;
                        v22.foreach(&v3, &v1, &g_ace3d8, 0, &v16, &v16, &g_ace400, 0, *((long long *)&v0));
                        core::ptr::drop_in_place<core::result::Result<(),git2::error::Error>>(&v22);
                        v28 = (int128_t)v4;
                        *((int128_t *)&a0[32]) = *((int128_t *)&v7);
                        a0[16] = v6;
                        *(a0) = v28;
                        core::ptr::drop_in_place<git2::diff::Diff>(&v3);
                        core::ptr::drop_in_place<git2::diff::DiffOptions>(&v19);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v9);
                    }
                }
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&v12);
        }
    }
    else
    {
LABEL_838e00:
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<git2::repo::Repository>(&v2);
    return a0;
}
