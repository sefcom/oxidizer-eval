long long uu_sync::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x3b8]
    int v1;  // [bp-0x3b0], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x3a8]
    unsigned long long v3;  // [bp-0x3a0]
    unsigned long long v4;  // [bp-0x398]
    int v5;  // [bp-0x390]
    int v6;  // [bp-0x380]
    unsigned long long v7;  // [bp-0x370]
    char v8;  // [bp-0x368], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x360]
    int v10;  // [bp-0x358]
    int v11;  // [bp-0x348]
    int v12;  // [bp-0x338], Other Possible Types: char
    int v13;  // [bp-0x328], Other Possible Types: char
    unsigned long long v14;  // [bp-0x318]
    void* v15;  // [bp-0x310], Other Possible Types: char
    int v16;  // [bp-0x308]
    int v17;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    int v18;  // [bp-0x2f8]
    int v19;  // [bp-0x2f8]
    unsigned long long v20;  // [bp-0x2f0]
    int v21;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v22;  // [bp-0x2e0]
    int v23;  // [bp-0x2d8]
    int v24;  // [bp-0x2c8]
    int v26;  // xmm0
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rdx
    unsigned long long v29[3];  // rax
    unsigned int v30;  // eax
    unsigned long v31;  // rdi
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rax

    uu_sync::uu_app(&v17);
    v8.try_get_matches_from(&v17, a0, a1);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        return v4.from();
    v7 = *((long long *)&v12);
    v6 = v11;
    v5 = v10;
    v3 = v8;
    v4 = v9;
    v17.try_get_many(&v3, _ZN7uu_sync9ARG_FILES17h53fccf495c02a785E, g_56d9d8);
    v8.unwrap(_ZN7uu_sync9ARG_FILES17h53fccf495c02a785E, g_56d9d8, &v17);
    if (v8)
    {
        v26 = *((int128_t *)&v8);
        v24 = v12;
        v23 = v11;
        v21 = v10;
        v17 = v26;
        v15.from_iter(&v17, &g_56d600);
        v17 = v16;
        if (v15 == 0x8000000000000000)
            goto LABEL_496089;
        *((int128_t *)&v1) = (int128_t)v17;
        v0 = v15;
    }
    else
    {
LABEL_496089:
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    if ((char)v3.get_flag(_ZN7uu_sync7options4DATA17hc24c12e1fc09440bE, g_56d988) && !v2)
    {
        uucore::mods::locale::get_message(&v13, "sync-error-data-needs-argumentsync-error-opening-file", 30);
        v22 = 1;
        v17 = v13;
        v21 = v14;
        v27 = v17.new();
        goto LABEL_4962b8;
    }
    v17 = v0.into_iter();
    v20 = v28;
    if (v17.next())
    {
        do
        {
            v30 = nix::fcntl::open(v29[1], v29[2], 0x800, 0);
            if (v30 != 1)
            {
                v31 = v30;
                v32 = (unsigned int)v28;
                continue;
            }
            else if ((unsigned int)v28 == 13 && !(char)v29[1].is_dir(v29[2]))
            {
                v31 = 1;
                v32 = 13;
            }
            else
            {
                v27 = (unsigned int)v28.map_err_context(v29[1], v29[2]);
                core::ptr::drop_in_place<core::result::Result<std::os::fd::owned::OwnedFd,nix::errno::consts::Errno>>(1, (unsigned int)v28);
                goto LABEL_4962b8;
            }
            core::ptr::drop_in_place<core::result::Result<std::os::fd::owned::OwnedFd,nix::errno::consts::Errno>>(v31, v32);
            v29 = v17.next();
        } while (v29);
    }
    if ((char)v3.get_flag(_ZN7uu_sync7options11FILE_SYSTEM17h02a71b6e49b0b17fE, g_56d978))
    {
        v21 = v2;
        *((int128_t *)&v18) = *((int128_t *)&v0);
        v33 = uu_sync::syncfs(&v17);
        goto LABEL_49620e;
    }
    else
    {
        if ((char)v3.get_flag(_ZN7uu_sync7options4DATA17hc24c12e1fc09440bE, g_56d988))
        {
            v21 = v2;
            *((int128_t *)&v19) = *((int128_t *)&v0);
            v33 = uu_sync::fdatasync(&v17);
LABEL_49620e:
            v27 = v33;
            if (!v33)
            {
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                return 0;
            }
        }
        else
        {
            v27 = uu_sync::sync();
            if (!v27)
            {
                ::0x495500::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                return 0;
            }
LABEL_4962b8:
            ::0x495500::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
        return v27;
    }
}
