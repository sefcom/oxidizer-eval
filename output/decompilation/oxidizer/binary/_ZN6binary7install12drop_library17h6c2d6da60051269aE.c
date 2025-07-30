fn binary::install::drop_library() -> : struct24 {
    let a0: i64;  // rdi
    let v0: std::fs::File;  // [bp-0xcc]
    let v1: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xc8], Other Possible Types: struct_0 *
    let v2: alloc::borrow::Cow<str>;  // [bp-0xc0], Other Possible Types: u64
    let v3: struct40;  // [bp-0xb8]
    let v4: core::num::niche_types::I32NotAllOnes;  // [bp-0x90], Other Possible Types: u64
    let v5: core::fmt::Arguments;  // [bp-0x88], Other Possible Types: u64
    let v6: std::fs::File;  // [bp-0x80], Other Possible Types: struct_0 *
    let v7: u64;  // [bp-0x78]
    let v8: core::fmt::rt::Argument;  // [bp-0x70], Other Possible Types: void*
    let v9: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x60], Other Possible Types: u64
    let v10: std::fs::File;  // [bp-0x5c]
    let v11: u64;  // [bp-0x58]
    let v12: std::path::PathBuf;  // [bp-0x50]
    let v13: u64;  // [bp-0x48]
    let v14: u64;  // [bp-0x40]
    let v15: Result<struct4, struct8>;  // [bp-0x38], Other Possible Types: u128
    let v16: struct24;  // [bp-0x28]
    let v17: u64;  // [bp-0x20]
    let v19: u64;  // rdx
    let v21: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if core::sync::atomic::atomic_load() >= 3 {
        v4 = "📦 Dropping library...";
        v5 = 1;
        v6 = 8;
        v7 = 0;
        v3 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v4, 3, &v3);
    }
    v16 = binary::install::find_library_path();
    v12 = std::path::Path::join(v17, v16.field_16, "libcext.so.2");
    v9 = std::fs::File::create(&v12, v19);
    match v9 {
        Err(_) => {
            if !core::sync::atomic::atomic_load() {
                return struct24 {
                    field_0: *(&v12.inner.inner.inner.buf.inner.cap as &i128)
                    field_16: v14
                };
            }
            v15 = *(&v12.inner.inner.inner.buf.inner.ptr as &i128);
            v1 = &v15;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v4 = "⚠️ Failed to create library file at ";
            v5 = 1;
            v8 = 0;
            v6 = &v1;
            v7 = 1;
            v3 = struct40 {
                field_0: "binary::install"
                field_16: "binary::install"
                field_32: log::__private_api::loc("binary/src/install.rs")
            };
            log::__private_api::log(&v4, 1, &v3);
            return struct24 {
                field_0: *(&v12.inner.inner.inner.buf.inner.cap as &i128)
                field_16: v14
            };
        },
        Ok(v0) => {
            v21 = <std::process::ChildStdin as std::io::Write>::write(&v0, &g_45047a, &g_16ad178);
            v9 = v21 as i64 as u64;
            v11 = *((&v21 as &char + 8) as &i64);
            if let Err(_) = v21 {
                if core::sync::atomic::atomic_load() {
                    v15 = *(&v12.inner.inner.inner.buf.inner.ptr as &i128);
                    v1 = &v15;
                    v2 = <std::path::Display as core::fmt::Display>::fmt;
                    v4 = "⚠️ Failed to write library contents to ";
                    v5 = 1;
                    v8 = 0;
                    v6 = &v1;
                    v7 = 1;
                    v3 = struct40 {
                        field_0: "binary::install"
                        field_16: "binary::install"
                        field_32: log::__private_api::loc("binary/src/install.rs")
                    };
                    log::__private_api::log(&v4, 1, &v3);
                }
            }
            v4 = std::fs::set_permissions(&v12, 511);
            if v4 && core::sync::atomic::atomic_load() {
                v15 = *(&v13 as &i128);
                v1 = &v15;
                v2 = <std::path::Display as core::fmt::Display>::fmt;
                v4 = "⚠️ Failed to set permissions for ";
                v5 = 1;
                v8 = 0;
                v6 = &v1;
                v7 = 1;
                v3 = struct40 {
                    field_0: "binary::install"
                    field_16: "binary::install"
                    field_32: log::__private_api::loc("binary/src/install.rs")
                };
                log::__private_api::log(&v4, 1, &v3);
            }
            if core::sync::atomic::atomic_load() <= 2 {
                return struct24 {
                    field_0: *(&v12.inner.inner.inner.buf.inner.cap as &i128)
                    field_16: v14
                };
            }
            v15 = *(&v13 as &i128);
            v1 = &v15;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v4 = "✅ Library dropped at ";
            v5 = 1;
            v8 = 0;
            v6 = &v1;
            v7 = 1;
            v3 = struct40 {
                field_0: "binary::install"
                field_16: "binary::install"
                field_32: log::__private_api::loc("binary/src/install.rs")
            };
            log::__private_api::log(&v4, 3, &v3);
            return struct24 {
                field_0: *(&v12.inner.inner.inner.buf.inner.cap as &i128)
                field_16: v14
            };
        },
    }
}
