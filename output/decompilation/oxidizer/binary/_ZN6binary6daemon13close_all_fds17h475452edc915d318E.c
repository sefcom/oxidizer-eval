fn binary::daemon::close_all_fds() -> u64 {
    let v0: struct40;  // [bp-0x70]
    let v1: struct40;  // [bp-0x48]
    let v6: u64;  // rax
    let v7: struct24;  // rdi
    let v8: struct40;  // rdx
    let v9: struct40;  // rsi
    let v10: u64;  // rax

    if core::sync::atomic::atomic_load() >= 3 {
        v1 = struct40 {
            field_0: "🔒 Closing all file descriptors..."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "binary::daemon"
            field_16: "binary::daemon"
            field_32: log::__private_api::loc("binary/src/daemon.rs")
        };
        log::__private_api::log(&v1, 3, &v0);
    }
    if sysconf(4) > 0 {
        v6 = core::sync::atomic::atomic_load();
        if v6 < 3 {
            return v6;
        }
        v1 = struct40 {
            field_0: "✅ All file descriptors closed."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "binary::daemon"
            field_16: "binary::daemon"
            field_32: log::__private_api::loc("binary/src/daemon.rs")
        };
        v7 = &v1;
        v8 = &v0;
        v9 = 3;
    } else {
        v10 = core::sync::atomic::atomic_load();
        if !v10 {
            return v10;
        }
        v1 = struct40 {
            field_0: "⚠️ Failed to retrieve the maximum number of file descriptors."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "binary::daemon"
            field_16: "binary::daemon"
            field_32: log::__private_api::loc("binary/src/daemon.rs")
        };
        v7 = &v1;
        v8 = &v0;
        v9 = 1;
    }
    return log::__private_api::log(v7, v9, v8) as u64;
}
