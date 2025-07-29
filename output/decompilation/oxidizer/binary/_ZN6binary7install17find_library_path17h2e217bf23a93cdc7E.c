fn binary::install::find_library_path() -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct40;  // [bp-0xe0]
    let v1: u64;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: i64;  // [bp-0xa8], Other Possible Types: u64
    let v4: u128;  // [bp-0xa0]
    let v5: void*;  // [bp-0x98]
    let v6: u8;  // [bp-0x88]
    let v7: i8;  // [bp-0x80]
    let v8: u64;  // [bp-0x78]
    let v9: i64;  // [bp-0x70]
    let v10: u64;  // [bp-0x68]
    let v11: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x60]
    let v12: u32;  // [bp-0x58]
    let v13: u32;  // [bp-0x50]
    let v14: u128;  // [bp-0x48]
    let v15: u128;  // [bp-0x38]
    let v16: u128;  // [bp-0x20]
    let v18: u32;  // eax
    let v19: u64;  // r14

    if core::sync::atomic::atomic_load() >= 3 {
        v1 = "🔍 Finding library path...";
        v2 = 1;
        v3 = 8;
        v4 = 0;
        v0 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v1, 3, &v0);
    }
    v15 = 0;
    v14 = 0;
    v18 = dladdr(&strerror, &v14);
    v19 = v14;
    if (!v19 | !v18) != 1 {
        v11 = core::ffi::c_str::CStr::to_str(v19, strlen(v19) + 1);
        if let Ok(_) = v11 {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, v12, v13);
            std::path::PathBuf::pop(&v6);
            if core::sync::atomic::atomic_load() < 3 {
                return struct24 {
                    field_0: *(&v6 as &i128)
                    field_16: v8
                };
            }
            v16 = *(&v7 as &i128);
            v9 = &v16;
            v10 = <std::path::Display as core::fmt::Display>::fmt;
            v1 = "✅ Library path found: ";
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            v0 = struct40 {
                field_0: "binary::install"
                field_16: "binary::install"
                field_32: log::__private_api::loc("binary/src/install.rs")
            };
            log::__private_api::log(&v1, 3, &v0);
            return struct24 {
                field_0: *(&v6 as &i128)
                field_16: v8
            };
        }
    }
    if core::sync::atomic::atomic_load() > 1 {
        v1 = "⚠️ Failed to find library path, defaulting to /lib";
        v2 = 1;
        v3 = 8;
        v4 = 0;
        v0 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v1, 2, &v0);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "/lib");
    return;
}
