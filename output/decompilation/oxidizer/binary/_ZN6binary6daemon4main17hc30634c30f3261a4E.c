fn binary::daemon::main() -> u64 {
    let v0: struct40;  // [bp-0x88]
    let v1: core::result::Result<alloc::ffi::c_str::CString, alloc::ffi::c_str::NulError>;  // [bp-0x60], Other Possible Types: struct40
    let v4: u32;  // eax
    let v5: u64;  // rax

    if core::sync::atomic::atomic_load() >= 3 {
        v1 = struct40 {
            field_0: "🚀 Starting daemon process..."
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
    if binary::daemon::check_lock() {
        binary::daemon::fork_to_bg();
        binary::daemon::redirect_to_dev_null();
        binary::daemon::close_all_fds();
        umask(0);
        v1 = <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl("/");
        v4 = chdir(core::result::Result<T,E>::unwrap(&v1, "binary/src/daemon.rs"));
        if v4 && core::sync::atomic::atomic_load() {
            v1 = struct40 {
                field_0: "⚠️ Failed to change directory to root."
                field_8: 1
                field_16: 8
                field_24: 0
            };
            v0 = struct40 {
                field_0: "binary::daemon"
                field_16: "binary::daemon"
                field_32: log::__private_api::loc("binary/src/daemon.rs")
            };
            log::__private_api::log(&v1, 1, &v0);
        }
        if core::sync::atomic::atomic_load() > 2 {
            v1 = struct40 {
                field_0: "✅ Daemon process initialized successfully."
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
        loop {
            if core::sync::atomic::atomic_load() >= 3 {
                v1 = struct40 {
                    field_0: "🔄 Daemon is running..."
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
            std::thread::sleep(60, 0);
        }
    } else {
        v5 = core::sync::atomic::atomic_load();
        if !v5 {
            return v5;
        }
        v1 = struct40 {
            field_0: "⚠️ Another instance is already running."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "binary::daemon"
            field_16: "binary::daemon"
            field_32: log::__private_api::loc("binary/src/daemon.rs")
        };
        return log::__private_api::log(&v1, 1, &v0) as u64;
    }
}
