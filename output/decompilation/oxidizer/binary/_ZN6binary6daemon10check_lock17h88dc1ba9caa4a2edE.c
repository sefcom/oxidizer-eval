fn binary::daemon::check_lock() -> u64 {
    let v0: Result<struct32, struct24>;  // [bp-0xa8], Other Possible Types: struct40
    let v1: u64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x80]
    let v4: std::fs::File;  // [bp-0x78], Other Possible Types: u64
    let v5: i64;  // [bp-0x70], Other Possible Types: u64
    let v6: u128;  // [bp-0x68]
    let v7: void*;  // [bp-0x60]
    let v8: u32;  // [bp-0x4c]
    let v9: i64;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v11: alloc::string::String;  // [bp-0x38]
    let v13: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u64;  // r8
    let v16: u32;  // eax
    let v17: u32;  // ebp
    let v18: u64;  // rax

    if core::sync::atomic::atomic_load() >= 3 {
        v3 = "🔍 Checking for lock file...";
        v4 = 1;
        v5 = 8;
        v6 = 0;
        v0 = struct40 {
            field_0: "binary::daemon"
            field_16: "binary::daemon"
            field_32: log::__private_api::loc("binary/src/daemon.rs")
        };
        log::__private_api::log(&v3, 3, &v0);
    }
    v8 = geteuid();
    v9 = &v8;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v3 = "/tmp/config-err-17EF88CF";
    v4 = 1;
    v7 = 0;
    v5 = &v9;
    v6 = 1;
    v11 = core::option::Option<T>::map_or_else(&v3, v13, v14, v15);
    v0 = <T as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v11);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v16 = open(v2, 66, 384);
        if v16 >= 0 {
            v17 = flock(v16, 6);
            v18 = core::sync::atomic::atomic_load();
            if v17 {
                if v18 > 1 {
                    v3 = "⚠️ Failed to acquire lock. Another instance might be running.";
                    v4 = 1;
                    v5 = 8;
                    v6 = 0;
                    v0 = struct40 {
                        field_0: "binary::daemon"
                        field_16: "binary::daemon"
                        field_32: log::__private_api::loc("binary/src/daemon.rs")
                    };
                    log::__private_api::log(&v3, 2, &v0);
                }
            } else {
                if v18 > 2 {
                    v3 = "✅ Lock acquired successfully.";
                    v4 = 1;
                    v5 = 8;
                    v6 = 0;
                    v0 = struct40 {
                        field_0: "binary::daemon"
                        field_16: "binary::daemon"
                        field_32: log::__private_api::loc("binary/src/daemon.rs")
                    };
                    log::__private_api::log(&v3, 3, &v0);
                }
            }
            return v17 & -0x100 | !v17;
        } else {
            if !core::sync::atomic::atomic_load() {
                return 0;
            }
            v3 = "⚠️ Failed to open lock file.";
            v4 = 1;
            v5 = 8;
            v6 = 0;
            v0 = struct40 {
                field_0: "binary::daemon"
                field_16: "binary::daemon"
                field_32: log::__private_api::loc("binary/src/daemon.rs")
            };
            log::__private_api::log(&v3, 1, &v0);
            return 0;
        }
    } else {
        if !core::sync::atomic::atomic_load() {
            return 0;
        }
        v3 = "⚠️ Failed to create lock file path.";
        v4 = 1;
        v5 = 8;
        v6 = 0;
        v0 = struct40 {
            field_0: "binary::daemon"
            field_16: "binary::daemon"
            field_32: log::__private_api::loc("binary/src/daemon.rs")
        };
        log::__private_api::log(&v3, 1, &v0);
        return 0;
    }
}
