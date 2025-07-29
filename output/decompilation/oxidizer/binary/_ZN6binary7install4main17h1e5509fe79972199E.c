fn binary::install::main() -> long long {
    let v0: struct40;  // [bp-0x78]
    let v1: struct40;  // [bp-0x50]
    let v2: struct24;  // [bp-0x20]
    let v4: u64;  // rax

    if core::sync::atomic::atomic_load() >= 3 {
        v1 = struct40 {
            field_0: "🚀 Starting installation process..."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "binary::install"
            field_16: "binary::install"
            field_32: log::__private_api::loc("binary/src/install.rs")
        };
        log::__private_api::log(&v1, 3, &v0);
    }
    binary::install::copy_self();
    v2 = binary::install::drop_library();
    binary::install::add_preload_hook(&v2);
    v4 = core::sync::atomic::atomic_load();
    if v4 < 3 {
        return v4;
    }
    v1 = struct40 {
        field_0: "✅ Installation process completed."
        field_8: 1
        field_16: 8
        field_24: 0
    };
    v0 = struct40 {
        field_0: "binary::install"
        field_16: "binary::install"
        field_32: log::__private_api::loc("binary/src/install.rs")
    };
    return log::__private_api::log(&v1, 3, &v0) as u64;
}
