fn binary::daemon::fork_to_bg() -> u64 {
    let v0: struct40;  // [bp-0x58]
    let v1: struct40;  // [bp-0x30]
    let v3: u64;  // rax

    if core::sync::atomic::atomic_load() >= 3 {
        v1 = struct40 {
            field_0: "🔧 Forking to background..."
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
    if fork() <= 0 {
        if setsid() < 0 {
            if core::sync::atomic::atomic_load() {
                v1 = struct40 {
                    field_0: "⚠️ Failed to create a new session."
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
            _exit(1); /* do not return */
        } else if fork() <= 0 {
            v3 = core::sync::atomic::atomic_load();
            if v3 <= 2 {
                return v3;
            }
            v1 = struct40 {
                field_0: "✅ Forked to background successfully."
                field_8: 1
                field_16: 8
                field_24: 0
            };
            v0 = struct40 {
                field_0: "binary::daemon"
                field_16: "binary::daemon"
                field_32: log::__private_api::loc("binary/src/daemon.rs")
            };
            return log::__private_api::log(&v1, 3, &v0) as u64;
        }
    }
    _exit(0); /* do not return */
}
