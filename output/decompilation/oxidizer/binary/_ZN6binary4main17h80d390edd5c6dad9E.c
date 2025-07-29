fn binary::main() -> int {
    let v0: struct40;  // [bp-0x98]
    let v1: struct40;  // [bp-0x70]
    let v2: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x40]
    let v3: u64;  // [bp-0x30]
    let v4: u128;  // [bp-0x28]
    let v5: u64;  // [bp-0x20]
    let v6: u64;  // [bp-0x18]
    let v9: core::option::Option<&std::ffi::os_str::OsStr>;  // rax
    let v10: u32;  // rdx
    let v11: u8;  // al
    let v12: u64;  // rax

    colog::init();
    if geteuid() {
        if core::sync::atomic::atomic_load() > 1 {
            v1 = struct40 {
                field_0: "😞 Not running as root, running in daemon mode."
                field_8: 1
                field_16: 8
                field_24: 0
            };
            v0 = struct40 {
                field_0: "binary"
                field_16: "binary"
                field_32: log::__private_api::loc("binary/src/main.rs")
            };
            log::__private_api::log(&v1, 2, &v0);
        }
        binary::delete_self();
        binary::daemon::main();
        return;
    } else {
        v2 = std::env::current_exe();
        if !((((0 ^ v2 as i64) & (0 ^ -(v2 as i64))) >> 63) as char) {
            v4 = v2 as i128;
            v6 = v3;
            v9 = std::path::Path::file_name(v5, v3) as u64;
            match v9 {
                Some(_) => {
                    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "auto-color") as u32 as u8;
                    v12 = core::sync::atomic::atomic_load();
                    if v11 {
                        if v12 > 2 {
                            v1 = struct40 {
                                field_0: "✅ Started from known location, running in daemon mode."
                                field_8: 1
                                field_16: 8
                                field_24: 0
                            };
                            v0 = struct40 {
                                field_0: "binary"
                                field_16: "binary"
                                field_32: log::__private_api::loc("binary/src/main.rs")
                            };
                            log::__private_api::log(&v1, 3, &v0);
                        }
                        binary::daemon::main();
                    } else {
                        if v12 > 2 {
                            v1 = struct40 {
                                field_0: "🔧 Started as root, performing installation."
                                field_8: 1
                                field_16: 8
                                field_24: 0
                            };
                            v0 = struct40 {
                                field_0: "binary"
                                field_16: "binary"
                                field_32: log::__private_api::loc("binary/src/main.rs")
                            };
                            log::__private_api::log(&v1, 3, &v0);
                        }
                        binary::install::main();
                        binary::delete_self();
                    }
                },
                None => {
                    if core::sync::atomic::atomic_load() {
                        v1 = struct40 {
                            field_0: "⚠️ Failed to retrieve executable name."
                            field_8: 1
                            field_16: 8
                            field_24: 0
                        };
                        v0 = struct40 {
                            field_0: "binary"
                            field_16: "binary"
                            field_32: log::__private_api::loc("binary/src/main.rs")
                        };
                        log::__private_api::log(&v1, 1, &v0);
                    }
                },
            }
            match v2 {
                Err(_) => {
                    return;
                },
                Ok(_) => {
                    return;
                },
            }
        } else if core::sync::atomic::atomic_load() {
            v0 = struct40 {
                field_0: "binary"
                field_16: "binary"
                field_32: log::__private_api::loc("binary/src/main.rs")
            };
            log::__private_api::log(&v1 as u64, 1, &v0 as u64);
            return;
        } else {
            return;
        }
    }
}
