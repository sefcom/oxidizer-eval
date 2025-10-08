long long fish::builtins::fish_indent::throwing_main()
{
    char v0;  // [bp-0x110], Other Possible Types: unsigned long, unsigned long long
    unsigned long v1;  // [bp-0x108]
    char v2;  // [bp-0x100]
    void* v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    void* v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8], Other Possible Types: char
    char *v7;  // [bp-0xd0]
    char *v8;  // [bp-0xc8], Other Possible Types: unsigned long long
    char *v9;  // [bp-0xc0]
    void* v10;  // [bp-0xb8]
    char v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa8]
    char v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    char v16;  // [bp-0x80]
    char v17;  // [bp-0x68]
    char v18;  // [bp-0x58]
    char v19;  // [bp-0x40]
    char *v21;  // rax
    unsigned long long v22;  // rdx
    void* v24;  // r12
    unsigned int v25;  // eax

    fish::topic_monitor::topic_monitor_init();
    fish::threads::init();
    v16.new(1);
    v15 = 1;
    v6.new(2);
    v14 = v8;
    memcpy(&v13, &v6, 16);
    v12 = 1;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v7 = &v15;
    v8 = &v12;
    v11 = 0;
    v9 = &v3;
    v6 = 0;
    v10 = 0;
    v0.spec_new_impl(1, 0);
    v21 = v0.unwrap(&g_14c96c8);
    setlocale(6, v21);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v21, v22);
    fish::wutil::gettext::initialize_gettext();
    fish::env::environment::env_init(0, 1, 0);
    v0.getf(fish::env::environment::EnvStack::globals(), "f", 13, 0);
    if (v0)
    {
        if (v1)
        {
            v24 = 0;
            do
            {
                _ZN4fish20future_feature_flags8FEATURES17hafcf865b0d05b1c5E.set_from_string(*((long long *)(24 + v0 + (char *)v24)), *((long long *)(32 + v0 + (char *)v24)));
                v24 += 24;
            } while (v1 * 24 != v24);
        }
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
    }
    std::env::args_os(&v0);
    memcpy(&v18, &v2, 16);
    memcpy(&v17, &v0, 16);
    v19.collect(&v17);
    v0 = fish::builtins::fish_indent::do_indent(&v6, &v19);
    v25 = v0.builtin_status_code();
    core::ptr::drop_in_place<fish::io::IoStreams>(&v6);
    core::ptr::drop_in_place<fish::io::IoChain>(&v3);
    core::ptr::drop_in_place<fish::io::OutputStream>(&v12);
    core::ptr::drop_in_place<fish::io::OutputStream>(&v15);
    return v25;
}
