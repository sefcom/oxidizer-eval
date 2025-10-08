long long uu_hostname::display_hostname(unsigned long long a0)
{
    int v0;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [bp-0x158], Other Possible Types: unsigned long long
    int v3;  // [bp-0x158]
    unsigned long long v4;  // [bp-0x150]
    void* v5;  // [bp-0x148], Other Possible Types: char
    unsigned long v6;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x130]
    int v8;  // [bp-0x128], Other Possible Types: char
    int v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    int v12;  // [bp-0xf8], Other Possible Types: char *, unsigned long long
    unsigned long long v13;  // [bp-0xf0]
    int v14;  // [bp-0xe8], Other Possible Types: void*, unsigned long long
    char v15;  // [bp-0xe0]
    char v16;  // [bp-0xd8]
    int v17;  // [bp-0xc8], Other Possible Types: char *
    unsigned long long v18;  // [bp-0xc0]
    char v19;  // [bp-0xb8]
    void* v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa0]
    void* v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    unsigned long long v27;  // [bp-0x80]
    unsigned long long v28;  // [bp-0x78]
    unsigned long long v29;  // [bp-0x70]
    unsigned long long v30;  // [bp-0x68]
    unsigned long long v31;  // [bp-0x60]
    int v32;  // [bp-0x58], Other Possible Types: char
    int v33;  // [bp-0x48]
    int v35;  // xmm0
    int v36;  // xmm0
    unsigned long long v39;  // r12
    unsigned long long v40;  // r13
    unsigned long long v41;  // rax
    unsigned int v42;  // edx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    void* v47;  // rdx
    void* v48;  // rbp
    unsigned long long v49;  // rax
    unsigned long long v50;  // rdx

    hostname::get(&v0);
    (char)v12.map_err_context(&v0);
    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
        return v13;
    (char)v6.from_utf8_lossy(v13, v14);
    if (v6 == 0x8000000000000000)
    {
        v0.to_vec(v7, *((long long *)&v8));
        v11 = v2;
        v35 = *((int128_t *)&v0);
    }
    else
    {
        v11 = *((long long *)&v8);
        v35 = *((int128_t *)&v6);
    }
    v9 = v35;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v12, v13);
    if ((char)a0.get_flag("ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ", 10))
    {
        v2 = v11;
        memcpy(&v0, &(char)v9, 16);
        (char)v6.add(&v0);
        v0.to_socket_addrs(&(char)v6);
        (char)v12.map_err_context(&v0);
        if (!v12)
        {
            core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
            return v13;
        }
        v28 = v12;
        v29 = v13;
        v30 = v14;
        v31 = *((long long *)&v15);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
        v0.default();
        v36 = *((int128_t *)&v0);
        memcpy(&v16, &v5, 16);
        *((int128_t *)&v14) = *((int128_t *)&v2);
        v12 = v36;
        v20 = 0;
        v21 = 1;
        v22 = 0;
        memcpy(&v19, &v30, 16);
        *((int128_t *)&v17) = *((int128_t *)&v28);
        (char)v6.next(&(char)v17);
        if ((short)v6 != 2)
        {
            do
            {
                v33 = v8;
                memcpy(&v32, &v6, 16);
                if (!(char)v12.get_inner(&v32))
                {
                    v23.spec_to_string(&v32);
                    v27 = v26;
                    v25 = v24;
                    if ((char)core::slice::<impl [T]>::ends_with(v25, v27))
                    {
                        v23.truncate(v26 - 2);
                        v27 = v26;
                        v25 = v24;
                    }
                    v20.spec_extend(v25, v27 + v25);
                    v20.push(32);
                    v3 = v33;
                    v0 = v32;
                    (char)v12.insert(&v0);
                    core::ptr::drop_in_place<alloc::string::String>(&v23);
                }
                (char)v6.next(&(char)v17);
            } while ((short)v6 != 2);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr>>(&(char)v17);
        core::ptr::drop_in_place<alloc::string::String>(&v20);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>(v12, v13);
    }
    else
    {
        if ((char)a0.get_flag("short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ", 5) || (char)a0.get_flag("domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di", 6))
        {
            v39 = v10;
            v40 = v11;
            v12 = v39;
            v13 = v39 + v40;
            v14 = 0;
            v41 = v12.try_fold();
            if (v42 == 0x110000)
                goto LABEL_458be7;
            v43 = v41;
            if ((char)a0.get_flag("short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ", 5))
            {
                v44 = v43.get(v39, v40);
                if (!v44)
                    core::str::slice_error_fail(v39, v40, 0, v43, &g_4e4e48); /* do not return */
                v6 = v44;
                v7 = v45;
                v17 = &v6;
                v18 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4e4e10;
                v1 = 2;
                v5 = 0;
                v2 = &v17;
                v4 = 1;
                std::io::stdio::_print(&v0);
            }
            else
            {
                v48 = v43 + 1;
                v49 = v48.get(v39, v40);
                if (!v49)
                    core::str::slice_error_fail(v39, v40, v47, v43, &g_4e4e30); /* do not return */
                v6 = v49;
                v7 = v50;
                v17 = &v6;
                v18 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4e4e10;
                v1 = 2;
                v5 = 0;
                v2 = &v17;
                v4 = 1;
                std::io::stdio::_print(&v0);
            }
        }
        else
        {
LABEL_458be7:
            v12 = &(char)v9;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_4e4e10;
            v1 = 2;
            v5 = 0;
            v2 = &v12;
            v4 = 1;
            std::io::stdio::_print(&v0);
        }
        core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
    }
    return 0;
}
