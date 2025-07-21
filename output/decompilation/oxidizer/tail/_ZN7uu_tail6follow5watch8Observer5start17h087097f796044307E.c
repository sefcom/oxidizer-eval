fn uu_tail::follow::watch::Observer::start(a0: &struct32, a1: i64) -> long long {
    let v0: u32;  // [bp-0x1ac]
    let v1: struct32;  // [bp-0x1a8], Other Possible Types: struct48
    let v3: u128;  // [bp-0x1a8]
    let v4: u64;  // [bp-0x1a0]
    let v5: u64;  // [bp-0x198]
    let v6: u128;  // [bp-0x188]
    let v7: u64;  // [bp-0x178]
    let v8: u64;  // [bp-0x168]
    let v9: alloc::borrow::Cow<str>;  // [bp-0x160]
    let v10: u64;  // [bp-0x150]
    let v11: u64;  // [bp-0x148]
    let v12: u128;  // [bp-0x140]
    let v13: u64;  // [bp-0x138]
    let v14: struct56;  // [bp-0x130]
    let v15: struct24;  // [bp-0x128]
    let v16: u128;  // [bp-0x110]
    let v17: u64;  // [bp-0x100]
    let v18: struct32;  // [bp-0xf8], Other Possible Types: struct40, u128
    let v19: u128;  // [bp-0xe8]
    let v20: u128;  // [bp-0xd8]
    let v21: u64;  // [bp-0xc8]
    let v22: struct16;  // [bp-0xb8]
    let v23: struct40;  // [bp-0x90], Other Possible Types: u64
    let v24: u64;  // [bp-0x88]
    let v25: struct24;  // [bp-0x68]
    let v26: struct24;  // [bp-0x48]
    let v28: u64;  // rax
    let v30: core::fmt::Arguments;  // rbp
    let v31: u64;  // r12
    let v32: u32;  // ecx
    let v33: u128;  // xmm0
    let v34: u128;  // xmm0
    let v35: u64;  // rdx
    let v36: u64;  // rax
    let v37: u64;  // rax

    v1 = std::sync::mpmc::channel();
    v10 = v1.field_0;
    v11 = v4;
    v12 = *(&v1.field_16 as &i128);
    v28 = *((a1 + 48) as &i64);
    v22 = struct16 {
        field_0: v28
        field_8: *((a1 + 56) as &i32)
        field_16: <UNKNOWN>
    };
    if *((a0 + 141) as &i8) {
        *((a0 + 141) as &i8) = 1;
        v0 = v28 & -0x100 | 1;
        v1 = notify::poll::PollWatcher::new(v1.field_0, v4, &v22);
        v18 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
        v30 = &g_5bbed8.pieces.ptr;
        v31 = alloc::boxed::Box<T>::new(&v18);
    } else {
        v9 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(&v10);
        v14 = notify::inotify::INotifyWatcher::from_event_handler(alloc::boxed::Box<T>::new(v10, v11), &g_5bbe60);
        if v14.field_0 as i32 == 6 {
            v25 = v15;
            v0 = v32 & -0x100 | 1;
            v30 = &g_5bbe80.pieces.ptr;
            v31 = alloc::boxed::Box<T>::new(&v25);
        } else {
            v3 = <T as alloc::string::ToString>::to_string(&v14);
            if !core::slice::<impl [T]>::starts_with(v4, v5, "Too many open files") {
                v7 = v17;
                v34 = v14.field_0;
                v6 = v16;
                v5 = v14.field_16;
                v3 = v34;
                v26 = <T as alloc::string::ToString>::to_string(&v3);
                v18 = struct32 {
                    field_0: v26.field_0
                    field_16: v26.field_16
                    field_24: 1
                };
                v36 = alloc::boxed::Box<T>::new(&v18);
                v0 = core::ptr::drop_in_place<notify::error::Error>(&v3) as i32 & -0x100 | 1;
                return v36;
            }
            v21 = v17;
            v33 = v14.field_0;
            v20 = v16;
            v19 = v14.field_16;
            v18 = v33;
            v23 = uucore::util_name();
            v24 = v35;
            eprint!("{}: ", &v23);
            eprintln!("{} cannot be used, reverting to polling: Too many open files", "inotify");
            uucore::mods::error::set_exit_code(1);
            *((a0 + 141) as &i8) = 1;
            v1 = notify::poll::PollWatcher::new(v9, v35, &v22);
            v23 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
            v8 = alloc::boxed::Box<T>::new(&v23);
            v30 = &g_5bbed8.pieces.ptr;
            v31 = v8;
        }
    }
    v0 = 0;
    return struct32 {
        field_0: v12 as i64
        field_8: v13
        field_16: v31
        field_24: v30
    };
    return v37;
}
