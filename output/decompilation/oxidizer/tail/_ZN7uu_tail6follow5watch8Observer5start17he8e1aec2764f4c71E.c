fn uu_tail::follow::watch::Observer::start(a0: i64, a1: i64) -> long long {
    let v0: u32;  // [bp-0x1cc]
    let v1: struct32;  // [bp-0x1c8], Other Possible Types: struct64, u128
    let v3: u64;  // [bp-0x1c0]
    let v4: u128;  // [bp-0x1b8]
    let v5: i64;  // [bp-0x1b0]
    let v6: Result<struct24, struct24>;  // [bp-0x1a8]
    let v7: struct712;  // [bp-0x198]
    let v8: u64;  // [bp-0x188]
    let v9: core::fmt::rt::Argument;  // [bp-0x180]
    let v10: u64;  // [bp-0x178]
    let v11: core::fmt::rt::Argument;  // [bp-0x170]
    let v12: u64;  // [bp-0x168]
    let v13: u64;  // [bp-0x160]
    let v14: u8;  // [bp-0x158]
    let v15: struct24;  // [bp-0x150]
    let v16: iNone;  // [bp-0x138]
    let v17: struct712;  // [bp-0x128]
    let v18: u64;  // [bp-0x118]
    let v19: u64;  // [bp-0x110]
    let v20: u32;  // [bp-0x108]
    let v21: u16;  // [bp-0x100]
    let v22: core::result::Result<i32, core::num::error::ParseIntError>;  // [bp-0xf8], Other Possible Types: struct28, struct64
    let v23: u64;  // [bp-0xf0]
    let v24: struct24;  // [bp-0xb0]
    let v25: struct24;  // [bp-0x98]
    let v26: u64;  // [bp-0x88]
    let v27: struct24;  // [bp-0x80]
    let v28: u64;  // [bp-0x70]
    let v34: u64;  // rbp
    let v35: struct24;  // r13
    let v36: u64;  // r12
    let v37: u64;  // r13
    let v38: u64;  // r15
    let v39: core::fmt::rt::Argument;  // rbp
    let v40: u64;  // rdx
    let v41: struct32;  // eax
    let v43: u128;  // xmm0

    if *((a1 + 76) as &i8) == 2 {
        return 0;
    }
    v1 = std::sync::mpmc::channel();
    v34 = v1.field_0;
    v35 = v3;
    v36 = v4;
    v24 = v35;
    v10 = v36;
    v9 = v5;
    v11 = v9;
    v19 = *((a1 + 48) as &i64);
    v20 = *((a1 + 56) as &i32);
    v21 = 257;
    if *((a0 + 141) as &i8) {
        *((a0 + 141) as &i8) = 1;
        v1 = notify::poll::PollWatcher::with_opt(v34, v35, &v19);
        v22 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
        v37 = alloc::boxed::Box<T>::new(&v22) as u64;
        v38 = &g_573538;
        v39 = v9;
    } else {
        v18 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(v34, v35);
        v12 = v18;
        v13 = v40;
        v41 = <notify::inotify::INotifyWatcher as notify::Watcher>::new(&v14, v34, v35, 1);
        if *(&v14 as &i32) == 6 {
            v25 = v15;
            v0 = v26 & -0x100 | 1;
            v37 = alloc::boxed::Box<T>::new(&v25) as u64;
            v38 = &g_5734e0;
            v39 = v9;
        } else {
            v0 = v41 & -0x100 | 1;
            v1 = <T as alloc::string::SpecToString>::spec_to_string(&v14);
            if !core::slice::<impl [T]>::starts_with(v3, v4, "Too many open files") {
                v7 = v17;
                v43 = *(&v14 as &i128);
                v6 = v16;
                v4 = *(&v15.field_0 as &i128);
                v1 = v43;
                v27 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
                v22 = struct28 {
                    field_0: *(&v27.field_0 as &i128)
                    field_16: v28
                    field_24: 1
                };
                return alloc::boxed::Box<T>::new(&v22) as u64;
            }
            v22 = uucore::util_name();
            v23 = v40;
            eprint!("{}: ", &v22);
            eprintln!("{} cannot be used, reverting to polling: Too many open files", "inotify");
            uucore::mods::error::set_exit_code(1);
            *((a0 + 141) as &i8) = 1;
            v1 = notify::poll::PollWatcher::with_opt(v18, v40, &v19);
            v22 = core::result::Result<T,E>::unwrap(&v1, "src/uu/tail/src/follow/watch.rs");
            v8 = alloc::boxed::Box<T>::new(&v22) as u64;
            v0 = 0;
            v36 = v10;
            v39 = v11;
            v38 = &g_573538;
            v37 = v8;
        }
    }
    *(a0 as &u64) = v36;
    *((a0 + 8) as &core::fmt::rt::Argument) = v39;
    *((a0 + 16) as &u64) = v37;
    *((a0 + 24) as &u64) = v38;
    return uu_tail::follow::watch::Observer::init_files(a0, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
}
