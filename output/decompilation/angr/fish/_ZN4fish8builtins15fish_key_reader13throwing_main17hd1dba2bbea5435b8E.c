long long fish::builtins::fish_key_reader::throwing_main()
{
    char v0;  // [bp-0x242]
    char v1;  // [bp-0x241]
    char v2;  // [bp-0x240], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x238]
    unsigned long long v4;  // [bp-0x230]
    unsigned long long v5;  // [bp-0x228]
    char v6;  // [bp-0x220]
    unsigned long long v7;  // [bp-0x210]
    void* v8;  // [bp-0x208]
    unsigned long long v9;  // [bp-0x200]
    void* v10;  // [bp-0x1f8]
    unsigned long long v11;  // [bp-0x1f0]
    char v12;  // [bp-0x1e8]
    unsigned long long v13;  // [bp-0x1d8]
    void* v14;  // [bp-0x1d0], Other Possible Types: unsigned long long, char
    unsigned int v15;  // [bp-0x1cf]
    unsigned short v16;  // [bp-0x1cb]
    char v17;  // [bp-0x1c9]
    unsigned long v18;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x1c0]
    char v20;  // [bp-0x148]
    char v21;  // [bp-0x138]
    void* v22;  // [bp-0x128]
    char *v23;  // [bp-0x120]
    char *v24;  // [bp-0x118]
    char *v25;  // [bp-0x110]
    unsigned long long v26;  // [bp-0x108]
    char v27;  // [bp-0x100]
    unsigned long long v28[1][3];  // [bp-0xf8]
    char v29;  // [bp-0xe0]
    void* v32;  // r12
    unsigned long long v33;  // rax
    unsigned int v34;  // ebx
    unsigned long long v36;  // rdx

    fish::proc::set_interactive_session(1);
    fish::topic_monitor::topic_monitor_init();
    fish::threads::init();
    fish::wutil::gettext::initialize_gettext();
    fish::env::environment::env_init(0, 1, 0);
    fish::reader::reader_init(0);
    v14.getf(fish::env::environment::EnvStack::globals(), "f", 13, 0);
    if (*((long long *)&v14))
    {
        if (v18)
        {
            v32 = 0;
            do
            {
                _ZN4fish20future_feature_flags8FEATURES17hafcf865b0d05b1c5E.set_from_string(*((long long *)(24 + *((long long *)&v14) + (char *)v32)), *((long long *)(32 + *((long long *)&v14) + (char *)v32)));
                v32 += 24;
            } while (v18 * 24 != v32);
        }
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v14);
    }
    v14.new(1);
    v13 = v19;
    memcpy(&v12, &v14, 16);
    v11 = 1;
    v14.new(2);
    v7 = v19;
    memcpy(&v6, &v14, 16);
    v5 = 1;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v23 = &v11;
    v24 = &v5;
    v26 = 4294967295;
    v27 = 0;
    v25 = &v8;
    v22 = 0;
    v0 = 0;
    v1 = 0;
    std::env::args_os(&v14);
    memcpy(&v21, &v19, 16);
    memcpy(&v20, &v14, 16);
    v28.collect(&v20);
    v33 = fish::builtins::fish_key_reader::parse_flags(&v11, &v5, &v28, &v0, &v1);
    if ((char)v33 != 2)
    {
        v14 = v33;
        v17 = v33 >> 56;
        v16 = v33 >> 40;
        v15 = v33 >> 8;
        v34 = v14.builtin_status_code();
        goto LABEL_1351ead;
    }
    else if (fish::nix::isatty(0))
    {
        v14.new();
        std::env::var_os(&v2, "STY", 3);
        if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
        {
            fish::common::str2wcstring(&v20, v3, v4);
            v14.set_one("S", 3, 4, &v20);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v3);
        }
        std::env::var_os(&v2, "TERMLANGmathtruePATHYankkMSGsmsckentsnlqkundkendkRESmsgrkNXTkprtkrescwin.", 4);
        if (v2 != 0x8000000000000000)
        {
            fish::common::str2wcstring(&v20, v3, v4);
            v14.set_one("T", 4, 4, &v20);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v3);
        }
        fish::reader::terminal_init(&v29, &v14, &g_14c7518, 0);
        core::ptr::drop_in_place<fish::env::environment::EnvStack>(&v14);
        fish::builtins::fish_key_reader::setup_and_process_keys((unsigned int)&v11, &v5, v0, v1, &v29);
        v14 = 0;
        v34 = v14.builtin_status_code();
        core::ptr::drop_in_place<fish::io::IoStreams>(&v22);
        core::ptr::drop_in_place<fish::io::IoChain>(&v8);
    }
    else
    {
        v18 = "S";
        v19 = 32;
        v14 = 0x8000000000000000;
        v5.appendln(v14.localize(), v36);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v14);
        v34 = 1;
LABEL_1351ead:
        core::ptr::drop_in_place<fish::io::IoStreams>(&v22);
        core::ptr::drop_in_place<fish::io::IoChain>(&v8);
    }
    core::ptr::drop_in_place<fish::io::OutputStream>(&v5);
    core::ptr::drop_in_place<fish::io::OutputStream>(&v11);
    return v34;
}
