long long uu_tail::follow::watch::Observer::start(struct_0 *a0, struct_1 *a1)
{
    unsigned int v0;  // [bp-0x1cc]
    int v1;  // [bp-0x1c8], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0x1c0]
    int v3;  // [bp-0x1b8], Other Possible Types: char *, unsigned long long
    unsigned long long v4;  // [bp-0x1b0]
    void* v5;  // [bp-0x1a8]
    unsigned long long v6;  // [bp-0x198]
    unsigned long long v7;  // [bp-0x188]
    unsigned long long v8;  // [bp-0x180]
    unsigned long long v9;  // [bp-0x178]
    unsigned long long v10;  // [bp-0x170]
    unsigned long long v11;  // [bp-0x168]
    unsigned long long v12;  // [bp-0x160]
    char v13;  // [bp-0x158]
    char v14;  // [bp-0x150]
    char v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    int v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x128]
    unsigned long long v19;  // [bp-0x118]
    unsigned long v20;  // [bp-0x110]
    unsigned int v21;  // [bp-0x108]
    unsigned short v22;  // [bp-0x100]
    char v23;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0xf0]
    unsigned long long v25;  // [bp-0xe8]
    unsigned int v26;  // [bp-0xe0]
    unsigned long long v27;  // [bp-0xb0]
    char *v28;  // [bp-0xa8]
    unsigned long long v29;  // [bp-0xa0]
    char v30;  // [bp-0x98]
    unsigned long long v31;  // [bp-0x88]
    char v32;  // [bp-0x80]
    unsigned long long v33;  // [bp-0x70]
    char v34;  // [bp-0x68]
    char v35;  // [bp-0x58]
    int v36;  // [bp-0x48]
    unsigned long long v37;  // [bp-0x38]
    unsigned long long v39;  // rbp
    unsigned long long v40;  // r13
    unsigned long long v41;  // r12
    unsigned long long v42;  // r13
    unsigned long long v43;  // r15
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rdx
    unsigned int v46;  // eax
    char v47;  // al
    int v48;  // xmm0
    unsigned long long v49;  // rax

    if (a1->field_4c == 2)
        return 0;
    std::sync::mpmc::channel(&v1);
    v39 = v1;
    v40 = v2;
    v41 = v3;
    v27 = v40;
    v9 = v41;
    v8 = v4;
    v10 = v8;
    v20 = a1->field_30;
    v21 = a1->field_38;
    v22 = 257;
    if (a0->field_8d)
    {
        a0->field_8d = 1;
        v1.with_opt(v39, v40, &v20);
        v23.unwrap(&v1, &g_573568);
        v42 = v23.new();
        v43 = &g_573538;
        v44 = v8;
    }
    else
    {
        v19 = v39.clone(v40);
        v11 = v19;
        v12 = v45;
        v46 = v13.new(v39, v40, 1);
        if (*((int *)&v13) == 6)
        {
            v31 = v16;
            memcpy(&v30, &v14, 16);
            v0 = (unsigned int)v31 & 0xffffff00 | 1;
            v42 = v30.new();
            core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v11);
            v43 = &g_5734e0;
            v44 = v8;
        }
        else
        {
            v0 = v46 & 0xffffff00 | 1;
            v1.spec_to_string(&v13);
            v47 = core::slice::<impl [T]>::starts_with(v2, v3, "Too many open files cannot be used, reverting to polling: Too many open files\ninotifysrc/uu/tail/src/follow/watch.rs has become accessible\n has appeared;  following new file\n has been replaced;  following new file\n: file truncated\n has been replaced with an untailable file\n has been replaced with an untailable file; giving up on this name\n", 19);
            core::ptr::drop_in_place<alloc::string::String>(&v1);
            if (!v47)
            {
                v6 = v18;
                v48 = *((int128_t *)&v13);
                memcpy(&(char)v5, &v17, 16);
                *((int128_t *)&v3) = *((int128_t *)&v15);
                v1 = v48;
                v32.spec_to_string(&v1);
                v26 = 1;
                memcpy(&(char)v23, &v32, 16);
                v25 = v33;
                v49 = (char)v23.new();
                v0 = (unsigned int)v49 & 0xffffff00 | 1;
                core::ptr::drop_in_place<notify::error::Error>(&v1);
                core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v11);
                core::ptr::drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v9);
                return v49;
            }
            v37 = v18;
            v36 = v17;
            memcpy(&v35, &v15, 16);
            memcpy(&v34, &v13, 16);
            v23 = uucore::util_name();
            v24 = v45;
            v28 = &v23;
            v29 = <&T as core::fmt::Display>::fmt;
            v1 = &g_5734a0;
            v2 = 2;
            v5 = 0;
            v3 = &v28;
            v4 = 1;
            std::io::stdio::_eprint(&v1);
            v23 = &g_573510;
            v24 = <&T as core::fmt::Display>::fmt;
            v1 = &g_5734c0;
            v2 = 2;
            v5 = 0;
            v3 = &v23;
            v4 = 1;
            std::io::stdio::_eprint(&v1);
            uucore::mods::error::set_exit_code(1);
            a0->field_8d = 1;
            v1.with_opt(v19, v45, &v20);
            v23.unwrap(&v1, &g_573520);
            *((double *)&v7) = v23.new();
            v0 = 0;
            core::ptr::drop_in_place<notify::error::Error>(&v34);
            v41 = v9;
            v44 = v10;
            v43 = &g_573538;
            v42 = v7;
        }
    }
    core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(a0);
    a0->field_0 = v41;
    a0->field_8 = v44;
    a0->field_10 = v42;
    a0->field_18 = v43;
    return a0.init_files(a1->field_20, a1->field_28);
}
