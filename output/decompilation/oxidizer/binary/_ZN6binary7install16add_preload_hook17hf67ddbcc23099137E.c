fn binary::install::add_preload_hook(a0: i64) {
    let v0: u32;  // [bp-0xac]
    let v1: Result<struct4, struct8>;  // [bp-0xa8], Other Possible Types: u64
    let v2: u64;  // [bp-0xa8]
    let v3: core::fmt::Arguments;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa8]
    let v6: u32;  // [bp-0xa4]
    let v7: u64;  // [bp-0xa0]
    let v8: i64;  // [bp-0x98], Other Possible Types: u64
    let v9: u128;  // [bp-0x90]
    let v10: void*;  // [bp-0x88]
    let v11: core::fmt::rt::Argument;  // [bp-0x78], Other Possible Types: struct40, u128
    let v12: u64;  // [bp-0x78]
    let v13: u64;  // [bp-0x78]
    let v14: struct4;  // [bp-0x78]
    let v15: u128;  // [bp-0x78]
    let v16: core::fmt::rt::Argument;  // [bp-0x68]
    let v17: u128;  // [bp-0x68]
    let v18: void*;  // [bp-0x50], Other Possible Types: u128
    let v19: u64;  // [bp-0x48]
    let v20: void*;  // [bp-0x40]
    let v21: core::fmt::rt::Argument;  // [bp-0x38], Other Possible Types: struct_0 *, u64
    let v22: u64;  // [bp-0x38]
    let v23: u64;  // [bp-0x30]
    let v24: u128;  // [bp-0x28]
    let v27: u64;  // rdx
    let v28: u64;  // rax
    let v31: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if core::sync::atomic::atomic_load() > 2 {
        v18 = *((a0 + 8) as &i128);
        v21 = &v18;
        v23 = <std::path::Display as core::fmt::Display>::fmt;
        *(&v1 as &&str) = "🔧 Adding preload hook for library at: ";
        v7 = 1;
        v10 = 0;
        v8 = &v21;
        v9 = 1;
        v11 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v1, 3, &v11);
    }
    v18 = 0;
    v19 = 1;
    v20 = 0;
    v1 = std::fs::File::open("/etc/ld.so.preload");
    v13 = v12;
    if let Ok(v14) = v1 {
        v31 = <std::fs::File as std::io::Read>::read_to_string(&v14 as u64, &v18);
        core::result::Result<T,E>::unwrap(v31 as i8, *((&v31 as &char + 8) as &i64));
    }
    v28 = core::str::<impl str>::trim_end_matches(v19, v20);
    v2 = alloc::string::String::from_utf8_lossy(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    if !<&str as core::str::pattern::Pattern>::is_contained_in(v7, v8, v28, v27) {
        v1 = std::fs::File::create("/etc/ld.so.preload");
        v0 = core::result::Result<T,E>::unwrap(&v1);
        core::str::<impl str>::trim_end_matches(v19, v20);
        if v27 {
            v24 = *((a0 + 8) as &i128);
            v21 = core::str::<impl str>::trim_end_matches(v19, v20);
            v23 = v27;
            v11 = core::fmt::rt::Argument {
                ty: &v24
            };
            v16 = core::fmt::rt::Argument {
                ty: &v21
            };
            v3 = core::fmt::Arguments {
                pieces: [&g_1ce6b18, ";", "\n"]
                args: [v15, v17]
                fmt: 0
            };
            core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(&v0, &v3), "binary/src/install.rs");
        } else {
            v11 = *((a0 + 8) as &i128);
            v21 = core::fmt::rt::Argument {
                ty: &v11 as u64
            };
            v5 = core::fmt::Arguments {
                pieces: [&g_1ce6b48, "\n"]
                args: [v22]
                fmt: 0
            };
            core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(&v0, &v5), "binary/src/install.rs");
        }
        if core::sync::atomic::atomic_load() > 2 {
            *(&v5 as &&str) = "✅ Preload hook added successfully.";
            v7 = 1;
            v8 = 8;
            v9 = 0;
            v11 = struct40 {
                field_0: "binary::install"
                field_16: "binary::install"
                field_32: log::__private_api::loc("binary/src/install.rs")
            };
            log::__private_api::log(&v5, 3, &v11);
        }
    } else if core::sync::atomic::atomic_load() >= 3 {
        *(&v2 as &&str) = "ℹ️ Preload hook already exists.";
        v7 = 1;
        v8 = 8;
        v9 = 0;
        v11 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v2, 3, &v11);
    }
    return;
}
