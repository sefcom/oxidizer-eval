long long uu_tail::follow::watch::Observer::start(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v1;  // [bp-0x1c8]
    unsigned int v2;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1c0]
    int v4;  // [bp-0x1b8], Other Possible Types: char *, char, unsigned short
    unsigned long long v5;  // [bp-0x1b8]
    int v6;  // [bp-0x1b0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x1a8]
    unsigned long long v8;  // [bp-0x1a0]
    unsigned long long v9;  // [bp-0x198]
    unsigned long long v10;  // [bp-0x180]
    unsigned long long v11;  // [bp-0x178]
    char *v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x160]
    char *v14;  // [bp-0x158]
    unsigned long long v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    char v17;  // [bp-0x138], Other Possible Types: unsigned long long
    int v18;  // [bp-0x138]
    unsigned long long v19;  // [bp-0x130]
    char *v20;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned int v21;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x110]
    int v24;  // [bp-0xf8]
    unsigned long v25;  // [bp-0xf0]
    char v26;  // [bp-0xe8]
    char v27;  // [bp-0xe0]
    char v28;  // [bp-0xd8]
    unsigned long long v29;  // [bp-0xd0]
    int v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xb8]
    unsigned long v32;  // [bp-0xb0]
    unsigned int v33;  // [bp-0xa8]
    unsigned short v34;  // [bp-0xa0]
    char v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x88]
    char v37;  // [bp-0x80]
    unsigned long long v38;  // [bp-0x70]
    char v39;  // [bp-0x68]
    char v40;  // [bp-0x58]
    int v41;  // [bp-0x48]
    unsigned long long v42;  // [bp-0x38]
    unsigned long long v44;  // r12
    unsigned long long v45;  // r15
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    int v48;  // xmm0
    unsigned long long v49;  // rax

    if (a1->field_4c == 2)
        return 0;
    std::sync::mpmc::channel(&v0);
    v15 = v0;
    v16 = v2;
    *((int128_t *)&v24) = *((int128_t *)&v4);
    v32 = a1->field_30;
    v33 = a1->field_38;
    v34 = 257;
    if (a0->field_8d == 1)
    {
        a0->field_8d = 1;
        v0.with_opt(v0, v2, &v32, 0);
        v17.unwrap(&v0, &g_6369b8);
        v44 = v17.new();
        v45 = &g_636980;
    }
    else
    {
        v11 = v15.clone();
        v0 = 30;
        v2 = 0;
        v4 = 0x100;
        v26.new(v15, v16, &v0);
        if (*((int *)&v26) == 6)
        {
            v36 = v29;
            memcpy(&v35, &v27, 16);
            v44 = v35.new();
            ::0x4f58e0::core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v11);
            v45 = &g_636930;
        }
        else
        {
            v0.spec_to_string(&v26);
            if (!(char)core::slice::<impl [T]>::starts_with(v3, v5, "Too many open files: backendinotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 19))
            {
                ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v0);
                v9 = v31;
                v48 = *((int128_t *)&v26);
                memcpy(&(char)v7, &v30, 16);
                *((int128_t *)&v4) = *((int128_t *)&v28);
                v1 = v48;
                v37.spec_to_string(&v0);
                v21 = 1;
                memcpy(&(char)v18, &v37, 16);
                v20 = v38;
                v49 = (char)v18.new();
                ::0x4f5940::core::ptr::drop_in_place<notify::error::Error>(&v0);
                ::0x4f58e0::core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v11);
                ::0x4f5900::core::ptr::drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&(char)v24);
                return v49;
            }
            ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v0);
            v42 = v31;
            v41 = v30;
            memcpy(&v40, &v28, 16);
            memcpy(&v39, &v26, 16);
            v17 = uucore::util_name();
            v19 = v46;
            v12 = &v17;
            v13 = <&T as core::fmt::Display>::fmt;
            v0 = &g_6368f0;
            v2 = 2;
            v7 = 0;
            v4 = &v12;
            v6 = 1;
            std::io::stdio::_eprint(&v0);
            v0.to_vec("backendinotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
            v14 = v4;
            memcpy(&v12, &v0, 16);
            v17.to_vec("inotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
            v8 = v20;
            *((int128_t *)&v6) = *((int128_t *)&v17);
            v4 = v14;
            *((int128_t *)&v18) = *((int128_t *)&v12);
            v20 = v4;
            v21 = v6;
            v22 = 0;
            v23 = v8;
            v0.from_iter(&v17);
            uucore::mods::locale::get_message_with_args(&v17, "tail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 48, &v0);
            v12 = &v17;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_636910;
            v2 = 2;
            v7 = 0;
            v4 = &v12;
            v6 = 1;
            std::io::stdio::_eprint(&v0);
            ::0x4f5980::core::ptr::drop_in_place<alloc::string::String>(&v17);
            uucore::mods::error::set_exit_code(1);
            a0->field_8d = 1;
            v0.with_opt(v11, v46, &v32, 0);
            v17.unwrap(&v0, &g_636968);
            *((double *)&v10) = v17.new();
            ::0x4f5940::core::ptr::drop_in_place<notify::error::Error>(&v39);
            v45 = &g_636980;
            v44 = v10;
        }
    }
    ::0x4f5e60::core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(a0);
    a0->field_0 = (long long)v24;
    a0->field_8 = v25;
    a0->field_10 = v44;
    a0->field_18 = v45;
    v47 = a0.init_files(&a1->padding_0[24]);
    if (v47)
        return v47;
    return 0;
}
