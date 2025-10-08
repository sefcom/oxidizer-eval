long long fish::fs::rewrite_via_temporary_file::try_rewriting(void* a0, unsigned long long a1, void* a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned int a6)
{
    unsigned int v0;  // [bp-0x188]
    unsigned int v1;  // [bp-0x188]
    void* v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x180]
    void* v4;  // [bp-0x178]
    int v5;  // [bp-0x168], Other Possible Types: char, unsigned int
    unsigned int v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x168]
    unsigned int v8;  // [bp-0x164]
    unsigned int v9;  // [bp-0x160]
    char v10;  // [bp-0x15f]
    char v11;  // [bp-0x15d]
    unsigned short v12;  // [bp-0x15c]
    int v13;  // [bp-0x158], Other Possible Types: void*
    int v14;  // [bp-0x158]
    int v15;  // [bp-0x148], Other Possible Types: char
    unsigned long long v16;  // [bp-0x138]
    int v17;  // [bp-0x128]
    int v18;  // [bp-0x127]
    unsigned int v19;  // [bp-0x124]
    unsigned long long v20;  // [bp-0x120]
    int v21;  // [bp-0x118], Other Possible Types: char
    int v22;  // [bp-0x108], Other Possible Types: char
    int v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xd8]
    char v25;  // [bp-0xd0]
    void* v26;  // [bp-0xd0]
    unsigned int v27;  // [bp-0xcc]
    unsigned long long v28;  // [bp-0xc8]
    void* v29;  // [bp-0xc0]
    char v30;  // [bp-0x90], Other Possible Types: unsigned int
    unsigned int v31;  // [bp-0x8c]
    unsigned long long v32;  // [bp-0x88]
    void* v33;  // [bp-0x80]
    unsigned long long v34;  // [bp-0x78]
    void* v35;  // [bp-0x70]
    char v36;  // [bp-0x48]
    unsigned int v37;  // r15d
    unsigned int v38;  // r15d
    unsigned int v39;  // edx
    char v40;  // r12b
    unsigned long long v41;  // rax
    unsigned long long v43;  // rax
    int v44;  // xmm0
    unsigned long v45;  // rdx
    unsigned int v48;  // ebp
    unsigned int v49;  // r12d
    char v50;  // r14b
    unsigned int v51;  // ebp
    unsigned long long v52;  // rax
    int v53;  // xmm0

    v30.new(1, a1, a2);
    if (v30 == 1)
    {
        v24 = v32;
        if ((char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
        {
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v5.to_flog_str(&g_15a98e0);
            (char)v17.into_iter(&v5);
            v2.spec_extend(&(char)v17);
            v2.push(58, &g_14d8e00);
            v2.push(32, &g_14d8e00);
            v33 = 0;
            v34 = 4;
            v35 = 0;
            v28 = a1;
            v29 = a2;
            v25 = 1;
            v5.to_arg(&v24);
            memcpy(&v21, &v29, 16);
            *((int128_t *)&v17) = *((int128_t *)&v25);
            memcpy(&v22, &v5, 16);
            v23 = v13;
            fish_printf::printf_impl::sprintf_locale(&v5, &v33, "Error acquiring exclusive lock on the directory of '%s': %ssrc/function.rsFunction should not already be present in the tableend keyword should come after headerFunction has no source rangefunction start out of bounds", 59, &(char)v17, 2);
            v5.unwrap(&g_14d8e00);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v17);
            *((int128_t *)&v5) = *((int128_t *)&v33);
            v13 = 0;
            v25.to_flog_str(&v5);
            (char)v17.into_iter(&v25);
            v2.spec_extend(&(char)v17);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
            v2.push(10, &g_14d8e00);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v24);
        if ((char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
        {
            v26 = 0;
            v28 = 1;
            v29 = 0;
            v6.to_flog_str(&g_15a98e0);
            (char)v17.into_iter(&v6);
            v25.spec_extend(&(char)v17);
            v25.push(58, &g_14d8e18);
            v25.push(32, &g_14d8e18);
            v36.to_vec("flock-based locking is disabled. Using fallback implementation.Failed to update the file. Locking is disabled, and the fallback code did not succeed within the permissible number of attempts..", 63);
            (char)v17.into_iter(&v36);
            v25.spec_extend(&(char)v17);
            v25.push(10, &g_14d8e18);
            fish::flog::flog_impl(v28, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v26, v28);
        }
        v37 = 1000;
        do
        {
            v38 = v37;
            v7 = 0x1b600000000;
            v12 = 0;
            v9 = 0;
            v10 = 1;
            v11 = 1;
            fish::common::wcs2osstring(&(char)v17, a4, a5);
            v25.open(&(unsigned int)v7, &(char)v17);
            if (*((int *)&v25) == 1)
            {
                *((unsigned long long *)a0) = v28;
                *((char *)&a0[56]) = 2;
                return core::ptr::drop_in_place<std::fs::File>(a6);
            }
            core::ptr::drop_in_place<std::fs::File>(a6);
            a6 = v27;
            fish::wutil::fileid::file_id_for_path(&v33, a1, a2);
            if (((char)fish::fds::wopen_cloexec(a1, a2, 64, 384) & 1))
            {
                *((unsigned long long *)a0) = v45 * 0x100000000 | 2;
                *((char *)&a0[56]) = 2;
                return core::ptr::drop_in_place<std::fs::File>(a6);
            }
            v0 = v39;
            fish::wutil::fileid::file_id_for_file(&v25, &v0);
            if (v33.eq(&g_9f9ad0) || v33.eq(&v25))
            {
                fish::history::HistoryImpl::save_internal_via_rewrite::{{closure}}(&(char)v17, a3, &v0, &a6);
                if ((char)v17 == 1)
                {
                    core::ptr::drop_in_place<core::result::Result<fish::fs::PotentialUpdate<()>,std::io::error::Error>>(&(char)v17);
                }
                else
                {
                    v40 = (char)v18;
                    if (v40)
                    {
                        fish::fs::rewrite_via_temporary_file::update_metadata(&v0, &a6);
                        v41 = fish::fs::fsync(&a6);
                        if (v41)
                        {
                            *((unsigned long long *)a0) = v41;
                            *((char *)&a0[56]) = 2;
                            core::ptr::drop_in_place<std::fs::File>(v1);
                            return core::ptr::drop_in_place<std::fs::File>(a6);
                        }
                        core::ptr::drop_in_place<std::fs::File>(a6);
                    }
                    fish::wutil::fileid::file_id_for_path(&(unsigned int)v7, a1, a2);
                    if (v25.eq(&(unsigned int)v7))
                    {
                        if (v40)
                        {
                            v43 = fish::fs::rewrite_via_temporary_file::rename(a4, a5, a1, a2);
                            if (v43)
                            {
                                *((unsigned long long *)a0) = v43;
                                *((char *)&a0[56]) = 2;
                                core::ptr::drop_in_place<std::fs::File>(v1);
                                return core::ptr::drop_in_place<std::fs::File>(a6);
                            }
                            fish::wutil::fileid::file_id_for_path(&(char)v17, a1, a2);
                            v16 = (long long)v23;
                            memcpy(&v15, &v22, 16);
                            v14 = v21;
                            *((int128_t *)&v5) = (int128_t)v17;
                        }
                        *((unsigned long long *)&a0[48]) = v16;
                        v44 = (int128_t)v5;
                        a0[32] = v15;
                        a0[16] = v14;
                        *(a0) = v44;
                        *((char *)&a0[56]) = v40;
                        core::ptr::drop_in_place<std::fs::File>(v1);
                        return core::ptr::drop_in_place<std::fs::File>(a6);
                    }
                }
            }
            core::ptr::drop_in_place<std::fs::File>(v1);
            v37 = v38 - 1;
        } while (v38 != 1);
        *((long long *)a0) = 40.new("Failed to update the file. Locking is disabled, and the fallback code did not succeed within the permissible number of attempts..", 128);
        *((char *)&a0[56]) = 2;
    }
    else
    {
        v48 = v31;
        v49 = v32;
        v8 = v49;
        fish::history::HistoryImpl::save_internal_via_rewrite::{{closure}}(&(char)v17, a3, &v6, &vvar_6);
        if ((char)v17 == 1)
        {
            *((unsigned long long *)a0) = v20;
            *((char *)&a0[56]) = 2;
            goto LABEL_13b5880;
        }
        else
        {
            v50 = (char)v18;
            v51 = 4294967295;
            if (v50)
            {
                fish::fs::rewrite_via_temporary_file::update_metadata(&v6, &vvar_6);
                (char)v17.fsync_close_and_keep_lock(v5, v8);
                if (((char)v17 & 1))
                {
                    v51 = 4294967295;
                }
                else
                {
                    v51 = v19;
                    core::ptr::drop_in_place<core::option::Option<std::fs::File>>(4294967295);
                    v52 = fish::fs::rewrite_via_temporary_file::rename(a4, a5, a1, a2);
                    if (!v52)
                        goto LABEL_13b5824;
                }
                *((unsigned long long *)a0) = v52;
                *((char *)&a0[56]) = 2;
                core::ptr::drop_in_place<core::option::Option<std::fs::File>>(v51);
            }
            else
            {
LABEL_13b5824:
                fish::wutil::fileid::file_id_for_path(&(char)v17, a1, a2);
                *((long long *)&a0[48]) = (long long)v23;
                v53 = (int128_t)v17;
                a0[32] = v22;
                a0[16] = v21;
                *(a0) = v53;
                *((char *)&a0[56]) = v50;
                core::ptr::drop_in_place<core::option::Option<std::fs::File>>(v51);
                if (!v50)
                {
                    v48 = v5;
                    v49 = v8;
LABEL_13b5880:
                    core::ptr::drop_in_place<fish::fs::LockedFile>(v48, v49);
                }
            }
        }
    }
    return core::ptr::drop_in_place<std::fs::File>(a6);
}
