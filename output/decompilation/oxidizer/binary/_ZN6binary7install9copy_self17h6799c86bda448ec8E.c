fn binary::install::copy_self() {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xb8], Other Possible Types: std::fs::File, u64
    let v1: struct24;  // [bp-0xb8]
    let v2: Result<struct4, struct8>;  // [bp-0xb0], Other Possible Types: u64
    let v3: alloc::borrow::Cow<str>;  // [bp-0xa8], Other Possible Types: struct_0 *, u64
    let v4: u64;  // [bp-0xa0]
    let v5: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x98], Other Possible Types: void*
    let v6: struct24;  // [bp-0x88], Other Possible Types: struct40
    let v7: i64;  // [bp-0x60]
    let v8: u64;  // [bp-0x58]
    let v9: struct16;  // [bp-0x50]
    let v10: u128;  // [bp-0x50]
    let v11: u128;  // [bp-0x50]
    let v12: u128;  // [bp-0x50]
    let v13: std::path::PathBuf;  // [bp-0x40]
    let v14: u128;  // [bp-0x38]
    let v15: struct24;  // [bp-0x28]
    let v16: u64;  // [bp-0x20]
    let v17: u64;  // [bp-0x18]
    let v19: u64;  // rdx

    if core::sync::atomic::atomic_load() >= 3 {
        v0 = "📂 Copying executable to /var/log/cross/";
        v2 = 1;
        v3 = 8;
        v4 = 0;
        v6 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v0, 3, &v6);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v0, "/var/log/cross/");
    v15 = v1;
    v0 = std::fs::create_dir_all(&v15);
    if !v0 {
        v0 = std::fs::set_permissions(&v15, 511);
        if v0 {
            if core::sync::atomic::atomic_load() {
                v0 = "⚠️ Failed to set permissions for /var/log/cross/";
                v2 = 1;
                v3 = 8;
                v4 = 0;
                v6 = struct40 {
                    field_0: "binary::install"
                    field_16: "binary::install"
                    field_32: log::__private_api::loc("binary/src/install.rs")
                };
                log::__private_api::log(&v0, 1, &v6);
            }
        } else {
            v13 = std::path::Path::join(v16, v17, "auto-color");
            v0 = std::env::current_exe();
            v6 = core::result::Result<T,E>::unwrap(&v0);
            v11 = struct16 {
                field_0: std::fs::copy(&v6, &v13)
                field_8: v19
            };
            if v9.field_0 {
                if core::sync::atomic::atomic_load() {
                    v10 = v14;
                    v7 = &v11;
                    v8 = <std::path::Display as core::fmt::Display>::fmt;
                    v0 = "⚠️ Failed to copy executable to ";
                    v2 = 1;
                    v5 = 0;
                    v3 = &v7;
                    v4 = 1;
                    v6 = struct40 {
                        field_0: "binary::install"
                        field_16: "binary::install"
                        field_32: log::__private_api::loc("binary/src/install.rs")
                    };
                    log::__private_api::log(&v0, 1, &v6);
                }
            } else {
                v0 = std::fs::set_permissions(&v13, 511);
                if v0 {
                    if core::sync::atomic::atomic_load() {
                        v11 = v14;
                        v7 = &v11;
                        v8 = <std::path::Display as core::fmt::Display>::fmt;
                        v0 = "⚠️ Failed to set permissions for ";
                        v2 = 1;
                        v5 = 0;
                        v3 = &v7;
                        v4 = 1;
                        v6 = struct40 {
                            field_0: "binary::install"
                            field_16: "binary::install"
                            field_32: log::__private_api::loc("binary/src/install.rs")
                        };
                        log::__private_api::log(&v0, 1, &v6);
                    }
                } else {
                    if core::sync::atomic::atomic_load() >= 3 {
                        v12 = v14;
                        v7 = &v11;
                        v8 = <std::path::Display as core::fmt::Display>::fmt;
                        v0 = "✅ Executable copied successfully to ";
                        v2 = 1;
                        v5 = 0;
                        v3 = &v7;
                        v4 = 1;
                        v6 = struct40 {
                            field_0: "binary::install"
                            field_16: "binary::install"
                            field_32: log::__private_api::loc("binary/src/install.rs")
                        };
                        log::__private_api::log(&v0, 3, &v6);
                    }
                }
            }
        }
    } else if core::sync::atomic::atomic_load() {
        v0 = "⚠️ Failed to create directory at /var/log/cross/";
        v2 = 1;
        v3 = 8;
        v4 = 0;
        v6 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v0, 1, &v6);
    }
    return;
}
