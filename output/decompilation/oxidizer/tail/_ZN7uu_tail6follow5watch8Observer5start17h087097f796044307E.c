fn uu_tail::follow::watch::Observer::start(a0: &struct32, a1: void*) -> u64 {
    let v0: i32;  // [sp-0x1ac]
    let v1: struct48;  // [sp-0x1a8], Other Possible Types: struct24, struct32, int, unsigned long
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198], Other Possible Types: int
    let v4: iNone;  // [bp-0x188]
    let v5: i64;  // [sp-0x178]
    let v6: i64;  // [sp-0x160]
    let v7: struct32;  // [sp-0x150], Other Possible Types: unsigned long
    let v8: i64;  // [sp-0x148]
    let v9: Result<struct56, struct24>;  // [sp-0x130]
    let v10: struct40;  // [sp-0xf8], Other Possible Types: int
    let v11: iNone;  // [bp-0xe8]
    let v12: iNone;  // [sp-0xd8]
    let v13: i64;  // [sp-0xc8]
    let v14: i64;  // [sp-0xb8]
    let v15: i32;  // [sp-0xb0]
    let v16: i8;  // [sp-0xa8]
    let v17: struct40;  // [sp-0x90]
    let v18: i64;  // [sp-0x88]
    let v19: iNone;  // [sp-0x68]
    let v20: struct24;  // [sp-0x48]
    let v22: i64;  // rax
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm0
    let v25: iNone;  // xmm1
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // r13
    let v29: i64;  // r15
    let v30: i64;  // r12

    if *((a1 + 76) as &i8) == 2 {
        return 0;
    }
    v1 = std::sync::mpmc::channel();
    v7 = v1;
    v22 = *((a1 + 48) as &i64);
    v14 = v22;
    v15 = *((a1 + 56) as &i32);
    v16 = 1;
    if *((a0 + 141) as &i8) {
        *((a0 + 141) as &i8) = 1;
        v0 = (v22 & -0x100 | 1) as u32;
        v1 = notify::poll::PollWatcher::new(v1, v8, &v14);
        v10 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
        alloc::boxed::Box<T>::new(&v10);
    } else {
        v0 = (v22 & -0x100 | 1) as u32;
        v6 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(&v7);
        v9 = notify::inotify::INotifyWatcher::from_event_handler(alloc::boxed::Box<T>::new(v7, v8), &g_5bbe60);
        match v9 {
            Err(v19) => {
            },
            Ok(_) => {
                v1 = <T as alloc::string::ToString>::to_string(&v9);
                if !core::slice::<impl [T]>::starts_with(v2, v3, "Too many open files") as i8 {
                    v5 = *((&v9 as &char + 48) as &i64);
                    v24 = v9 as i128;
                    v25 = *((&v9 as &char + 16) as &i128);
                    *(&v4 as &i128) = *((&v9 as &char + 32) as &i128);
                    v3 = v25;
                    v1 = v24;
                    v20 = <T as alloc::string::ToString>::to_string(&v1);
                    v19 as u224 = *(&v20 as &i224);
                    v27 = alloc::boxed::Box<T>::new(&v19);
                    return v27;
                }
                v13 = *((&v9 as &char + 48) as &i64);
                v23 = v9 as i128;
                v12 = *((&v9 as &char + 32) as &i128);
                *(&v11 as &i128) = *((&v9 as &char + 16) as &i128);
                v10 = v23;
                v18 = v26;
                show_error!("{} cannot be used, reverting to polling: Too many open files", "inotify");
                uucore::mods::error::set_exit_code(1);
                *((a0 + 141) as &i8) = 1;
                v1 = notify::poll::PollWatcher::new(v6, v26, &v14);
                v17 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
            },
        }
    }
    *(a0 as &unsigned long) = v28;
    *((a0 + 8) as &unsigned long) = v29;
    *((a0 + 16) as &unsigned long) = v30;
    *((a0 + 24) as &i32) = vvar_21{reg 56};
    v0 = 0;
    v27 = uu_tail::follow::watch::Observer::init_files(a0, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
    if v27 {
        return v27;
    }
}
