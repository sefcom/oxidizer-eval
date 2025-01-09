fn uu_tail::follow::watch::Observer::start(a0: &struct32, a1: void*) -> u64 {
    let v0: i32;  // [sp-0x1ac]
    let v1: i128;  // [sp-0x1a8], Other Possible Types: struct48, struct32, struct24
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198]
    let v4: i128;  // [bp-0x188]
    let v5: i64;  // [sp-0x178]
    let v7: i64;  // [sp-0x160]
    let v8: i64;  // [sp-0x150], Other Possible Types: struct32
    let v9: i64;  // [sp-0x148]
    let v10: i448;  // [sp-0x130], Other Possible Types: struct56
    let v11: i320;  // [sp-0xf8], Other Possible Types: struct40, struct28
    let v12: i128;  // [bp-0xe8]
    let v13: i128;  // [sp-0xd8]
    let v14: i64;  // [sp-0xc8]
    let v15: i64;  // [sp-0xb8]
    let v16: i32;  // [sp-0xb0]
    let v17: i8;  // [sp-0xa8]
    let v18: i320;  // [sp-0x90], Other Possible Types: struct40
    let v19: i64;  // [sp-0x88]
    let v20: struct24;  // [bp-0x68]
    let v21: struct24;  // [sp-0x48]
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rbp
    let v26: i64;  // rcx
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i128;  // xmm1
    let v30: i64;  // rdx
    let v31: i64;  // rax
    let v33: i64;  // r15

    if *((a1 + 76) as &i8) == 2 {
        return 0;
    }
    v1 = std::sync::mpmc::channel();
    v8 = v1;
    v23 = *((a1 + 48) as &i64);
    v15 = v23;
    v16 = *((a1 + 56) as &i32);
    v17 = 1;
    if *((a0 + 141) as &i8) {
        *((a0 + 141) as &i8) = 1;
        v0 = v23 | -0x100 | 1;
        v1 = notify::poll::PollWatcher::new(v1, v9, &v15);
        v11 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
        v24 = alloc::boxed::Box<T>::new(&v11);
        v25 = &g_5bbed8;
    } else {
        v0 = v23 | -0x100 | 1;
        v7 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(&v8);
        v10 = notify::inotify::INotifyWatcher::from_event_handler(alloc::boxed::Box<T>::new(v8, v9), &g_5bbe60);
        if v10 == 6 {
            v20 = struct24 {
                field_0: *((&v10 as &char + 8) as &i128)
                field_16: *((&v10 as &char + 24) as &i64)
            };
            v24 = alloc::boxed::Box<T>::new(&v20);
            v0 = v26 | -0x100 | 1;
            v25 = &g_5bbe80;
        } else {
            v1 = <T as alloc::string::ToString>::to_string(&v10);
            if !core::slice::<impl [T]>::starts_with(v2, v3, "Too many open files") as i8 {
                v5 = *((&v10 as &char + 48) as &i64);
                v28 = v10;
                v29 = *((&v10 as &char + 16) as &i128);
                v4 = *((&v10 as &char + 32) as &i128);
                v3 = v29;
                v1 = v28;
                v21 = <T as alloc::string::ToString>::to_string(&v1);
                v11 = struct28 {
                    field_0: v21
                    field_16: *((&v21 as &char + 16) as &i64)
                    field_24: 1
                };
                v31 = alloc::boxed::Box<T>::new(&v11);
                v0 = core::ptr::drop_in_place<notify::error::Error>(&v1) | -0x100 | 1;
                return v31;
            }
            v14 = *((&v10 as &char + 48) as &i64);
            v27 = v10;
            v13 = *((&v10 as &char + 32) as &i128);
            v12 = *((&v10 as &char + 16) as &i128);
            v11 = v27;
            v18 = uucore::util_name();
            v19 = v30;
            eprint!("{:?}: ", &v18);
            eprintln!("{:?} cannot be used, reverting to polling: Too many open files", "inotify");
            uucore::mods::error::set_exit_code(1);
            *((a0 + 141) as &i8) = 1;
            v1 = notify::poll::PollWatcher::new(v7, v30, &v15);
            v18 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
            v24 = alloc::boxed::Box<T>::new(&v18);
            v25 = &g_5bbed8;
        }
    }
    v33 = *((&v8 as &char + 24) as &i64);
    *(a0 as &i64) = *((&v8 as &char + 16) as &i64);
    *((a0 + 8) as &i64) = v33;
    *((a0 + 16) as &i64) = v24;
    *((a0 + 24) as &i64) = v25;
    v0 = 0;
    v31 = uu_tail::follow::watch::Observer::init_files(a0, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
    if v31 {
        return v31;
    }
}
