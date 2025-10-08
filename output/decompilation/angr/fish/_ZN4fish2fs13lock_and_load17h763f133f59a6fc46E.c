long long fish::fs::lock_and_load(void* a0, unsigned long long a1, void* a2)
{
    char v0;  // [bp-0x170]
    void* v1;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x16c]
    void* v3;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x160]
    unsigned long long v5;  // [bp-0x150]
    int v6;  // [bp-0x148], Other Possible Types: char
    unsigned long long v7;  // [bp-0x140]
    void* v8;  // [bp-0x138], Other Possible Types: char
    void* v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    void* v11;  // [bp-0x110]
    unsigned long long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    void* v14;  // [bp-0xf0], Other Possible Types: unsigned int
    unsigned int v15;  // [bp-0xf0]
    unsigned long long v16;  // [bp-0xe8]
    void* v17;  // [bp-0xe0]
    int v18;  // [bp-0xd8], Other Possible Types: char
    int v19;  // [bp-0xc8], Other Possible Types: char
    int v20;  // [bp-0xb8], Other Possible Types: char
    char v21;  // [bp-0xa8]
    char v22;  // [bp-0x90]
    char v23;  // [bp-0x8c]
    unsigned long long v24;  // [bp-0x88]
    int v25;  // [bp-0x80], Other Possible Types: char
    int v26;  // [bp-0x70]
    int v27;  // [bp-0x60]
    unsigned long v28;  // [bp-0x50]
    char v29;  // [bp-0x48]
    unsigned int v31;  // ebp
    char *v32;  // rbx
    unsigned int v33;  // ebp
    char *v34;  // r12
    unsigned int v35;  // edx
    unsigned long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long v39;  // rcx
    unsigned long long v40;  // rax

    v22.new(2, a1, a2);
    if ((v22 & 1))
    {
        v5 = v24;
        if ((char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
        {
            v9 = 0;
            v10 = 1;
            v11 = 0;
            v6.to_flog_str(&g_15a98e0);
            v18.into_iter(&v6);
            v9.spec_extend(&v18);
            v9.push(58, &g_14d8d58);
            v9.push(32, &g_14d8d58);
            v14 = 0;
            v16 = 4;
            v17 = 0;
            v3 = a1;
            v4 = a2;
            v0 = 1;
            v6.to_arg(&v5);
            memcpy(&v19, &v4, 16);
            memcpy(&v18, &v0, 16);
            memcpy(&v20, &v6, 16);
            memcpy(&v21, &v8, 16);
            fish_printf::printf_impl::sprintf_locale(&v6, &v14, "Error acquiring shared lock on the directory of '%s': %sflock-based locking is disabled. Using fallback implementation.Failed to update the file. Locking is disabled, and the fallback code did not succeed within the permissible number of attempts..", 56, &v18, 2);
            v6.unwrap(&g_14d8d58);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v18);
            *((int128_t *)&v6) = *((int128_t *)&v14);
            v8 = 0;
            v0.to_flog_str(&v6);
            v18.into_iter(&v0);
            v9.spec_extend(&v18);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            v9.push(10, &g_14d8d58);
            fish::flog::flog_impl(v10, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v10);
        }
        if (!(char)v5.kind())
        {
            *((unsigned long long *)&a0[8]) = v5;
            *((unsigned long long *)a0) = 1;
            return v5;
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v5);
        if ((char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            (char)v6.to_flog_str(&g_15a98e0);
            v18.into_iter(&(char)v6);
            v0.spec_extend(&v18);
            v0.push(58, &g_14d8d70);
            v0.push(32, &g_14d8d70);
            v29.to_vec("flock-based locking is disabled. Using fallback implementation.Failed to update the file. Locking is disabled, and the fallback code did not succeed within the permissible number of attempts..", 63);
            v18.into_iter(&v29);
            v0.spec_extend(&v18);
            v0.push(10, &g_14d8d70);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
        v31 = 1000;
        v32 = &v25;
        while (true)
        {
            v33 = v31;
            v34 = v32;
            fish::wutil::fileid::file_id_for_path(&v18, v12, v13);
            if (((char)fish::fds::wopen_cloexec(v12, v13, 0, 0) & 1))
            {
                *((unsigned long long *)&a0[8]) = v37 * 0x100000000 | 2;
                *((unsigned long long *)a0) = 1;
                return a0;
            }
            v14 = v35;
            (char)v6.call();
            v32 = v34;
            if (((char)v6 & 1))
            {
                core::ptr::drop_in_place<core::result::Result<fish::history::file::HistoryFileContents,std::io::error::Error>>(&(char)v6);
            }
            else
            {
                v1 = v7;
                v3 = v8;
                fish::wutil::fileid::file_id_for_path(v32, a1, a2);
                if (v18.eq(v32))
                {
                    *((unsigned long *)&a0[56]) = v28;
                    a0[40] = v27;
                    a0[24] = v26;
                    a0[8] = v25;
                    *((unsigned long long *)&a0[64]) = v7;
                    *((void* *)&a0[72]) = v8;
                    *((unsigned long long *)a0) = 0;
                    return core::ptr::drop_in_place<std::fs::File>(v15);
                }
                core::ptr::drop_in_place<fish::history::file::HistoryFileContents>(&v0);
                v32 = v34;
            }
            core::ptr::drop_in_place<std::fs::File>(v15);
            v31 = v33 - 1;
            if (v33 == 1)
            {
                v38 = 40.new("Failed to update the file. Locking is disabled, and the fallback code did not succeed within the permissible number of attempts..", 128);
                *((unsigned long long *)&a0[8]) = v38;
                *((unsigned long long *)a0) = 1;
                return v38;
            }
        }
    }
    else
    {
        v1 = *((long long *)&v23);
        fish::wutil::fileid::file_id_for_file(&(char)v18, &(char)v1);
        (char)v6.call();
        v39 = a0 + 8;
        if ((int)v6 == 1)
        {
            *((unsigned long long *)v39) = v7;
            v40 = 1;
        }
        else
        {
            *((long long *)(v39 + 48)) = *((long long *)&v21);
            *((void*)(v39 + 32)) = v20;
            *((void*)(v39 + 16)) = v19;
            *((void*)v39) = v18;
            *((unsigned long long *)&a0[64]) = v7;
            *((void* *)&a0[72]) = v8;
            v40 = 0;
        }
        *((unsigned long long *)a0) = v40;
        return core::ptr::drop_in_place<fish::fs::LockedFile>(v1, v2);
    }
}
