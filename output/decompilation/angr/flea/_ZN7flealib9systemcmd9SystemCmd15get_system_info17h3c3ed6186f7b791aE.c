long long flealib::systemcmd::SystemCmd::get_system_info(unsigned long a0, unsigned long long a1[54], unsigned long long a2)
{
    char *v0;  // [bp-0x258], Other Possible Types: char, unsigned long long
    int v1;  // [bp-0x258]
    unsigned long long v2;  // [bp-0x250]
    char *v3;  // [sp-0x248], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x240]
    void* v5;  // [sp-0x238], Other Possible Types: char *
    unsigned long long v6;  // [bp-0x230]
    char *v7;  // [bp-0x228]
    unsigned long long v8;  // [bp-0x220]
    char *v9;  // [bp-0x218]
    unsigned long long v10;  // [bp-0x210]
    char *v11;  // [bp-0x200], Other Possible Types: unsigned long long
    int v12;  // [bp-0x200], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x1f8]
    char *v14;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x1e8]
    void* v16;  // [bp-0x1e0]
    unsigned int v17;  // [bp-0x1cc]
    int v18;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v19;  // [bp-0x1b8]
    int v20;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x1a0]
    unsigned long long v22;  // [bp-0x198]
    int v23;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v24;  // [bp-0x188]
    unsigned long long v25;  // [bp-0x180]
    unsigned long long v26;  // [bp-0x178]
    unsigned long long v27;  // [bp-0x168]
    unsigned long v28;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x150]
    int v30;  // [bp-0x148], Other Possible Types: char *, unsigned long long
    unsigned long long v31;  // [bp-0x140]
    unsigned long long v32;  // [bp-0x138]
    int v33;  // [bp-0x118]
    int v34;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long long v35;  // [bp-0x118]
    unsigned long long v36;  // [bp-0x108]
    char v37;  // [bp-0xf8]
    struct_0 *v38;  // [bp-0xe8]
    char v39;  // [bp-0xe0]
    unsigned long long v40;  // [bp-0xd8]
    unsigned long long v41;  // [bp-0xd0]
    unsigned long v42;  // [bp-0xc8]
    int v43;  // [bp-0xc8]
    unsigned long long v44;  // [bp-0xc0]
    unsigned long long v45;  // [bp-0xb8]
    unsigned long long v46;  // [bp-0xb0]
    int v47;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v48;  // [bp-0x98]
    int v49;  // [bp-0x90]
    unsigned long long v50;  // [bp-0x80]
    int v51;  // [bp-0x78]
    unsigned long long v52;  // [bp-0x68]
    int v53;  // [bp-0x60]
    unsigned long long v54;  // [bp-0x50]
    int v55;  // [bp-0x48], Other Possible Types: char
    char v56;  // [bp-0x38]
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    struct_1 *v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rcx

    a1.refresh_all(a1, a2);
    (char)v12.name();
    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
    {
        v0.to_vec("<unknown>System name: \r\nSystem kernel version: \r\nSystem OS version: \r\nSystem OS (long) version: Total memory:  MB\r\nUsed memory:  MB\r\nTotal swap:  MB\r\n", 9);
        v22 = v3;
        v58 = *((int128_t *)&v0);
    }
    else
    {
        v22 = v14;
        v58 = *((int128_t *)&v12);
    }
    v20 = v58;
    (char)v12.kernel_version();
    if (v12 == 0x8000000000000000)
    {
        v0.to_vec("<unknown>System name: \r\nSystem kernel version: \r\nSystem OS version: \r\nSystem OS (long) version: Total memory:  MB\r\nUsed memory:  MB\r\nTotal swap:  MB\r\n", 9);
        v36 = v3;
        v59 = *((int128_t *)&v0);
    }
    else
    {
        v36 = v14;
        v59 = *((int128_t *)&v12);
    }
    v33 = v59;
    (char)v12.os_version();
    if (v12 == 0x8000000000000000)
    {
        v0.to_vec("<unknown>System name: \r\nSystem kernel version: \r\nSystem OS version: \r\nSystem OS (long) version: Total memory:  MB\r\nUsed memory:  MB\r\nTotal swap:  MB\r\n", 9);
        v26 = v3;
        v60 = *((int128_t *)&v0);
    }
    else
    {
        v26 = v14;
        v60 = *((int128_t *)&v12);
    }
    v23 = v60;
    (char)v12.long_os_version();
    if (v12 == 0x8000000000000000)
    {
        v0.to_vec("<unknown>System name: \r\nSystem kernel version: \r\nSystem OS version: \r\nSystem OS (long) version: Total memory:  MB\r\nUsed memory:  MB\r\nTotal swap:  MB\r\n", 9);
        v32 = v3;
        v61 = *((int128_t *)&v0);
    }
    else
    {
        v32 = v14;
        v61 = *((int128_t *)&v12);
    }
    v30 = v61;
    v42 = a1[35];
    v0 = &(char)v20;
    v2 = <alloc::string::String as core::fmt::Debug>::fmt;
    v3 = &v33;
    v4 = <alloc::string::String as core::fmt::Debug>::fmt;
    v5 = &(char)v23;
    v6 = <alloc::string::String as core::fmt::Debug>::fmt;
    v7 = &(char)v30;
    v8 = <alloc::string::String as core::fmt::Debug>::fmt;
    v9 = &v42;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = &g_b08fe0;
    v13 = 6;
    v16 = 0;
    v14 = &v0;
    v15 = 5;
    v39.map_or_else(&v11);
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&(char)v30);
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&(char)v23);
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v33);
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
    memcpy(&v18, &v39, 16);
    v19 = v41;
    v20 = a1[45] >> 20;
    v35 = a1[45] - a1[47] >> 20;
    v23 = a1[52] >> 20;
    v30 = a1[52] - a1[53] >> 20;
    v0 = &v20;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v3 = &v35;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v5 = &v23;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7 = &v30;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = &g_b09040;
    v13 = 5;
    v16 = 0;
    v14 = &v0;
    v15 = 4;
    v47.map_or_else(&v11);
    v43 = v47;
    v45 = v48;
    v18.append_elements(v44, v48, &g_b08e40);
    v18.append_elements("Users:\r\nDisks:\r\nNotPkcs8", 8, &g_b08e40);
    v39.new_with_refreshed_list();
    v24 = v40;
    v25 = v41 * 56 + v40;
    if (v24.next())
    {
        do
        {
            *((int128_t *)&v12) = *((int128_t *)&(&v62->padding_0)[1]);
            v30 = &(unsigned long long)v12;
            v31 = <&T as core::fmt::Debug>::fmt;
            v0 = &g_b09090;
            v2 = 2;
            v5 = 0;
            v3 = &v30;
            v4 = 1;
            v49.map_or_else(&v0);
            v1 = v49;
            v3 = v50;
            v18.append_elements(2, v50, &g_b08e40);
            ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v0);
            v62 = v24.next();
        } while (v62);
    }
    v18.append_elements("Disks:\r\nNotPkcs8", 8, &g_b08e40);
    v20.new_with_refreshed_list();
    v30 = v21;
    v31 = v22 * 112 + v21;
    if (v30.next())
    {
        do
        {
            v24 = v63;
            v11 = &v24;
            v13 = <&T as core::fmt::Debug>::fmt;
            v0 = &g_b09090;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            v51.map_or_else(&v0);
            v1 = v51;
            v3 = v52;
            v18.append_elements(2, v52, &g_b08e40);
            ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v0);
            v63 = v30.next();
        } while (v63);
    }
    v18.append_elements("Networks:\r\nUptime:\r\n: /Days: Hours: Minutes: Seconds:", 11, &g_b08e40);
    v17 = (int)v30.new_with_refreshed_list() & 0xffffff00 | 1;
    v35.into_iter(&v30);
    v27 = *((long long *)&v37);
    memcpy(&v26, &v36, 16);
    v23 = v34;
    while (true)
    {
        v64 = v24.next();
        if (!v64)
            break;
        v46 = v64;
        v28 = v65.received();
        v29 = v65.transmitted();
        v0 = &v46;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v28;
        v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v5 = &v29;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v11 = &g_b090b0;
        v13 = 4;
        v16 = 0;
        v14 = &v0;
        v15 = 3;
        v53.map_or_else(&v11);
        v1 = v53;
        v3 = v54;
        v18.append_elements(<&T as core::fmt::Display>::fmt, v54, &g_b08e40);
        ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    v18.append_elements("Uptime:\r\n: /Days: Hours: Minutes: Seconds:", 9, &g_b08e40);
    v66 = sysinfo::common::System::uptime();
    v28 = v66 / 86400;
    v29 = (v66 - v28 * 86400) * 1193047 >> 32;
    v34 = (unsigned int)((v66 & 4294967295) - (unsigned int)(((v66 >> 4) * 655884233731895169 >> 64 & 4294967295) >> 3) * 3600) * 2185 >> 17;
    v23 = v66 % 60;
    v0 = &v28;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v3 = &v29;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v5 = &v34;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7 = &v23;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = &g_b090f0;
    v13 = 5;
    v16 = 0;
    v14 = &v0;
    v15 = 4;
    v55.map_or_else(&v11);
    v1 = v55;
    v3 = *((long long *)&v56);
    v18.append_elements(core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt, *((long long *)&v56), &g_b08e40);
    v38->field_10 = v19;
    *((void*)&v38->field_0) = v18;
    v17 = 0;
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<sysinfo::common::Networks>(&v30);
    core::ptr::drop_in_place<sysinfo::common::Disks>(&v20);
    core::ptr::drop_in_place<sysinfo::common::Users>(&v39);
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v42);
    return a0;
}
