long long uu_hostname::display_hostname(unsigned long long a0)
{
    int v0;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [bp-0x158], Other Possible Types: unsigned long long
    int v3;  // [bp-0x158]
    unsigned long long v4;  // [bp-0x150]
    void* v5;  // [bp-0x148], Other Possible Types: char
    unsigned long long v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    int v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    int v12;  // [bp-0xf8], Other Possible Types: char *, char, unsigned long
    unsigned long long v13;  // [bp-0xf0]
    char v14;  // [bp-0xe8]
    int v15;  // [bp-0xd8], Other Possible Types: char *, unsigned long long
    unsigned long long v16;  // [bp-0xd0]
    int v17;  // [bp-0xc8], Other Possible Types: void*, unsigned long long
    char v18;  // [bp-0xc0]
    char v19;  // [bp-0xb8]
    void* v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa0]
    void* v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    unsigned long long v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    unsigned long long v28;  // [bp-0x68]
    unsigned long long v29;  // [bp-0x60]
    int v30;  // [bp-0x58], Other Possible Types: char
    int v31;  // [bp-0x48], Other Possible Types: char
    int v33;  // xmm0
    int v34;  // xmm0
    unsigned long long v37;  // rax
    unsigned int v38;  // edx
    unsigned long long v39;  // r13
    unsigned long long v40;  // r14
    unsigned long long v41;  // r15
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    void* v45;  // rdx
    unsigned long v46;  // r13
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx

    hostname::get(&v0);
    (char)v15.map_err_context(&v0);
    if ((char)(((0 ^ v15) & (0 ^ -(v15))) >> 63))
        return v16;
    v6 = v15;
    v7 = v16;
    v8 = v17;
    v12.to_string_lossy(v7, v17);
    if (v12 == 0x8000000000000000)
    {
        v0.to_vec(v13, *((long long *)&v14));
        v11 = v2;
        v33 = *((int128_t *)&v0);
    }
    else
    {
        v11 = *((long long *)&v14);
        v33 = *((int128_t *)&v12);
    }
    v9 = v33;
    ::0x496ee0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v6);
    if ((char)a0.get_flag("ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.", 10))
    {
        v2 = v11;
        memcpy(&v0, &(char)v9, 16);
        v6.add(&v0);
        v0.to_socket_addrs(&v6);
        (char)v15.map_err_context(&v0);
        if (!v15)
        {
            ::0x496e90::core::ptr::drop_in_place<alloc::string::String>(&v6);
            return v16;
        }
        v26 = v15;
        v27 = v16;
        v28 = v17;
        v29 = *((long long *)&v18);
        ::0x496e90::core::ptr::drop_in_place<alloc::string::String>(&v6);
        v0.default();
        v34 = *((int128_t *)&v0);
        memcpy(&v19, &v5, 16);
        *((int128_t *)&v17) = *((int128_t *)&v2);
        v15 = v34;
        v20 = 0;
        v21 = 1;
        v22 = 0;
        memcpy(&v14, &v28, 16);
        *((int128_t *)&v12) = *((int128_t *)&v26);
        v6.next(&v12);
        if ((short)v6 != 2)
        {
            do
            {
                memcpy(&v31, &v8, 16);
                memcpy(&v30, &v6, 16);
                if (!(char)v15.get_inner(&v30))
                {
                    v23.spec_to_string(&v30);
                    if ((char)core::slice::<impl [T]>::ends_with(v24, v25, ":1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 2))
                        v23.truncate(v25 - 2);
                    v20.append_elements(v24, v25, &g_56f578);
                    v20.push(32);
                    v3 = v31;
                    v0 = v30;
                    (char)v15.insert(&v0);
                    ::0x496e90::core::ptr::drop_in_place<alloc::string::String>(&v23);
                }
                v6.next(&v12);
            } while ((short)v6 != 2);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr>>(&v12);
        ::0x496e90::core::ptr::drop_in_place<alloc::string::String>(&v20);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>(&(char)v15);
    }
    else
    {
        if ((char)a0.get_flag("short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u", 5) || (char)a0.get_flag("domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil", 6))
        {
            v15 = v10;
            v16 = v11 + v10;
            v17 = 0;
            v37 = v15.try_fold();
            if (v38 == 0x110000)
                goto LABEL_498baa;
            v39 = v37;
            if ((char)a0.get_flag("short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u", 5))
            {
                v40 = v10;
                v41 = v11;
                v42 = v39.get(v40, v41);
                if (!v42)
                    core::str::slice_error_fail(v40, v41, 0, v39, &g_56f5f0); /* do not return */
                v6 = v42;
                v7 = v43;
                v12 = &v6;
                v13 = <&T as core::fmt::Display>::fmt;
                v0 = &g_56f5b8;
                v1 = 2;
                v5 = 0;
                v2 = &v12;
                v4 = 1;
                std::io::stdio::_print(&v0);
            }
            else
            {
                v46 = v39 + 1;
                v40 = v10;
                v41 = v11;
                v47 = v46.get(v40, v41);
                if (!v47)
                    core::str::slice_error_fail(v40, v41, v45, v39, &g_56f5d8); /* do not return */
                v6 = v47;
                v7 = v48;
                v12 = &v6;
                v13 = <&T as core::fmt::Display>::fmt;
                v0 = &g_56f5b8;
                v1 = 2;
                v5 = 0;
                v2 = &v12;
                v4 = 1;
                std::io::stdio::_print(&v0);
            }
        }
        else
        {
LABEL_498baa:
            v15 = &(char)v9;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_56f5b8;
            v1 = 2;
            v5 = 0;
            v2 = &v15;
            v4 = 1;
            std::io::stdio::_print(&v0);
        }
        ::0x496e90::core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
    }
    return 0;
}
